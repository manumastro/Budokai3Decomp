/* Draft (not built): func_00192508 at 0x00192508, size 0x34, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 660 -> 95
 * Original: asm/nonmatchings/cri/sfd/func_00192508.s */

// func_00192508 00192508 -O1 -G0 ee-gcc 2.96: score 660 -> 95


void func_00192508(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3)
{
  s32 new_var;
  new_var = *((s32 *) (((u8 *) arg2) + 0x10));
  *((s32 *) (((u8 *) arg0) + 0)) = (s32) (*((s32 *) (((u8 *) arg2) + 0)));
  *((s32 *) (((u8 *) arg0) + 4)) = (s32) (*((s32 *) (((u8 *) arg2) + 4)));
  *((s32 *) (((u8 *) arg0) + 8)) = (s32) (*((s32 *) (((u8 *) arg2) + 8)));
  *((s32 *) (((u8 *) arg0) + 0x20)) = arg3;
  *((s32 *) (((u8 *) arg0) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg2) + 0xC)));
  *((s32 *) (((u8 *) arg0) + 0x14)) = (s32) new_var;
  *((s32 *) (((u8 *) arg0) + 0x10)) = arg1;
}
