/* Draft (not built): func_0016CA28 at 0x0016CA28, size 0x380, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016CA28.c:195: warning: assignment makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/ps2rna/func_0016CA28.s */

s32 func_00165638(s32, s32, void *);                /* extern */
s32 func_00165728(s32);                         /* extern */
s32 func_00165FB8(s32, void *, s32, s32 *, s32); /* extern */
s32 func_0016C078();                                /* extern */
s32 func_0016C0F0(s32);                         /* extern */
s32 memset(s8 *, s32, s32);             /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s8 D_0041C520;
extern s32 D_00464AD0;
extern s32 D_00464AF8;
extern s32 D_00464B20;

s8 *func_0016CA28(u8 ***arg0, s32 arg1) {
    s32 sp8;
    s32 sp10;
    s32 *var_a2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0_3;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s5;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 *temp_s4;
    s8 *temp_s4_2;
    s8 *temp_v1_2;
    s8 *var_a0;
    s8 *var_a1;
    s8 *var_a1_2;
    s8 *var_s0;
    s8 *var_s0_3;
    s8 *var_s0_4;
    s8 *var_s1_3;
    s8 *var_s1_6;
    s8 *var_s3;
    s8 *var_v0;
    s8 *var_v1;
    u8 ***var_a0_2;
    u8 **temp_a0_2;
    u8 **temp_a0_3;
    u8 **temp_v1;
    u8 *temp_a2;
    u8 *temp_v0_3;

    var_s1 = 0;
    var_s3 = &D_0041C520;
    if (D_0041C520 != 0) {
        var_a0 = &D_0041C520;
        var_v1 = &D_0041C520;
loop_2:
        var_s1 += 1;
        var_a0 += 0x64;
        var_v1 += 0x64;
        if (var_s1 < 0x10) {
            var_s3 = var_v1;
            if (*var_a0 != 0) {
                goto loop_2;
            }
        }
    }
    var_v0 = NULL;
    if (var_s1 != 0x10) {
        if (D_0041A0D8 != 1) {
            goto block_12;
        }
        if (D_0041A0D0 > 0) {
block_12:
            var_s1_2 = 0;
            memset(var_s3, 0, 0x64);
            *(s32 *)((u8 *)var_s3 + 4) = arg1;
            if (arg1 > 0) {
                temp_s4 = var_s3 + 8;
                var_s0 = temp_s4;
loop_14:
                temp_v0 = func_0016C078();
                *var_s0 = temp_v0;
                var_s0 += 4;
                if (temp_v0 == 0) {
                    scePrintf(&D_00464AD0);
                    var_v0 = NULL;
                    if (arg1 > 0) {
                        var_s1_3 = temp_s4;
                        var_s0_2 = arg1;
                        do {
                            temp_v0_2 = *var_s1_3;
                            var_s1_3 += 4;
                            if (temp_v0_2 != 0) {
                                func_0016C0F0(temp_v0_2);
                            }
                            var_s0_2 -= 1;
                        } while (var_s0_2 != 0);
                        return NULL;
                    }
                    /* Duplicate return node #52. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_s1_2 += 1;
                if (var_s1_2 >= arg1) {
                    goto block_22;
                }
                goto loop_14;
            }
block_22:
            var_s1_4 = 0;
            if (arg1 > 0) {
                var_a2 = &sp8;
                var_a1 = var_s3 + 8;
                do {
                    temp_v0_3 = *var_a1;
                    var_a1 += 4;
                    var_s1_4 += 1;
                    *var_a2 = *(s32 *)((u8 *)temp_v0_3 + 4);
                    var_a2 += 4;
                } while (var_s1_4 < arg1);
            }
            temp_v0_4 = func_00165FB8(8, sp, 4, &sp10);
            *(s32 *)((u8 *)var_s3 + 0x20) = temp_v0_4;
            if (temp_v0_4 == 0) {
                scePrintf(&D_00464AF8);
                return NULL;
            }
            var_s1_5 = 0;
            if (arg1 > 0) {
                temp_s4_2 = var_s3 + 8;
                var_s0_3 = var_s3 + 0x10;
                var_v0_2 = 0 * 4;
loop_30:
                var_s1_5 += 1;
                temp_a2 = temp_s4_2[var_v0_2];
                temp_v0_5 = func_00165638(*(var_v0_2 + arg0), *(s32 *)((u8 *)temp_a2 + 8), temp_a2);
                *var_s0_3 = temp_v0_5;
                var_s0_3 += 4;
                if (temp_v0_5 == 0) {
                    var_s5 = 0;
                    scePrintf(&D_00464B20);
                    var_v0 = NULL;
                    if (arg1 > 0) {
                        var_s1_6 = temp_s4_2;
                        var_s0_4 = var_s3 + 0x10;
                        var_v0_3 = *(s32 *)((u8 *)var_s3 + 0x10);
loop_33:
                        var_s0_4 += 4;
                        if (var_v0_3 != 0) {
                            func_00165728(var_v0_3);
                        }
                        temp_v0_6 = *(s32 *)((u8 *)var_s3 + 0x20);
                        if (temp_v0_6 != 0) {
                            func_00165FB8(9, sp, 1, NULL, temp_v0_6);
                        }
                        temp_a0 = *var_s1_6;
                        var_s1_6 += 4;
                        if (temp_a0 != 0) {
                            func_0016C0F0(temp_a0);
                        }
                        var_s5 += 1;
                        if (var_s5 < arg1) {
                            var_v0_3 = *var_s0_4;
                            goto loop_33;
                        }
                        return NULL;
                    }
                    /* Duplicate return node #52. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_v0_2 = var_s1_5 * 4;
                if (var_s1_5 >= arg1) {
                    goto block_45;
                }
                goto loop_30;
            }
block_45:
            var_s1_7 = 0;
            if (arg1 > 0) {
                var_a1_2 = var_s3 + 0x18;
                var_a0_2 = arg0;
                do {
                    temp_v1 = *var_a0_2;
                    var_a0_2 += 4;
                    var_s1_7 += 1;
                    *var_a1_2 = temp_v1;
                    var_a1_2 += 4;
                } while (var_s1_7 < arg1);
            }
            *(s8 *)((u8 *)var_s3 + 0x30) = 0;
            *(s8 *)((u8 *)var_s3 + 0x31) = 0;
            *(s8 *)((u8 *)var_s3 + 0x32) = (s8) arg1;
            *(s8 *)((u8 *)var_s3 + 0x33) = (s8) arg1;
            *(s32 *)((u8 *)var_s3 + 0x3C) = 0;
            *(s32 *)((u8 *)var_s3 + 0x40) = 0;
            *(s32 *)((u8 *)var_s3 + 0x54) = 0;
            *(s32 *)((u8 *)var_s3 + 0x58) = 0;
            *(s8 *)((u8 *)var_s3 + 0x5F) = 0;
            *(s8 *)((u8 *)var_s3 + 0x5E) = 0;
            if (arg1 > 0) {
                var_s1_8 = arg1;
                var_a0_3 = 0x40;
                do {
                    temp_v1_2 = &(var_s3 + 0xC)[var_a0_3];
                    var_s1_8 -= 1;
                    (var_s3 + 4)[var_a0_3] = 0;
                    var_a0_3 += 4;
                    *temp_v1_2 = 0;
                } while (var_s1_8 != 0);
            }
            *(s8 *)((u8 *)var_s3 + 0x5C) = 0;
            *(s8 *)((u8 *)var_s3 + 0x5D) = 1;
            *(s32 *)((u8 *)var_s3 + 0x24) = 0;
            temp_a0_2 = *arg0;
            temp_a0_3 = *arg0;
            temp_s0 = (*(s32 (**)(u8 **, s32))((u8 *)(*temp_a0_2) + 0x24))(temp_a0_2, 1);
            var_v0 = var_s3;
            *(s32 *)((u8 *)var_s3 + 0x28) = (s32) (temp_s0 + (*(s32 (**)(u8 **, s32))((u8 *)(*temp_a0_3) + 0x24))(temp_a0_3, 0));
            *(s32 *)((u8 *)var_s3 + 0x2C) = 0x4000;
            *(s8 *)((u8 *)var_s3 + 0) = 1;
            /* Duplicate return node #52. Try simplifying control flow for better match */
            return var_v0;
        }
        *(s8 *)((u8 *)var_s3 + 0) = (s8) D_0041A0D8;
        return var_s3;
    }
    return var_v0;
}
