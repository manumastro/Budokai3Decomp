/* Taken from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_80008F60.c, CC0-1.0); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: fz:include */
#include "common.h"

#include "types.h"

extern u32 fn_80008FB0(void);

extern u32 lbl_801A6734;




void fn_80008F60(void) {
    lbl_801A6734 = 0;
    fn_80008FB0();
}
INCLUDE_PAD(4);
