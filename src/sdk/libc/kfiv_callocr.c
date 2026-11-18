/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdlib/callocr.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member callocr.o */
#include <string.h>

#include <reent.h>

#include <stdlib.h>

#include <libc_internal.h>

#define SIZE_SZ (sizeof(INTERNAL_SIZE_T))

#define mem2chunk(mem) ((mchunkptr)((char *)(mem) - 2 * SIZE_SZ))

#define SIZE_BITS 0x3

#define chunksize(p) ((p)->size & ~(SIZE_BITS))

#define MALLOC_ZERO(charp, nbytes)                                                                 \
    do {                                                                                           \
        INTERNAL_SIZE_T mzsz = (nbytes);                                                           \
        if (mzsz <= 9 * sizeof(mzsz)) {                                                            \
            INTERNAL_SIZE_T *mz = (INTERNAL_SIZE_T *)(charp);                                      \
            if (mzsz >= 5 * sizeof(mzsz)) {                                                        \
                *mz++ = 0;                                                                         \
                *mz++ = 0;                                                                         \
                if (mzsz >= 7 * sizeof(mzsz)) {                                                    \
                    *mz++ = 0;                                                                     \
                    *mz++ = 0;                                                                     \
                    if (mzsz >= 9 * sizeof(mzsz)) {                                                \
                        *mz++ = 0;                                                                 \
                        *mz++ = 0;                                                                 \
                    }                                                                              \
                }                                                                                  \
            }                                                                                      \
            *mz++ = 0;                                                                             \
            *mz++ = 0;                                                                             \
            *mz = 0;                                                                               \
        } else                                                                                     \
            memset((charp), 0, mzsz);                                                              \
    } while (0)




void *_calloc_r(Reent *rptr, unsigned int n, unsigned int elem_size)
{
    mchunkptr p;
    INTERNAL_SIZE_T csz;
    INTERNAL_SIZE_T sz = n * elem_size;
    void *mem = _malloc_r(rptr, sz);

    if (mem == 0) {
        return 0;
    } else {
        p = mem2chunk(mem);
        csz = chunksize(p);
        MALLOC_ZERO(mem, csz - SIZE_SZ);
        return mem;
    }
}
INCLUDE_PAD(4);
