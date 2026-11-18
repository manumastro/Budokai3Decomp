/* Draft (not built): func_001915B0 at 0x001915B0, size 0x174, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_001915B0.s */

s32 func_00191728();
s32 memcmp();
extern s32 D_00467730;

s32 func_001915B0(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_t1;
    u8 *temp_s6;

    temp_s6 = arg1 + 0xC;
    var_t1 = *(s32 *)((u8 *)arg0 + 0x14C);
    temp_s5 = *(&D_00467730 + (*(s32 *)((u8 *)arg2 + 0x10) * 4));
    temp_s4 = *(s32 *)((u8 *)arg2 + 0x14);
    if (var_t1 < 0) {
        temp_v1 = *(s32 *)((u8 *)arg3 + 0) - func_00191728(temp_s4, temp_s5);
        temp_v1_2 = (temp_v1 < 0) ? 0 : temp_v1;
        *(s32 *)((u8 *)arg0 + 0x14C) = temp_v1_2;
        var_t1 = temp_v1_2;
    }
    temp_s1 = *(s32 *)((u8 *)arg3 + 0) - var_t1;
    var_s1 = (temp_s1 < 0) ? 0 : temp_s1;
    if (memcmp(temp_s6, arg3, 4) != 0) {
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($s6) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, ($s6) */);
        *(s32 *)((u8 *)temp_s6 + 8) = (s32) *(s32 *)((u8 *)arg3 + 8);
        *(s32 *)((u8 *)arg1 + 0) = temp_s4;
        *(s32 *)((u8 *)arg1 + 4) = 0;
        if (*(s32 *)((u8 *)arg2 + 0x18) == 3) {
            *(s32 *)((u8 *)arg1 + 8) = 1;
        } else {
            *(s32 *)((u8 *)arg1 + 8) = 0;
        }
    } else {
        if (M2C_ERROR(/* Read from unset register $t0 */) != 0) {
            *(s32 *)((u8 *)arg1 + 0) = 0;
            temp_v0 = *(s32 *)((u8 *)arg1 + 4) + *(s32 *)((u8 *)arg1 + 8);
            *(s32 *)((u8 *)arg1 + 8) = 0;
            *(s32 *)((u8 *)arg1 + 4) = (s32) (temp_v0 + 1);
        }
        temp_v1_3 = *(s32 *)((u8 *)arg1 + 8);
        temp_v0_2 = temp_s4 - *(s32 *)((u8 *)arg1 + 0);
        temp_a2 = temp_v0_2 < temp_v1_3;
        *(s32 *)((u8 *)arg1 + 8) = (s32) ((temp_a2 == 0) ? temp_v0_2 : temp_v1_3);
        temp_s1_2 = var_s1 + func_00191728(*(s32 *)((u8 *)arg1 + 4) + temp_v0_2, temp_s5, temp_a2);
        var_s1 = (temp_s1_2 < 0) ? 0 : temp_s1_2;
    }
    return var_s1;
}
