/* Draft (not built): func_001986A0 at 0x001986A0, size 0x74, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001986A0.s */

s32 func_00198718(s32, u32, s32 *, s32);        /* extern */

s32 func_001986A0(s32 arg0, s32 arg1, u32 arg2, s32 *arg3) {
    s32 temp_a3;
    s32 temp_t0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    *arg3 = -1;
    temp_v1 = arg0 + 0x1280 + (arg1 * 0x74);
    temp_v1_2 = temp_v1 + 0x10;
    temp_t0 = *(s32 *)((u8 *)temp_v1_2 + 0xC);
    temp_a3 = *(s32 *)((u8 *)temp_v1_2 + 8);
    if (*(s32 *)((u8 *)temp_v1 + 0x38) != 0) {
        func_00198718(temp_v1 + 0x38, (arg2 < (u32) (temp_a3 + temp_t0)) ? arg2 : (arg2 - temp_t0), arg3, temp_a3);
    }
    return 0;
}
