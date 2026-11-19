/* Draft (not built): func_00105C98 at 0x00105C98, size 0x314, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00105C98.s */

s32 _alalcFree(void *, s32);                    /* extern */
s32 func_00108170(void *, void *, u32, s32);    /* extern */

void func_00105C98(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_v0;
    u32 temp_s0;
    u8 *temp_a1_4;
    u8 *temp_a3_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_t0_2;
    u8 *temp_t1;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v1_4;
    u8 *temp_v1_5;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x40);
    temp_a1 = *(s32 *)((u8 *)temp_s2 + 0x858);
    if (temp_a1 == 0) {
        *(s32 *)((u8 *)temp_s2 + 0x184) = 3;
        *(s32 *)((u8 *)temp_s2 + 0x18C) = 1;
        *(s32 *)((u8 *)temp_s2 + 0x154) = 5;
        *(s32 *)((u8 *)temp_s2 + 0x14C) = 1;
        *(s32 *)((u8 *)temp_s2 + 0x150) = 1;
        *(s32 *)((u8 *)temp_s2 + 0x198) = 1;
    }
    *(s32 *)((u8 *)temp_s2 + 0x13C) = (s32) ((s32) (*(s32 *)((u8 *)temp_s2 + 0x134) + 0xF) >> 4);
    if (temp_a1 != 0) {
        if (*(s32 *)((u8 *)temp_s2 + 0x14C) == 0) {
            var_v0 = ((s32) (*(s32 *)((u8 *)temp_s2 + 0x138) + 0x1F) >> 5) * 2;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_v0 = (s32) (*(s32 *)((u8 *)temp_s2 + 0x138) + 0xF) >> 4;
    }
    *(s32 *)((u8 *)temp_s2 + 0x140) = var_v0;
    temp_s5 = var_v0 * 0x10;
    temp_s4 = *(s32 *)((u8 *)temp_s2 + 0x13C) * 0x10;
    if ((temp_s4 != *(s32 *)((u8 *)arg0 + 0)) || (temp_s5 != *(s32 *)((u8 *)arg0 + 4))) {
        temp_s1 = temp_s2 + 0x118;
        *(s32 *)((u8 *)arg0 + 0) = temp_s4;
        *(s32 *)((u8 *)arg0 + 4) = temp_s5;
        temp_s0 = (u32) (temp_s4 * (temp_s5 * 0x180)) >> 8;
        _alalcFree(temp_s1, temp_a1);
        *(s32 *)((u8 *)temp_s2 + 0x10C) = func_00108170(temp_s2, temp_s1, temp_s0, 0x40);
        *(s32 *)((u8 *)temp_s2 + 0x110) = func_00108170(temp_s2, temp_s1, temp_s0, 0x40);
        temp_v0 = func_00108170(temp_s2, temp_s1, temp_s0, 0x40);
        temp_v1 = *(s32 *)((u8 *)temp_s2 + 0x87C);
        *(s32 *)((u8 *)temp_s2 + 0x114) = temp_v0;
        if (temp_v1 == 0) {
            temp_a2 = *(s32 *)((u8 *)arg0 + 0) * *(s32 *)((u8 *)arg0 + 4);
            temp_a1_2 = (*(s32 *)((u8 *)temp_s2 + 0x10C) & 0x0FFFFFFF) | 0x20000000;
            temp_v1_2 = (*(s32 *)((u8 *)temp_s2 + 0x110) & 0x0FFFFFFF) | 0x20000000;
            temp_t0 = (temp_v0 & 0x0FFFFFFF) | 0x20000000;
            *(s32 *)((u8 *)temp_s2 + 0x1F8) = temp_a1_2;
            temp_v0_2 = ((s32) ((temp_a2 > -1) ? temp_a2 : (temp_a2 + 0x1FF)) >> 9) * 0x180;
            *(s32 *)((u8 *)temp_s2 + 0x260) = temp_v1_2;
            *(s32 *)((u8 *)temp_s2 + 0x330) = temp_a1_2;
            *(s32 *)((u8 *)temp_s2 + 0x398) = temp_v1_2;
            *(s32 *)((u8 *)temp_s2 + 0x2C8) = temp_t0;
            *(s32 *)((u8 *)temp_s2 + 0x468) = (s32) (temp_a1_2 + temp_v0_2);
            *(s32 *)((u8 *)temp_s2 + 0x4D0) = (s32) (temp_v1_2 + temp_v0_2);
            *(s32 *)((u8 *)temp_s2 + 0x538) = (s32) (temp_t0 + temp_v0_2);
            *(s32 *)((u8 *)temp_s2 + 0x400) = temp_t0;
            goto block_13;
        }
        var_a2 = temp_s4 >> 4;
        if (temp_v1 == 1) {
            temp_a2_2 = *(s32 *)((u8 *)temp_s2 + 0x10C);
            temp_v1_3 = *(s32 *)((u8 *)arg0 + 0) * *(s32 *)((u8 *)arg0 + 4);
            temp_a1_3 = *(s32 *)((u8 *)temp_s2 + 0x110);
            *(s32 *)((u8 *)temp_s2 + 0x1F8) = temp_a2_2;
            *(s32 *)((u8 *)temp_s2 + 0x260) = temp_a1_3;
            *(s32 *)((u8 *)temp_s2 + 0x330) = temp_a2_2;
            *(s32 *)((u8 *)temp_s2 + 0x398) = temp_a1_3;
            *(s32 *)((u8 *)temp_s2 + 0x2C8) = temp_v0;
            temp_v0_3 = ((s32) ((temp_v1_3 > -1) ? temp_v1_3 : (temp_v1_3 + 0x1FF)) >> 9) * 0x180;
            *(s32 *)((u8 *)temp_s2 + 0x400) = temp_v0;
            *(s32 *)((u8 *)temp_s2 + 0x468) = (s32) (temp_a2_2 + temp_v0_3);
            *(s32 *)((u8 *)temp_s2 + 0x4D0) = (s32) (temp_a1_3 + temp_v0_3);
            *(s32 *)((u8 *)temp_s2 + 0x538) = (s32) (temp_v0 + temp_v0_3);
block_13:
            var_a2 = temp_s4 >> 4;
        }
        temp_v0_4 = temp_s2 + 0x1F8;
        temp_a3 = temp_s5 >> 4;
        *(s32 *)((u8 *)temp_v0_4 + 0x10) = temp_a3;
        temp_v1_4 = temp_s2 + 0x260;
        *(s32 *)((u8 *)temp_v0_4 + 4) = temp_s4;
        temp_a0 = temp_s5 + ((u32) temp_s5 >> 0x1F);
        *(s32 *)((u8 *)temp_v0_4 + 8) = temp_s5;
        temp_t2 = temp_a0 >> 5;
        *(s32 *)((u8 *)temp_v0_4 + 0xC) = var_a2;
        temp_a0_2 = temp_a0 >> 1;
        *(s32 *)((u8 *)temp_v1_4 + 0x10) = temp_a3;
        temp_v0_5 = temp_s2 + 0x2C8;
        *(s32 *)((u8 *)temp_v1_4 + 4) = temp_s4;
        temp_a1_4 = temp_s2 + 0x330;
        *(s32 *)((u8 *)temp_v1_4 + 8) = temp_s5;
        temp_t0_2 = temp_s2 + 0x468;
        *(s32 *)((u8 *)temp_v1_4 + 0xC) = var_a2;
        temp_t1 = temp_s2 + 0x4D0;
        *(s32 *)((u8 *)temp_v0_5 + 0x10) = temp_a3;
        temp_v1_5 = temp_s2 + 0x398;
        *(s32 *)((u8 *)temp_v0_5 + 4) = temp_s4;
        temp_a3_2 = temp_s2 + 0x400;
        *(s32 *)((u8 *)temp_v0_5 + 8) = temp_s5;
        *(s32 *)((u8 *)temp_v0_5 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_a1_4 + 0x10) = temp_t2;
        temp_v0_6 = temp_s2 + 0x538;
        *(s32 *)((u8 *)temp_a1_4 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_a1_4 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_a1_4 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_v1_5 + 0x10) = temp_t2;
        *(s32 *)((u8 *)temp_v1_5 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_v1_5 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_v1_5 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_a3_2 + 0x10) = temp_t2;
        *(s32 *)((u8 *)temp_a3_2 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_a3_2 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_a3_2 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_t0_2 + 0x10) = temp_t2;
        *(s32 *)((u8 *)temp_t0_2 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_t0_2 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_t0_2 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_t1 + 0x10) = temp_t2;
        *(s32 *)((u8 *)temp_t1 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_t1 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_t1 + 0xC) = var_a2;
        *(s32 *)((u8 *)temp_v0_6 + 4) = temp_s4;
        *(s32 *)((u8 *)temp_v0_6 + 8) = temp_a0_2;
        *(s32 *)((u8 *)temp_v0_6 + 0x10) = temp_t2;
        *(s32 *)((u8 *)temp_v0_6 + 0xC) = var_a2;
    }
}
