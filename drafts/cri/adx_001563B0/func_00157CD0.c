/* Draft (not built): func_00157CD0 at 0x00157CD0, size 0xCC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157CD0.s */

s32 ChangeThreadPriority(s32, s32);         /* extern */
s32 WakeupThread(s32);                          /* extern */
s32 func_00157170(s32);                         /* extern */
extern s32 D_00405D3C;
extern s64 D_00405D68;
extern s64 D_00405D70;

void func_00157CD0(void) {
    if (D_00405D70 == 0) {
        do {
            D_00405D68 = 1;
            ChangeThreadPriority(D_00405D3C, 1);
            WakeupThread(D_00405D3C);
            func_00157170(D_00405D3C);
        } while (D_00405D70 == 0);
    }
    D_00405D70 = 0;
    D_00405D68 = 0;
    D_00405D3C = 0;
}
