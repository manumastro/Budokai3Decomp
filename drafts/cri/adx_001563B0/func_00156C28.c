/* Draft (not built): func_00156C28 at 0x00156C28, size 0x98, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00156C28.s */

s32 ExitDeleteThread();                         /* extern */
s32 func_00157158();                            /* extern */
s32 func_00170818();                            /* extern */
extern s32 D_00405CEC;
extern s64 D_00405D08;
extern s64 D_00405D68;
extern s64 D_00405D70;

void func_00156C28(void) {
    if (D_00405D68 == 0) {
        do {
            D_00405D08 += 1;
            D_00405CEC = 1;
            func_00170818();
            D_00405CEC = 0;
            func_00157158();
        } while (D_00405D68 == 0);
    }
    D_00405D70 = 1;
    ExitDeleteThread();
}
