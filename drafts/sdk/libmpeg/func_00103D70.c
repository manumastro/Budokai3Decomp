/* Draft (not built): func_00103D70 at 0x00103D70, size 0x558, segment sdk/libmpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libmpeg/func_00103D70.s */

s32 func_001037A8();
s32 func_00103BD0();
s64 func_001045A8();
s32 func_00104728();
s32 func_00104938();
s32 func_00104970();
s32 func_00105A58();
s32 func_00109738();
extern s32 D_0045CF08;

s32 func_00103D70(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 *sp20;
    s32 *sp24;
    s32 temp_s6;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2_2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s4;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 temp_a0;
    s64 temp_a2;
    u8 *temp_s1;

    temp_s1 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s6 = M2C_ERROR(/* Read from unset register $t2 */);
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xF8FFFFFF) | (*(s32 *)((u8 *)arg0 + 0x160) << 0x18);
    sp20 = arg3;
    sp24 = M2C_ERROR(/* Read from unset register $t1 */);
    func_00104938(arg0);
    *(s32 *)0x10002000 = 0x34000000;
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
    temp_a2 = func_001045A8(arg0, 0x30000000);
    temp_a0 = *(s64 *)0x10002030;
    *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0 << 0x20) >> 0x20);
    if (temp_a0 < 0) {
        var_v0_2 = -(*(s32 *)0x10002020 & 0x1F) & 0x1F;
    } else {
        var_v0_2 = 0x20;
    }
    *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_2;
    temp_v0 = temp_a2 & 0xFFFF;
    *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (temp_a2 << 0x20) >> 0x20) == 0);
    *arg1 = (s32) temp_v0;
    if (temp_v0 == 0) {
        func_00109738(arg0, &D_0045CF08, temp_a2);
        *(s32 *)((u8 *)arg0 + 0x12C) = 1;
        return 0;
    }
    if (temp_v0 & 0xC) {
        if ((*(s32 *)((u8 *)arg0 + 0x184) == 3) && (*(s32 *)((u8 *)arg0 + 0x18C) != 0)) {
            *arg2 = 2;
        } else {
            *arg2 = func_00104728(arg0, 2, temp_a2);
        }
    } else if ((temp_v0 & 1) && (*(s32 *)((u8 *)arg0 + 0x190) != 0)) {
        *arg2 = ((*(s32 *)((u8 *)arg0 + 0x184) ^ 3) == 0) ? 2 : 1;
    }
    temp_a2_2 = *(s32 *)((u8 *)arg0 + 0x184);
    temp_a1 = *arg2;
    if (temp_a2_2 == 3) {
        var_s4 = temp_a1 == 2;
    } else {
        var_s4 = 0;
    }
    var_s7 = 0;
    if (var_s4 == 0) {
        var_s7 = temp_a2_2 == 3;
    }
    var_v0_3 = 0;
    if (temp_a2_2 == 3) {
        var_v0_3 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x18C) == 0) {
            if (*arg1 & 3) {
                var_v0_3 = func_00104728(arg0, 1, (s64) temp_a2_2);
            } else {
                var_v0_3 = 0;
            }
        }
    }
    *sp20 = var_v0_3;
    if (*arg1 & 0x10) {
        *(s32 *)((u8 *)arg0 + 0x1C4) = func_00104728(arg0, 5);
    }
    if ((*arg1 & 8) || ((*arg1 & 1) && (*(s32 *)((u8 *)arg0 + 0x190) != 0))) {
        if (*(s32 *)((u8 *)arg0 + 0x858) != 0) {
            func_00103BD0(arg0, temp_s1, temp_s6, sp24, *(s32 *)((u8 *)arg0 + 0x178) - 1, temp_a1 == 3, var_s7);
        } else {
            func_001037A8(arg0, temp_s1, temp_s6, *(s32 *)((u8 *)arg0 + 0x168) - 1);
        }
    }
    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x12C) == 0) {
        if (*arg1 & 4) {
            if (*(s32 *)((u8 *)arg0 + 0x858) != 0) {
                func_00103BD0(arg0, temp_s1, temp_s6, sp24, *(s32 *)((u8 *)arg0 + 0x180) - 1, 0, var_s7);
            } else {
                func_001037A8(arg0, temp_s1 + 8, temp_s6, *(s32 *)((u8 *)arg0 + 0x170) - 1);
            }
        }
        var_v0 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x12C) == 0) {
            temp_v1 = *arg1;
            var_v0_4 = temp_v1 & 3;
            if (temp_v1 & 1) {
                if (*(s32 *)((u8 *)arg0 + 0x190) != 0) {
                    func_00104970(arg0, 1);
                }
                var_v0_4 = *arg1 & 3;
            }
            if (var_v0_4 != 0) {
                func_00105A58(*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + arg0) + 0x5A4), 0x300);
                func_00104938(arg0);
                temp_v0_2 = ((*arg1 & 1) << 0x1B) | ((*sp20 << 0x19) | (*(s32 *)((u8 *)arg0 + 0x1C0) << 0x1A)) | ((*(s32 *)((u8 *)arg0 + 0x1C4) << 0x10) | 0x20000000);
                *(u8 *)0x10002000 = temp_v0_2;
                temp_a1_2 = temp_v0_2 & 0xF0000000;
                *(s32 *)((u8 *)arg0 + 0x82C) = temp_a1_2;
                if ((temp_a1_2 == 0x20000000) || (temp_a1_2 == 0x30000000) || (temp_a1_2 == 0x40000000)) {
                    *(s32 *)((u8 *)arg0 + 0x828) = 0;
                } else {
                    *(s32 *)((u8 *)arg0 + 0x828) = 1;
                }
            } else {
                *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + arg0) + 0x6DC) = 1;
            }
            *(s32 *)((u8 *)arg0 + 0x1C0) = 0;
            if (*(s32 *)((u8 *)arg0 + 0x12C) != 0) {
                return 0;
            }
            if (((*arg1 & 1) || (*(s32 *)((u8 *)arg0 + 0x1C0) = 1, ((*arg1 & 1) != 0))) && (*(s32 *)((u8 *)arg0 + 0x190) == 0)) {
                *(s32 *)((u8 *)temp_s1 + 0x14) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x10) = 0;
                *(s32 *)((u8 *)temp_s1 + 4) = 0;
                *(s32 *)((u8 *)temp_s1 + 0) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
                *(s32 *)((u8 *)temp_s1 + 0x18) = 0;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
                *(s32 *)((u8 *)temp_s1 + 8) = 0;
            }
            temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x160);
            var_v0 = 1;
            if (temp_a0_2 == 2) {
                var_v0 = 1;
                if (!(*arg1 & 9)) {
                    *(s32 *)((u8 *)temp_s1 + 0) = 0;
                    *(s32 *)((u8 *)temp_s1 + 0x14) = 0;
                    *(s32 *)((u8 *)temp_s1 + 0x10) = 0;
                    *(s32 *)((u8 *)temp_s1 + 4) = 0;
                    if (*(s32 *)((u8 *)arg0 + 0x184) == 3) {
                        *arg2 = temp_a0_2;
                    } else {
                        *arg2 = 1;
                        *sp24 = *(s32 *)((u8 *)arg0 + 0x184) == 2;
                    }
                    var_v0 = 1;
                }
            }
            /* Duplicate return node #61. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #61. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
