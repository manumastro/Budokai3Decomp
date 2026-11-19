/* Draft (not built): func_0019F468 at 0x0019F468, size 0x114, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 3805 -> 2880
 * Original: asm/nonmatchings/cri/sfx/func_0019F468.s */

// func_0019F468 0019F468 -O1 -G0 ee-gcc 2.96: score 3805 -> 2880
s32 func_0019EB68(s32, s32, s32 *);     /* extern */
void *func_0019F580();                              /* extern */
s32 func_0019F5D0(void *, s32, s32);            /* extern */
s32 func_0019F670(s32, s32, s32);                   /* extern */
s32 func_0019F680(void *);                      /* extern */
s32 func_0019F6D0(s32, s32, s32 *); /* extern */
s32 func_0019FDD0();                                /* extern */
extern s32 D_00426C20;
extern s32 D_00467D20;
extern s32 D_00467D50;
extern s32 D_00467D70;

u8 *func_0019F468(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *var_a2;
  s32 temp_v0_2;
  unsigned short new_var;
  s32 temp_v0_3;
  u8 *temp_v0;
  temp_v0 = func_0019F580();
  if (temp_v0 != ((void *) 0))
  {
    if (func_0019F670(arg1, arg2, arg3) != 1)
    {
      func_0019F6D0(0, 0, &D_00467D20);
      return (void *) 0;
    }
    func_0019F5D0(temp_v0, arg0, arg1);
    temp_v0_2 = func_0019FDD0();
    var_a2 = &D_00467D50;
    new_var = (temp_v0_3 = func_0019EB68(0, 0, &D_00467D50));
    if ((temp_v0_2 == 0) || ((*((s32 *) (((u8 *) temp_v0) + 0x24)) = temp_v0_2, new_var, var_a2, temp_v0_3 == 0)))
    {
      func_0019F6D0(0, 0, &D_00467D70);
      func_0019F680(temp_v0);
      return (void *) 0;
    }
    *((s32 *) (((u8 *) temp_v0) + 0x30)) = temp_v0_3;
    D_00426C20 += 1;
    return temp_v0;
  }
  return temp_v0;
}
