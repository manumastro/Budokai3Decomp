/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/reent/fstatr.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libc/sys */
#include "common.h"

/* libc.a member fstatr.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>

#include <errno.h>

#include <sys/stat.h>




int _fstat_r(Reent *ptr, int fd, struct stat *pstat)
{
    int ret;
    errno = 0;
    ret = fstat(fd, pstat);
    if (ret == -1) {
        if (errno != 0) {
            ptr->err = errno;
        }
    }
    return ret;
}
INCLUDE_PAD(4);
