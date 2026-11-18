/* Draft (not built): func_0015C948 at 0x0015C948, size 0xCC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1760 -> 515
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C948.s */

// func_0015C948 0015C948 -O2 -G0 ee-gcc 2.96: score 1760 -> 515
s32 func_0015C840(s8 *, s32, s32, s32);         /* extern */
extern s32 D_00410208;
extern s32 D_0041020C;
extern s32 D_00410228;

s8 *func_0015C948(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_a1;
  s8 *var_s0;
  s8 *var_v0;
  var_s0 = (void *) 0;
  var_a1 = 0;
  if (D_0041020C > 0)
  {
    var_s0 = (D_00410208 * 0x60) + (&D_00410228);
    if ((*var_s0) != 0)
    {
 do { loop_3: var_a1 += 1; if (var_a1 < D_0041020C) { var_s0 = ((D_00410208 + var_a1) * 0x60) + (&D_00410228); if ((*var_s0) == 0) { } else { goto loop_3; } } } while (0);
    }
  }
  var_v0 = (void *) 0;
  if (var_a1 != D_0041020C)
  {
    func_0015C840(var_s0, arg0, arg1, arg2);
    var_v0 = var_s0;
  }
  return var_v0;
}
