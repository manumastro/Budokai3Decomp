/* Draft (not built): func_001584C0 at 0x001584C0, size 0xAC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001584C0.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 func_001578A8();                            /* extern */
s32 func_00157990();                            /* extern */
s32 func_00157A60();                            /* extern */
s32 func_00157B30();                            /* extern */
s32 func_00157C00();                            /* extern */
s32 func_00157CD0();                            /* extern */
s32 func_00157DA0();                            /* extern */
s32 func_00170660(s32, s32);            /* extern */
s32 func_00170678(s32, s32);            /* extern */
s32 func_001709A8();                            /* extern */
extern s32 D_00405CA4;
extern s32 D_00405CA8;
extern s32 D_00405D48;
extern s32 D_0040D5D8;

void func_001584C0(void) {
    s32 temp_v0;

    temp_v0 = D_00405CA4 - 1;
    D_00405CA4 = temp_v0;
    if (temp_v0 == 0) {
        func_001578A8();
        func_00157990();
        func_00157A60();
        func_00157C00();
        func_00157B30();
        func_00157CD0();
        func_00157DA0();
        ChangeThreadPriority(D_00405D48, D_0040D5D8);
        func_00170660(0, 0);
        func_00170678(0, 0);
        D_00405CA8 = 0;
        func_001709A8();
    }
}
