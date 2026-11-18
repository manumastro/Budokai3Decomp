/* Draft (not built): func_00108050 at 0x00108050, size 0x18, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 120 -> 115
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00108050.s */

// func_00108050 00108050 -O1 -G0 ee-gcc 2.9-991111-01: score 120 -> 115


s32 func_00108050(u8 *arg0, s64 arg1)
{
  s64 *new_var;
  u8 *temp_a2;
  ;
  *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x40)))) + 0x108)) = 1;
  new_var = (s64 *) (((u8 *) temp_a2) + 0x100);
  *new_var = arg1;
  return 1;
}
