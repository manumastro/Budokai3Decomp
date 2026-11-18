#include "common.h"

s32 _cleanup_r(s32);                            /* extern */
extern s32 _impure_ptr;

void func_00123B90(void) {
    _cleanup_r(_impure_ptr);
}
typedef struct __sFILE_a_x00123BB0 {
    unsigned char *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct {
        unsigned char *_base;
        int _size;
    } _bf;
    int _lbfsize;
    void *_cookie;
    void *_read_x00123BB0;
    void *_write_x00123BB0;
    void *_seek;
    void *_close_x00123BB0;
    struct {
        unsigned char *_base;
        int _size;
    } _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct {
        unsigned char *_base;
        int _size;
    } _lb;
    int _blksize;
    int _offset;
    struct _reent_a_x00123BB0 *_data;
} FILE_a_x00123BB0;
struct _glue_a_x00123BB0 {
    struct _glue_a_x00123BB0 *_next;
    int _niobs;
    FILE_a_x00123BB0 *_iobs;
};
struct _reent_sinit_a_x00123BB0 {
    int _errno;
    char pad_04[52];
    int __sdidinit;
    void (*__cleanup)(struct _reent_a_x00123BB0 *);
    char pad_40[408];
    struct _glue_a_x00123BB0 __sglue;
    FILE_a_x00123BB0 __sf[3];
};
struct _reent_a_x00123BB0 {
    int _errno;
    void *_stdin;
    void *_stdout;
    void *_stderr;
};
void std_x00123BB0(FILE_a_x00123BB0 *ptr, int flags, int file, struct _reent_a_x00123BB0 *data) __asm__("func_001239A0");
void _cleanup_r_x00123BB0(struct _reent_a_x00123BB0 *ptr) __asm__("func_00123B70");
extern int _fwalk_x00123BB0(struct _reent_a_x00123BB0 *ptr, int (*function)(FILE_a_x00123BB0 *)) __asm__("_fwalk");
int _write_x00123BB0(int fd, const void *buf, int n) __asm__("_write");
int _read_x00123BB0(int fd, void *buf, int n) __asm__("_read");
int _close_x00123BB0(void) __asm__("_close");
void std_x00123BB0(FILE_a_x00123BB0 *ptr, int flags, int file, struct _reent_a_x00123BB0 *data) __asm__("func_001239A0");
void _cleanup_r_x00123BB0(struct _reent_a_x00123BB0 *ptr) __asm__("func_00123B70");
void __sinit_x00123BB0(struct _reent_a_x00123BB0 *ptr) __asm__("__sinit");
/* __sinit_x00123BB0: from https://github.com/new-coke/rez-decomp (src/libc/stdio/findfp.c, MIT); ee-gcc 2.96 -O2 -G0 */
void __sinit_x00123BB0(struct _reent_a_x00123BB0 *ptr)
{
    struct _reent_sinit_a_x00123BB0 *s = (struct _reent_sinit_a_x00123BB0 *)ptr;
    s->__cleanup = _cleanup_r_x00123BB0;
    s->__sdidinit = 1;
    std_x00123BB0(&s->__sf[0], 4, 0, ptr);
    std_x00123BB0(&s->__sf[1], 9, 1, ptr);
    std_x00123BB0(&s->__sf[2], 10, 2, ptr);
    s->__sglue._next = ((void *)0);
    s->__sglue._niobs = 3;
    s->__sglue._iobs = &s->__sf[0];
}
