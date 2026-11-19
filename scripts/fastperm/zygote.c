/* zygote.so: makes a program a fork server, so that its start-up is paid once instead of on every run.

   Built by scripts/fastperm/fastcc.py for x86-64 (the modern objdump/gas) and for i386 (Sony's cc1 and assembler)
   with `cc [-m32] -O2 -shared -fPIC -nostdlib zygote.c`: no system header is used (none for i386 is needed), the
   libc functions are found at run time. Loaded with LD_PRELOAD. Environment:
     ZYG_SOCK   path of the Unix socket to listen on
     ZYG_MARK   path of the marker input file: the program is started with it as its input; when the program first
                opens it, the zygote stops there and serves requests instead
     ZYG_MARKO  optional: path of the marker output file (-o), opened before or after the input
   Each request on the socket: "INPUT\0OUTPUT\0LOG\0". The zygote forks; the child continues the program exactly
   where the zygote stopped, with INPUT opened in place of the marker, OUTPUT (when given) replacing the marker
   output file, stdout and stderr going to LOG, and every later open/stat/unlink of a marker path sent to the
   request's path. The zygote waits for the child and answers its wait status (4 bytes, native order).
   What the program did before the marker (start-up, tables, a prelude read as an earlier input) is the same for
   every request, so a child produces what a fresh run on INPUT would (scripts/fastperm/fastcc.py --selftest
   compares them). The zygote dies with its parent (PR_SET_PDEATHSIG). ZYG_DEBUG=1 logs the mapped paths. */

typedef unsigned long size_t;
typedef long ssize_t;
typedef int pid_t;
typedef unsigned int mode_t;
typedef __builtin_va_list va_list;
#define va_start(v, l) __builtin_va_start(v, l)
#define va_arg(v, t) __builtin_va_arg(v, t)
#define va_end(v) __builtin_va_end(v)
#define NULL ((void *)0)
#define RTLD_NEXT ((void *)-1l)
#define O_WRONLY 01
#define O_RDWR 02
#define O_CREAT 0100
#define O_TRUNC 01000
#define O_TMPFILE 020200000
#define AF_UNIX 1
#define SOCK_STREAM 1
#define PR_SET_PDEATHSIG 1
#define SIGKILL 9
#define EINTR 4

struct sockaddr_un { unsigned short sun_family; char sun_path[108]; };

extern void *dlsym(void *, const char *);
extern char *getenv(const char *);
extern int strcmp(const char *, const char *);
extern size_t strlen(const char *);
extern char *strcpy(char *, const char *);
extern void *memset(void *, int, size_t);
extern int snprintf(char *, size_t, const char *, ...);
extern int dprintf(int, const char *, ...);
extern int prctl(int, ...);
extern pid_t getppid(void);
extern pid_t fork(void);
extern pid_t waitpid(pid_t, int *, int);
extern void _exit(int);
extern int socket(int, int, int);
extern int bind(int, const void *, unsigned int);
extern int listen(int, int);
extern int accept(int, void *, void *);
extern int rename(const char *, const char *);
extern ssize_t read(int, void *, size_t);
extern ssize_t write(int, const void *, size_t);
extern int close(int);
extern int dup2(int, int);
extern int fflush(void *);
extern int fileno(void *);
extern int *__errno_location(void);

#define PR_SET_THP_DISABLE 41

/* Before the program's own start-up: no transparent huge pages in this process. Each child's first write to a page
   the zygote filled copies the page: a 4 KB one, not a 2 MB one. */
__attribute__((constructor)) static void no_thp(void)
{
    if (!getenv("ZYG_THP")) prctl(PR_SET_THP_DISABLE, 1, 0, 0, 0);
}

static int served;            /* 1 in a child: marker paths are mapped */
static int out_fd = -1;       /* the fd of the marker output, when it was opened before the fork point */
static char req_in[4096], req_out[4096];
static int (*real_open)(const char *, int, ...);
static int (*real_unlink)(const char *);

static const char *env(const char *n) { const char *v = getenv(n); return v && *v ? v : NULL; }
static int is_mark(const char *p) { const char *m = env("ZYG_MARK"); return p && m && strcmp(p, m) == 0; }
static int is_marko(const char *p) { const char *m = env("ZYG_MARKO"); return p && m && strcmp(p, m) == 0; }

static const char *map(const char *p)
{
    if (served && p && env("ZYG_DEBUG")) dprintf(2, "zygote: path %s\n", p);
    if (served) {
        if (is_mark(p)) return req_in;
        if (is_marko(p) && req_out[0]) return req_out;
    }
    return p;
}

static void *real(const char *name) { return dlsym(RTLD_NEXT, name); }

static int read_request(int fd, char *buf, size_t cap)
{
    size_t n = 0;
    int zeros = 0;
    while (n < cap && zeros < 3) {
        ssize_t r = read(fd, buf + n, cap - n);
        if (r <= 0) return -1;
        for (ssize_t i = 0; i < r; i++) if (buf[n + i] == 0) zeros++;
        n += r;
    }
    return zeros >= 3 ? 0 : -1;
}

