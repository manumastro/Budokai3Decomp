/* Draft (not built): func_00157990 at 0x00157990, size 0xCC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157990.s */

s32 ChangeThreadPriority(s32, s32);         /* extern */
s32 WakeupThread(s32);                          /* extern */
s32 func_00157170(s32);                         /* extern */
extern s32 D_00405D50;
extern s64 D_00405DA8;
extern s64 D_00405DB0;

void func_00157990(void) {
    if (D_00405DB0 == 0) {
        do {
            D_00405DA8 = 1;
            ChangeThreadPriority(D_00405D50, 1);
            WakeupThread(D_00405D50);
            func_00157170(D_00405D50);
        } while (D_00405DB0 == 0);
    }
    D_00405DB0 = 0;
    D_00405DA8 = 0;
    D_00405D50 = 0;
}
