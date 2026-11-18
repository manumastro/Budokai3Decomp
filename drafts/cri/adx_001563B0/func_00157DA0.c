/* Draft (not built): func_00157DA0 at 0x00157DA0, size 0xCC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157DA0.s */

s32 ChangeThreadPriority(s32, s32);         /* extern */
s32 WakeupThread(s32);                          /* extern */
s32 func_00157170(s32);                         /* extern */
extern s32 D_00405D38;
extern s64 D_00405D58;
extern s64 D_00405D60;

void func_00157DA0(void) {
    if (D_00405D60 == 0) {
        do {
            D_00405D58 = 1;
            ChangeThreadPriority(D_00405D38, 1);
            WakeupThread(D_00405D38);
            func_00157170(D_00405D38);
        } while (D_00405D60 == 0);
    }
    D_00405D60 = 0;
    D_00405D58 = 0;
    D_00405D38 = 0;
}
