/* Draft (not built): func_001037A8 at 0x001037A8, size 0x428, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s64 func_001045A8();
s32 func_00104728();
s32 func_00104938();

void func_001037A8(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s64 temp_a0;
    s64 temp_a0_3;
    s64 temp_a0_4;
    s64 temp_a0_6;
    s64 temp_a2;
    s64 temp_a2_2;
    s64 temp_a2_3;
    s64 temp_a2_4;
    s64 var_a2;

    temp_s7 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s6 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s5 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    func_00104938();
    *(s32 *)0x10002000 = 0x38000000;
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
    temp_a2 = func_001045A8(arg0, 0x30000000);
    temp_a0 = *(s64 *)0x10002030;
    *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0 << 0x20) >> 0x20);
    if (temp_a0 < 0) {
        var_v0 = -(*(s32 *)0x10002020 & 0x1F) & 0x1F;
    } else {
        var_v0 = 0x20;
    }
    *(s32 *)((u8 *)arg0 + 0x84C) = var_v0;
    temp_v1 = temp_a2 & 0xFFFF;
    *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (temp_a2 << 0x20) >> 0x20) == 0);
    if (arg3 != 0) {
        var_a1 = 0;
        if (temp_v1 != 0) {
            var_a1 = func_00104728(arg0, arg3, temp_a2);
        }
    } else {
        var_a1 = 0;
    }
    temp_a0_2 = *(s32 *)((u8 *)arg1 + 0);
    var_a2 = 0x10 << arg3;
    var_a0 = (temp_s5 != 0) ? (temp_a0_2 >> 1) : temp_a0_2;
    if (temp_v1 > 0) {
        var_a0 = var_a0 + 1 + (((temp_v1 - 1) << arg3) + var_a1);
        var_v0_2 = var_a0 * 2;
        if (var_a0 >= var_a2) {
            var_a0 -= var_a2 * 2;
            goto block_13;
        }
    } else {
        var_v0_2 = var_a0 * 2;
        if (temp_v1 < 0) {
            var_a0 = (var_a0 - 1) - ((~temp_v1 << arg3) + var_a1);
            if (var_a0 < -var_a2) {
                var_a0 += var_a2 * 2;
            }
block_13:
            var_v0_2 = var_a0 * 2;
        }
    }
    *(s32 *)((u8 *)arg1 + 0) = (s32) ((temp_s5 == 0) ? var_a0 : var_v0_2);
    if (temp_s7 != 0) {
        func_00104938(arg0, var_a1, var_a2);
        *(u8 *)0x10002000 = 0x3C000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 0;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
        var_a2 = func_001045A8(arg0, 0x30000000);
        var_a1 = *(u8 *)0x10002020;
        temp_a0_3 = *(u8 *)0x10002030;
        *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0_3 << 0x20) >> 0x20);
        if (temp_a0_3 < 0) {
            var_v0_3 = -(var_a1 & 0x1F) & 0x1F;
        } else {
            var_v0_3 = 0x20;
        }
        *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_3;
        *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (var_a2 << 0x20) >> 0x20) == 0);
        *(s32 *)((u8 *)arg2 + 0) = (s32) (s16) (var_a2 & 0xFFFF);
    }
    func_00104938(arg0, var_a1, var_a2);
    *(u8 *)0x10002000 = 0x38000000;
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
    temp_a2_2 = func_001045A8(arg0, 0x30000000);
    temp_a0_4 = *(u8 *)0x10002030;
    *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0_4 << 0x20) >> 0x20);
    if (temp_a0_4 < 0) {
        var_v0_4 = -(*(u8 *)0x10002020 & 0x1F) & 0x1F;
    } else {
        var_v0_4 = 0x20;
    }
    *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_4;
    temp_v1_2 = temp_a2_2 & 0xFFFF;
    *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (temp_a2_2 << 0x20) >> 0x20) == 0);
    if ((temp_s4 != 0) && (temp_v1_2 != 0)) {
        var_a1_2 = func_00104728(arg0, temp_s4, temp_a2_2);
    } else {
        var_a1_2 = 0;
    }
    if (temp_s6 != 0) {
        *(s32 *)((u8 *)arg1 + 4) = (s32) ((s32) *(s32 *)((u8 *)arg1 + 4) >> 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg1 + 4);
    temp_a2_3 = 0x10 << temp_s4;
    var_a0_2 = (temp_s5 != 0) ? (temp_a0_5 >> 1) : temp_a0_5;
    if (temp_v1_2 > 0) {
        var_a0_2 = var_a0_2 + 1 + (((temp_v1_2 - 1) << temp_s4) + var_a1_2);
        var_v0_5 = var_a0_2 * 2;
        if (var_a0_2 >= temp_a2_3) {
            var_a0_2 -= temp_a2_3 * 2;
            goto block_34;
        }
    } else {
        var_v0_5 = var_a0_2 * 2;
        if (temp_v1_2 < 0) {
            var_a0_2 = (var_a0_2 - 1) - ((~temp_v1_2 << temp_s4) + var_a1_2);
            if (var_a0_2 < -temp_a2_3) {
                var_a0_2 += temp_a2_3 * 2;
            }
block_34:
            var_v0_5 = var_a0_2 * 2;
        }
    }
    *(s32 *)((u8 *)arg1 + 4) = (s32) ((temp_s5 == 0) ? var_a0_2 : var_v0_5);
    if (temp_s6 != 0) {
        *(s32 *)((u8 *)arg1 + 4) = (s32) (*(s32 *)((u8 *)arg1 + 4) * 2);
    }
    if (temp_s7 != 0) {
        func_00104938(arg0, var_a1_2, temp_a2_3, arg1 + 4);
        *(u8 *)0x10002000 = 0x3C000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 0;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
        temp_a2_4 = func_001045A8(arg0, 0x30000000);
        temp_a0_6 = *(u8 *)0x10002030;
        *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0_6 << 0x20) >> 0x20);
        if (temp_a0_6 < 0) {
            var_v0_6 = -(*(u8 *)0x10002020 & 0x1F) & 0x1F;
        } else {
            var_v0_6 = 0x20;
        }
        *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_6;
        *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (temp_a2_4 << 0x20) >> 0x20) == 0);
        *(s32 *)((u8 *)arg2 + 4) = (s32) (s16) (temp_a2_4 & 0xFFFF);
    }
}
