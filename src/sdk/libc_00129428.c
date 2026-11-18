#include "common.h"

s32 func_00129458(s32, s32, s32, s32);          /* extern */

s32 _strtol_r(s32, s32, s32, s32);              /* extern */
extern s32 _impure_ptr;

void func_00129428(s32 arg0, s32 arg1, s32 arg2) {
    _strtol_r(_impure_ptr, arg0, arg1, arg2);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_00129458);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B110);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012B2D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", __svfscanf);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", func_0012C198);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00129428", _write_r);
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
