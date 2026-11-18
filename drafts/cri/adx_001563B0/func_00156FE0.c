/* Draft (not built): func_00156FE0 at 0x00156FE0, size 0xD4, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00156FE0.s */

s32 ExitDeleteThread();                         /* extern */
s32 func_00157158();                            /* extern */
s32 func_001708A8();                                /* extern */
extern s32 D_00405CE4;
extern s32 D_00405CF8;
extern s64 D_00405D28;
extern s64 D_00405DA8;
extern s64 D_00405DB0;

void func_00156FE0(void) {
    s32 temp_v0;

    if (D_00405DA8 == 0) {
        do {
            D_00405D28 += 1;
            D_00405CF8 = 1;
            temp_v0 = func_001708A8();
            D_00405CF8 = 0;
            if (D_00405CE4 == 1) {
                D_00405CE4 = 0;
                func_00157158();
            }
            if (temp_v0 == 0) {
                func_00157158();
            }
        } while (D_00405DA8 == 0);
    }
    D_00405DB0 = 1;
    ExitDeleteThread();
}
