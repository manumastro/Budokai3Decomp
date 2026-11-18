/* Draft (not built): func_00163EE8 at 0x00163EE8, size 0xA0, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1560 -> 1275
 * Original: asm/nonmatchings/cri/srd/func_00163EE8.s */

// func_00163EE8 00163EE8 -O1 -G0 ee-gcc 2.96: score 1560 -> 1275
s32 func_00163E30();                            /* extern */
s32 func_0016FF70();                            /* extern */
s32 func_0016FFE8();                            /* extern */
s32 scePrintf(s32 *, void *, s8 *);         /* extern */
extern s8 D_00411598;
extern s32 D_004115FC;
extern s32 D_00462E80;
extern s32 D_00462EC0;

void func_00163EE8(u8 *arg0)
{
  s8 temp_a0;
  s32 *new_var;
  func_0016FF70();
  if (arg0 != (&D_00411598))
  {
    scePrintf(&D_00462E80, arg0, &D_00411598);
  }
  else
  {
    temp_a0 = *((s8 *) (((u8 *) arg0) + 2));
    if (((temp_a0 != 0) && (temp_a0 != 3)) && (temp_a0 != 9))
    {
      scePrintf(new_var, arg0, &D_00411598);
    }
    func_00163E30();
    D_00411598 = 0;
    new_var = &D_00462EC0;
    D_004115FC += 1;
  }
  func_0016FFE8();
}
