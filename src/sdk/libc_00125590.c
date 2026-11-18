#include "common.h"

s32 GetThreadId();                                  /* extern */
s32 WaitSema(s32);                              /* extern */
extern s32 D_003ECD50;
extern s32 D_003F00B0;
extern s32 D_003F00B4;

struct Reent_x00125590;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00125590;
struct Reent_x00125590;
typedef struct Glue_x00125590 {
    struct Glue_x00125590 *next;
    int niobs;
    struct Fil_x00125590 *iobs;
} Glue_x00125590;
typedef struct Fil_x00125590 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00125590 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x00125590 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00125590 lb;
    int blksize;
    int offset;
    struct Reent_x00125590 *data;
} Fil_x00125590;
struct _Bigint_x00125590 {
    struct _Bigint_x00125590 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00125590 {
    int err;
    Fil_x00125590 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00125590 *result;
    int result_k;
    struct _Bigint_x00125590 *p5s;
    struct _Bigint_x00125590 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00125590 glue;
    Fil_x00125590 sf[3];
} Reent_x00125590;
int func_00125590_x00125590(struct Reent_x00125590 *r, int *pwc, const char *s, int n, int *state) __asm__("func_00125590");
/* _mbtowc_r: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/mbtowc_r.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00125590_x00125590(struct Reent_x00125590 *r, int *pwc, const char *s, int n, int *state)
{
    int dummy;
    int *p = &dummy;
    unsigned char *t = (unsigned char *)s;
    if (pwc != 0)
        p = pwc;
    if (t == 0)
        goto zero;
    if (n != 0)
        goto store;
    return -1;
zero:
    return 0;
store:
    *p = *t;
    return *t != 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memchr);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memcmp);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memcpy);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memmove);
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", memset);
void __malloc_lock(void) {
    s32 temp_v0;

    temp_v0 = GetThreadId();
    if (D_003F00B0 == temp_v0) {
        D_003F00B4 += 1;
        return;
    }
    WaitSema(D_003ECD50);
    D_003F00B0 = temp_v0;
    D_003F00B4 += 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libc_00125590", __malloc_unlock);
