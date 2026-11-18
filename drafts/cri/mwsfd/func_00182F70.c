/* Draft (not built): func_00182F70 at 0x00182F70, size 0x58, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00182F70.s */

s32 dpmul(s32, s64);                                /* extern */
s32 func_00121F28(s32);                             /* extern */
s32 func_00121FE0(s32);                             /* extern */
s32 func_00183A90(void *, s32, s32);            /* extern */
extern s64 D_004660C8;

void func_00182F70(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x1DC);
    func_00183A90(arg0, func_00121FE0(dpmul(func_00121F28(temp_s1), D_004660C8)), temp_s1);
}
