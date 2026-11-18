/* Draft (not built): func_00189E50 at 0x00189E50, size 0x40, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 260 -> 210
 * Original: asm/nonmatchings/cri/sfd/func_00189E50.s */

// func_00189E50 00189E50 -O2 -G0 ee-gcc 2.96: score 260 -> 210
s32 func_00189E90(s32);                         /* extern */
s32 func_001999E0(s32);                         /* extern */

void func_00189E50(s32 arg0)
{
  s32 new_var;
  if (func_001999E0(new_var) != 0)
  {
    new_var = 6;
    new_var = arg0;
    func_00189E90(new_var);
  }
}
