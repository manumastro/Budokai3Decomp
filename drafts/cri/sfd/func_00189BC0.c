/* Draft (not built): func_00189BC0 at 0x00189BC0, size 0x30, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189BC0.s */

s32 func_00189BC0(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x31E8);
    var_v0 = 0;
    if (temp_v1 != 0) {
        var_v0 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CB4)) + 0x40) <= 0) ? (temp_v1 + 0xD00) : 0;
    }
    return var_v0;
}
