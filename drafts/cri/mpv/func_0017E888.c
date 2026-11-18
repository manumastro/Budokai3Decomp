/* Draft (not built): func_0017E888 at 0x0017E888, size 0xC4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 525 -> 315
 * Original: asm/nonmatchings/cri/mpv/func_0017E888.s */

// func_0017E888 0017E888 -O2 -G0 ee-gcc 2.96: score 525 -> 315
s32 func_00178E38(void *, s32 *, s32);  /* extern */
s32 func_0017C1D8(void *);                      /* extern */
s32 func_0017C840(void *, s32, s32, s32); /* extern */
s32 func_0017C868(void *, s32, s32);    /* extern */
s32 func_0017E620();                            /* extern */
s32 func_0017E708(void *);                      /* extern */
extern s32 D_004814F0;

u8 *func_0017E888(u8 *arg0)
{
  s32 var_a1;
  s32 var_s1;
  u8 *new_var;
  var_s1 = 0;
 do { func_0017E620(); *((s32 *) (((u8 *) arg0) + 0x18C)) = 0; func_00178E38(arg0 + 0x190, &D_004814F0, 0x10); func_0017C1D8(arg0 + 0x250); func_0017E708(arg0 + 0x1D0); *((s32 *) (((u8 *) arg0) + 0x380)) = 0; new_var = arg0; *((s32 *) (((u8 *) new_var) + 0x384)) = 0; *((s32 *) (((u8 *) new_var) + 0x3A4)) = (s32) (*((s32 *) (((u8 *) new_var) + 0x1AC))); *((s32 *) (((u8 *) new_var) + 0x358)) = 0; *((s32 *) (((u8 *) new_var) + 0x35C)) = 0; *((s32 *) (((u8 *) new_var) + 0x360)) = 0; *((s32 *) (((u8 *) new_var) + 0x364)) = 0; } while (0);
  *((s32 *) (((u8 *) new_var) + 0x394)) = 0;
  var_a1 = 0;
  do
  {
    var_s1 += 1;
    func_0017C840(new_var, var_a1, 0, 0);
    var_a1 = var_s1;
  }
  while (var_s1 < 4);
  func_0017C868(new_var, 0, 0);
  *((s32 *) (((u8 *) new_var) + 0x188)) = 2;
  return new_var;
}
