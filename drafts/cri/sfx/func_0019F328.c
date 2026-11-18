/* Draft (not built): func_0019F328 at 0x0019F328, size 0x70, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F328.s */

s32 func_0019EB08();                            /* extern */
s32 func_0019F398();                                /* extern */
s32 func_0019F3A8();                            /* extern */
s32 func_0019FBE0();                            /* extern */
s32 func_0019FD70();                            /* extern */
extern s32 D_00426C18;
extern s32 D_00426C1C;
extern s32 D_00492A68;

void func_0019F328(void) {
    if (D_00426C18 <= 0) {
        D_00492A68 = func_0019F398();
        func_0019F3A8();
        func_0019FBE0();
        func_0019FD70();
        func_0019EB08();
        D_00426C1C = 0;
        D_00426C18 += 1;
    }
}
