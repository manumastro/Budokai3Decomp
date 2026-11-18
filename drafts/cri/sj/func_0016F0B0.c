/* Draft (not built): func_0016F0B0 at 0x0016F0B0, size 0x94, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2300 -> 1720
 * Original: asm/nonmatchings/cri/sj/func_0016F0B0.s */

// func_0016F0B0 0016F0B0 -O2 -G0 ee-gcc 2.96: score 2300 -> 1720
extern s32 D_004225A0;

void func_0016F0B0(s32 arg0, u8 *arg1)
{
  s32 temp_a0;
  u8 *new_var;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a0_5;
  temp_a0 = arg0 >> 4;
  temp_a0_2 = temp_a0 >> 4;
  *((u8 *) (((u8 *) arg1) + 6)) = (u8) (*((arg0 & 0xF) + (&D_004225A0)));
  temp_a0_3 = temp_a0_2 >> 4;
  temp_a0_4 = temp_a0_3 >> 4;
  *((u8 *) (((u8 *) arg1) + 5)) = (u8) (*((temp_a0 & 0xF) + (&D_004225A0)));
  temp_a0_5 = (short) (temp_a0_4 >> 4);
  *((u8 *) (((u8 *) arg1) + 4)) = (u8) (*((temp_a0_2 & 0xF) + (&D_004225A0)));
  *((u8 *) (((u8 *) arg1) + 3)) = (u8) (*((temp_a0_3 & 0xF) + (&D_004225A0)));
  *((u8 *) (((u8 *) arg1) + 2)) = (u8) (*((temp_a0_4 & 0xF) + (&D_004225A0)));
  new_var = (u8 *) arg1;
  *((u8 *) (((u8 *) arg1) + 1)) = (u8) (*((temp_a0_5 & 0xF) + (&D_004225A0)));
  *((u8 *) (new_var + 0)) = (u8) (*(((temp_a0_5 >> 4) & 0xF) + (&D_004225A0)));
}
