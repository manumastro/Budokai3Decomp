/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/cache.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a member cache.o */
#include <libkernl_internal.h>

#include <eekernel.h>




void iSyncDCache(int start, int end)
{
    _sceSDC(start & 0xFFFFFFC0, end & 0xFFFFFFC0);
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_cache", _sceIDC);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_cache", func_0010AC98);


void iInvalidDCache(int start, int end)
{
    _sceIDC(start & 0xFFFFFFC0, end & 0xFFFFFFC0);
}
INCLUDE_PAD(4);
