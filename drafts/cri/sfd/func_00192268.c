/* Draft (not built): func_00192268 at 0x00192268, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 100 -> 40
 * Original: asm/nonmatchings/cri/sfd/func_00192268.s */

// func_00192268 00192268 -O1 -G0 ee-gcc 2.96: score 100 -> 40


void func_00192268(u8 *arg0, u8 *arg1)
{
  u8 new_var;
  *((s32 *) (((u8 *) arg1) + 0)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x10)));
  *((s32 *) (((u8 *) arg1) + 4)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x1C)));
  *((s32 *) (((u8 *) arg1) + 8)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x20)));
  *((s32 *) (((u8 *) arg1) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x24)));
  *((s32 *) (((u8 *) arg1) + 0x10)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x28)));
  *((s32 *) (((u8 *) arg1) + 0x14)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x2C)));
  *((s32 *) (((u8 *) arg1) + 0x18)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x14)));
  new_var = *((u8 *) (((u8 *) arg0) + 0x54));
  *((s16 *) (((u8 *) arg1) + 0x1E)) = 0;
  *((s16 *) (((u8 *) arg1) + 0x1C)) = (s16) ((s8) new_var);
}
