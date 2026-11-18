/* Draft (not built): func_00151650 at 0x00151650, size 0x140, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1710 -> 1470
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151650.s */

// func_00151650 00151650 -O1 -G0 ee-gcc 2.96: score 1710 -> 1470
s32 func_00151300(void *);                      /* extern */
s32 func_001514C8(void *);                      /* extern */
s32 func_00161A88(void *);                          /* extern */
s32 func_00161B68(void *);                      /* extern */
s32 func_00161B98(void *);                      /* extern */
extern s32 (*D_00401094)(void *, s16, s16 *, s32);

void func_00151650(u8 *arg0)
{
  s16 *temp_a2;
  s16 temp_a1;
  s32 temp_a3;
  s32 temp_a3_2;
  s32 var_s2;
  s32 var_v1;
  u8 *temp_s1;
  var_v1 = *((s32 *) (((u8 *) arg0) + 4));
  if (var_v1 == 1)
  {
    if (!(func_00161A88(*((u8 **) (((u8 *) arg0) + 8))) != 0))
    {
      (*((s32 (**)(s32, u8 *, u8 *, u8 *)) (((u8 *) arg0) + 0x78)))(*((s32 *) (((u8 *) arg0) + 0x7C)), arg0 + 0x68, arg0 + 0x6C, arg0 + 0x70);
      func_00151300(arg0);
      *((s32 *) (((u8 *) arg0) + 4)) = 2;
      var_v1 = 2;
    }
    else
    {
      var_v1 = *((s32 *) (((u8 *) arg0) + 4));
    }
  }
  if (var_v1 == 2)
  {
    func_00161B98(*((u8 **) (((u8 *) arg0) + 8)));
    if (func_00161A88(*((u8 **) (((u8 *) arg0) + 8))) == 3)
    {
      if ((*((s32 *) (((u8 *) arg0) + 0xE8))) != 0)
      {
        temp_s1 = *((u8 **) (((u8 *) arg0) + 8));
        var_s2 = 0;
        if (((*((s32 *) (((u8 *) temp_s1) + 0x10))) << 5) > 0)
        {
          do
          {
            temp_a3 = var_s2 * 2;
            temp_a2 = temp_a3 + (*((s32 *) (((u8 *) temp_s1) + 0x20)));
            temp_a1 = *temp_a2;
            temp_a3_2 = (*((s32 *) (((u8 *) temp_s1) + 0x24))) + temp_a3;
            var_s2 += 1;
            D_00401094(arg0, temp_a1, temp_a2, temp_a3_2);
          }
          while (var_s2 < ((*((s32 *) (((u8 *) temp_s1) + 0x10))) << 5));
        }
      }
      func_001514C8(arg0);
      func_00161B68(*((u8 **) (((u8 *) arg0) + 8)));
      (*((s32 (**)(s32, s32, s32)) (((u8 *) arg0) + 0x80)))(*((s32 *) (((u8 *) arg0) + 0x84)), *((s32 *) (((u8 *) arg0) + 0x94)), *((s32 *) (((u8 *) arg0) + 0x90)));
      *((s32 *) (((u8 *) arg0) + 4)) = 3;
    }
  }
}
