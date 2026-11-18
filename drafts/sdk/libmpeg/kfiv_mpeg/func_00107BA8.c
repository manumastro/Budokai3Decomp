/* Draft (not built): func_00107BA8 at 0x00107BA8, size 0x3C, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107BA8.s */

s32 func_00107180(s32, s32);                    /* extern */

s32 func_00107BA8(u8 *arg0, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg2 + 0x13;
    func_00107180(*(s32 *)((u8 *)arg0 + 0x40), ((s32) ((temp_v1 > -1) ? temp_v1 : (arg2 + 0x22)) >> 4) * 0x10);
    return 1;
}
