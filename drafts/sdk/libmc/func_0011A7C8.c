/* Draft (not built): func_0011A7C8 at 0x0011A7C8, size 0x58, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 350 -> 275
 * Original: asm/nonmatchings/sdk/libmc/func_0011A7C8.s */

// func_0011A7C8 0011A7C8 -O2 -G0 ee-gcc 2.9-991111-01: score 350 -> 275
s32 iSignalSema(s32, s32 *);                    /* extern */
extern s32 *D_00478FE8;
extern s32 *D_00478FEC;
extern s32 *D_00478FF0;

void func_0011A7C8(s32 arg0)
{
  s32 new_var;
  s32 temp_a0;
  temp_a0 = arg0 | 0x20000000;
  if (D_00478FE8 != ((void *) 0))
  {
    *D_00478FE8 = *((s32 *) (((u8 *) temp_a0) + 0));
  }
  if (D_00478FEC != ((void *) 0))
  {
    *D_00478FEC = *((s32 *) (((u8 *) temp_a0) + 4));
  }
  new_var = *((s32 *) (((u8 *) temp_a0) + 0x90));
  if (D_00478FF0 != ((void *) 0))
  {
    *D_00478FF0 = new_var;
  }
  iSignalSema(temp_a0, D_00478FE8);
}
