#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libdma", func_00101868);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma", func_001018D8);
u32 func_00101960_x00101960(int arg0) __asm__("func_00101960");
u32 func_00101960_x00101960(int arg0)
{
  u32 var_a0;
  var_a0 = arg0;
  if ((var_a0 >> 0x1C) == 7)
  {
    var_a0 = var_a0 & 0x0FFFFFFF;
    var_a0 = var_a0 | 0x80000000;
  }
  return var_a0;
}
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
