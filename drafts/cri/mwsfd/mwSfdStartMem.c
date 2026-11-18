/* Draft (not built): mwSfdStartMem at 0x00182B80, size 0xAC, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 25 -> 20
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdStartMem.s */

// mwSfdStartMem 00182B80 -O2 -G0 ee-gcc 2.96: score 25 -> 20
s32 MWSFCRE_SetSupplySj(void *);                /* extern */
void **func_0016DBE0(s32, s32);                     /* extern */
s32 func_00182CB0(void *);                      /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 mw_sfd_start_ex(void *);                    /* extern */
extern s32 D_00465F90;

void mwSfdStartMem(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 **temp_a0;
  u8 **temp_v0;
  if (func_00183B38() == 0)
  {
    func_001870E8(&D_00465F90);
    return;
  }
  func_00182CB0(arg0);
  temp_a0 = *((u8 ***) (((u8 *) arg0) + 0x1F4));
  (*((s32 (**)(u8 **)) (((u8 *) (*temp_a0)) + 0xC)))(temp_a0);
  *((u8 ***) (((u8 *) arg0) + 0x1F4)) = (temp_v0 = func_0016DBE0(arg1, arg2));
  *((s32 *) (((u8 *) arg0) + 0x1F8)) = arg1;
  *((u8 ***) (((u8 *) arg0) + 0x1D0)) = temp_v0;
  *((s32 *) (((u8 *) arg0) + 0x1FC)) = arg2;
  mw_sfd_start_ex(arg0);
  MWSFCRE_SetSupplySj(arg0);
}
