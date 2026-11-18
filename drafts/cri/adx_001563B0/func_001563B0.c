/* Draft (not built): func_001563B0 at 0x001563B0, size 0xD8, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001563B0.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_001540C0();                            /* extern */
s32 func_00154460();                            /* extern */
s32 func_001587E0();                            /* extern */
s32 func_00158B50();                            /* extern */
s32 func_0015C838();                            /* extern */
s32 func_0015E390();                            /* extern */
s32 func_0016A2E0();                            /* extern */
s32 func_0016DB90();                            /* extern */
s32 func_0016E0D0();                            /* extern */
s32 func_0016E8E0();                            /* extern */
s32 func_00170450(s32, s32);                /* extern */
s32 func_001709A8();                            /* extern */
extern s32 D_00404C00;
extern s32 D_00404C08;
extern s32 D_00404C10;
extern s32 D_00411E2C;

void func_001563B0(void) {
    s32 temp_v0;

    temp_v0 = D_00404C00 - 1;
    D_00404C00 = temp_v0;
    if (temp_v0 == 0) {
        D_00411E2C = 0;
        func_0015E390();
        func_001587E0();
        func_00154460();
        func_0015C838();
        func_0016A2E0();
        func_00152508();
        func_00170450(2, 1);
        func_00170450(4, D_00404C10);
        func_00170450(5, D_00404C08);
        func_001709A8();
        func_00158B50();
        func_001540C0();
        func_0016DB90();
        func_0016E0D0();
        func_0016E8E0();
        func_00152520();
        D_00411E2C = 1;
    }
}
