/* newlib objects were assembled without delay-slot filling: as-flags: -O1 */
#include "common.h"

s32 func_00129458(s32, s32, s32, s32);          /* extern */

s32 _strtol_r(s32, s32, s32, s32);              /* extern */
extern s32 _impure_ptr;

void func_00129428(s32 arg0, s32 arg1, s32 arg2) {
    _strtol_r(_impure_ptr, arg0, arg1, arg2);
}
typedef unsigned int size_t_x00129458;
typedef unsigned int __ULong_x00129458;
struct _glue_x00129458
{
  struct _glue_x00129458 *_next;
  int _niobs;
  struct __sFILE_x00129458 *_iobs;
};
struct _Bigint_x00129458
{
  struct _Bigint_x00129458 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x00129458 _x[1];
};
struct __tm_x00129458
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};
struct _atexit_x00129458 {
        struct _atexit_x00129458 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x00129458 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x00129458;
struct __sFILE_x00129458 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x00129458 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x00129458 (*_seek) (void * _cookie, _fpos_t_x00129458 _offset, int _whence);
  int (*_close) (void * _cookie);
  struct __sbuf_x00129458 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x00129458 _lb;
  int _blksize;
  int _offset;
  struct _reent_x00129458 *_data;
};
struct _rand48_x00129458 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x00129458
{
  int _errno;
  struct __sFILE_x00129458 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x00129458 *);
  struct _Bigint_x00129458 *_result;
  int _result_k;
  struct _Bigint_x00129458 *_p5s;
  struct _Bigint_x00129458 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x00129458 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x00129458 _r48;
        } _reent_x00129458;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x00129458 *_atexit_x00129458;
  struct _atexit_x00129458 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x00129458 __sglue;
  struct __sFILE_x00129458 __sf[3];
};
typedef unsigned int size_t_x00129458;
extern void qsort_x00129458(void *, size_t_x00129458, size_t_x00129458, int (*)(const void *, const void *)) __asm__("qsort");
extern const unsigned char _ctype__x00129458[] __asm__("_ctype_");
unsigned long func_00129458_x00129458(struct _reent_x00129458 *rptr, const char *nptr, char **endptr, int base) __asm__("func_00129458");
/* _strtoul_r: from https://github.com/crashbashash/DW4_Decomp (src/newlib/strtoul.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned long func_00129458_x00129458(struct _reent_x00129458 *rptr, const char *nptr, char **endptr, int base)
{
    const char *s = nptr;
    unsigned long acc;
    int c;
    unsigned long cutoff;
    int neg = 0, any, cutlim;
    do {
        c = *s++;
    } while ((_ctype__x00129458 + 1)[c] & 0x8);
    if (c == '-') {
        neg = 1;
        c = *s++;
    } else if (c == '+')
        c = *s++;
    if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X')) {
        c = s[1];
        s += 2;
        base = 16;
    }
    if (base == 0)
        base = c == '0' ? 8 : 10;
    cutoff = (unsigned long)-1 / (unsigned long)base;
    cutlim = (unsigned long)-1 % (unsigned long)base;
    acc = 0;
    any = 0;
    while (1) {
        if ((_ctype__x00129458 + 1)[c] & 0x4)
            c -= '0';
        else if ((_ctype__x00129458 + 1)[c] & 0x3)
            c -= ((_ctype__x00129458 + 1)[c] & 0x1) ? 'A' - 10 : 'a' - 10;
        else
            break;
        if (c >= base)
            break;
        if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
            any = -1;
        else {
            any = 1;
            acc *= base;
            acc += c;
        }
        c = *s++;
    }
    if (any < 0) {
        acc = (unsigned long)-1;
        rptr->_errno = 34;
    } else if (neg)
        acc = -acc;
    if (endptr != 0)
        *endptr = (char *)(any ? s - 1 : nptr);
    return acc;
}
void func_00129688(s32 arg0, s32 arg1, s32 arg2) {
    func_00129458(_impure_ptr, arg0, arg1, arg2);
}
void *memcpy_x001296B8( void *dst, const void *src, unsigned int n) __asm__("func_00125740");
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x001296B8;
struct Reent_x001296B8;
typedef struct Glue_x001296B8 {
    struct Glue_x001296B8 *next;
    int niobs;
    struct Fil_x001296B8 *iobs;
} Glue_x001296B8;
typedef struct Fil_x001296B8 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x001296B8 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x001296B8 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x001296B8 lb;
    int blksize;
    int offset;
    struct Reent_x001296B8 *data;
} Fil_x001296B8;
struct _Bigint_x001296B8 {
    struct _Bigint_x001296B8 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x001296B8 {
    int err;
    Fil_x001296B8 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x001296B8 *result;
    int result_k;
    struct _Bigint_x001296B8 *p5s;
    struct _Bigint_x001296B8 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x001296B8 glue;
    Fil_x001296B8 sf[3];
} Reent_x001296B8;
typedef struct _Bigint_x001296B8 _Bigint_x001296B8;
struct Fil_x001296B8;
struct Reent_x001296B8;
void *_malloc_r_x001296B8(struct Reent_x001296B8 *reent_ptr, int bytes) __asm__("func_00124E68");
void *_realloc_r_x001296B8(struct Reent_x001296B8 *reent_ptr, void *oldmem, unsigned int bytes) __asm__("func_00126C50");
int func_001296B8_x001296B8(Fil_x001296B8 *fp) __asm__("func_001296B8");
/* __submore: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/ungetc.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001296B8_x001296B8(Fil_x001296B8 *fp)
{
    int i;
    unsigned char *p;
    if (fp->ub.base == fp->ubuf) {
        p = (unsigned char *)_malloc_r_x001296B8(fp->data, 0x400);
        if (p == 0)
            return -1;
        fp->ub.base = p;
        fp->ub.size = 0x400;
        p += 0x400 - 3;
        for (i = 3; --i >= 0;)
            p[i] = fp->ubuf[i];
        fp->p = p;
        return 0;
    }
    i = fp->ub.size;
    p = (unsigned char *)_realloc_r_x001296B8(fp->data, fp->ub.base, i << 1);
    if (p == 0)
        return -1;
    memcpy_x001296B8(p + i, p, i);
    fp->p = p + i;
    fp->ub.base = p;
    fp->ub.size = i << 1;
    return 0;
}
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x001297A0;
struct Reent_x001297A0;
typedef struct Glue_x001297A0 {
    struct Glue_x001297A0 *next;
    int niobs;
    struct Fil_x001297A0 *iobs;
} Glue_x001297A0;
typedef struct Fil_x001297A0 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x001297A0 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x001297A0 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x001297A0 lb;
    int blksize;
    int offset;
    struct Reent_x001297A0 *data;
} Fil_x001297A0;
struct _Bigint_x001297A0 {
    struct _Bigint_x001297A0 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x001297A0 {
    int err;
    Fil_x001297A0 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x001297A0 *result;
    int result_k;
    struct _Bigint_x001297A0 *p5s;
    struct _Bigint_x001297A0 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x001297A0 glue;
    Fil_x001297A0 sf[3];
} Reent_x001297A0;
extern Reent_x001297A0 *_impure_ptr_x001297A0 __asm__("_impure_ptr");
typedef struct _Bigint_x001297A0 _Bigint_x001297A0;
void __sinit_x001297A0(Reent_x001297A0 *s) __asm__("func_00123BB0");
int __submore_x001297A0(Fil_x001297A0 *fp) __asm__("func_001296B8");
struct Fil_x001297A0;
int fflush_x001297A0(struct Fil_x001297A0 *fp) __asm__("func_00123888");
struct Reent_x001297A0;
int __submore_x001297A0(Fil_x001297A0 *fp) __asm__("func_001296B8");
int func_001297A0_x001297A0(int c, Fil_x001297A0 *fp) __asm__("func_001297A0");
/* ungetc: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/ungetc.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001297A0_x001297A0(int c, Fil_x001297A0 *fp)
{
    if (c == -1)
        return -1;
    do {
        if (fp->data == 0)
            fp->data = _impure_ptr_x001297A0;
        if (fp->data->sdidinit == 0)
            __sinit_x001297A0(fp->data);
    } while (0);
    fp->flags &= ~0x20;
    if ((fp->flags & 4) == 0) {
        if ((fp->flags & 0x10) == 0)
            return -1;
        if (fp->flags & 8) {
            if (fflush_x001297A0(fp))
                return -1;
            fp->flags &= ~8;
            fp->w = 0;
            fp->lbfsize = 0;
        }
        fp->flags |= 4;
    }
    c = (unsigned char)c;
    if (fp->ub.base != 0) {
        if (fp->r >= fp->ub.size && __submore_x001297A0(fp))
            return -1;
        *--fp->p = c;
        fp->r += 1;
        return c;
    }
    if (fp->bf.base != 0 && fp->p > fp->bf.base && fp->p[-1] == c) {
        fp->p -= 1;
        fp->r += 1;
        return c;
    }
    fp->ur = fp->r;
    fp->up = fp->p;
    fp->ub.base = fp->ubuf;
    fp->ub.size = 3;
    fp->ubuf[2] = c;
    fp->p = &fp->ubuf[2];
    fp->r = 1;
    return c;
}
struct Reent_x00129928;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00129928;
struct Reent_x00129928;
typedef struct Glue_x00129928 {
    struct Glue_x00129928 *next;
    int niobs;
    struct Fil_x00129928 *iobs;
} Glue_x00129928;
typedef struct Fil_x00129928 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00129928 bf;
    int lbfsize;
    void *cookie;
    int (*read_x00129928)(void *cookie, char *buf, int n);
    int (*write_x00129928)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close_x00129928)(void *cookie);
    Sbuf_x00129928 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00129928 lb;
    int blksize;
    int offset;
    struct Reent_x00129928 *data;
} Fil_x00129928;
struct _Bigint_x00129928 {
    struct _Bigint_x00129928 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00129928 {
    int err;
    Fil_x00129928 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00129928 *result;
    int result_k;
    struct _Bigint_x00129928 *p5s;
    struct _Bigint_x00129928 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00129928 glue;
    Fil_x00129928 sf[3];
} Reent_x00129928;
typedef struct _Bigint_x00129928 _Bigint_x00129928;
struct __suio_x00129928;
int __sfvwrite_x00129928(Fil_x00129928 *fp, struct __suio_x00129928 *uio) __asm__("func_00124228");
struct Fil_x00129928;
int close_x00129928(int fd) __asm__("close");
int read_x00129928(int fd, void *buf, int size) __asm__("read");
int write_x00129928(int fd, const void *buf, int size) __asm__("write");
struct __siov_x00129928 {
    const void *iov_base;
    int iov_len;
};
struct __suio_x00129928 {
    struct __siov_x00129928 *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};
int __sprint_x00129928(Fil_x00129928 *fp, struct __suio_x00129928 *uio) __asm__("__sprint");
/* __sprint_x00129928: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfiprintf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int __sprint_x00129928(Fil_x00129928 *fp, struct __suio_x00129928 *uio)
{
    int err;
    if (uio->uio_resid == 0) {
        uio->uio_iovcnt = 0;
        return 0;
    }
    err = __sfvwrite_x00129928(fp, uio);
    uio->uio_resid = 0;
    uio->uio_iovcnt = 0;
    return err;
}
struct Reent_x00129970;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00129970;
struct Reent_x00129970;
typedef struct Glue_x00129970 {
    struct Glue_x00129970 *next;
    int niobs;
    struct Fil_x00129970 *iobs;
} Glue_x00129970;
typedef struct Fil_x00129970 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00129970 bf;
    int lbfsize;
    void *cookie;
    int (*read_x00129970)(void *cookie, char *buf, int n);
    int (*write_x00129970)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close_x00129970)(void *cookie);
    Sbuf_x00129970 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00129970 lb;
    int blksize;
    int offset;
    struct Reent_x00129970 *data;
} Fil_x00129970;
struct _Bigint_x00129970 {
    struct _Bigint_x00129970 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00129970 {
    int err;
    Fil_x00129970 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00129970 *result;
    int result_k;
    struct _Bigint_x00129970 *p5s;
    struct _Bigint_x00129970 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00129970 glue;
    Fil_x00129970 sf[3];
} Reent_x00129970;
typedef struct _Bigint_x00129970 _Bigint_x00129970;
struct Fil_x00129970;
int fflush_x00129970(struct Fil_x00129970 *fp) __asm__("func_00123888");
int vfiprintf_x00129970(char *fp, char *fmt0, void *ap) __asm__("func_00129A28");
int close_x00129970(int fd) __asm__("close");
int read_x00129970(int fd, void *buf, int size) __asm__("read");
int write_x00129970(int fd, const void *buf, int size) __asm__("write");
int vfiprintf_x00129970(char *fp, char *fmt0, void *ap) __asm__("func_00129A28");
int func_00129970_x00129970(Fil_x00129970 *fp, char *fmt, void *ap) __asm__("func_00129970");
/* __sbprintf: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfiprintf_x00129970.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00129970_x00129970(Fil_x00129970 *fp, char *fmt, void *ap)
{
    Fil_x00129970 fake;
    unsigned char buf[0x400];
    int ret;
    fake.data = fp->data;
    fake.flags = fp->flags & ~2;
    fake.file = fp->file;
    fake.cookie = fp->cookie;
    fake.write_x00129970 = fp->write_x00129970;
    fake.bf.base = fake.p = (char *)buf;
    fake.bf.size = fake.w = sizeof(buf);
    fake.lbfsize = 0;
    ret = vfiprintf_x00129970((char *)&fake, fmt, ap);
    if (ret >= 0 && fflush_x00129970(&fake)) {
        ret = -1;
    }
    if (fake.flags & 0x40) {
        fp->flags |= 0x40;
    }
    return ret;
}
struct Reent_x00129A28;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00129A28;
struct Reent_x00129A28;
typedef struct Glue_x00129A28 {
    struct Glue_x00129A28 *next;
    int niobs;
    struct Fil_x00129A28 *iobs;
} Glue_x00129A28;
typedef struct Fil_x00129A28 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00129A28 bf;
    int lbfsize;
    void *cookie;
    int (*read_x00129A28)(void *cookie, char *buf, int n);
    int (*write_x00129A28)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close_x00129A28)(void *cookie);
    Sbuf_x00129A28 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00129A28 lb;
    int blksize;
    int offset;
    struct Reent_x00129A28 *data;
} Fil_x00129A28;
struct _Bigint_x00129A28 {
    struct _Bigint_x00129A28 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00129A28 {
    int err;
    Fil_x00129A28 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00129A28 *result;
    int result_k;
    struct _Bigint_x00129A28 *p5s;
    struct _Bigint_x00129A28 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00129A28 glue;
    Fil_x00129A28 sf[3];
} Reent_x00129A28;
extern Reent_x00129A28 *_impure_ptr_x00129A28 __asm__("_impure_ptr");
typedef struct _Bigint_x00129A28 _Bigint_x00129A28;
void __sinit_x00129A28(Reent_x00129A28 *s) __asm__("func_00123BB0");
int _vfiprintf_r_x00129A28(void *data, Fil_x00129A28 *fp, const char *fmt0, char *ap) __asm__("_vfprintf_r");
struct Fil_x00129A28;
int close_x00129A28(int fd) __asm__("close");
int read_x00129A28(int fd, void *buf, int size) __asm__("read");
int write_x00129A28(int fd, const void *buf, int size) __asm__("write");
int _vfiprintf_r_x00129A28(void *data, Fil_x00129A28 *fp, const char *fmt0, char *ap) __asm__("_vfprintf_r");
int vfprintf_x00129A28(char *fp, char *fmt0, void *ap) __asm__("vfprintf");
/* vfiprintf: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfiprintf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int vfprintf_x00129A28(char *fp, char *fmt0, void *ap)
{
    do {
        if (*(Reent_x00129A28 **)(fp + 0x54) == 0)
            *(Reent_x00129A28 **)(fp + 0x54) = _impure_ptr_x00129A28;
        if ((*(Reent_x00129A28 **)(fp + 0x54))->sdidinit == 0)
            __sinit_x00129A28(*(Reent_x00129A28 **)(fp + 0x54));
    } while (0);
    return _vfiprintf_r_x00129A28(*(Reent_x00129A28 **)(fp + 0x54), (Fil_x00129A28 *)fp, fmt0, ap);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _vfprintf_r);
struct _reent_x0012B110 {
    char pad[0x38];
    int __sdidinit;
    void (*__cleanup)(struct _reent_x0012B110 *);
};
extern double SoftFloat_DoubleSub_x0012B110(double, double) __asm__("func_00121988");
extern int SoftFloat_UnpackAndCompare_x0012B110(double, double) __asm__("func_00121ED8");
extern char *_dtoa_r_x0012B110(struct _reent_x0012B110 *, double, int, int, int *, int *, char **) __asm__("func_00122560");
union double_union_x0012B110 {
        double d;
        unsigned int i[2];
};
char *
func_0012B110_x0012B110(struct _reent_x0012B110 *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length) __asm__("func_0012B110");
/* Newlib_Cvt: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/vfprintf/vfprintf.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
char *
func_0012B110_x0012B110(struct _reent_x0012B110 *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length)
{
        int mode, dsgn;
        char *digits, *bp, *rve;
        union double_union_x0012B110 tmp;
        if (ch == 'f') {
                mode = 3;
        } else {
                if (ch == 'e' || ch == 'E') {
                        ndigits++;
                }
                mode = 2;
        }
        tmp.d = value;
        if ((tmp.i[1]) & 0x80000000) {
                value = SoftFloat_DoubleSub_x0012B110(0, value);
                *sign = '-';
        } else
                *sign = '\000';
        digits = _dtoa_r_x0012B110(data, value, mode, ndigits, decpt, &dsgn, &rve);
        if ((ch != 'g' && ch != 'G') || flags & 0x001) {
                bp = digits + ndigits;
                if (ch == 'f') {
                        if (*digits == '0' && SoftFloat_UnpackAndCompare_x0012B110(value, 0) != 0)
                                *decpt = -ndigits + 1;
                        bp += *decpt;
                }
                if (SoftFloat_UnpackAndCompare_x0012B110(value, 0) == 0)
                        rve = bp;
                while (rve < bp)
                        *rve++ = '0';
        }
        *length = rve - digits;
        return (digits);
}
int func_0012B2D0_x0012B2D0(char *p0, int exp, int fmtch) __asm__("func_0012B2D0");
/* exponent: from https://github.com/new-coke/rez-decomp (src/libc/stdio/vfprintf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0012B2D0_x0012B2D0(char *p0, int exp, int fmtch)
{
    char *p, *t;
    char expbuf[308];
    p = p0;
    *p++ = fmtch;
    if (exp < 0) {
        exp = -exp;
        *p++ = '-';
    } else
        *p++ = '+';
    t = expbuf + 308;
    if (exp > 9) {
        do {
            *--t = exp % 10 + '0';
        } while ((exp /= 10) > 9);
        *--t = exp + '0';
        for (; t < expbuf + 308; *p++ = *t++)
            ;
    } else {
        *p++ = '0';
        *p++ = exp + '0';
    }
    return (p - p0);
}
typedef unsigned int size_t_x0012B3B0;
typedef unsigned int __ULong_x0012B3B0;
struct _glue_x0012B3B0
{
  struct _glue_x0012B3B0 *_next;
  int _niobs;
  struct __sFILE_x0012B3B0 *_iobs;
};
struct _Bigint_x0012B3B0
{
  struct _Bigint_x0012B3B0 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x0012B3B0 _x[1];
};
struct __tm_x0012B3B0
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};
struct _atexit_x0012B3B0 {
        struct _atexit_x0012B3B0 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x0012B3B0 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x0012B3B0;
struct __sFILE_x0012B3B0 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x0012B3B0 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x0012B3B0 (*_seek) (void * _cookie, _fpos_t_x0012B3B0 _offset, int _whence);
  int (*_close) (void * _cookie);
  struct __sbuf_x0012B3B0 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x0012B3B0 _lb;
  int _blksize;
  int _offset;
  struct _reent_x0012B3B0 *_data;
};
struct _rand48_x0012B3B0 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x0012B3B0
{
  int _errno;
  struct __sFILE_x0012B3B0 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x0012B3B0 *);
  struct _Bigint_x0012B3B0 *_result;
  int _result_k;
  struct _Bigint_x0012B3B0 *_p5s;
  struct _Bigint_x0012B3B0 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x0012B3B0 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x0012B3B0 _r48;
        } _reent_x0012B3B0;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x0012B3B0 *_atexit_x0012B3B0;
  struct _atexit_x0012B3B0 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x0012B3B0 __sglue;
  struct __sFILE_x0012B3B0 __sf[3];
};
typedef struct __sFILE_x0012B3B0 FILE_x0012B3B0;
typedef __builtin_va_list va_list_x0012B3B0;
extern int _fwalk_x0012B3B0(struct _reent_x0012B3B0 *, int (*)(FILE_x0012B3B0 *)) __asm__("_fwalk");
int __srefill_x0012B3B0(FILE_x0012B3B0 *) __asm__("func_00127228");
int ungetc_x0012B3B0(int, FILE_x0012B3B0 *) __asm__("func_001297A0");
size_t_x0012B3B0 fread_x0012B3B0(void *, size_t_x0012B3B0, size_t_x0012B3B0, FILE_x0012B3B0 *) __asm__("func_00123C40");
int sprintf_x0012B3B0(char *, const char *, ...) __asm__("func_00127488");
typedef unsigned int size_t_x0012B3B0;
double atof_x0012B3B0(const char *) __asm__("func_001221C0");
long atol_x0012B3B0(const char *) __asm__("func_00122200");
long strtol_x0012B3B0(const char *, char **, int) __asm__("func_00129428");
unsigned long strtoul_x0012B3B0(const char *, char **, int) __asm__("func_00129688");
extern void qsort_x0012B3B0(void *, size_t_x0012B3B0, size_t_x0012B3B0, int (*)(const void *, const void *)) __asm__("qsort");
extern const char _ctype__x0012B3B0[] __asm__("_ctype_");
extern const short basefix_x0012B3B0[17] __asm__("D_0045F060");
extern const char exponent_format_x0012B3B0[] __asm__("D_0045F088");
typedef int wchar_t_x0012B3B0;
char *__sccl_x0012B3B0 () __asm__("func_0012C040");
char * __sccl_x0012B3B0(register char *tab, register char *fmt) __asm__("func_0012C040");
int __svfscanf_x0012B3B0(register FILE_x0012B3B0 *fp, char const *fmt0, va_list_x0012B3B0 ap) __asm__("__svfscanf");
/* __svfscanf_x0012B3B0: from https://github.com/crashbashash/DW4_Decomp (src/newlib/vfscanf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int __svfscanf_x0012B3B0(register FILE_x0012B3B0 *fp, char const *fmt0, va_list_x0012B3B0 ap)
{
  register char *fmt = (char *) fmt0;
  register int c;
  register size_t_x0012B3B0 width;
  register char *p;
  register int n;
  register int flags;
  register char *p0;
  int nassigned;
  int nread;
  int base = 0;
  int nbytes = 1;
  wchar_t_x0012B3B0 wc;
  unsigned long (*ccfn) () = 0;
  char ccltab[256];
  char buf[(308+39+3)];
  char *lptr;
  short *sp;
  int *ip;
  float *flp;
  long double *ldp;
  double *dp;
  long *lp;
  nassigned = 0;
  nread = 0;
  for (;;)
    {
      wc = *fmt;
      fmt += nbytes;
      if (wc == 0)
        return nassigned;
      if (nbytes == 1 && ((_ctype__x0012B3B0+1)[(unsigned)(wc)]&010))
        {
          for (;;)
            {
              if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                return nassigned;
              if (!((_ctype__x0012B3B0+1)[(unsigned)(*fp->_p)]&010))
                break;
              nread++, fp->_r--, fp->_p++;
            }
          continue;
        }
      if (wc != '%')
        goto literal;
      width = 0;
      flags = 0;
    again:
      c = *fmt++;
      switch (c)
        {
        case '%':
        literal:
          lptr = fmt - nbytes;
          for (n = 0; n < nbytes; ++n)
            {
              if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                goto input_failure;
              if (*fp->_p != *lptr)
                goto match_failure;
              fp->_r--, fp->_p++;
              nread++;
              ++lptr;
            }
          continue;
        case '*':
          flags |= 0x08;
          goto again;
        case 'l':
          flags |= 0x01;
          goto again;
        case 'L':
          flags |= 0x02;
          goto again;
        case 'h':
          flags |= 0x04;
          goto again;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          width = width * 10 + c - '0';
          goto again;
        case 'D':
          flags |= 0x01;
        case 'd':
          c = 3;
          ccfn = (unsigned long (*)())strtol_x0012B3B0;
          base = 10;
          break;
        case 'i':
          c = 3;
          ccfn = (unsigned long (*)())strtol_x0012B3B0;
          base = 0;
          break;
        case 'O':
          flags |= 0x01;
        case 'o':
          c = 3;
          ccfn = strtoul_x0012B3B0;
          base = 8;
          break;
        case 'u':
          c = 3;
          ccfn = strtoul_x0012B3B0;
          base = 10;
          break;
        case 'X':
        case 'x':
          flags |= 0x100;
          c = 3;
          ccfn = strtoul_x0012B3B0;
          base = 16;
          break;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          c = 4;
          break;
        case 's':
          c = 2;
          break;
        case '[':
          fmt = __sccl_x0012B3B0 (ccltab, fmt);
          flags |= 0x20;
          c = 1;
          break;
        case 'c':
          flags |= 0x20;
          c = 0;
          break;
        case 'p':
          flags |= 0x10 | 0x100;
          c = 3;
          ccfn = strtoul_x0012B3B0;
          base = 16;
          break;
        case 'n':
          if (flags & 0x08)
            continue;
          if (flags & 0x04)
            {
              sp = __builtin_va_arg((ap), short *);
              *sp = nread;
            }
          else if (flags & 0x01)
            {
              lp = __builtin_va_arg((ap), long *);
              *lp = nread;
            }
          else
            {
              ip = __builtin_va_arg((ap), int *);
              *ip = nread;
            }
          continue;
        case '\0':
          return (-1);
        default:
          if (((_ctype__x0012B3B0+1)[(unsigned)(c)]&01))
            flags |= 0x01;
          c = 3;
          ccfn = (unsigned long (*)())strtol_x0012B3B0;
          base = 10;
          break;
        }
      if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
        goto input_failure;
      if ((flags & 0x20) == 0)
        {
          while (((_ctype__x0012B3B0+1)[(unsigned)(*fp->_p)]&010))
            {
              nread++;
              if (--fp->_r > 0)
                fp->_p++;
              else
              if (__srefill_x0012B3B0 (fp))
                goto input_failure;
            }
        }
      switch (c)
        {
        case 0:
          if (width == 0)
            width = 1;
          if (flags & 0x08)
            {
              size_t_x0012B3B0 sum = 0;
              for (;;)
                {
                  if ((n = fp->_r) < width)
                    {
                      sum += n;
                      width -= n;
                      fp->_p += n;
                      if (__srefill_x0012B3B0 (fp))
                        {
                          if (sum == 0)
                            goto input_failure;
                          break;
                        }
                    }
                  else
                    {
                      sum += width;
                      fp->_r -= width;
                      fp->_p += width;
                      break;
                    }
                }
              nread += sum;
            }
          else
            {
              size_t_x0012B3B0 r = fread_x0012B3B0 ((void *) __builtin_va_arg((ap), char *), 1, width, fp);
              if (r == 0)
                goto input_failure;
              nread += r;
              nassigned++;
            }
          break;
        case 1:
          if (width == 0)
            width = ~0;
          if (flags & 0x08)
            {
              n = 0;
              while (ccltab[*fp->_p])
                {
                  n++, fp->_r--, fp->_p++;
                  if (--width == 0)
                    break;
                  if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                    {
                      if (n == 0)
                        goto input_failure;
                      break;
                    }
                }
              if (n == 0)
                goto match_failure;
            }
          else
            {
              p0 = p = __builtin_va_arg((ap), char *);
              while (ccltab[*fp->_p])
                {
                  fp->_r--;
                  *p++ = *fp->_p++;
                  if (--width == 0)
                    break;
                  if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                    {
                      if (p == p0)
                        goto input_failure;
                      break;
                    }
                }
              n = p - p0;
              if (n == 0)
                goto match_failure;
              *p = 0;
              nassigned++;
            }
          nread += n;
          break;
        case 2:
          if (width == 0)
            width = ~0;
          if (flags & 0x08)
            {
              n = 0;
              while (!((_ctype__x0012B3B0+1)[(unsigned)(*fp->_p)]&010))
                {
                  n++, fp->_r--, fp->_p++;
                  if (--width == 0)
                    break;
                  if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                    break;
                }
              nread += n;
            }
          else
            {
              p0 = p = __builtin_va_arg((ap), char *);
              while (!((_ctype__x0012B3B0+1)[(unsigned)(*fp->_p)]&010))
                {
                  fp->_r--;
                  *p++ = *fp->_p++;
                  if (--width == 0)
                    break;
                  if ((fp->_r <= 0 && __srefill_x0012B3B0(fp)))
                    break;
                }
              *p = 0;
              nread += p - p0;
              nassigned++;
            }
          continue;
        case 3:
          if (--width > sizeof (buf) - 2)
            width = sizeof (buf) - 2;
          width++;
          flags |= 0x40 | 0x80 | 0x200;
          for (p = buf; width; width--)
            {
              c = *fp->_p;
              switch (c)
                {
                case '0':
                  if (base == 0)
                    {
                      base = 8;
                      flags |= 0x100;
                    }
                  if (flags & 0x200)
                    flags &= ~(0x40 | 0x200 | 0x80);
                  else
                    flags &= ~(0x40 | 0x100 | 0x80);
                  goto ok;
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                  base = basefix_x0012B3B0[base];
                  flags &= ~(0x40 | 0x100 | 0x80);
                  goto ok;
                case '8':
                case '9':
                  base = basefix_x0012B3B0[base];
                  if (base <= 8)
                    break;
                  flags &= ~(0x40 | 0x100 | 0x80);
                  goto ok;
                case 'A':
                case 'B':
                case 'C':
                case 'D':
                case 'E':
                case 'F':
                case 'a':
                case 'b':
                case 'c':
                case 'd':
                case 'e':
                case 'f':
                  if (base <= 10)
                    break;
                  flags &= ~(0x40 | 0x100 | 0x80);
                  goto ok;
                case '+':
                case '-':
                  if (flags & 0x40)
                    {
                      flags &= ~0x40;
                      goto ok;
                    }
                  break;
                case 'x':
                case 'X':
                  if (flags & 0x100 && p == buf + 1)
                    {
                      base = 16;
                      flags &= ~0x100;
                      goto ok;
                    }
                  break;
                }
              break;
            ok:
              *p++ = c;
              if (--fp->_r > 0)
                fp->_p++;
              else
              if (__srefill_x0012B3B0 (fp))
                break;
            }
          if (flags & 0x80)
            {
              if (p > buf)
                (void) ungetc_x0012B3B0 (*(char *)-- p, fp);
              goto match_failure;
            }
          c = ((char *) p)[-1];
          if (c == 'x' || c == 'X')
            {
              --p;
                         ungetc_x0012B3B0 (c, fp);
            }
          if ((flags & 0x08) == 0)
            {
              unsigned long res;
              *p = 0;
              res = (*ccfn) (buf, (char **) 0, base);
              if (flags & 0x10)
                *(__builtin_va_arg((ap), void * *)) = (void *) (unsigned long) res;
              else if (flags & 0x04)
                {
                  sp = __builtin_va_arg((ap), short *);
                  *sp = res;
                }
              else if (flags & 0x01)
                {
                  lp = __builtin_va_arg((ap), long *);
                  *lp = res;
                }
              else
                {
                  ip = __builtin_va_arg((ap), int *);
                  *ip = res;
                }
              nassigned++;
            }
          nread += p - buf;
          break;
        case 4:
        {
          long leading_zeroes;
          long zeroes, exp_adjust;
          char *exp_start;
          if (--width > sizeof (buf) - 2)
            width = sizeof (buf) - 2;
          width++;
          flags |= 0x40 | 0x80 | 0x100 | 0x200;
          zeroes = 0;
          exp_adjust = 0;
          for (p = buf; width; )
            {
              c = *fp->_p;
              switch (c)
                {
                case '0':
                  if (flags & 0x80)
                    {
                      flags &= ~0x40;
                      zeroes++;
                      goto fskip;
                    }
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                  flags &= ~(0x40 | 0x80);
                  goto fok;
                case '+':
                case '-':
                  if (flags & 0x40)
                    {
                      flags &= ~0x40;
                      goto fok;
                    }
                  break;
                case '.':
                  if (flags & 0x100)
                    {
                      flags &= ~(0x40 | 0x100);
                      leading_zeroes = zeroes;
                      goto fok;
                    }
                  break;
                case 'e':
                case 'E':
                  if ((flags & (0x80 | 0x200)) == 0x200
                      || ((flags & 0x200) && zeroes))
                    {
                      if (! (flags & 0x100))
                        {
                          exp_adjust = zeroes - leading_zeroes;
                          exp_start = p;
                        }
                      flags =
                        (flags & ~(0x200 | 0x100)) |
                        0x40 | 0x80;
                      zeroes = 0;
                      goto fok;
                    }
                  break;
                }
              break;
            fok:
              *p++ = c;
              width--;
            fskip:
              ++nread;
              if (--fp->_r > 0)
                fp->_p++;
              else
              if (__srefill_x0012B3B0 (fp))
                break;
            }
          if (zeroes)
            flags &= ~0x80;
          if (flags & 0x80)
            {
              if (flags & 0x200)
                {
                  while (p > buf)
                    {
                      ungetc_x0012B3B0 (*(char *)-- p, fp);
                    }
                  goto match_failure;
                }
              c = *(char *)-- p;
              --nread;
              if (c != 'e' && c != 'E')
                {
                  (void) ungetc_x0012B3B0 (c, fp);
                  c = *(char *)-- p;
                  --nread;
                }
              (void) ungetc_x0012B3B0 (c, fp);
            }
          if ((flags & 0x08) == 0)
            {
              double res;
              long new_exp;
              *p = 0;
              if ((flags & (0x100 | 0x200)) == 0x200)
                {
                  exp_adjust = zeroes - leading_zeroes;
                  new_exp = -exp_adjust;
                  exp_start = p;
                }
              else if (exp_adjust)
                new_exp = atol_x0012B3B0 (exp_start + 1) - exp_adjust;
              if (exp_adjust)
                {
                  if (exp_start >= buf + sizeof (buf) - ((8 * sizeof (long) - 1) * 4 / 13 + 2))
                    exp_start = buf + sizeof (buf) - ((8 * sizeof (long) - 1) * 4 / 13 + 2) - 1;
                 sprintf_x0012B3B0 (exp_start, exponent_format_x0012B3B0, new_exp);
                }
              res = atof_x0012B3B0 (buf);
              if (flags & 0x01)
                {
                  dp = __builtin_va_arg((ap), double *);
                  *dp = res;
                }
              else if (flags & 0x02)
                {
                  ldp = __builtin_va_arg((ap), long double *);
                  *ldp = res;
                }
              else
                {
                  flp = __builtin_va_arg((ap), float *);
                  *flp = res;
                }
              nassigned++;
            }
          break;
        }
        }
    }
input_failure:
  return nassigned ? nassigned : -1;
match_failure:
  return nassigned;
}
__asm__("# rebind __svfscanf 0x0012B3B0");
char *func_0012C040_x0012C040(char *tab, char *fmt) __asm__("func_0012C040");
/* __sccl: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfscanf.c, MIT); ee-gcc 2.96 -O2 -G0 */
char *func_0012C040_x0012C040(char *tab, char *fmt)
{
    int c;
    int n;
    int v;
    c = *fmt++;
    if (c == '^') {
        v = 1;
        c = *fmt++;
    } else {
        v = 0;
    }
    for (n = 0; n < 256; n++) {
        tab[n] = v;
    }
    if (c == 0) {
        return fmt - 1;
    }
    v = 1 - v;
    for (;;) {
        tab[c] = v;
    doswitch:
        n = *fmt++;
        switch (n) {
        case 0:
            return fmt - 1;
        case '-':
            n = *fmt;
            if (n == ']' || n < c) {
                c = '-';
                break;
            }
            fmt++;
            do {
                tab[++c] = v;
            } while (c < n);
            goto doswitch;
        case ']':
            return fmt;
        default:
            c = n;
            break;
        }
    }
}
struct Reent_x0012C140;
struct Fil_x0012C140;
int vfprintf_x0012C140() __asm__("func_00129A28");
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x0012C140;
struct Reent_x0012C140;
typedef struct Glue_x0012C140 {
    struct Glue_x0012C140 *next;
    int niobs;
    struct Fil_x0012C140 *iobs;
} Glue_x0012C140;
typedef struct Fil_x0012C140 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x0012C140 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x0012C140 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x0012C140 lb;
    int blksize;
    int offset;
    struct Reent_x0012C140 *data;
} Fil_x0012C140;
struct _Bigint_x0012C140 {
    struct _Bigint_x0012C140 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x0012C140 {
    int err;
    Fil_x0012C140 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x0012C140 *result;
    int result_k;
    struct _Bigint_x0012C140 *p5s;
    struct _Bigint_x0012C140 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x0012C140 glue;
    Fil_x0012C140 sf[3];
} Reent_x0012C140;
extern Reent_x0012C140 *_impure_ptr_x0012C140 __asm__("_impure_ptr");
int func_0012C140_x0012C140(char *out, const char *fmt, char *ap) __asm__("func_0012C140");
/* vsprintf: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vsprintf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0012C140_x0012C140(char *out, const char *fmt, char *ap)
{
    char s[0x60];
    int n;
    *(void **)(s + 0x0) = out;
    *(int *)(s + 0x8) = 0x7FFFFFFF;
    *(short *)(s + 0xC) = 0x208;
    *(void **)(s + 0x10) = out;
    *(int *)(s + 0x14) = 0x7FFFFFFF;
    *(int *)(s + 0x54) = (int)_impure_ptr_x0012C140;
    n = vfprintf_x0012C140(s, fmt, ap);
    *(char *)(*(void **)(s + 0x0)) = 0;
    return n;
}
typedef unsigned int __ULong_x0012C198;
struct _glue_x0012C198
{
  struct _glue_x0012C198 *_next;
  int _niobs;
  struct __sFILE_x0012C198 *_iobs;
};
struct _Bigint_x0012C198
{
  struct _Bigint_x0012C198 *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong_x0012C198 _x[1];
};
struct __tm_x0012C198
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};
struct _atexit_x0012C198 {
        struct _atexit_x0012C198 *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf_x0012C198 {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t_x0012C198;
struct __sFILE_x0012C198 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf_x0012C198 _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf,
                                            int _n);
  _fpos_t_x0012C198 (*_seek) (void * _cookie, _fpos_t_x0012C198 _offset, int _whence);
  int (*_close) (void * _cookie);
  struct __sbuf_x0012C198 _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf_x0012C198 _lb;
  int _blksize;
  int _offset;
  struct _reent_x0012C198 *_data;
};
struct _rand48_x0012C198 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
struct _reent_x0012C198
{
  int _errno;
  struct __sFILE_x0012C198 *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup) (struct _reent_x0012C198 *);
  struct _Bigint_x0012C198 *_result;
  int _result_k;
  struct _Bigint_x0012C198 *_p5s;
  struct _Bigint_x0012C198 **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm_x0012C198 _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48_x0012C198 _r48;
        } _reent_x0012C198;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit_x0012C198 *_atexit_x0012C198;
  struct _atexit_x0012C198 _atexit0;
  void (**(_sig_func))(int);
  struct _glue_x0012C198 __sglue;
  struct __sFILE_x0012C198 __sf[3];
};
typedef struct __sFILE_x0012C198 FILE_x0012C198;
typedef __builtin_va_list va_list_x0012C198;
extern int _fwalk_x0012C198(struct _reent_x0012C198 *, int (*)(FILE_x0012C198 *)) __asm__("_fwalk");
int vfprintf_x0012C198(FILE_x0012C198 *, const char *, va_list_x0012C198) __asm__("func_00129A28");
int func_0012C198_x0012C198(struct _reent_x0012C198 *ptr, char *str, const char *fmt, va_list_x0012C198 ap) __asm__("func_0012C198");
/* vsprintf_r: from https://github.com/crashbashash/DW4_Decomp (src/newlib/vsprintf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0012C198_x0012C198(struct _reent_x0012C198 *ptr, char *str, const char *fmt, va_list_x0012C198 ap)
{
    int ret;
    FILE_x0012C198 f;
    f._flags = 0x0008 | 0x0200;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._w = 0x7fffffff;
    f._data = ptr;
    ret = vfprintf_x0012C198(&f, fmt, ap);
    *f._p = 0;
    return ret;
}
s32 write_x0012C1F0(s32, s32, s32) __asm__("write");
extern s32 errno_x0012C1F0 __asm__("errno");
unsigned long long _write_r_x0012C1F0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("_write_r");
unsigned long long _write_r_x0012C1F0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  unsigned long long new_var;
  s32 temp_v0;
  errno_x0012C1F0 = 0;
  temp_v0 = write_x0012C1F0(arg1, arg2, arg3);
  new_var = 1;
  if (((-new_var) == temp_v0) && (errno_x0012C1F0 != 0))
  {
    *arg0 = errno_x0012C1F0;
  }
  return temp_v0;
}
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x0012C250;
struct Reent_x0012C250;
typedef struct Glue_x0012C250 {
    struct Glue_x0012C250 *next;
    int niobs;
    struct Fil_x0012C250 *iobs;
} Glue_x0012C250;
typedef struct Fil_x0012C250 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x0012C250 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x0012C250 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x0012C250 lb;
    int blksize;
    int offset;
    struct Reent_x0012C250 *data;
} Fil_x0012C250;
struct _Bigint_x0012C250 {
    struct _Bigint_x0012C250 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x0012C250 {
    int err;
    Fil_x0012C250 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x0012C250 *result;
    int result_k;
    struct _Bigint_x0012C250 *p5s;
    struct _Bigint_x0012C250 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x0012C250 glue;
    Fil_x0012C250 sf[3];
} Reent_x0012C250;
extern Reent_x0012C250 *_impure_ptr_x0012C250 __asm__("_impure_ptr");
struct Reent_x0012C250;
void _free_r_x0012C250(struct Reent_x0012C250 *reent_ptr, void *mem) __asm__("func_00123D60");
typedef struct _Bigint_x0012C250 _Bigint_x0012C250;
void __sinit_x0012C250(Reent_x0012C250 *s) __asm__("func_00123BB0");
void __smakebuf_x0012C250(Fil_x0012C250 *fp) __asm__("func_001247E8");
int __swsetup_x0012C250(Fil_x0012C250 *fp) __asm__("__swsetup");
/* __swsetup_x0012C250: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/wsetup.c, MIT); ee-gcc 2.96 -O2 -G0 */
int __swsetup_x0012C250(Fil_x0012C250 *fp)
{
    do {
        if (fp->data == 0) {
            fp->data = _impure_ptr_x0012C250;
        }
        if (!fp->data->sdidinit) {
            __sinit_x0012C250(fp->data);
        }
    } while (0);
    if ((fp->flags & 8) == 0) {
        if ((fp->flags & 0x10) == 0) {
            return -1;
        }
        if (fp->flags & 4) {
            if (fp->ub.base != 0) {
                if (fp->ub.base != fp->ubuf) {
                    _free_r_x0012C250(fp->data, fp->ub.base);
                }
                fp->ub.base = 0;
            }
            fp->flags &= ~0x24;
            fp->r = 0;
            fp->p = fp->bf.base;
        }
        fp->flags |= 8;
    }
    if (fp->bf.base == 0) {
        __smakebuf_x0012C250(fp);
    }
    if (fp->flags & 1) {
        fp->w = 0;
        fp->lbfsize = -fp->bf.size;
    } else {
        fp->w = (fp->flags & 2) ? 0 : fp->bf.size;
    }
    return 0;
}
