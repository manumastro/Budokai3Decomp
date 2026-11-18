/* Draft (not built): func_00194DE8 at 0x00194DE8, size 0x13C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2485 -> 1760
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00194DE8.s */

// func_00194DE8 00194DE8 -O2 -G0 ee-gcc 2.96: score 2485 -> 1760
s32 func_00194D48(s32, s32, s32, s32);  /* extern */
s32 setD4_CHCR(s32, s32, s32);          /* extern */

s32 func_00194DE8(u8 *arg0)
{
  s32 temp_a0;
  s32 temp_a1;
  s32 temp_a1_2;
  int new_var;
  s32 temp_a2;
  s32 var_s2;
  s32 var_s2_2;
  u8 *var_v1;
  var_s2 = 0;
  *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x58)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x5C)) = 0;
  if ((*((s32 *) (((u8 *) arg0) + 0x54))) > 0)
  {
    var_v1 = *((u8 **) (((u8 *) arg0) + 0x50));
    do
    {
      if (arg0)
      {
        *((s32 *) (((u8 *) var_v1) + 0x10)) = 0;
        var_s2 += 1;
        *((s32 *) (((u8 *) var_v1) + 0x14)) = 0;
        *((s64 *) (((u8 *) var_v1) + 0)) = -1;
        *((s64 *) (((u8 *) var_v1) + 8)) = -1;
        var_v1 += 0x18;
      }
      else
      {
        *((s32 *) (((u8 *) var_v1) + 0x10)) = 0;
        var_s2 += 1;
        *((s32 *) (((u8 *) var_v1) + 0x14)) = 0;
        *((s64 *) (((u8 *) var_v1) + 0)) = -1;
        *((s64 *) (((u8 *) var_v1) + 8)) = -1;
        var_v1 += 0x18;
      }
    }
    while (var_s2 < (*((s32 *) (((u8 *) arg0) + 0x54))));
  }
  var_s2_2 = 0;
  if ((*((s32 *) (((u8 *) arg0) + 8))) > 0)
  {
    new_var = 0x0FFFFFFF;
    loop_5:
    temp_a0 = (*((s32 *) (((u8 *) arg0) + 4))) + (var_s2_2 * 0x10);

    temp_a1 = ((var_s2_2 << 0xB) + (*((s32 *) (((u8 *) arg0) + 0)))) & new_var;
    var_s2_2 += 1;
    func_00194D48(temp_a0, temp_a1, 3, 0x80);
    if (var_s2_2 < (*((s32 *) (((u8 *) arg0) + 8))))
    {
      goto loop_5;
    }
  }
  temp_a1_2 = *((s32 *) (((u8 *) arg0) + 4));
  func_00194D48(temp_a1_2 + (var_s2_2 * 0x10), temp_a1_2 & 0x0FFFFFFF, 2, 0);
  temp_a2 = (*((s32 *) (((u8 *) arg0) + 4))) & 0x0FFFFFFF;
  *((s32 *) 0x1000B420) = 0;
  *((s32 *) 0x1000B410) = (*((s32 *) (((u8 *) arg0) + 0))) & new_var;
  *((s32 *) 0x1000B430) = temp_a2;
  setD4_CHCR(5, 0x1000B430, temp_a2);
  return 1;
}
