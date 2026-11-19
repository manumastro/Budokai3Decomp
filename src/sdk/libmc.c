#include "common.h"

s32 DeleteSema(s32);                            /* extern */
s32 func_0011A700(s32, s32, s32);   /* extern */
extern s32 D_003EF94C;
extern s32 D_003EF950;

INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_00119CB0);
s32 func_00119ED8(void) {
    if (D_003EF94C >= 0) {
        func_0011A700(0, 0, 0);
        DeleteSema(D_003EF94C);
        D_003EF94C = -1;
        DeleteSema(D_003EF950);
    }
    return 1;
}
s32 iSignalSema_x00119F30(s32) __asm__("iSignalSema");
extern s32 D_003EF950_x00119F30 __asm__("D_003EF950");
void func_00119F30_x00119F30(void) __asm__("func_00119F30");
void func_00119F30_x00119F30(void) {
    iSignalSema_x00119F30(D_003EF950_x00119F30);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_00119F40);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A000);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A0C0);
int sceMcOpen_x0011A1E8(int port, int slot, char *name, int flags) __asm__("func_0011A0C0");
extern int mcFunc_x0011A1E8 __asm__("D_003EF948");
int sceMcOpen_x0011A1E8(int port, int slot, char *name, int flags) __asm__("func_0011A0C0");
int func_0011A1E8_x0011A1E8(int port, int slot, char *name) __asm__("func_0011A1E8");
/* sceMcMkdir: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libmc/libmc.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A1E8_x0011A1E8(int port, int slot, char *name)
{
    int ret = sceMcOpen_x0011A1E8(port, slot, name, 0x40);
    if (ret == 0) {
        mcFunc_x0011A1E8 = 0xB;
    }
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A220);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A2E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A3C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A470);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A588);
s32 PollSema_x0011A700(s32) __asm__("PollSema");
s32 SignalSema_x0011A700(s32) __asm__("SignalSema");
s32 WaitSema_x0011A700(s32) __asm__("WaitSema");
extern s32 D_003EF948_x0011A700 __asm__("D_003EF948");
extern s32 D_003EF94C_x0011A700 __asm__("D_003EF94C");
extern s32 D_003EF950_x0011A700 __asm__("D_003EF950");
extern s32 D_0047A580_x0011A700 __asm__("D_0047A580");
s32 func_0011A700_x0011A700(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0011A700");
s32 func_0011A700_x0011A700(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_s0;
  void *new_var;
  s32 var_s0;
  if (D_003EF948_x0011A700 == 0)
  {
    return -1;
  }
  var_s0 = 0;
  var_s0 = PollSema_x0011A700(D_003EF950_x0011A700) < var_s0;
  new_var = (void *) 0;
  if ((arg0 == 0) && (var_s0 != 0))
  {
    var_s0 = 0;
    WaitSema_x0011A700(D_003EF950_x0011A700);
  }
  temp_s0 = var_s0 == 0;
  if (arg1 != new_var)
  {
    *arg1 = D_003EF948_x0011A700;
  }
  if (temp_s0 != 0)
  {
    D_003EF948_x0011A700 = 0;
    if (arg2 != ((void *) 0))
    {
      *arg2 = D_0047A580_x0011A700;
    }
    SignalSema_x0011A700(D_003EF94C_x0011A700);
  }
  return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A7C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A820);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011A9A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AA10);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AB60);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011ABF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AD30);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AE00);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AF20);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AFE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B1B0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B308);
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011B3D8);
