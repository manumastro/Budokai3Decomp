/* Draft (not built): func_0018FCC0 at 0x0018FCC0, size 0x140, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FCC0.s */

s32 func_0018D650(void *, s32);                 /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00193EA0(void *);                      /* extern */

s32 func_0018FCC0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *temp_v1;

    if (func_0018D870() == 0) {
        goto block_3;
    }
    return func_0018D650(NULL, 0xFF000185);
block_3:
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_a0 = temp_v0 + 0xF2C;
    if (arg1 == 0) {
        goto block_8;
    }
    if (arg2 == 0) {
        goto block_8;
    }
    if (arg3 == 0) {
        goto block_7;
    }
    goto block_10;
block_7:
block_8:
    func_00193EA0(temp_a0);
    goto block_18;
block_10:
    if (arg2 < (*(s32 *)((u8 *)arg0 + 0x2C) + 4)) {
        goto block_12;
    }
    *(s32 *)((u8 *)temp_v0 + 0xF2C) = arg1;
    goto block_15;
block_12:
    return func_0018D650(arg0, 0xFF000F1D);
block_15:
    var_a1 = 0;
    *(s32 *)((u8 *)temp_a0 + 0xC) = arg1;
    temp_s0 = arg1 + arg3;
    *(s32 *)((u8 *)temp_a0 + 4) = arg2;
    temp_s1 = arg2 - 2;
    *(s32 *)((u8 *)temp_a0 + 0x14) = temp_s0;
    var_s0 = temp_s0 + arg3;
    *(s32 *)((u8 *)temp_a0 + 8) = arg3;
    *(s32 *)((u8 *)temp_a0 + 0x10) = 0;
    *(s32 *)((u8 *)temp_a0 + 0x18) = 0;
    goto loop_17;
block_16:
    var_a1 += 1;
    temp_v1 = temp_a0 + (temp_v0_2 + 0x10);
    *(s32 *)((u8 *)temp_v1 + 0x10) = 0;
    *(s32 *)((u8 *)temp_v1 + 0xC) = var_s0;
    var_s0 += arg3;
loop_17:
    temp_v0_2 = var_a1 * 8;
    if (var_a1 < ((temp_s1 < 0x11) ? temp_s1 : 0x10)) {
        goto block_16;
    }
block_18:
    return 0;
}
