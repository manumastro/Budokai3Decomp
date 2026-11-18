/* Draft (not built): func_0018E400 at 0x0018E400, size 0x1D8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018E400.s */

s32 func_0018E5D8();
s32 func_0018E8F8();
s32 func_00195D50();
s32 func_00195DC0();
s32 func_001960F0();
s32 func_001999E0();

s32 func_0018E400(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v1;
    u8 *temp_s0;
    u8 *temp_s7;

    temp_s7 = arg0 + 0x1C24;
    if (func_001999E0(5) != 0) {
        goto block_2;
    }
    return 1;
block_2:
    temp_s0 = *(u8 **)((u8 *)temp_s7 + 8);
    if (*(s32 *)((u8 *)temp_s0 + 0x28) != -1) {
        goto block_4;
    }
    *(s32 *)((u8 *)temp_s0 + 0x28) = func_0018E5D8(arg0, arg1);
block_4:
    if (*(s32 *)((u8 *)temp_s0 + 0x20) != -1) {
        goto block_6;
    }
    *(s32 *)((u8 *)temp_s0 + 0x20) = arg1;
block_6:
    temp_v0 = func_001999E0(arg0, 0x1D);
    if (temp_v0 == -1) {
        goto block_22;
    }
    if (func_001999E0(arg0, 0x37) != 0) {
        goto block_9;
    }
    goto block_12;
block_9:
    var_a0 = *(s32 *)((u8 *)temp_s0 + 0x28);
    if (arg1 < *(s32 *)((u8 *)temp_s0 + 0x18)) {
        goto block_13;
    }
    goto block_23;
block_12:
    var_a0 = *(s32 *)((u8 *)temp_s0 + 0x28);
    if (arg1 != *(s32 *)((u8 *)temp_s0 + 0x20)) {
        goto block_23;
    }
block_13:
    if (var_a0 == temp_v0) {
        goto block_23;
    }
    if (arg3 < 4) {
        goto block_23;
    }
    if (*(s8 *)((u8 *)arg2 + 0) != 0) {
        goto block_23;
    }
    if (*(s8 *)((u8 *)arg2 + 1) != 0) {
        goto block_23;
    }
    if (*(u8 *)((u8 *)arg2 + 2) != 1) {
        goto block_23;
    }
    temp_v1 = *(u8 *)((u8 *)arg2 + 3);
    if (temp_v1 == 0xB3) {
        goto block_20;
    }
    if (temp_v1 != 0xB8) {
        goto block_23;
    }
block_20:
    *(s32 *)((u8 *)temp_s0 + 0x28) = temp_v0;
    var_a0 = temp_v0;
    goto block_23;
block_22:
    var_a0 = *(s32 *)((u8 *)temp_s0 + 0x28);
block_23:
    *(s32 *)((u8 *)temp_s0 + 0x18) = arg1;
    var_v0 = 1;
    if (var_a0 != arg1) {
        goto block_30;
    }
    temp_v0_2 = func_00195D50(arg0, arg2, arg3);
    var_v0 = 0;
    if (temp_v0_2 <= 0) {
        goto block_30;
    }
    temp_v0_3 = func_0018E8F8(arg0, *(s32 *)((u8 *)temp_s7 + 0x14), arg2, temp_v0_2);
    if (temp_v0_3 == 1) {
        goto block_28;
    }
    func_00195DC0(arg0, temp_v0_2);
    goto block_29;
block_28:
    func_001960F0(arg0, arg2, temp_v0_2);
block_29:
    var_v0 = temp_v0_3;
block_30:
    return var_v0;
}
