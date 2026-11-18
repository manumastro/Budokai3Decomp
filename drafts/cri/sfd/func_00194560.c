/* Draft (not built): func_00194560 at 0x00194560, size 0x30, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00194560.s */

s32 func_00194560(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x31E8);
    var_v0 = 0;
    if (temp_v1 != 0) {
        var_v0 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x88) <= 0) ? (temp_v1 + 0xAC4) : 0;
    }
    return var_v0;
}
