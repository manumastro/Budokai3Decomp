/* Draft (not built): func_001160E0 at 0x001160E0, size 0xF0, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001160E0.s */

s32 func_00115548();                                /* extern */
s32 func_001157A0(s32);                         /* extern */
s32 func_00115BE0(s32, s32, s32 *, s32 *); /* extern */
extern s32 *D_00478700;
extern s32 func_00115F50;

s32 func_001160E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0;
    s32 *temp_v1;
    s32 temp_v0;

    if (arg1 == 0) {
        return 0x80000016;
    }
    temp_s0 = D_00478700;
    if (temp_s0 != NULL) {
        D_00478700 = *(s32 **)((u8 *)temp_s0 + 0);
    }
    if (temp_s0 == NULL) {
        return 0x80008005;
    }
    temp_v0 = func_00115548();
    if (temp_v0 >= 0) {
        *(s32 *)((u8 *)temp_s0 + 8) = arg1;
        *(s32 *)((u8 *)temp_s0 + 0xC) = arg2;
        *(s32 *)((u8 *)temp_s0 + 4) = temp_v0;
        func_00115BE0(temp_v0, arg0, &func_00115F50, temp_s0);
        func_001157A0(temp_v0);
        return ((s32) temp_s0 * 0x10) | (temp_v0 & 0xFE) | 1;
    }
    temp_v1 = D_00478700;
    D_00478700 = temp_s0;
    *(s32 **)((u8 *)temp_s0 + 0) = temp_v1;
    *(s32 *)((u8 *)temp_s0 + 4) = 0;
    return temp_v0;
}
