/* Draft (not built): func_00165CF0 at 0x00165CF0, size 0x160, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 830 -> 695
 * Original: asm/nonmatchings/cri/dtx/func_00165CF0.s */

// func_00165CF0 00165CF0 -O2 -G0 ee-gcc 2.96: score 830 -> 695
s32 func_0010AB58(s32, s32);                    /* extern */
s32 func_0010AC98(s32, s32);                    /* extern */
s32 sceSifSetDma(void *, s32);                  /* extern */
extern s32 D_00411E2C;
extern s32 D_00411E38;

void func_00165CF0(u8 *arg0)
{
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_s1;
  s32 temp_v0;
  s32 temp_v1;
  D_00411E38 += 1;
  if (((*((s8 *) (((u8 *) arg0) + 1))) == 1) && ((*((s32 *) (((u8 *) arg0) + 8))) < (*((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x14)))) + 0x3C)))))
  {
    temp_a1 = *((s32 *) (((u8 *) arg0) + 0xC));
    func_0010AC98(temp_a1, (temp_a1 + (*((s32 *) (((u8 *) arg0) + 0x10)))) - 1);
    (*((s32 (**)(s32, s32, s32)) (((u8 *) arg0) + 0x20)))(*((s32 *) (((u8 *) arg0) + 0x24)), *((s32 *) (((u8 *) arg0) + 0xC)), *((s32 *) (((u8 *) arg0) + 0x10)));
    *((s8 *) (((u8 *) arg0) + 1)) = 0;
    *((s32 *) (((u8 *) arg0) + 8)) = (s32) (*((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x14)))) + 0x3C)));
  }
  if (((*((s32 *) (((u8 *) arg0) + 0))) & 0xFFFF00) == 0x10000)
  {
    temp_s1 = D_00411E2C;
    if (temp_s1 == 1)
    {
      (*((s32 (**)(s32, s32, s32)) (((u8 *) arg0) + 0x28)))(*((s32 *) (((u8 *) arg0) + 0x2C)), *((s32 *) (((u8 *) arg0) + 0xC)), *((s32 *) (((u8 *) arg0) + 0x10)));
      temp_v1 = (*((s32 *) (((u8 *) arg0) + 8))) + 1;
      temp_a1_2 = *((s32 *) (((u8 *) arg0) + 0xC));
      *((s32 *) (((u8 *) arg0) + 8)) = temp_v1;
      *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x14)))) + 0x3C)) = temp_v1;
      func_0010AB58(temp_a1_2, (temp_a1_2 + (*((s32 *) (((u8 *) arg0) + 0x10)))) - 1);
      temp_a1_3 = *((s32 *) (((u8 *) arg0) + 0xC));
      func_0010AC98(temp_a1_3, (temp_a1_3 + (*((s32 *) (((u8 *) arg0) + 0x10)))) + 0x3F);
      *((s32 *) (((u8 *) arg0) + 0x34)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x18)));
      *((s32 *) (((u8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0xC))) & 0x0FFFFFFF);
      *((s32 *) (((u8 *) arg0) + 0x3C)) = 0;
      *((s32 *) (((u8 *) arg0) + 0x38)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x1C)));
      temp_v0 = sceSifSetDma(arg0 + 0x30, 1);
      *((s8 *) (((u8 *) arg0) + 1)) = (s8) temp_s1;
      *((s32 *) (((u8 *) arg0) + 0x40)) = temp_v0;
    }
  }
}
