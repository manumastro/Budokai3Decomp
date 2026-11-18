/* Draft (not built): func_0019C3A8 at 0x0019C3A8, size 0x468, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C3A8.s */

u64 __muldi3();
s64 func_0011F758();
s32 func_0019C288();
s64 func_0019C810();
s32 func_0019C870();
s32 func_0019CA98();
extern void *D_00426B40;

void func_0019C3A8(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1_3;
    s32 var_s2;
    s32 var_s4;
    s64 temp_a0_2;
    s64 temp_a1;
    s64 temp_a1_2;
    s64 temp_a1_3;
    s64 temp_a1_4;
    s64 temp_a1_5;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s2;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v0_3;
    s64 temp_v0_7;
    s64 temp_v1;
    s64 var_a0;
    s64 var_a1;
    s64 var_a1_2;
    s64 var_v0_2;
    s64 var_v1;
    u64 temp_a0;
    u64 temp_v0_6;
    u64 var_v0;

    if (*(s64 *)((u8 *)arg2 + 8) != 1) {
        if (*(s32 *)((u8 *)arg0 + 0) != 0) {
            temp_a1 = *(s64 *)((u8 *)arg1 + 0);
            temp_v0 = *(s64 *)((u8 *)arg0 + 0x188);
            temp_a1_2 = (temp_a1 < temp_v0) ? temp_v0 : temp_a1;
            *(s64 *)((u8 *)arg1 + 0) = temp_a1_2;
            if (*(s32 *)((u8 *)arg0 + 4) == 1) {
                *(s32 *)((u8 *)arg0 + 8) = 0;
                var_s2 = 0;
            } else {
                var_s2 = *(s32 *)((u8 *)arg0 + 8);
                temp_a2 = *(s64 *)((u8 *)arg0 + 0x188);
                if (var_s2 == 0) {
                    if (temp_a2 >= temp_a1_2) {
                        if (*(s32 *)((u8 *)arg0 + 0xC) == 0) {
                            *(s32 *)((u8 *)arg0 + 8) = 1;
                            var_s2 = 1;
                        }
                    } else {
                        *(s32 *)((u8 *)arg0 + 8) = 1;
                        if (*(s64 *)((u8 *)arg0 + 0x178) == -1) {
                            var_v0 = __muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg0 + 0x158), temp_a2, 1);
                            var_a1 = *(s64 *)((u8 *)arg0 + 0x160);
                        } else {
                            var_v0 = __muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg0 + 0x168), temp_a2, 1);
                            var_a1 = *(s64 *)((u8 *)arg0 + 0x170);
                        }
                        temp_a1_3 = func_0011F758(var_v0, var_a1);
                        *(s64 *)((u8 *)arg0 + 0x178) = (s64) *(s64 *)((u8 *)arg2 + 0);
                        *(s64 *)((u8 *)arg0 + 0x180) = (s64) (*(s64 *)((u8 *)arg1 + 0) + temp_a1_3);
                        func_0019C288(arg0, temp_a1_3);
                        var_s2 = *(s32 *)((u8 *)arg0 + 8);
                    }
                }
            }
            temp_v0_2 = *(s64 *)((u8 *)arg1 + 0);
            temp_s1 = *(s64 *)((u8 *)arg0 + 0x178);
            *(s64 *)((u8 *)arg0 + 0x188) = (s64) ((temp_v0_2 < *(s64 *)((u8 *)arg0 + 0x188)) ? *(s64 *)((u8 *)arg0 + 0x188) : temp_v0_2);
            if (temp_s1 != -1) {
                var_s4 = *(s64 *)((u8 *)arg0 + 0x180) + func_0011F758(__muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg2 + 0) - temp_s1, *(s64 *)((u8 *)arg0 + 0x188)), *(s64 *)((u8 *)arg2 + 8));
            } else {
                var_s4 = 0;
            }
            if (var_s2 != 0) {
                if (*(s32 *)((u8 *)arg0 + 0xC) == 1) {
                    temp_v0_3 = func_0011F758(__muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg0 + 0x148)), *(s64 *)((u8 *)arg0 + 0x150));
                    var_a1_2 = *(s64 *)((u8 *)arg1 + 0);
                    temp_v0_4 = var_a1_2 - var_s4;
                    temp_v0_5 = temp_v0_3 < temp_v0_4;
                    if (temp_v0_4 >= 0) {
                        if (temp_v0_5 == 0) {
                            var_a1_2 -= var_s4;
                            goto block_40;
                        }
                        goto block_39;
                    }
                    var_a1_2 -= var_s4;
                    if (temp_v0_3 < (var_s4 - var_a1_2)) {
block_39:
                        *(s64 *)((u8 *)arg0 + 0x178) = (s64) *(s64 *)((u8 *)arg2 + 0);
                        *(s64 *)((u8 *)arg0 + 0x180) = (s64) *(s64 *)((u8 *)arg1 + 0);
                        func_0019C288(arg0, var_a1_2);
                        var_s2 = *(s32 *)((u8 *)arg0 + 8);
                        *(s32 *)((u8 *)arg0 + 0x1A0) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0) + 1);
                    } else {
block_40:
                        temp_s1_2 = func_0019C810(arg0, (s64) (var_a1_2 << 0x20) >> 0x20);
                        temp_s2 = func_0011F758(__muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg0 + 0x138)), *(s64 *)((u8 *)arg0 + 0x140));
                        var_v0_2 = temp_s1_2;
                        if (temp_s1_2 < 0) {
                            var_v0_2 = 0 - var_v0_2;
                        }
                        if (temp_s2 < var_v0_2) {
                            temp_a0 = temp_s1_2 * 2;
                            if (temp_s2 < temp_s1_2) {
                                var_a0 = func_0011F758(temp_a0, temp_s2) - 1;
                                *(s32 *)((u8 *)arg0 + 0x194) = (s32) (*(s32 *)((u8 *)arg0 + 0x194) + ((s64) (var_a0 << 0x20) >> 0x20));
                            } else {
                                var_a0 = func_0011F758(temp_a0, temp_s2) + 1;
                                *(s32 *)((u8 *)arg0 + 0x198) = (s32) (*(s32 *)((u8 *)arg0 + 0x198) - ((s64) (var_a0 << 0x20) >> 0x20));
                            }
                            temp_v0_6 = __muldi3(var_a0, temp_s2);
                            temp_a1_4 = (temp_v0_6 >> 0x3F) + temp_v0_6;
                            *(s64 *)((u8 *)arg0 + 0x178) = (s64) *(s64 *)((u8 *)arg2 + 0);
                            temp_a1_5 = temp_a1_4 >> 1;
                            *(s64 *)((u8 *)arg0 + 0x180) = (s64) (var_s4 + temp_a1_5);
                            func_0019C870(arg0, (s64) (temp_a1_5 << 0x20) >> 0x20);
                        }
                        var_s2 = *(s32 *)((u8 *)arg0 + 8);
                    }
                }
            } else {
                temp_v1 = *(s64 *)((u8 *)arg0 + 0x188);
                if (temp_v1 < var_s4) {
                    temp_v0_7 = *(s64 *)((u8 *)arg2 + 0);
                    if (*(s32 *)((u8 *)arg0 + 0xC) != 0) {
                        *(s64 *)((u8 *)arg0 + 0x180) = temp_v1;
                        *(s64 *)((u8 *)arg0 + 0x178) = temp_v0_7;
                    } else {
                        *(s64 *)((u8 *)arg0 + 0x178) = temp_v0_7;
                        *(s64 *)((u8 *)arg0 + 0x180) = (s64) *(s64 *)((u8 *)arg0 + 0x128);
                    }
                    *(s32 *)((u8 *)arg0 + 0x190) = (s32) (*(s32 *)((u8 *)arg0 + 0x190) + 1);
                }
            }
            if (*(s64 *)((u8 *)arg0 + 0x178) == -1) {
                var_v1 = 0;
            } else {
                var_v1 = *(s64 *)((u8 *)arg0 + 0x180) + func_0011F758(__muldi3(*(s64 *)((u8 *)arg1 + 8), *(s64 *)((u8 *)arg2 + 0) - *(s64 *)((u8 *)arg0 + 0x178)), *(s64 *)((u8 *)arg2 + 8));
            }
            *(s64 *)((u8 *)arg3 + 0) = var_v1;
            *(s64 *)((u8 *)arg3 + 8) = (s64) *(s64 *)((u8 *)arg1 + 8);
            temp_a0_2 = *(s64 *)((u8 *)arg0 + 0x128);
            if (var_v1 < temp_a0_2) {
                *(s64 *)((u8 *)arg3 + 0) = temp_a0_2;
                *(s64 *)((u8 *)arg3 + 8) = (s64) *(s64 *)((u8 *)arg0 + 0x130);
            }
            *(s64 *)((u8 *)arg0 + 0x108) = (s64) *(s64 *)((u8 *)arg1 + 0);
            *(s64 *)((u8 *)arg0 + 0x110) = (s64) *(s64 *)((u8 *)arg1 + 8);
            *(s64 *)((u8 *)arg0 + 0x118) = (s64) *(s64 *)((u8 *)arg2 + 0);
            *(s64 *)((u8 *)arg0 + 0x120) = (s64) *(s64 *)((u8 *)arg2 + 8);
            *(s64 *)((u8 *)arg0 + 0x128) = (s64) *(s64 *)((u8 *)arg3 + 0);
            *(s64 *)((u8 *)arg0 + 0x130) = (s64) *(s64 *)((u8 *)arg3 + 8);
            temp_a3 = (s64) ((*(s64 *)((u8 *)arg1 + 0) - *(s64 *)((u8 *)arg3 + 0)) << 0x20) >> 0x20;
            if (var_s2 != 0) {
                temp_v0_8 = *(s32 *)((u8 *)arg0 + 0x1B4);
                temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x1B8);
                var_a1_3 = temp_v1_2 < temp_a3;
                *(s32 *)((u8 *)arg0 + 0x1B4) = (s32) ((temp_a3 >= temp_v0_8) ? temp_a3 : (s64) temp_v0_8);
                *(s32 *)((u8 *)arg0 + 0x1B8) = (s32) ((var_a1_3 == 0) ? temp_a3 : (s64) temp_v1_2);
            } else {
                temp_v0_9 = *(s32 *)((u8 *)arg0 + 0x1AC);
                temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x1B0);
                var_a1_3 = temp_v1_3 < temp_a3;
                *(s32 *)((u8 *)arg0 + 0x1AC) = (s32) ((temp_a3 >= temp_v0_9) ? temp_a3 : (s64) temp_v0_9);
                *(s32 *)((u8 *)arg0 + 0x1B0) = (s32) ((var_a1_3 == 0) ? temp_a3 : (s64) temp_v1_3);
            }
            D_00426B40 = arg0;
            func_0019CA98(arg0, var_a1_3);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        *(s64 *)((u8 *)arg3 + 0) = (s64) *(s64 *)((u8 *)arg1 + 0);
        *(s64 *)((u8 *)arg3 + 8) = (s64) *(s64 *)((u8 *)arg1 + 8);
        return;
    }
    *(s64 *)((u8 *)arg3 + 0) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg3 + 8) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
