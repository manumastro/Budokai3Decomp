/* Draft (not built): func_001167D0 at 0x001167D0, size 0x90, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 755 -> 605
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_001167D0.s */

// func_001167D0 001167D0 -O2 -G0 ee-gcc 2.9-991111-01: score 755 -> 605
s32 func_0010D420(s32);                     /* extern */
s32 func_00117AD8(s32);                     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EDD00;
extern s32 D_00478940;
extern s32 D_00478B80;

s32 func_001167D0(void)
{
  s32 var_v0;
  s32 *new_var;
  func_00117AD8(0);
  new_var = &D_00478B80;
  *((s32 *) (((u8 *) new_var) + 0)) = 0xF;
  var_v0 = 0;
  if (sceSifCallRpc(&D_00478940, 1, 0, new_var, 0) >= 0)
  {
    func_0010D420(0x80000019);
    var_v0 = *((s32 *) (((u8 *) new_var) + 0xC));
    if ((*((s32 *) (((u8 *) new_var) + 0xC))) == 1)
    {
      D_003EDD00 = 0;
      var_v0 = *((s32 *) (((u8 *) new_var) + 0xC));
    }
    return var_v0;
  }
}
