/* Draft (not built): func_00105AF8 at 0x00105AF8, size 0x1A0, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 3380 -> 2650
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00105AF8.s */

// func_00105AF8 00105AF8 -O1 -G0 ee-gcc 2.9-991111-01: score 3380 -> 2650
s32 func_001042C8(void *);                          /* extern */
s32 func_00104728(void *, s32);                 /* extern */
s32 func_00104810(void *, s32);                 /* extern */
s32 func_00106AA0(void *, s32);             /* extern */
s32 func_00106C00(void *, s32 *);           /* extern */
s32 func_00106C08();                            /* extern */
s32 func_00109738(void *, s32 *, s32);      /* extern */
s32 func_00109790(void *, s32 *, s32);      /* extern */
extern s32 D_0045CF60;
extern s32 D_0045CF88;

s32 func_00105AF8(u8 *arg0, s32 *arg2, s32 *arg3)
{
  s32 temp_v0;
  s32 temp_v0_2;
  int new_var;
  u8 *temp_s1;
  temp_s1 = M2C_ERROR();
  *((s32 *) (((u8 *) arg0) + 0x12C)) = 0;
  func_00106C08();
  new_var = 1;
  loop_2:
  if ((func_00104810(arg0, 0x18) != new_var) && ((*((s32 *) (((u8 *) arg0) + 0x878))) == 0))
  {
    func_00106AA0(arg0, 8);
    goto loop_2;
  }

  temp_v0 = func_00104810(arg0, 0x20);
  if (((u32) (temp_v0 - 0x101)) >= 0xAFU)
  {
    func_00109790(arg0, &D_0045CF60, temp_v0);
    return 2;
  }
  func_00106C00(arg0, &D_0045CF60);
  *((s32 *) (((u8 *) arg0) + 0x1C4)) = func_00104728(arg0, 5);
  if (func_00104728(arg0, 1) != 0)
  {
    func_00104728(arg0, 1);
    func_00106AA0(arg0, 7);
    loop_10:
    if (func_00104728(arg0, 1) != 0)
    {
      func_00106AA0(arg0, 8);
      goto loop_10;
    }

  }
  temp_v0_2 = func_001042C8(arg0);
  *arg3 = temp_v0_2;
  if ((*((s32 *) (((u8 *) arg0) + 0x12C))) != 0)
  {
    func_00109738(arg0, &D_0045CF88, temp_v0_2);
    return 1;
  }
  *arg2 = ((((temp_v0 & 0xFF) - 1) * (*((s32 *) (((u8 *) arg0) + 0x13C)))) + temp_v0_2) - 1;
  *arg3 = 1;
  *((s32 *) (((u8 *) arg0) + 0x1C0)) = 1;
  *((s32 *) (((u8 *) temp_s1) + 8)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x14)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x10)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 4)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x18)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0xC)) = 0;
  return 0;
}
