/* Draft (not built): func_0015C378 at 0x0015C378, size 0x50, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 155 -> 145
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C378.s */

// func_0015C378 0015C378 -O2 -G0 ee-gcc 2.96: score 155 -> 145
s32 memset(void *, s32, s32, void *);   /* extern */

void func_0015C378(u8 *arg0)
{
  if ((*((s8 *) (((u8 *) arg0) + 0x2D6))) == 1)
  {
    *((s8 *) (((u8 *) arg0) + 0x2D6)) = 0;
    *((s32 *) (((u8 *) arg0) + 0x48)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x48))) + 0x24);
  }
  *((s16 *) (((u8 *) arg0) + 0x2E8)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x2EC)) = (*((s16 *) (((u8 *) arg0) + 0x2EA)) = -0x80);
  memset(arg0 + 0x2D7, 0, 0x10, arg0);
}
