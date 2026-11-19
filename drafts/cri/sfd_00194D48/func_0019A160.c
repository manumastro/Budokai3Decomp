/* Draft (not built): func_0019A160 at 0x0019A160, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1015 -> 770
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A160.s */

// func_0019A160 0019A160 -O1 -G0 ee-gcc 2.96: score 1015 -> 770
s32 func_0019A1C8(s32);                         /* extern */
extern s32 D_00426A90;

void func_0019A160(void)
{
  s32 *var_s0;
  s32 temp_v0;
  s32 var_s1;
  var_s1 = 7;
  D_00426A90 += 1;
  do
  {
    temp_v0 = *var_s0;
    var_s0 += 4;
    if (temp_v0 != 0)
    {
      func_0019A1C8(temp_v0);
    }
    var_s1 -= 1;
  }
  while (var_s1 >= 0);
  var_s0 = (&D_00426A90) + 0x54;
}

/* Similar function already in C: cvFsExecServer (src/cri/adx/fz_cvFsExecServer.c), similarity 0.62.
 * It is the template below (not built). */
#if 0
void cvFsExecServer(void) {
    int i;
    CvFsInterface *interface;
    for (i = 0; i < 32; i++) {
        interface = lbl_80187574[i].interface;
        if (interface != ((void *)0) && interface->ExecServer != ((void *)0)) {
            interface->ExecServer();
        }
    }
}
#endif
