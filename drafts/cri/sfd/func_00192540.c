/* Draft (not built): func_00192540 at 0x00192540, size 0x1B8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00192540.s */

s32 func_0018D650();
s32 func_00193DE0();

s32 func_00192540(u8 *arg0, u8 *arg1) {
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t1;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u32 temp_t2;
    u8 *temp_t3;
    u8 *temp_t4;

    temp_t4 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_a3_2 = *(s32 *)((u8 *)arg1 + 4);
    temp_t3 = temp_t4 + 4;
    temp_a2_2 = *(s32 *)((u8 *)arg1 + 0);
    temp_t6 = *(s32 *)((u8 *)arg0 + 0x38);
    temp_t1 = *(s32 *)((u8 *)temp_t3 + 0x1C);
    if ((*(s32 *)((u8 *)temp_t3 + 8) * *(s32 *)((u8 *)temp_t3 + 0xC)) < (temp_a2_2 * temp_a3_2)) {
        return func_0018D650((u8 *)0xFF000F17, temp_a2_2, temp_a3_2);
    }
    temp_a1 = (s32) ((temp_a2_2 < 0) ? (temp_a2_2 + 0xF) : temp_a2_2) >> 4;
    temp_v0 = (s32) ((temp_a3_2 < 0) ? (temp_a3_2 + 0xF) : temp_a3_2) >> 4;
    if (temp_t6 == 2) {
        var_v0 = (temp_a1 * temp_v0) << 0xA;
    } else {
        var_v0 = temp_a1 * temp_v0 * 0x180;
    }
    temp_t2 = var_v0 + 0x40;
    temp_v1 = *(s32 *)((u8 *)temp_t3 + 0x14);
    temp_v0_2 = *(s32 *)((u8 *)temp_t3 + 0x18);
    temp_a3 = temp_v1 + 0xF;
    temp_a2 = temp_v0_2 + 0xF;
    temp_v1_2 = (s32) ((temp_v1 < 0) ? temp_a3 : temp_v1) >> 4;
    temp_v0_3 = (s32) ((temp_v0_2 < 0) ? temp_a2 : temp_v0_2) >> 4;
    if (temp_t6 == 2) {
        if ((u32) (((temp_v1_2 * temp_v0_3) << 0xA) + 0x40) >= temp_t2) {
            goto block_16;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return func_0018D650(arg0, -0xFFF0E8, temp_a2, temp_a3);
    }
    if ((u32) ((temp_v1_2 * temp_v0_3 * 0x180) + 0x40) >= temp_t2) {
block_16:
        if (*(s32 *)((u8 *)temp_t3 + 0x20) != 0) {
            var_a1 = 0;
            if (temp_t1 > 0) {
                var_a0 = *(s32 *)((u8 *)temp_t3 + 0x20);
                var_v1 = temp_t4 + 0x30;
                do {
                    var_a1 += 1;
                    *var_v1 = var_a0;
                    var_v1 += 4;
                    var_a0 += temp_t2;
                } while (var_a1 < temp_t1);
            }
        } else if (temp_t1 > 0) {
            var_a1_2 = temp_t1 - 1;
            do {
                var_a1_2 -= 1;
            } while (var_a1_2 != 0);
        }
        *(s32 *)((u8 *)temp_t4 + 0x168) = temp_t1;
        func_00193DE0(temp_t4 + 0x16C, temp_t4 + 0x30, temp_t1, temp_a3);
        return 0;
    }
    return func_0018D650(arg0, -0xFFF0E8, temp_a2, temp_a3);
}
