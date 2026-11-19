/* Draft (not built): func_00102B90 at 0x00102B90, size 0x488, segment sdk/libmpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00102B90.c:189: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/sdk/libmpeg/func_00102B90.s */

extern s32 D_003EC478;
extern s32 D_003EC498;

void func_00102B90(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10, s32 arg_sp18) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *temp_a1_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t2_3;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t6;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_t0;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a2_2;
    u8 *temp_a3_2;
    u8 *temp_t4;
    u8 *temp_t5;
    u8 *temp_v0_2;

    temp_v1 = arg0 + 0x6CC;
    temp_t6 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s1 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x820);
    spC = temp_v1;
    temp_v0 = temp_s3 * 0x140;
    sp4 = M2C_ERROR(/* Read from unset register $t2 */);
    sp8 = *(s32 *)((u8 *)arg0 + 0x830);
    temp_t2 = arg_sp0 >> 1;
    sp0 = arg3;
    temp_t9 = *(temp_v1 + temp_v0);
    temp_v0_2 = arg0 + (temp_v0 + 0x5A0);
    temp_a0 = temp_t9 * 0x1C;
    temp_t5 = temp_v0_2 + (temp_a0 + 0xB8);
    temp_t4 = temp_v0_2 + (temp_a0 + 0x48);
    if (arg_sp10 != 0) {
        var_v1 = temp_s0 + arg2;
        var_v0 = (arg_sp8 >> 1) * 2;
    } else {
        var_v0 = arg_sp8 >> 1;
        var_v1 = temp_s0 + arg2;
    }
    temp_v0_3 = var_v0 + temp_s1;
    temp_a3 = *(s32 *)((u8 *)arg1 + 0x10);
    temp_s6 = (s32) (temp_t2 + sp4) >> 4;
    temp_t1 = *(s32 *)((u8 *)arg1 + 0);
    temp_s7 = (s32) (temp_v0_3 + var_v1) >> 4;
    temp_t0 = temp_t9 * 4;
    sp10 = temp_t0;
    temp_v1_2 = (temp_s6 * temp_a3) + temp_s7;
    temp_s3_2 = temp_t1 + (temp_v1_2 * 0x180);
    temp_t2_2 = arg_sp8 & 1;
    *(s32 *)((u8 *)temp_t4 + 4) = (s32) ((temp_t2 + sp4) % 16);
    temp_s4 = ((temp_v1_2 + temp_a3) * 0x180) + temp_t1;
    temp_a3_2 = arg0 + (temp_t0 + (temp_s3 * 0x140));
    temp_t3 = (temp_v0_3 + var_v1) % 16;
    *(s32 *)((u8 *)temp_a3_2 + 0x5A8) = temp_s3_2;
    *(s32 *)((u8 *)temp_a3_2 + 0x5B8) = temp_s4;
    *(s32 *)((u8 *)temp_t4 + 0) = (s32) (sp8 + ((sp0 + temp_s0) << 5));
    if (temp_t2_2 != 0) {
        if ((temp_t3 + (temp_t6 << arg_sp10)) < 0x10) {
            *(s32 *)((u8 *)temp_t4 + 8) = temp_t6;
            goto block_12;
        }
        temp_v0_4 = ((0x10 >> arg_sp10) - (temp_t3 >> arg_sp10)) - 1;
        *(s32 *)((u8 *)temp_t4 + 8) = temp_v0_4;
        *(s32 *)((u8 *)temp_t4 + 0xC) = (s32) (temp_t6 - temp_v0_4);
    } else if ((temp_t3 + (temp_t6 << arg_sp10)) < 0x11) {
        *(s32 *)((u8 *)temp_t4 + 8) = temp_t6;
block_12:
        *(s32 *)((u8 *)temp_t4 + 0xC) = 0;
    } else {
        temp_v0_5 = (0x10 >> arg_sp10) - (temp_t3 >> arg_sp10);
        *(s32 *)((u8 *)temp_t4 + 8) = temp_v0_5;
        *(s32 *)((u8 *)temp_t4 + 0xC) = (s32) (temp_t6 - temp_v0_5);
    }
    temp_v0_6 = temp_t3 * 0x10;
    if (*(s32 *)((u8 *)arg0 + 0x87C) == 0) {
        temp_a1 = temp_t3 * 0x10;
        var_t0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + arg0) + 0x5A0) + (temp_t9 * 0x600);
        *(s32 *)((u8 *)temp_t4 + 0x14) = (s32) (var_t0 + temp_a1);
        *(s32 *)((u8 *)temp_t4 + 0x18) = (s32) (var_t0 + (temp_a1 + 0x300));
    } else {
        var_t0 = temp_s3_2;
        *(s32 *)((u8 *)temp_t4 + 0x18) = (s32) (temp_s4 + temp_v0_6);
        *(s32 *)((u8 *)temp_t4 + 0x14) = (s32) (temp_s3_2 + temp_v0_6);
    }
    temp_a0_2 = arg_sp0 + ((u32) arg_sp0 >> 0x1F);
    sp14 = arg_sp18 * 4;
    temp_a2 = arg_sp8 + ((u32) arg_sp8 >> 0x1F);
    temp_a0_3 = temp_a0_2 >> 2;
    temp_t1_2 = temp_t6 >> 1;
    temp_a3_3 = temp_s0 >> 1;
    *(s32 *)((u8 *)temp_t4 + 0x10) = (s32) (0x10 << arg_sp10);
    temp_v0_7 = sp4 >> 1;
    if (arg_sp10 != 0) {
        var_t3 = ((temp_a2 >> 2) * 2) + (temp_s1 >> 1) + (temp_a3_3 + arg2);
    } else {
        var_t3 = (temp_a2 >> 2) + (temp_s1 >> 1) + (temp_a3_3 + arg2);
    }
    temp_t3_2 = var_t3 % 8;
    temp_t2_3 = (temp_a2 >> 1) & 1;
    *(s32 *)((u8 *)temp_t5 + 4) = (s32) ((temp_a0_3 + temp_v0_7) % 8);
    *(s32 *)((u8 *)temp_t5 + 0) = (s32) (sp8 + (((sp0 + temp_a3_3) * 0x10) + 0x200));
    if (temp_t2_3 != 0) {
        if ((temp_t3_2 + (temp_t1_2 << arg_sp10)) < 8) {
            *(s32 *)((u8 *)temp_t5 + 8) = temp_t1_2;
            goto block_28;
        }
        temp_v0_8 = ((8 >> arg_sp10) - (temp_t3_2 >> arg_sp10)) - 1;
        *(s32 *)((u8 *)temp_t5 + 8) = temp_v0_8;
        *(s32 *)((u8 *)temp_t5 + 0xC) = (s32) (temp_t1_2 - temp_v0_8);
    } else if ((temp_t3_2 + (temp_t1_2 << arg_sp10)) < 9) {
        *(s32 *)((u8 *)temp_t5 + 8) = temp_t1_2;
block_28:
        *(s32 *)((u8 *)temp_t5 + 0xC) = 0;
    } else {
        temp_v0_9 = (8 >> arg_sp10) - (temp_t3_2 >> arg_sp10);
        *(s32 *)((u8 *)temp_t5 + 8) = temp_v0_9;
        *(s32 *)((u8 *)temp_t5 + 0xC) = (s32) (temp_t1_2 - temp_v0_9);
    }
    temp_v1_3 = (((((s32) (temp_a0_3 + temp_v0_7) >> 3) - temp_s6) * 2) + ((var_t3 >> 3) - temp_s7)) * 0x180;
    temp_a0_4 = var_t0 + temp_v1_3;
    if (*(s32 *)((u8 *)arg0 + 0x87C) == 0) {
        temp_v0_10 = temp_t3_2 * 8;
        *(s32 *)((u8 *)temp_t5 + 0x18) = (s32) (temp_a0_4 + (temp_v0_10 + 0x400));
        *(s32 *)((u8 *)temp_t5 + 0x14) = (s32) (temp_a0_4 + (temp_v0_10 + 0x100));
    } else {
        temp_a0_5 = temp_t3_2 * 8;
        temp_a1_2 = temp_a0_5 + 0x100;
        if ((u32) (temp_v1_3 + temp_a1_2) < 0x301U) {
            var_v0_2 = temp_s3_2 + temp_v1_3 + temp_a1_2;
            var_v1_2 = temp_s4 + temp_v1_3;
        } else {
            var_v1_2 = temp_s4 + temp_v1_3;
            var_v0_2 = (var_v1_2 + temp_a1_2) - 0x300;
        }
        *(s32 *)((u8 *)temp_t5 + 0x14) = var_v0_2;
        *(s32 *)((u8 *)temp_t5 + 0x18) = (s32) (var_v1_2 + (temp_a0_5 + 0x100));
    }
    *(s32 *)((u8 *)temp_t5 + 0x10) = (s32) (8 << arg_sp10);
    temp_a1_3 = *(s32 *)((u8 *)arg0 + 0x820) * 0x140;
    temp_a1_4 = spC + temp_a1_3;
    temp_a2_2 = arg0 + (sp10 + temp_a1_3);
    *(s32 *)((u8 *)temp_a2_2 + 0x5C8) = (s32) *(((sp14 | ((arg_sp0 & 1) * 2) | temp_t2_2) * 4) + &D_003EC478);
    *temp_a1_4 += 1;
    *(s32 *)((u8 *)temp_a2_2 + 0x5D8) = (s32) *(((sp14 | (((temp_a0_2 >> 1) & 1) * 2) | temp_t2_3) * 4) + &D_003EC498);
}
