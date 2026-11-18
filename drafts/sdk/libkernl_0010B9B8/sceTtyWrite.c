/* Draft (not built): sceTtyWrite at 0x0010B9B8, size 0x174, segment sdk/libkernl_0010B9B8 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 3595 -> 2750
 * Original: asm/sdk/libkernl_0010B9B8.s */

// sceTtyWrite 0010B9B8 -O2 -G0 ee-gcc 2.9-991111-01: score 3595 -> 2750
s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 sceDeci2Poll(s32);                          /* extern */
s32 sceDeci2ReqSend(s32, s8, s32, s32);         /* extern */
extern s32 D_00471590;
extern s32 D_004715C0;

s32 sceTtyWrite(s8 *arg0, s32 arg1)
{
  s32 temp_a2;
  s32 temp_s6;
  s32 var_s1;
  s32 var_s2;
  s32 var_s4;
  s32 *new_var;
  s32 var_v0;
  s8 *var_s0;
  u8 *var_a0;
  var_s4 = 0;
  var_s2 = arg1;
  var_s1 = 0;
  var_s0 = arg0;
  var_v0 = -1;
  new_var = &D_00471590;
  if ((*((s32 *) (((u8 *) new_var) + 0xC))) == 0)
  {
    temp_s6 = DI();
    *((s32 *) (((u8 *) (&D_00471590)) + 0xC)) = 1;
    temp_a2 = ((s32) (&D_004715C0)) | 0x20000000;
    *((s32 *) (((u8 *) (&D_00471590)) + 0x10)) = temp_a2;
    var_a0 = temp_a2 + 0xC;
    loop_2:
    var_s2 -= 1;

    if (var_s2 != (-1))
    {
      if ((*var_s0) == 0xA)
      {
        *var_a0 = 0xD;
        var_s1 += 1;
        var_a0 += 1;
        if (var_s1 < 0x100)
        {
          goto block_6;
        }
      }
      else
      {
        block_6:
        *var_a0 = (u8) (*var_s0);

        var_s1 += 1;
        var_s0 += 1;
        var_a0 += 1;
        var_s4 += 1;
        if (var_s1 < 0x100)
        {
          goto loop_2;
        }
      }
    }
    *((s32 *) (((u8 *) (&D_00471590)) + 4)) = (s32) (var_s1 + 0xC);
    *((s16 *) (((u8 *) temp_a2) + 0)) = (s16) (*((s32 *) (((u8 *) new_var) + 4)));
    if (sceDeci2ReqSend(*((s32 *) (((u8 *) (&D_00471590)) + 0)), *((s8 *) (((u8 *) temp_a2) + 7)), temp_a2, 0xA) < 0)
    {
      *((s32 *) (((u8 *) (&D_00471590)) + 0xC)) = 0;
      var_v0 = -1;
      if (temp_s6 != 0)
      {
        EI();
        return -1;
      }
      return var_v0;
    }
    if ((*((s32 *) (((u8 *) (&D_00471590)) + 0xC))) != 0)
    {
      do
      {
        sceDeci2Poll(*((s32 *) (((u8 *) (&D_00471590)) + 0)));
      }
      while ((*((s32 *) (((u8 *) new_var) + 0xC))) != 0);
    }
    var_v0 = var_s4;
    if (temp_s6 != 0)
    {
      EI();
      var_v0 = var_s4;
    }
    return var_v0;
  }
  return var_v0;
}
