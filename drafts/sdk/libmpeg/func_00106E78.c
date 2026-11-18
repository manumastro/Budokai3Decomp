/* Draft (not built): func_00106E78 at 0x00106E78, size 0xCC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 355 -> 240
 * Original: asm/sdk/libmpeg.s */

// func_00106E78 00106E78 -O2 -G0 ee-gcc 2.9-991111-01: score 355 -> 240
s32 func_00109738(void *, s32 *, s32, void *); /* extern */
extern s32 D_0045D150;

void func_00106E78(u8 *arg0)
{
  s32 temp_v1;
  u8 *new_var;
  *((s32 *) 0x10002010) = ((*((s32 *) 0x10002010)) & 0xFF7FFFFF) | 0x800000;
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x87C));
  if (temp_v1 == 0)
  {
    *((u8 **) (((u8 *) arg0) + 0x830)) = (u8 *) 0x70003600;
    *((s32 *) (((u8 *) arg0) + 0x5A0)) = 0x70000000;
    *((s32 *) (((u8 *) arg0) + 0x5A4)) = 0x70001800;
    *((s32 *) (((u8 *) arg0) + 0x6E0)) = 0x70001B00;
    *((s32 *) (((u8 *) arg0) + 0x6E4)) = 0x70003300;
    *((s32 *) (((u8 *) arg0) + 0x820)) = 0;
    return;
  }
  if (temp_v1 == 1)
  {
    *((u8 **) (((u8 *) arg0) + 0x830)) = (u8 *) (arg0 + 0xE80);
    *((s32 *) (((u8 *) arg0) + 0x5A4)) = (s32) ((((s32) (arg0 + 0x880)) & 0x0FFFFFFF) | 0x30000000);
    new_var = arg0;
    *((s32 *) (((u8 *) arg0) + 0x6E4)) = (s32) ((((s32) (new_var + 0xB80)) & 0x0FFFFFFF) | 0x30000000);
    *((s32 *) (((u8 *) arg0) + 0x820)) = 0;
    *((s32 *) (((u8 *) arg0) + 0x5A0)) = 0;
    *((s32 *) (((u8 *) new_var) + 0x6E0)) = 0;
    return;
  }
  func_00109738(new_var, &D_0045D150, 0x800000, arg0);
}
