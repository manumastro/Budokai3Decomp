/* Draft (not built): func_00107F70 at 0x00107F70, size 0x50, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 2035 -> 780
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107F70.s */

// func_00107F70 00107F70 -O2 -G0 ee-gcc 2.9-991111-01: score 2035 -> 780
s32 func_00107348(s32, s32, s32);               /* extern */

void func_00107F70(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_a1;
  s32 new_var3;
  s32 new_var4[2];
  u8 *new_var2;
  u8 *temp_v1;
  s32 *new_var;
  new_var4[0] = arg2 * 0x10;
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x40));
  new_var4[1] = arg3 * 0x10;
  temp_a1 = (arg1 & 0x0FFFFFFF) | 0x20000000;
  new_var3 = temp_a1;
  new_var = (s32 *) (((u8 *) temp_v1) + 0xF0);
  new_var2 = (u8 *) temp_v1;
  *((s32 *) (new_var2 + 0xF4)) = new_var4[1];
  *((s32 *) (new_var2 + 0xEC)) = temp_a1;
  *((s32 *) (new_var2 + 0xF8)) = (s32) (arg2 * arg3);
  *new_var = new_var4[0];
  *((s32 *) (new_var2 + 0xC4)) = 0;
  func_00107348(new_var3, new_var4[0], new_var4[1]);
}
