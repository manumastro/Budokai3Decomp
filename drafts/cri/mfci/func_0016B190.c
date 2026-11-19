/* Draft (not built): func_0016B190 at 0x0016B190, size 0x100, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2420 -> 2105
 * Original: asm/nonmatchings/cri/mfci/func_0016B190.s */

// func_0016B190 0016B190 -O2 -G0 ee-gcc 2.96: score 2420 -> 2105
s32 func_0016B060(s32 *);                   /* extern */
s32 func_0016B310(void *);                      /* extern */
s32 memcmp(s32 *, s32 *, s32);      /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s32 D_004190E8;
extern s32 D_004645C8;
extern s32 D_004645F0;
extern s32 D_00464618;

u8 *func_0016B190(s32 arg0, s32 arg1)
{
  s32 *var_a0;
  u32 new_var;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_s0;
  s32 var_s0_2;
  memcmp(&D_004190E8, &D_004190E8, 0x168);
  if (arg0 != 0)
  {
    if (arg1 >= 0x400)
    {
      temp_v0 = arg0 & 3;
      var_s0 = arg0;
      if (temp_v0 != 0)
      {
        var_s0 = (arg0 - temp_v0) + 4;
      }
      var_s0_2 = var_s0 + 0x2C;
      memset((u8 *) var_s0, 0, 0x2C);
      temp_v0_2 = var_s0_2 & 3;
      *((s32 *) (((u8 *) var_s0) + 0)) = arg0;
      *((s32 *) (((u8 *) var_s0) + 4)) = arg1;
      if (temp_v0_2 != 0)
      {
        var_s0_2 = (var_s0_2 - temp_v0_2) + 4;
      }
      *((s32 *) (((u8 *) var_s0) + 8)) = var_s0_2;
      *((s32 *) (((u8 *) var_s0) + 0xC)) = (s32) (var_s0_2 + 0x180);
      new_var = (u32) (var_s0_2 + 0x300);
      func_0016B310((u8 *) var_s0);
      if (((u32) (arg0 + arg1)) >= new_var)
      {
        return (u8 *) var_s0;
      }
      var_a0 = &D_00464618;
      goto block_18;
    }
    var_a0 = &D_004645F0;
    goto block_18;
  }
  var_a0 = &D_004645C8;
  block_18:
  func_0016B060(var_a0);

  return (void *) 0;
}
