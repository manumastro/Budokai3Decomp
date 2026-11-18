/* Draft (not built): func_0016A7B0 at 0x0016A7B0, size 0x30, segment cri/lsc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/lsc/func_0016A7B0.s */

extern s32 (*D_00418684)(s32, s32);
extern s32 D_00418688;

void func_0016A7B0(s32 arg0) {
    if (D_00418684 != NULL) {
        D_00418684(D_00418688, arg0);
    }
}
