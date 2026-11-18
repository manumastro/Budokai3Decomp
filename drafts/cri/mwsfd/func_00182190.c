/* Draft (not built): func_00182190 at 0x00182190, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 900 -> 600
 * Original: asm/nonmatchings/cri/mwsfd/func_00182190.s */

// func_00182190 00182190 -O1 -G0 ee-gcc 2.96: score 900 -> 600
void *func_00181FA8();                              /* extern */
s32 func_00187CD8(s32);                     /* extern */
s32 memset(void *, s32, s32);           /* extern */

void func_00182190(u8 *arg0)
{
  s32 new_var2;
  u8 *temp_a1;
  u8 *new_var;
  u8 *temp_v0;
  temp_v0 = func_00181FA8();
  memset(temp_v0, 0, 0x162C);
  func_00187CD8(0);
  *((s32 *) (((u8 *) temp_v0) + 0x5C)) = 0;
  temp_a1 = temp_v0 + 4;
  if (arg0 != ((void *) 0))
  {
    new_var2 = (s32) (*((s32 *) (((u8 *) arg0) + 0xC)));
    *((s32 *) (((u8 *) temp_a1) + 4)) = (s32) (*((s32 *) (((u8 *) arg0) + 4)));
    *((s32 *) (((u8 *) temp_a1) + 0xC)) = new_var2;
    *((f32 *) (((u8 *) temp_v0) + 4)) = (f32) (*((f32 *) (((u8 *) arg0) + 0)));
    *((s32 *) (((u8 *) temp_a1) + 8)) = (s32) (*((s32 *) (((u8 *) arg0) + 8)));
  }
  else
  {
    new_var = (u8 *) temp_a1;
    *((s32 *) (new_var + 0xC)) = 0;
    *((f32 *) (((u8 *) temp_v0) + 4)) = 59.94f;
    *((s32 *) (((u8 *) temp_a1) + 8)) = 1;
    *((s32 *) (((u8 *) temp_a1) + 4)) = 1;
  }
  *((s32 *) (((u8 *) temp_v0) + 0x3C)) = 1;
  *((s32 *) (((u8 *) temp_v0) + 0x38)) = 1;
}
