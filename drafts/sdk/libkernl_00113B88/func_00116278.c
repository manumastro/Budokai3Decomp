/* Draft (not built): func_00116278 at 0x00116278, size 0x78, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 310 -> 120
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00116278.s */

// func_00116278 00116278 -O2 -G0 ee-gcc 2.9-991111-01: score 310 -> 120
s32 func_00115600(s32);                             /* extern */
extern s32 D_00478700;

s32 func_00116278(u32 arg0)
{
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v1;
 do { temp_s0 = (arg0 >> 8) * 0x10; if ((((s32) arg0) < 0) || ((arg0 ^ (*((s32 *) (((u8 *) temp_s0) + 4)))) & 0xFF)) { return 0x80008002; } } while (0);
  temp_v0 = func_00115600(*((s32 *) (((u8 *) temp_s0) + 4)));
  if (temp_v0 == 0)
  {
    temp_v1 = D_00478700;
    D_00478700 = temp_s0;
    *((s32 *) (((u8 *) temp_s0) + 0)) = temp_v1;
    *((s32 *) (((u8 *) temp_s0) + 4)) = 0;
  }
  return temp_v0;
}
