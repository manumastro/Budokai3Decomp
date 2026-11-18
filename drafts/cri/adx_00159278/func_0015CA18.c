/* Draft (not built): func_0015CA18 at 0x0015CA18, size 0xCC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1760 -> 815
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015CA18.s */

// func_0015CA18 0015CA18 -O2 -G0 ee-gcc 2.96: score 1760 -> 815
s32 func_0015C840(s8 *, s32, s32, s32);         /* extern */
extern s32 D_00410210;
extern s32 D_00410214;
extern s32 D_00410228;

s8 *func_0015CA18(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_a1;
  s8 *var_s0;
  s8 *var_v0;
  var_s0 = (void *) 0;
  var_a1 = 0;
  if (D_00410214 > 0)
  {
    var_s0 = (D_00410210 * 0x60) + (&D_00410228);
    if (inline_fn(var_s0) != 0)
    {
 do { loop_3: var_a1 += 1; if (var_a1 < D_00410214) { var_s0 = ((D_00410210 + var_a1) * 0x60) + (&D_00410228); if (inline_fn(var_s0) == 0) { } else { goto loop_3; } } } while (0);
    }
  }
  var_v0 = (void *) 0;
  if (var_a1 != D_00410214)
  {
    func_0015C840(var_s0, arg0, arg1, arg2);
    var_v0 = var_s0;
  }
  return var_v0;
}
