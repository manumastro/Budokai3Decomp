/* Draft (not built): func_00164A28 at 0x00164A28, size 0x38, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 415 -> 165
 * Original: asm/nonmatchings/cri/srd/func_00164A28.s */

// func_00164A28 00164A28 -O2 -G0 ee-gcc 2.96: score 415 -> 165
s32 func_001649C0();                            /* extern */
extern s32 D_004115D8;

void func_00164A28(unsigned int arg0)
{
  volatile int new_var;
  volatile char new_var3;
  volatile int new_var2;
  func_001649C0();
 do { new_var3 = arg0; new_var2 = (new_var = (s32) new_var3); } while (0);
  D_004115D8 = new_var;
  new_var = new_var2;
}

/* Similar function already in C: func_00182238 (src/cri/mwsfd.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
void func_00182238(s32 arg0) {
    *(s32 *)((u8 *)(func_00181FA8()) + 0x38) = arg0;
}
#endif
