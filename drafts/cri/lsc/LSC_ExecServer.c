/* Draft (not built): LSC_ExecServer at 0x0016A3A0, size 0x128, segment cri/lsc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 355 -> 285
 * Original: asm/nonmatchings/cri/lsc/LSC_ExecServer.s */

// LSC_ExecServer 0016A3A0 -O2 -G0 ee-gcc 2.96: score 355 -> 285
s32 func_0015CB88(s32, s32, s32, s32);          /* extern */
s32 func_0015CC38(s32);                         /* extern */
s32 func_0015CCD8(s32, s32);                /* extern */
s32 func_0015CD48(s32);                         /* extern */
s32 func_0015CDD0(s32);                         /* extern */
s32 func_0015CE98(s32, s32);                    /* extern */
s32 func_0015D4A8(s32, s32, s32);               /* extern */
s32 func_0016A1C0(s32 *, s32, u32, s32);    /* extern */
u32 strlen(s32);                                    /* extern */
extern s32 D_00463EB8;

void LSC_ExecServer(u8 *arg0)
{
  s32 temp_s2;
  s32 var_a3;
  u32 temp_v0;
  u32 var_a1;
  u8 *temp_v0_2;
  u8 *temp_s1;
  temp_s1 = (arg0 + ((*((s32 *) (((u8 *) arg0) + 0x20))) << 5)) + 0x38;
  if ((*((s32 *) (((u8 *) arg0) + 0x24))) > 0)
  {
    func_0015CDD0(*((s32 *) (((u8 *) arg0) + 0x28)));
    func_0015CC38(*((s32 *) (((u8 *) arg0) + 0x28)));
    temp_s2 = *((s32 *) (((u8 *) temp_s1) + 4));
    temp_v0 = strlen(temp_s2);
    var_a1 = 0;
    var_a3 = 0;
    if (temp_v0 != 0)
    {
      do
      {
        temp_v0_2 = temp_s2 + var_a1;
        var_a1 += 1;
        var_a3 += *temp_v0_2;
      }
      while (var_a1 < temp_v0);
    }
    if (var_a3 != (*((s32 *) (((u8 *) temp_s1) + 8))))
    {
      func_0016A1C0(&D_00463EB8, *((s32 *) (((u8 *) temp_s1) + 4)), temp_v0, var_a3);
      return;
    }
    func_0015CB88(*((s32 *) (((u8 *) arg0) + 0x28)), *((s32 *) (((u8 *) temp_s1) + 4)), *((s32 *) (((u8 *) temp_s1) + 0xC)), *((s32 *) (((u8 *) temp_s1) + 0x10)));
    func_0015CE98(*((s32 *) (((u8 *) arg0) + 0x28)), *((s32 *) (((u8 *) temp_s1) + 0x14)));
    *((s32 *) (((u8 *) arg0) + 0x2C)) = (s32) (*((s32 *) (((u8 *) temp_s1) + 0x14)));
    func_0015CD48(*((s32 *) (((u8 *) arg0) + 0x28)));
    *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 0;
    *((s8 *) (((u8 *) arg0) + 2)) = 0;
    func_0015D4A8(*((s32 *) (((u8 *) arg0) + 0x28)), *((s32 *) (((u8 *) arg0) + 0x14)), *((s32 *) (((u8 *) arg0) + 0x18)));
    func_0015CCD8(*((s32 *) (((u8 *) arg0) + 0x28)), 0);
    *((s8 *) (((u8 *) arg0) + 2)) = 1;
    *((s32 *) (((u8 *) temp_s1) + 0x18)) = 1;
  }
}
