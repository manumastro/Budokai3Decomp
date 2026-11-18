/* Draft (not built): func_00116D70 at 0x00116D70, size 0x58, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 380 -> 35
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116D70.s */

// func_00116D70 00116D70 -O2 -G0 ee-gcc 2.9-991111-01: score 380 -> 35
void *func_00116C18(s32, s32);                  /* extern */
extern s32 D_00478990;

s32 func_00116D70(s32 arg0, s32 arg1)
{
  u8 *new_var;
  if ((*((s32 *) (((u8 *) ((new_var = &D_00478990) + ((arg1 * 0x1C) + (arg0 * 0x70)))) + 0x10))) == 0)
  {
    return 0;
  }
  return *((s32 *) ((new_var = (u8 *) func_00116C18(arg0, 0)) + 0x58));
}
