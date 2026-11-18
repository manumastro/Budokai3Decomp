/* Draft (not built): func_0018B0F0 at 0x0018B0F0, size 0x1A8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018B0F0.c:43: parse error before "temp_a1"
 * Original: asm/nonmatchings/cri/sfd/func_0018B0F0.s */

s32 func_0018D650(s32, void *);                 /* extern */
s32 func_0018D908(void *, void *);              /* extern */
s32 func_0018D920(void *, s32);                 /* extern */

s32 func_0018B0F0(s32 arg0, s32 arg1, u8 *arg2) {
    s32 sp4;
    s128 sp10;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u8 *temp_a3;
    u8 *temp_s0;

    temp_a3 = arg0 + 0x1280 + (arg1 * 0x74);
    if (*(s32 *)((u8 *)temp_a3 + 4) == 0) {
        return func_0018D650(0xFF000401, temp_a3);
    }
    temp_s0 = temp_a3 + 0x10;
    func_0018D908(sp, temp_a3);
    sp4 = *(s32 *)((u8 *)temp_s0 + 8);
    temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x18);
    temp_s3 = *(s32 *)((u8 *)temp_s0 + 0x2C);
    temp_s4 = *(s32 *)((u8 *)temp_s0 + 0x1C);
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x28);
    temp_s7 = *(s32 *)((u8 *)temp_s0 + 0xC);
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x10);
    temp_fp = *(s32 *)((u8 *)temp_s0 + 0x14);
    temp_s6 = *(s32 *)((u8 *)temp_s0 + 0x20);
    sp10 = (s128) temp_a1;
    temp_s0_2 = *(s32 *)((u8 *)temp_s0 + 0x24);
    func_0018D920(sp, temp_a1);
    *(s32 *)((u8 *)arg2 + 8) = temp_s2;
    *(s32 *)((u8 *)arg2 + 0) = sp4;
    *(s32 *)((u8 *)arg2 + 4) = temp_s7;
    *(s32 *)((u8 *)arg2 + 0x24) = temp_s1;
    *(s32 *)((u8 *)arg2 + 0x28) = temp_s3;
    if (temp_s1 >= (temp_s3 + temp_s4)) {
        *(s32 *)((u8 *)arg2 + 0x20) = 0;
        *(s32 *)((u8 *)arg2 + 0xC) = 0;
        *(s32 *)((u8 *)arg2 + 0x14) = 0;
        *(s32 *)((u8 *)arg2 + 0x18) = 0;
        goto block_12;
    }
    if (temp_s6 >= temp_s0_2) {
        temp_v1 = temp_s7 < 9;
        *(s32 *)((u8 *)arg2 + 0xC) = (s32) (temp_s4 - temp_s6);
        var_v0 = temp_fp + temp_s6;
        if (temp_v1 == 0) {
            var_v0 = temp_fp + (temp_s6 * 2);
        }
        *(s32 *)((u8 *)arg2 + 0x14) = var_v0;
        var_v0_2 = temp_a1 + temp_s6;
        if (temp_v1 == 0) {
            var_v0_2 = temp_a1 + (temp_s6 * 2);
        }
        *(s32 *)((u8 *)arg2 + 0x20) = temp_a1;
        *(s32 *)((u8 *)arg2 + 0x18) = var_v0_2;
        *(s32 *)((u8 *)arg2 + 0x10) = temp_s0_2;
        *(s32 *)((u8 *)arg2 + 0x1C) = temp_fp;
    } else {
        temp_v1_2 = temp_s7 < 9;
        *(s32 *)((u8 *)arg2 + 0xC) = (s32) (temp_s0_2 - temp_s6);
        var_v0_3 = temp_fp + temp_s6;
        if (temp_v1_2 == 0) {
            var_v0_3 = temp_fp + (temp_s6 * 2);
        }
        *(s32 *)((u8 *)arg2 + 0x14) = var_v0_3;
        var_v0_4 = temp_a1 + temp_s6;
        if (temp_v1_2 == 0) {
            var_v0_4 = temp_a1 + (temp_s6 * 2);
        }
        *(s32 *)((u8 *)arg2 + 0x18) = var_v0_4;
        *(s32 *)((u8 *)arg2 + 0x20) = 0;
block_12:
        *(s32 *)((u8 *)arg2 + 0x10) = 0;
        *(s32 *)((u8 *)arg2 + 0x1C) = 0;
    }
    return 0;
}
