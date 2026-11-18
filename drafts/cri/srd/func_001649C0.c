/* Draft (not built): func_001649C0 at 0x001649C0, size 0x68, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1670 -> 770
 * Original: asm/nonmatchings/cri/srd/func_001649C0.s */

// func_001649C0 001649C0 -O1 -G0 ee-gcc 2.96: score 1670 -> 770
s32 scePrintf(s32 *, u32 *, s32, s32); /* extern */
extern s32 D_004115D4;
extern u32 D_004115E8;
extern s32 D_00462FE8;

void func_001649C0(void)
{
  s32 *new_var;
  D_004115E8 = 0;
 do { loop_1: if (D_004115D4 == 1) { D_004115E8 += 1; if (((u32) D_004115E8) <= 0x19640000U) { goto loop_1; } new_var = &D_00462FE8; scePrintf(new_var, &D_004115E8, 0x19640000, 1); } } while (0);
}
