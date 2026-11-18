/* Draft (not built): func_00166150 at 0x00166150, size 0x30, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dtx/func_00166150.s */

extern s32 (*D_00412A54)(s32, s32);
extern s32 D_00412A58;

void func_00166150(s32 arg0) {
    if (D_00412A54 != NULL) {
        D_00412A54(D_00412A58, arg0);
    }
}
