/* Draft (not built): func_00190F48 at 0x00190F48, size 0xD0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 785 -> 375
 * Original: asm/nonmatchings/cri/sfd/func_00190F48.s */

// func_00190F48 00190F48 -O2 -G0 ee-gcc 2.96: score 785 -> 375
s32 func_0018B8F0(void *, s32);                 /* extern */
s32 func_00191018(void *);                          /* extern */
s32 func_00191078(void *);                          /* extern */
s32 func_001957B8(void *);                          /* extern */
s32 func_001960E0(void *);                          /* extern */
s32 func_001999E0(s32);                         /* extern */
s32 func_0019A010(void *, s32);             /* extern */

s32 func_00190F48(u8 *arg0)
{
  s32 var_a1;
  s32 var_v0;
  u8 *temp_s1;
  u8 *temp_s2;
  temp_s1 = arg0 + 0xCC0;
  temp_s2 = *((u8 **) (((u8 *) arg0) + 0x1C70));
  if (func_001999E0(6) == 0)
  {
    var_a1 = func_00191018(arg0);
    goto block_3;
  }
  var_a1 = func_00191078(arg0);
  var_v0 = -1;
  var_v0 = var_a1;
  if (var_v0 >= 0)
  {
    block_3:
    if (var_a1 > 0)
    {
      func_0018B8F0(arg0, var_a1);
      *((s32 *) (((u8 *) temp_s2) + 0x88)) = (s32) ((*((s32 *) (((u8 *) temp_s2) + 0x88))) + 1);
      if (func_001957B8(arg0) != 0)
      {
        *((s32 *) (((u8 *) temp_s1) + 0x154)) = (s32) (func_001960E0(arg0) + 1);
      }
    }

    func_0019A010(temp_s1 + 0x3C, 0x7FFFFFFF);
    func_0019A010(temp_s1 + 0x68, -1);
    *((s32 *) (((u8 *) temp_s2) + 0x78)) = 0xC0;
    var_v0 = 0;
  }
  return var_v0;
}
