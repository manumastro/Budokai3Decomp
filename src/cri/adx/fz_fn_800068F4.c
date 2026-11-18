/* Taken from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_800068F4.c, CC0-1.0); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: fz:include */
#include "common.h"

#include "types.h"

extern u32 lbl_801A66E8;




u32 fn_800068F4(u32 value) {
    u32 old_value = lbl_801A66E8;
    lbl_801A66E8 = value;
    return old_value;
}
INCLUDE_PAD(4);
