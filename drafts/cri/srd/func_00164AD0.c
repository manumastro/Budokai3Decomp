/* Draft (not built): func_00164AD0 at 0x00164AD0, size 0x38, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 415 -> 270
 * Original: asm/nonmatchings/cri/srd/func_00164AD0.s */

// func_00164AD0 00164AD0 -O2 -G0 ee-gcc 2.96: score 415 -> 270
s32 func_001649C0();                            /* extern */
extern s32 D_004115E4;

void func_00164AD0(s8 arg0)
{
  func_001649C0();
  D_004115E4 = (s32) arg0;
}

/* Similar function already in C: func_00182238 (src/cri/mwsfd.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
void func_00182238(s32 arg0) {
    *(s32 *)((u8 *)(func_00181FA8()) + 0x38) = arg0;
}
#endif
