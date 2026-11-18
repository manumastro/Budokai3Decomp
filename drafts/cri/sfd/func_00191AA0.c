/* Draft (not built): func_00191AA0 at 0x00191AA0, size 0xDC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 495 -> 305
 * Original: asm/nonmatchings/cri/sfd/func_00191AA0.s */

// func_00191AA0 00191AA0 -O2 -G0 ee-gcc 2.96: score 495 -> 305
s32 func_00191B80(s32, void *, s32);            /* extern */
s32 func_00191C40(s32, void *, s32, s32);       /* extern */
s32 func_00199818(s32, s32, s32);       /* extern */
s32 func_001999E0(s32);                         /* extern */

void func_00191AA0(s32 arg0, u8 *arg1, s32 arg2, s32 arg3)
{
  s32 var_s0;
  int new_var;
  var_s0 = func_001999E0(0x34);
  if (var_s0 == 0)
  {
    if (arg2 < 0)
    {
      if ((*((s32 *) (((u8 *) arg1) + 0x30))) != 0)
      {
        if ((*((s8 *) (((u8 *) arg1) + 0x57))) == 0)
        {
          new_var = arg3 != 0;
          if (new_var && (func_00191B80(arg0, arg1, 1) != 0))
          {
            goto block_6;
          }
        }
        else
        {
          goto block_8;
        }
      }
      else
      {
        goto block_7;
      }
    }
    else
    {
      block_6:
      block_7:
      block_8:
      var_s0 = 1;



      func_00199818(arg0, 0x34, 1);
    }
  }
  if (var_s0 == 1)
  {
    func_00191C40(arg0, arg1, arg2, arg3);
  }
}
