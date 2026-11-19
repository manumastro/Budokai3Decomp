/* Draft (not built): func_00126120 at 0x00126120, size 0xFC, segment sdk/libc/kfiv_mprec (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1275 -> 780
 * Original: asm/nonmatchings/sdk/libc/kfiv_mprec/func_00126120.s */

// func_00126120 00126120 -O2 -G0 ee-gcc 2.96: score 1275 -> 780
s32 _Bfree(void *, s32 *);                  /* extern */
s32 *_i2b(void *, s32);                     /* extern */
s32 *_multadd(s32, s32);                    /* extern */
s32 *_multiply(void *, s32 *, s32 *);   /* extern */
extern s32 D_0045EC54;

s32 *func_00126120(u8 *arg0, s32 *arg1, s32 arg2)
{
  s32 *temp_a1;
  s32 *temp_v0_2;
  s32 *temp_v0_3;
  s32 *var_s0;
  s32 *var_s2;
  s32 *var_v0;
  s32 *var_v1;
  s32 new_var;
  s32 temp_v0;
  s32 var_s1;
  s32 var_v0_2;
  temp_v0 = arg2 & 3;
  var_s2 = arg1;
  if (temp_v0 == 0)
  {
    goto block_2;
  }
  var_s2 = _multadd(*((&D_0045EC54) + (temp_v0 * 4)), 0);
  block_2:
  var_s1 = arg2 >> 2;

  var_v0 = var_s2;
  if (var_s1 == 0)
  {
    goto block_16;
  }
  new_var = var_s1;
  var_s0 = *((s32 **) (((u8 *) arg0) + 0x48));
  var_v0_2 = 1;
  var_v0_2 = new_var & var_v0_2;
  if (var_s0 != ((void *) 0))
  {
 do { goto block_10; } while (0);
  }
  temp_v0_2 = _i2b(arg0, 0x271);
  var_s0 = temp_v0_2;
  *((s32 **) (((u8 *) arg0) + 0x48)) = temp_v0_2;
  *var_s0 = (void *) 0;
  goto block_9;
  block_6:
  if (var_v1 != ((void *) 0))
  {
    goto block_8;
  }

  temp_v0_3 = _multiply(arg0, var_s0, var_s0);
  var_v1 = temp_v0_3;
  *var_s0 = temp_v0_3;
  *var_v1 = (void *) 0;
  block_8:
  var_s0 = var_v1;

  block_9:
  var_v0_2 = var_s1 & 1;

  block_10:
  var_s1 = var_s1 >> 1;

  if (var_v0_2 == 0)
  {
    goto block_12;
  }
  temp_a1 = var_s2;
  var_s2 = _multiply(arg0, var_s2, var_s0);
  _Bfree(arg0, temp_a1);
  block_12:
  if (var_s1 == 0)
  {
    goto block_14;
  }

  var_v1 = *var_s0;
  goto block_6;
  block_14:
  var_v0 = var_s2;

  block_16:
  return var_v0;

}
