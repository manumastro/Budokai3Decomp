#include "common.h"

s32 _free_r(s32, s32);                          /* extern */

s32 _malloc_r(s32, s32);                            /* extern */

s32 __malloc_lock(s32);                         /* extern */
s32 __malloc_unlock(s32);                       /* extern */
s32 func_001249A8(s32, s32, s32);                   /* extern */

s32 func_001246A0(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

extern s32 D_0045EC10;

typedef unsigned char u8_x001246A0;
typedef signed short s16_x001246A0;
typedef signed int s32_x001246A0;
typedef unsigned int u32_x001246A0;
typedef struct _reent_x001246A0 _reent_x001246A0;
typedef struct __sbuf_x001246A0 {
    u8_x001246A0 *_base;
    s32_x001246A0 _size;
} __sbuf_x001246A0;
typedef struct __sFILE_x001246A0 {
    u8_x001246A0 *_p;
    s32_x001246A0 _r;
    s32_x001246A0 _w;
    s16_x001246A0 _flags;
    s16_x001246A0 _file;
    __sbuf_x001246A0 _bf;
    s32_x001246A0 _lbfsize;
    void *_cookie;
    s32_x001246A0 (*_read)(void *cookie, char *buf, s32_x001246A0 n);
    s32_x001246A0 (*_write)(void *cookie, const char *buf, s32_x001246A0 n);
    long (*_seek)(void *cookie, s32_x001246A0 offset, s32_x001246A0 whence);
    s32_x001246A0 (*_close)(void *cookie);
    __sbuf_x001246A0 _ub;
    u8_x001246A0 *_up;
    s32_x001246A0 _ur;
    u8_x001246A0 _ubuf[3];
    u8_x001246A0 _nbuf[1];
    __sbuf_x001246A0 _lb;
    s32_x001246A0 _blksize;
    s32_x001246A0 _offset;
    _reent_x001246A0 *_data;
} FILE_x001246A0;
typedef struct _Bigint_x001246A0 {
    struct _Bigint_x001246A0 *next;
    s32_x001246A0 k;
    s32_x001246A0 maxwds;
    s32_x001246A0 sign;
    s32_x001246A0 wds;
    u32_x001246A0 x[1];
} _Bigint_x001246A0;
typedef struct _glue_x001246A0 {
    struct _glue_x001246A0 *next;
    s32_x001246A0 niobs;
    FILE_x001246A0 *iobs;
} _glue_x001246A0;
typedef struct _atexit_x001246A0 {
    struct _atexit_x001246A0 *_next;
    s32_x001246A0 _ind;
    void (*_fns[32])(void);
} _atexit_x001246A0;
struct _reent_x001246A0 {
    s32_x001246A0 _errno;
    FILE_x001246A0 *_stdin;
    FILE_x001246A0 *_stdout;
    FILE_x001246A0 *_stderr;
    s32_x001246A0 _inc;
    char _emergency[25];
    s32_x001246A0 _current_category;
    const char *_current_locale;
    s32_x001246A0 __sdidinit;
    void (*__cleanup)(struct _reent_x001246A0 *r);
    _Bigint_x001246A0 *_result;
    s32_x001246A0 _result_k;
    _Bigint_x001246A0 *_p5s;
    _Bigint_x001246A0 **_freelist;
    u8_x001246A0 _unused[0xF8];
    _atexit_x001246A0 *_atexit_x001246A0;
    _atexit_x001246A0 _atexit0;
    void (**_sig_func)(s32_x001246A0 sig);
    struct _glue_x001246A0 __sglue;
    FILE_x001246A0 __sf[3];
};
extern const char localeEmptyStr_x001246A0[] __asm__("D_0045EC40");
extern const char localeCName_x001246A0[] __asm__("D_0045EC50");
extern s32_x001246A0 strcmp_x001246A0(const char *left, const char *right) __asm__("func_00127940");
extern const char localeEmptyStr_x001246A0[8] __asm__("D_0045EC40");
extern const char localeCName_x001246A0[4] __asm__("D_0045EC50");
char *func_001246A0_x001246A0(_reent_x001246A0 *r, s32_x001246A0 category, const char *locale) __asm__("func_001246A0");
/* _setlocale_r: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
char *func_001246A0_x001246A0(_reent_x001246A0 *r, s32_x001246A0 category, const char *locale)
{
    if (locale != ((void *)0)) {
        if (strcmp_x001246A0(locale, localeCName_x001246A0) != 0 && strcmp_x001246A0(locale, localeEmptyStr_x001246A0) != 0)
            return ((void *)0);
        r->_current_category = category;
        r->_current_locale = locale;
    }
    return localeCName_x001246A0;
}
s32 *func_00124730(void) {
    return &D_0045EC10;
}
void func_00124740(s32 arg0, s32 arg1) {
    func_001246A0(_impure_ptr, arg0, arg1);
}
s32 func_00124730_x00124768(s32) __asm__("func_00124730");
extern s32 _impure_ptr_x00124768 __asm__("_impure_ptr");
void func_00124768_x00124768(void) __asm__("func_00124768");
void func_00124768_x00124768(void) {
    func_00124730_x00124768(_impure_ptr_x00124768);
}
struct Reent_x00124788;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00124788;
struct Reent_x00124788;
typedef struct Glue_x00124788 {
    struct Glue_x00124788 *next;
    int niobs;
    struct Fil_x00124788 *iobs;
} Glue_x00124788;
typedef struct Fil_x00124788 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00124788 bf;
    int lbfsize;
    void *cookie;
    int (*read_x00124788)(void *cookie, char *buf, int n);
    int (*write_x00124788)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close_x00124788)(void *cookie);
    Sbuf_x00124788 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00124788 lb;
    int blksize;
    int offset;
    struct Reent_x00124788 *data;
} Fil_x00124788;
struct _Bigint_x00124788 {
    struct _Bigint_x00124788 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00124788 {
    int err;
    Fil_x00124788 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00124788 *result;
    int result_k;
    struct _Bigint_x00124788 *p5s;
    struct _Bigint_x00124788 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00124788 glue;
    Fil_x00124788 sf[3];
} Reent_x00124788;
extern int errno_x00124788 __asm__("errno");
int close_x00124788(int fd) __asm__("close");
long lseek_x00124788(int fd, long offset, int whence) __asm__("lseek");
int read_x00124788(int fd, void *buf, int size) __asm__("read");
int write_x00124788(int fd, const void *buf, int size) __asm__("write");
long _lseek_r_x00124788(Reent_x00124788 *ptr, int fd, long pos, int whence) __asm__("_lseek_r");
/* _lseek_r_x00124788: from https://github.com/nathanialf/ico-pc (sce/libc/reent/lseekr.c, MIT); ee-gcc 2.96 -O2 -G0 */
long _lseek_r_x00124788(Reent_x00124788 *ptr, int fd, long pos, int whence)
{
    long ret;
    errno_x00124788 = 0;
    ret = lseek_x00124788(fd, pos, whence);
    if (ret == -1) {
        if (errno_x00124788 != 0) {
            ptr->err = errno_x00124788;
        }
    }
    return ret;
}
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x001247E8;
struct Reent_x001247E8;
typedef struct Glue_x001247E8 {
    struct Glue_x001247E8 *next;
    int niobs;
    struct Fil_x001247E8 *iobs;
} Glue_x001247E8;
typedef struct Fil_x001247E8 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x001247E8 bf;
    int lbfsize;
    void *cookie;
    int (*read_x001247E8)(void *cookie, char *buf, int n);
    int (*write_x001247E8)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close_x001247E8)(void *cookie);
    Sbuf_x001247E8 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x001247E8 lb;
    int blksize;
    int offset;
    struct Reent_x001247E8 *data;
} Fil_x001247E8;
struct _Bigint_x001247E8 {
    struct _Bigint_x001247E8 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x001247E8 {
    int err;
    Fil_x001247E8 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x001247E8 *result;
    int result_k;
    struct _Bigint_x001247E8 *p5s;
    struct _Bigint_x001247E8 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x001247E8 glue;
    Fil_x001247E8 sf[3];
} Reent_x001247E8;
struct stat_x001247E8;
int _fstat_r_x001247E8(Reent_x001247E8 *ptr, int fd, struct stat_x001247E8 *pstat) __asm__("_fstat_r");
struct stat_x001247E8 {
    short st_dev;
    unsigned short st_ino;
    unsigned int st_mode;
    unsigned short st_nlink;
    unsigned short st_uid;
    unsigned short st_gid;
    short st_rdev;
    long st_size;
    long st_atime;
    long st_spare1;
    long st_mtime;
    long st_spare2;
    long st_ctime;
    long st_spare3;
    long st_blksize;
    long st_blocks;
    long st_spare4[2];
};
typedef struct _Bigint_x001247E8 _Bigint_x001247E8;
long __sseek_x001247E8(void *cookie, long offset, int whence) __asm__("func_001276B0");
void _cleanup_r_x001247E8(Reent_x001247E8 *ptr) __asm__("func_00123B70");
struct Reent_x001247E8;
void *_malloc_r_x001247E8(struct Reent_x001247E8 *reent_ptr, int bytes) __asm__("func_00124E68");
int close_x001247E8(int fd) __asm__("close");
int read_x001247E8(int fd, void *buf, int size) __asm__("read");
int write_x001247E8(int fd, const void *buf, int size) __asm__("write");
int isatty_x001247E8(int fd) __asm__("func_0010AA10");
void func_001247E8_x001247E8(Fil_x001247E8 *fp) __asm__("func_001247E8");
/* __smakebuf: from https://github.com/nathanialf/ico-pc (sce/libc/stdio/makebuf.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001247E8_x001247E8(Fil_x001247E8 *fp)
{
    unsigned int size;
    int couldbetty;
    void *p;
    struct stat_x001247E8 st;
    if (fp->flags & 0x0002) {
        fp->bf.base = fp->p = fp->nbuf;
        fp->bf.size = 1;
        return;
    }
    if (fp->file < 0 || _fstat_r_x001247E8(fp->data, fp->file, &st) < 0) {
        couldbetty = 0;
        size = 1024;
        fp->flags |= 0x0800;
    } else {
        couldbetty = (st.st_mode & 0xF000) == 0x2000;
        size = 1024;
        if ((st.st_mode & 0xF000) == 0x8000 && fp->seek == __sseek_x001247E8) {
            fp->blksize = size;
            fp->flags |= 0x0400;
        } else {
            fp->flags |= 0x0800;
        }
    }
    if ((p = _malloc_r_x001247E8(fp->data, size)) == 0) {
        fp->flags |= 0x0002;
        fp->bf.base = fp->p = fp->nbuf;
        fp->bf.size = 1;
        return;
    }
    fp->data->cleanup = (void *)_cleanup_r_x001247E8;
    fp->flags |= 0x0080;
    fp->bf.base = fp->p = (unsigned char *)p;
    fp->bf.size = size;
    if (couldbetty && isatty_x001247E8(fp->file)) {
        fp->flags |= 0x0001;
    }
}
s32 func_00124940(s32 arg0, s32 arg1) {
    s32 temp_s1;

    __malloc_lock(_impure_ptr);
    temp_s1 = func_001249A8(_impure_ptr, arg0, arg1);
    __malloc_unlock(_impure_ptr);
    return temp_s1;
}
typedef signed int s32_x001249A8;
typedef unsigned int u32_x001249A8;
typedef signed long long s64_x001249A8;
typedef float f32_x001249A8;
extern s32_x001249A8 AddDmacHandler2_x001249A8(s32_x001249A8 channel, s32_x001249A8 (*handler)(s32_x001249A8, void *), s32_x001249A8 arg, u32_x001249A8 *arg3) __asm__("AddDmacHandler2");
extern s32_x001249A8 RhBase_SetVSyncCallback_x001249A8(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x001249A8 SzMsg_DrawRatioX_Pipe_x001249A8(s32_x001249A8 packet, s32_x001249A8 slot, s64_x001249A8 x, s64_x001249A8 y, f32_x001249A8 scaleX, f32_x001249A8 scaleY, s32_x001249A8 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
void _free_r_x001249A8(s32_x001249A8 self, void *mem) __asm__("func_00123D60");
void *_malloc_r_x001249A8(s32_x001249A8 reent_ptr, s32_x001249A8 bytes) __asm__("func_00124E68");
extern s32_x001249A8 func_00190A90_x001249A8(void (*arg0)(void)) __asm__("func_00190A90");
void func_00198A08_x001249A8(s32_x001249A8 r) __asm__("func_001259B8");
s32_x001249A8 func_00198A88_x001249A8(s32_x001249A8 r) __asm__("func_00125A38");
extern void func_00199BC0_x001249A8(s32_x001249A8 arg0, u32_x001249A8 n, u32_x001249A8 es, void (*arg3)(void)) __asm__("func_00199BC0");
typedef struct ma_chunk_x001249A8 {
    u32_x001249A8 prev_size;
    u32_x001249A8 size;
    struct ma_chunk_x001249A8 *fd;
    struct ma_chunk_x001249A8 *bk;
} ma_chunk_x001249A8;
void *_malloc_r_x001249A8(s32_x001249A8 reent_ptr, s32_x001249A8 bytes) __asm__("func_00124E68");
void func_00198A08_x001249A8(s32_x001249A8 r) __asm__("func_001259B8");
s32_x001249A8 func_00198A88_x001249A8(s32_x001249A8 r) __asm__("func_00125A38");
void func_00199BC0_x001249A8(s32_x001249A8 arg0, u32_x001249A8 n, u32_x001249A8 es, void (*arg3)(void)) __asm__("func_00199BC0");
void *func_001249A8_x001249A8(s32_x001249A8 reent_ptr, s32_x001249A8 alignmentIn, s32_x001249A8 bytesIn) __asm__("func_001249A8");
/* _memalign_r: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *func_001249A8_x001249A8(s32_x001249A8 reent_ptr, s32_x001249A8 alignmentIn, s32_x001249A8 bytesIn) {
    u32_x001249A8 alignment = alignmentIn;
    u32_x001249A8 bytes = bytesIn;
    u32_x001249A8 nb;
    char *m;
    ma_chunk_x001249A8 *p;
    char *brk;
    ma_chunk_x001249A8 *newp;
    u32_x001249A8 newsize;
    u32_x001249A8 leadsize;
    ma_chunk_x001249A8 *remainder;
    long remainder_size;
    if (alignment <= 16)
        return (void *)_malloc_r_x001249A8(reent_ptr, bytes);
    if (alignment < 16)
        alignment = 16;
    nb = (((unsigned long)((bytes) + (4 + 15)) < (unsigned long)(16 + 15)) ? 16 : (((bytes) + (4 + 15)) & ~(15)));
    m = (char *)_malloc_r_x001249A8(reent_ptr, nb + alignment + 16);
    if (m == 0)
        return 0;
    func_00198A08_x001249A8(reent_ptr);
    p = ((ma_chunk_x001249A8 *)((char *)(m) - 8));
    if ((((unsigned long)(m)) % alignment) == 0) {
    } else {
        brk = (char *)((ma_chunk_x001249A8 *)((char *)(((unsigned long)(m + alignment - 1)) & -alignment) - 8));
        if ((long)(brk - (char *)(p)) < (long)16)
            brk = brk + alignment;
        newp = (ma_chunk_x001249A8 *)brk;
        leadsize = brk - (char *)(p);
        newsize = ((p)->size & ~(0x1 | 0x2)) - leadsize;
        ((newp)->size = (newsize | 0x1));
        (((ma_chunk_x001249A8 *)(((char *)(newp)) + (newsize)))->size |= 0x1);
        ((p)->size = (((p)->size & 0x1) | (leadsize)));
        _free_r_x001249A8(reent_ptr, (s32_x001249A8)((void *)((char *)(p) + 8)));
        p = newp;
    }
    remainder_size = (sizeof(long) > sizeof(u32_x001249A8) && ((p)->size & ~(0x1 | 0x2)) < nb ? -(long)(nb - ((p)->size & ~(0x1 | 0x2))) : (long)(((p)->size & ~(0x1 | 0x2)) - nb));
    if (remainder_size >= (long)16) {
        remainder = ((ma_chunk_x001249A8 *)(((char *)(p)) + (nb)));
        ((remainder)->size = (remainder_size | 0x1));
        ((p)->size = (((p)->size & 0x1) | (nb)));
        _free_r_x001249A8(reent_ptr, (s32_x001249A8)((void *)((char *)(remainder) + 8)));
    }
    func_00198A88_x001249A8(reent_ptr);
    return ((void *)((char *)(p) + 8));
}
s32 func_00124B70(s32 arg0) {
    s32 temp_s1;

    __malloc_lock(_impure_ptr);
    temp_s1 = _malloc_r(_impure_ptr, arg0);
    __malloc_unlock(_impure_ptr);
    return temp_s1;
}
void func_00124BC8(s32 arg0) {
    __malloc_lock(_impure_ptr);
    _free_r(_impure_ptr, arg0);
    __malloc_unlock(_impure_ptr);
}
