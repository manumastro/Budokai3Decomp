/* Draft (not built): func_0015C200 at 0x0015C200, size 0x64, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1245 -> 450
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C200.s */

// func_0015C200 0015C200 -O1 -G0 ee-gcc 2.96: score 1245 -> 450
s32 func_0015A8A0(s32);                             /* extern */
s32 func_0015A940(s32);                         /* extern */

void func_0015C200(u8 *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  *((s32 *) (((u8 *) arg0) + 0x44)) = arg1;
  temp_v0 = *((s32 *) (((u8 *) arg0) + 0x80));
  if (temp_v0 != 0)
  {
    func_0015A940(temp_v0);
  }
  temp_v0 = func_0015A8A0(*((s32 *) (((u8 *) arg0) + 0x44)));
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x84));
  *((s32 *) (((u8 *) arg0) + 0x80)) = temp_v0;
  if (temp_v1 != 0)
  {
    func_0015A940(temp_v1);
  }
  *((s32 *) (((u8 *) arg0) + 0x84)) = func_0015A8A0(*((s32 *) (((u8 *) arg0) + 0x44)));
}
