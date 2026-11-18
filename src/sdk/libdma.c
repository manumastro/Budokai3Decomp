#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libdma", func_00101868);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma", func_001018D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma", func_00101960);
void memclr(s8 *arg0, s32 arg1) {
    s32 var_v0;
    s8 *var_a0;

    var_a0 = arg0;
    var_v0 = arg1 - 1;
    if (arg1 != 0) {
        do {
            *var_a0 = 0;
            var_v0 -= 1;
            var_a0 += 1;
        } while (var_v0 != -1);
    }
}
