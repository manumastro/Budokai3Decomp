/* Draft (not built): func_00157B30 at 0x00157B30, size 0xCC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157B30.s */

s32 ChangeThreadPriority(s32, s32);         /* extern */
s32 WakeupThread(s32);                          /* extern */
s32 func_00157170(s32);                         /* extern */
extern s32 D_00405D40;
extern s64 D_00405D78;
extern s64 D_00405D80;

void func_00157B30(void) {
    if (D_00405D80 == 0) {
        do {
            D_00405D78 = 1;
            ChangeThreadPriority(D_00405D40, 1);
            WakeupThread(D_00405D40);
            func_00157170(D_00405D40);
        } while (D_00405D80 == 0);
    }
    D_00405D80 = 0;
    D_00405D78 = 0;
    D_00405D40 = 0;
}
