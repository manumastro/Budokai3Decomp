/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/reent/lseekr.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member lseekr.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>

#include <errno.h>

#include <unistd.h>




long _lseek_r(Reent *ptr, int fd, long pos, int whence)
{
    long ret;
    errno = 0;
    ret = lseek(fd, pos, whence);
    if (ret == -1) {
        if (errno != 0) {
            ptr->err = errno;
        }
    }
    return ret;
}
