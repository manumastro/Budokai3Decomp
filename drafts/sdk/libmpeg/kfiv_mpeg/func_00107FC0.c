/* Draft (not built): func_00107FC0 at 0x00107FC0, size 0x18, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 165 -> 110
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107FC0.s */

// func_00107FC0 00107FC0 -O1 -G0 ee-gcc 2.9-991111-01: score 165 -> 110


s32 func_00107FC0(u8 *arg0, s64 arg1)
{
  u8 *temp_v1;
  int new_var;
 do { new_var = 0x40; temp_v1 = *((u8 **) (((u8 *) arg0) + new_var)); new_var = 1; *((s64 *) (((u8 *) temp_v1) + 0x90)) = arg1; *((s32 *) (0x8C + ((u8 *) temp_v1))) = new_var; } while (0);
  return new_var;
}
