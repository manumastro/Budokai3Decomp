/* Draft (not built): func_00107D60 at 0x00107D60, size 0x34, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00107D60.c:19: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107D60.s */

s32 func_00107D60(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_v1;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_v0;
    u8 *temp_a0;

    temp_t0 = *(s32 *)((u8 *)arg0 + 0x40);
    temp_a1 = arg1 * 0xC;
    temp_v1 = temp_t0 + 0xC + temp_a1;
    temp_a0 = temp_t0 + temp_a1;
    temp_v0 = *temp_v1;
    *temp_v1 = arg2;
    *(s32 *)((u8 *)temp_a0 + 0x10) = arg3;
    *(s32 *)((u8 *)temp_a0 + 0x14) = (s32) saved_reg_gp;
    return temp_v0;
}
