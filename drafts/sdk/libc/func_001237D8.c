/* Draft (not built): func_001237D8 at 0x001237D8, size 0xAC, segment sdk/libc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 915 -> 355
 * Original: asm/nonmatchings/sdk/libc/func_001237D8.s */

// func_001237D8 001237D8 -O2 -G0 ee-gcc 2.96: score 915 -> 355
s32 func_00100218(s32);                         /* extern */
extern void *_impure_ptr;

void func_001237D8(s32 arg0)
{
  s32 new_var;
  s32 (**var_s1)();
  s32 (*temp_v0)();
  s32 (*temp_v0_2)(u8 *);
  s32 *var_s2;
  s32 var_s0;
  s32 var_s0_2;
  s32 *new_var2;
  var_s2 = *((s32 **) (((u8 *) _impure_ptr) + 0x148));
  if (var_s2 != ((void *) 0))
  {
    var_s0 = *((s32 *) (((u8 *) var_s2) + 4));
    loop_2:
    var_s0_2 = var_s0 - 1;

    if (var_s0_2 >= 0)
    {
      new_var2 = var_s2 + 8;
      var_s1 = (var_s0_2 * 4) + new_var2;
      do
      {
        temp_v0 = *var_s1;
        var_s1 -= 4;
        var_s0_2 -= 1;
        temp_v0();
      }
      while (var_s0_2 >= 0);
    }
    var_s2 = *var_s2;
    new_var = *((s32 *) (((u8 *) var_s2) + 4));
    if (var_s2 != ((void *) 0))
    {
      var_s0 = new_var;
      goto loop_2;
    }
  }
  temp_v0_2 = *((s32 (**)(u8 *)) (((u8 *) _impure_ptr) + 0x3C));
  if (temp_v0_2 != ((void *) 0))
  {
    temp_v0_2(_impure_ptr);
  }
  func_00100218(arg0);
}
