/* Draft (not built): func_00103478 at 0x00103478, size 0x32C, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00103478.c:133: parse error before `int'
 * Original: asm/sdk/libmpeg.s */

s32 func_00102940(void *, s32, s32, s32);           /* extern */
s32 func_00103018(void *, s32);                 /* extern */
s32 func_00103D70(void *, s32 *, s32 *, s32 *); /* extern */
s32 func_001042C8(void *);                          /* extern */
s32 func_00104810(void *, s32);                 /* extern */
s32 func_00104938(void *, s32);                 /* extern */
s32 func_00104978(void *, void *, s32 *, s32 *); /* extern */
s32 func_00105AF8(s32 *, s32 *);                    /* extern */
s32 func_00107E58(s32);                         /* extern */
s32 func_001095D0();                            /* extern */
s32 func_00109670(void *, s32);                 /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
extern s32 D_0045CEB8;

s32 func_00103478(u8 *arg0, s32 arg1) {
    s32 sp20;
    s32 sp30;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s64 temp_a0;

    sp40 = 0;
    sp44 = 0;
    var_v0 = func_00105AF8(&sp40, &sp44);
    if (var_v0 == 0) {
        *(s32 *)((u8 *)arg0 + 0x12C) = 0;
loop_2:
        if (sp40 < arg1) {
            var_s5 = 1;
            temp_a1 = *(s32 *)((u8 *)arg0 + 0x820) * 0x140;
            *(s32 *)((u8 *)(temp_a1 + arg0) + 0x6DC) = 0;
            func_00104938(arg0, temp_a1);
            if (*(s32 *)0x1000B020 != 0) {
                if (!(*(s32 *)0x10002010 & 0x4000)) {
loop_9:
                    if ((*(s32 *)0x1000B420 == 0) && !(*(s32 *)0x1000B400 & 0x100)) {
                        func_00107E58(*(s32 *)((u8 *)arg0 + 0x868));
                    }
                    if (*(s32 *)((u8 *)arg0 + 0x878) == 0) {
                        if (*(u8 *)0x1000B020 != 0) {
                            if (*(u8 *)0x10002010 & 0x4000) {
                                goto block_15;
                            }
                            goto loop_9;
                        }
                        goto block_16;
                    }
                    func_001095D0();
                    var_v0_2 = 0;
                } else {
                    goto block_16;
                }
            } else {
block_15:
block_16:
                temp_a1_2 = *(s32 *)0x10002020;
                temp_a0 = *(s64 *)0x10002030;
                *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0 << 0x20) >> 0x20);
                if (temp_a0 < 0) {
                    temp_v1 = temp_a1_2 & 0x1F;
                    if (temp_v1 != 0) {
                        var_v0_3 = 0x20 - temp_v1;
                    } else {
                        var_v0_3 = 0;
                    }
                } else {
                    var_v0_3 = 0x20;
                }
                *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_3;
                if (*(u8 *)0x10002010 & 0x4000) {
                    var_s5 = 0;
                    func_00109670(arg0, temp_a1_2);
                }
                var_v0_2 = var_s5;
            }
            if (var_v0_2 != 0) {
                if (sp44 == 0) {
                    if ((func_00104810(arg0, 0x17) == 0) || (*(s32 *)((u8 *)arg0 + 0x12C) != 0)) {
                        *(s32 *)((u8 *)arg0 + 0x12C) = 0;
                        var_v0 = 3;
                    } else {
                        sp44 = func_001042C8(arg0);
                        if (*(s32 *)((u8 *)arg0 + 0x12C) == 0) {
                            goto block_35;
                        }
                        goto block_39;
                    }
                } else {
block_35:
                    if (sp40 >= arg1) {
                        func_00109738(arg0, &D_0045CEB8);
                        var_v0 = 2;
                    } else if (sp44 == 1) {
                        if (func_00103D70(arg0, &sp48, &sp4C, &sp50) == 0) {
block_39:
                            *(s32 *)((u8 *)arg0 + 0x12C) = 0;
                            var_v0 = 1;
                        } else {
                            goto block_42;
                        }
                    } else {
                        if (func_00104978(arg0, sp, &sp4C, &sp20) != 0) {
block_42:
                            if (func_00102940(arg0, sp40, sp44, sp48) == 0) {
                                goto block_43;
                            }
                            if (sp40 != 0) {
                                func_00103018(arg0, *(s32 *)((u8 *)arg0 + 0x820) ^ 1);
                            }
                            sp40 += 1;
                            *(s32 *)((u8 *)arg0 + 0x820) = (s32) (*(s32 *)((u8 *)arg0 + 0x820) ^ 1);
                            sp44 -= 1;
                            goto loop_2;
                        }
block_43:
                        *(s32 *)((u8 *)arg0 + 0x12C) = 0;
                        var_v0 = 2;
                    }
                }
            } else {
                var_v0 = (*(s32 *)((u8 *)arg0 + 0x878) != 0) int 4 : 2;
            }
        } else {
            var_v0 = 0;
        }
    }
    return var_v0;
}
