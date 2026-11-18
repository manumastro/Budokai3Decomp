/* Draft (not built): func_00114700 at 0x00114700, size 0xAC, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1035 -> 415
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114700.s */

// func_00114700 00114700 -O2 -G0 ee-gcc 2.9-991111-01: score 1035 -> 415
s32 FlushCache(s32);                        /* extern */
s32 func_00114630(s32, s32);                    /* extern */
s32 func_00114640(s32, s32 *, s32); /* extern */
s32 func_00114688(s32);                             /* extern */
s32 func_00114698();                                /* extern */
extern s32 D_003ECD58;
extern s32 D_003ED500;

void func_00114700(void)
{
  s32 *var_s1;
  s32 temp_a0;
  s32 temp_a1;
  u32 var_s2;
  s32 *new_var;
  if (func_00114698() != 0)
  {
    var_s2 = 2;
    new_var = &D_003ED500;
    var_s1 = (&D_003ED500) + 0x10;
    func_00114630(*((s32 *) (((u8 *) (&D_003ED500)) + 0)), *((s32 *) (((u8 *) new_var) + 4)));
    func_00114640(0x80074000, &D_003ECD58, 0x7A8);
    FlushCache(0);
    FlushCache(2);
    func_00114630(*((s32 *) (((u8 *) (&D_003ED500)) + 8)), *((s32 *) (((u8 *) (&D_003ED500)) + 0xC)));
    do
    {
      var_s2 += 1;
      temp_a0 = *var_s1;
      ;
      var_s1 += 8;
      func_00114630(temp_a0, func_00114688(*var_s1));
    }
    while (var_s2 < 3U);
  }
}
