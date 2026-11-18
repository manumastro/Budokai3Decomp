/* Draft (not built): func_00197BE8 at 0x00197BE8, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 200 -> 65
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197BE8.s */

// func_00197BE8 00197BE8 -O2 -G0 ee-gcc 2.96: score 200 -> 65
s32 (*func_001999E0(s32))(s32, s32, void *); /* extern */

void func_00197BE8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 (*temp_v0)(s32, s32, u8 *);
  u8 *temp_s0;
  temp_s0 = arg0 + 0x94C;
 do { *((s32 *) (((u8 *) temp_s0) + 4)) = (s32) ((*((s32 *) (((u8 *) temp_s0) + 4))) + arg1); temp_v0 = func_001999E0(0x25); if (temp_v0 != ((void *) 0)) { temp_v0(arg0, arg2, temp_s0); } } while (0);
}
