/* Draft (not built): func_001693C0 at 0x001693C0, size 0xC8, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 455 -> 10
 * Original: asm/nonmatchings/cri/htci/func_001693C0.s */

// func_001693C0 001693C0 -O2 -G0 ee-gcc 2.96: score 455 -> 10
s32 func_00168CD0(s32, s32);                        /* extern */
extern s32 D_00413D00;

void func_001693C0(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3)
{
  s32 temp_v0;
  s32 var_s0;
  u8 *var_s1;
  u8 *new_var;
  var_s0 = 0;
  if (arg3 > 0)
  {
    var_s1 = arg2;
    new_var = (u8 *) (&D_00413D00);
    loop_2:
    temp_v0 = ((*((s32 *) (new_var + 0xC))) * var_s0) + var_s0;

    var_s0 += 1;
    if (func_00168CD0(arg1, arg2 + (((*((s32 *) (new_var + 8))) * 8) + temp_v0)) == 0)
    {
      *((s32 *) (((u8 *) arg0) + 0)) = (s32) (*((s32 *) (((u8 *) var_s1) + 0)));
      *((s32 *) (((u8 *) arg0) + 4)) = (s32) (*((s32 *) (((u8 *) var_s1) + 4)));
      return;
    }
    var_s1 += 8;
    if (var_s0 >= arg3)
    {
      goto block_6;
    }
    goto loop_2;
  }
  block_6:
  *((s32 *) (((u8 *) arg0) + 4)) = 0;

  *((s32 *) (((u8 *) arg0) + 0)) = 0;
}
