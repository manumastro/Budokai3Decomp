/* Draft (not built): func_0015E0E8 at 0x0015E0E8, size 0x54, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015E0E8.s */

s32 ADXT_Create(s32, s32, s32);                 /* extern */
s32 func_0016B8E8(s32, s32, s32);           /* extern */

s32 func_0015E0E8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = ADXT_Create(2, arg0 + 0x400, arg1 - 0x400);
    if (temp_v0 != 0) {
        func_0016B8E8(temp_v0, arg0, 0x400);
    }
    return temp_v0;
}
