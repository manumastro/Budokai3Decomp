/* Draft (not built): func_00189B30 at 0x00189B30, size 0x8C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 795 -> 260
 * Original: asm/nonmatchings/cri/sfd/func_00189B30.s */

// func_00189B30 00189B30 -O2 -G0 ee-gcc 2.96: score 795 -> 260
s32 func_00156488(s32, s32, s32, s32);          /* extern */
s32 func_0015FB50(s32, s32);                /* extern */
void *func_00189BC0();                              /* extern */
extern s32 func_00188C40;

u8 *func_00189B30(u8 *arg0)
{
  s32 temp_s1;
  u8 *temp_a2;
  u8 *temp_s0;
  u8 *var_v0;
  var_v0 = func_00189BC0();
  temp_a2 = var_v0;
  if (temp_a2 != ((void *) 0))
  {
    temp_s0 = *((u8 **) (((u8 *) arg0) + 0x1CB4));
    temp_s1 = *((s32 *) (((u8 *) temp_s0) + 0));
    if (((*((s32 *) (((u8 *) temp_s0) + 0x34))) == 0) && ((*((s32 *) (((u8 *) temp_a2) + 0))) != 0))
    {
      func_00156488(temp_s1, *((s32 *) (((u8 *) temp_a2) + 0xC)), *((s32 *) (temp_a2 + 0x10)), *((s32 *) (((u8 *) temp_a2) + 0x14)));
      func_0015FB50(temp_s1, 0);
      *((s32 *) (((u8 *) temp_s0) + 0x34)) = 1;
      ;
      *((s32 **) (((u8 *) temp_s0) + 0x3C)) = &func_00188C40;
    }
  }
  return (void *) 0;
  var_v0 = (void *) 0;
}
