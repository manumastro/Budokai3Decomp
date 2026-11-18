/* Draft (not built): func_00164388 at 0x00164388, size 0x68, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1675 -> 910
 * Original: asm/nonmatchings/cri/srd/func_00164388.s */

// func_00164388 00164388 -O1 -G0 ee-gcc 2.96: score 1675 -> 910
s32 func_0016FF70();                            /* extern */
s32 func_0016FFE8();                            /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00462F00;
extern s32 D_00462F20;

void func_00164388(u8 *arg0)
{
  int new_var;
  new_var = 4;
  func_0016FF70();
  if (arg0 == ((void *) 0))
  {
    scePrintf(&D_00462F00);
  }
  else
  {
    if ((*((s32 *) (((u8 *) arg0) + new_var))) != 1)
    {
      *((s32 *) (((u8 *) arg0) + 4)) = 1;
    }
    else
    {
    }
    scePrintf(&D_00462F20);
  }
  func_0016FFE8();
}
