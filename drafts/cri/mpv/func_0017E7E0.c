/* Draft (not built): func_0017E7E0 at 0x0017E7E0, size 0x58, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 460 -> 220
 * Original: asm/nonmatchings/cri/mpv/func_0017E7E0.s */

// func_0017E7E0 0017E7E0 -O1 -G0 ee-gcc 2.96: score 460 -> 220
void *func_0017E838();                              /* extern */
void *func_0017E888(void *);                        /* extern */
s32 func_0017E9D0(void *, s32);             /* extern */
s32 func_0017EC18(void *);                          /* extern */

u8 *func_0017E7E0(void)
{
  u8 *temp_v0;
  u8 *var_v0;
  if (var_v0 != ((void *) 0))
  {
    var_v0 = func_0017E838();
    func_0017E9D0(var_v0, 0x3F8);
    temp_v0 = func_0017E888(var_v0);
    *((s32 *) (((u8 *) temp_v0) + 0x3B0)) = func_0017EC18(temp_v0);
    var_v0 = temp_v0;
  }
  return var_v0;
}
