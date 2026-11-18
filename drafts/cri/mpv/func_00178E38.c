/* Draft (not built): func_00178E38 at 0x00178E38, size 0x10C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00178E38.s */

void func_00178E38(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v0;
    s32 var_v1;
    u32 var_a2;
    u8 *temp_a1;
    u8 *temp_a1_10;
    u8 *temp_a1_11;
    u8 *temp_a1_12;
    u8 *temp_a1_13;
    u8 *temp_a1_14;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_a1_6;
    u8 *temp_a1_7;
    u8 *temp_a1_8;
    u8 *temp_a1_9;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = arg2 & 0xF;
    if (var_v1 != 0) {
        do {
            temp_v0 = *var_a1;
            var_a1 += 4;
            var_v1 -= 1;
            *var_a0 = temp_v0;
            var_a0 += 4;
        } while (var_v1 != 0);
    }
    var_a2 = arg2 >> 4;
    if (var_a2 != 0) {
        do {
            temp_a1 = var_a1 + 4;
            temp_a1_2 = temp_a1 + 4;
            temp_a1_3 = temp_a1_2 + 4;
            temp_a1_4 = temp_a1_3 + 4;
            *(s32 *)((u8 *)var_a0 + 0) = *(s32 *)((u8 *)var_a1 + 0);
            var_a2 -= 1;
            *(s32 *)((u8 *)var_a0 + 4) = (s32) *(s32 *)((u8 *)var_a1 + 4);
            *(s32 *)((u8 *)var_a0 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
            *(s32 *)((u8 *)var_a0 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1_2 + 4);
            temp_a1_5 = temp_a1_4 + 4;
            temp_a1_6 = temp_a1_5 + 4;
            temp_a1_7 = temp_a1_6 + 4;
            temp_a1_8 = temp_a1_7 + 4;
            *(s32 *)((u8 *)var_a0 + 0x10) = (s32) *(s32 *)((u8 *)temp_a1_3 + 4);
            *(s32 *)((u8 *)var_a0 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1_4 + 4);
            *(s32 *)((u8 *)var_a0 + 0x18) = (s32) *(s32 *)((u8 *)temp_a1_5 + 4);
            *(s32 *)((u8 *)var_a0 + 0x1C) = (s32) *(s32 *)((u8 *)temp_a1_6 + 4);
            temp_a1_9 = temp_a1_8 + 4;
            temp_a1_10 = temp_a1_9 + 4;
            temp_a1_11 = temp_a1_10 + 4;
            temp_a1_12 = temp_a1_11 + 4;
            *(s32 *)((u8 *)var_a0 + 0x20) = (s32) *(s32 *)((u8 *)temp_a1_7 + 4);
            *(s32 *)((u8 *)var_a0 + 0x24) = (s32) *(s32 *)((u8 *)temp_a1_8 + 4);
            *(s32 *)((u8 *)var_a0 + 0x28) = (s32) *(s32 *)((u8 *)temp_a1_9 + 4);
            *(s32 *)((u8 *)var_a0 + 0x2C) = (s32) *(s32 *)((u8 *)temp_a1_10 + 4);
            temp_a1_13 = temp_a1_12 + 4;
            temp_a1_14 = temp_a1_13 + 4;
            var_a1 = temp_a1_14 + 4 + 4;
            *(s32 *)((u8 *)var_a0 + 0x30) = (s32) *(s32 *)((u8 *)temp_a1_11 + 4);
            *(s32 *)((u8 *)var_a0 + 0x34) = (s32) *(s32 *)((u8 *)temp_a1_12 + 4);
            *(s32 *)((u8 *)var_a0 + 0x38) = (s32) *(s32 *)((u8 *)temp_a1_13 + 4);
            *(s32 *)((u8 *)var_a0 + 0x3C) = (s32) *(s32 *)((u8 *)temp_a1_14 + 4);
            var_a0 += 0x40;
        } while (var_a2 != 0);
    }
}
