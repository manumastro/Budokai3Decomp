#include "common.h"

struct Reent_x001241C8;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x001241C8;
struct Reent_x001241C8;
typedef struct Glue_x001241C8 {
    struct Glue_x001241C8 *next;
    int niobs;
    struct Fil_x001241C8 *iobs;
} Glue_x001241C8;
typedef struct Fil_x001241C8 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x001241C8 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x001241C8 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x001241C8 lb;
    int blksize;
    int offset;
    struct Reent_x001241C8 *data;
} Fil_x001241C8;
struct _Bigint_x001241C8 {
    struct _Bigint_x001241C8 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x001241C8 {
    int err;
    Fil_x001241C8 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x001241C8 *result;
    int result_k;
    struct _Bigint_x001241C8 *p5s;
    struct _Bigint_x001241C8 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x001241C8 glue;
    Fil_x001241C8 sf[3];
} Reent_x001241C8;
struct stat_x001241C8;
extern int errno_x001241C8 __asm__("errno");
struct stat_x001241C8 {
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
int fstat_x001241C8(int fd, struct stat_x001241C8 *st) __asm__("fstat");
int _fstat_r_x001241C8(Reent_x001241C8 *ptr, int fd, struct stat_x001241C8 *pstat) __asm__("_fstat_r");
/* _fstat_r_x001241C8: from https://github.com/nathanialf/ico-pc (sce/libc/reent/fstatr.c, MIT); ee-gcc 2.96 -O2 -G0 */
int _fstat_r_x001241C8(Reent_x001241C8 *ptr, int fd, struct stat_x001241C8 *pstat)
{
    int ret;
    errno_x001241C8 = 0;
    ret = fstat_x001241C8(fd, pstat);
    if (ret == -1) {
        if (errno_x001241C8 != 0) {
            ptr->err = errno_x001241C8;
        }
    }
    return ret;
}
INCLUDE_PAD(4);
