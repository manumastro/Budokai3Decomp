#include "common.h"

typedef unsigned char      u8_x00101868;
typedef signed int         s32_x00101868;
typedef unsigned int       u32_x00101868;
int scePrintf_x00101868(const char *, ...) __asm__("scePrintf");
s32_x00101868 sceDmaPause_x00101868(volatile u32_x00101868 *) __asm__("func_00102000");
extern const u8_x00101868 D_001533E0_x00101868[] __asm__("D_0045CD88");
void func_00101868_x00101868(volatile u32_x00101868 *chcr) __asm__("func_00101868");
/* WaitDma: from https://github.com/lombyte-project/Lombyte (src/sdk/dma/wait_dma.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101868_x00101868(volatile u32_x00101868 *chcr) {
    s32_x00101868 timeout_countdown;

    timeout_countdown = 0x1000000;
    while (*chcr & 0x100) {
        if (--timeout_countdown < 0) {
            scePrintf_x00101868(D_001533E0_x00101868);
            sceDmaPause_x00101868(chcr);
        }
    }
}
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