/* Never returns in the zygote; returns in each child (after the fork) to let the program go on. */
static void serve(void)
{
    const char *sock = env("ZYG_SOCK");
    if (!real_open) real_open = real("open");
    if (!real_unlink) real_unlink = real("unlink");
    prctl(PR_SET_PDEATHSIG, SIGKILL, 0, 0, 0);
    if (getppid() == 1) _exit(1);
    int ls = socket(AF_UNIX, SOCK_STREAM, 0);
    struct sockaddr_un a;
    memset(&a, 0, sizeof a);
    a.sun_family = AF_UNIX;
    /* bound under a temporary name and renamed once listening: the socket path appears only when connectable */
    char tmp[sizeof a.sun_path];
    snprintf(tmp, sizeof tmp, "%s.t", sock);
    strcpy(a.sun_path, tmp);
    real_unlink(tmp);
    if (ls < 0 || bind(ls, &a, sizeof a) || listen(ls, 4) || rename(tmp, sock)) _exit(1);
    for (;;) {
        int c = accept(ls, NULL, NULL);
        if (c < 0) { if (*__errno_location() == EINTR) continue; _exit(1); }
        char buf[3 * 4096 + 16];
        if (read_request(c, buf, sizeof buf)) { close(c); continue; }
        const char *in = buf, *out = in + strlen(in) + 1, *log = out + strlen(out) + 1;
        if (strlen(in) >= sizeof req_in || strlen(out) >= sizeof req_out) { close(c); continue; }
        fflush(NULL);
        pid_t pid = fork();
        if (pid == 0) {
            close(ls);
            close(c);
            prctl(PR_SET_PDEATHSIG, SIGKILL, 0, 0, 0);
            strcpy(req_in, in);
            strcpy(req_out, out);
            served = 1;
            int lf = real_open(log, O_WRONLY | O_CREAT | O_TRUNC, 0644);
            if (lf >= 0) { dup2(lf, 1); dup2(lf, 2); close(lf); }
            if (out_fd >= 0 && req_out[0]) {
                int of = real_open(req_out, O_RDWR | O_CREAT | O_TRUNC, 0644);
                if (of < 0) _exit(126);
                dup2(of, out_fd);
                close(of);
            }
            return;
        }
        int st = 127 << 8;
        if (pid > 0) while (waitpid(pid, &st, 0) < 0 && *__errno_location() == EINTR) {}
        (void)!write(c, &st, sizeof st);
        close(c);
    }
}

#define FOPEN_HOOK(name)                                                        \
    void *name(const char *p, const char *m)                                    \
    {                                                                           \
        static void *(*r)(const char *, const char *);                          \
        if (!r) r = (void *(*)(const char *, const char *))real(#name);         \
        if (!served && is_mark(p)) { serve(); return r(req_in, m); }            \
        void *f = r(map(p), m);                                                 \
        if (!served && f && is_marko(p)) out_fd = fileno(f);                    \
        return f;                                                               \
    }
FOPEN_HOOK(fopen)
FOPEN_HOOK(fopen64)

#define OPEN_HOOK(name)                                                         \
    int name(const char *p, int flags, ...)                                     \
    {                                                                           \
        static int (*r)(const char *, int, ...);                                \
        if (!r) r = (int (*)(const char *, int, ...))real(#name);               \
        mode_t mode = 0;                                                        \
        if (flags & (O_CREAT | O_TMPFILE)) {                                    \
            va_list ap; va_start(ap, flags); mode = va_arg(ap, mode_t); va_end(ap); \
        }                                                                       \
        if (!served && is_mark(p)) { serve(); return r(req_in, flags, mode); }  \
        int fd = r(map(p), flags, mode);                                        \
        if (!served && fd >= 0 && is_marko(p)) out_fd = fd;                     \
        return fd;                                                              \
    }
OPEN_HOOK(open)
OPEN_HOOK(open64)

#define PATH_HOOK(ret, name, params, args)                                      \
    ret name params                                                             \
    {                                                                           \
        static ret (*r) params;                                                 \
        if (!r) r = (ret (*) params)real(#name);                                \
        return r args;                                                          \
    }
PATH_HOOK(int, stat, (const char *p, void *s), (map(p), s))
PATH_HOOK(int, lstat, (const char *p, void *s), (map(p), s))
PATH_HOOK(int, stat64, (const char *p, void *s), (map(p), s))
PATH_HOOK(int, lstat64, (const char *p, void *s), (map(p), s))
PATH_HOOK(int, __xstat, (int v, const char *p, void *s), (v, map(p), s))
PATH_HOOK(int, __lxstat, (int v, const char *p, void *s), (v, map(p), s))
PATH_HOOK(int, __xstat64, (int v, const char *p, void *s), (v, map(p), s))
PATH_HOOK(int, __lxstat64, (int v, const char *p, void *s), (v, map(p), s))
PATH_HOOK(int, access, (const char *p, int m), (map(p), m))
PATH_HOOK(int, unlink, (const char *p), (map(p)))
PATH_HOOK(char *, realpath, (const char *p, char *res), (map(p), res))
