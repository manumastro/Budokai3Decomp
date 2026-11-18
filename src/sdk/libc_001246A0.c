#include "common.h"

s32 _free_r(s32, s32);                          /* extern */

s32 _malloc_r(s32, s32);                            /* extern */

s32 __malloc_lock(s32);                         /* extern */
s32 __malloc_unlock(s32);                       /* extern */
s32 func_001249A8(s32, s32, s32);                   /* extern */

s32 func_001246A0(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

extern s32 D_0045EC10;

INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_001246A0);
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
extern int errno_x00124788 __asm__("errno.NON_MATCHING");
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
INCLUDE_ASM("asm/nonmatchings/sdk/libc_001246A0", func_001249A8);
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
