/* Draft (not built): func_00159278 at 0x00159278, size 0x364, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00159278.c:47: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00159278/func_00159278.s */

s32 func_00150D58(s32);                             /* extern */
s32 func_001510C0(s32, void *, s32);            /* extern */
s32 func_00151148(s32);                         /* extern */
s32 func_00152F70(void *, s32, s16 *);              /* extern */
s32 func_00159DF8(void *);                          /* extern */
s32 func_00159E28(void *);                          /* extern */
s32 func_0016F050(void *, s16, void *, void *); /* extern */

void func_00159278(u8 *arg0) {
    s16 sp10;
    s32 (*temp_v0)(s32);
    s16 var_a1;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s0;
    u32 temp_v0_2;
    u8 **temp_a0_3;
    u8 **temp_s1;
    u8 *temp_a0;
    u8 *temp_s3;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x3C);
    temp_s4 = *(s32 *)((u8 *)arg0 + 4);
    temp_s1 = *(u8 ***)((u8 *)arg0 + 8);
    if ((temp_v1 >= 0) && (*(s32 *)((u8 *)arg0 + 0x40) >= temp_v1)) {
        temp_v0 = *(s32 (**)(s32))((u8 *)arg0 + 0x48);
        if (temp_v0 != NULL) {
            temp_v0(*(s32 *)((u8 *)arg0 + 0x4C));
        }
    }
    if (*(s8 *)((u8 *)arg0 + 3) != 1) {
        goto block_12;
    }
    if ((*(s32 (**)(u8 **, s32))((u8 *)(*temp_s1) + 0x24))(temp_s1, 1) != 0) {
block_12:
        temp_s3 = arg0 + 0x14;
        (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 1, 0x7FFFFFFF, temp_s3);
        if ((func_00150D58(temp_s4) == 0) && (temp_a2 = *(s32 *)((u8 *)arg0 + 0x18), ((temp_a2 < 4) == 0)) && (temp_a0 = *(u8 **)((u8 *)arg0 + 0x14), (((*(u8 *)((u8 *)temp_a0 + 1) | (*(u16 *)((u8 *)temp_a0 + 0) << 8)) & 0xFFFF) == 0x8001))) {
            *(s8 *)((u8 *)arg0 + 1) = 3;
            if (func_00152F70(temp_a0, temp_a2, &sp10) == 0) {
                if (*(s32 *)((u8 *)arg0 + 0x18) >= sp10) {
                    func_0016F050(temp_s3, sp10, temp_s3, sp);
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 0, temp_s3);
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, sp);
                    goto block_18;
                }
                goto block_36;
            }
block_18:
            if (*(s32 *)((u8 *)arg0 + 0x9C) != 0) {
loop_29:
                (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 1, 0x7FFFFFFF, temp_s3);
                temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x18);
                var_a1 = 0;
                if (temp_a0_2 == 0) {

                } else {
                    var_s0 = temp_a0_2 > 0;
                    if ((var_s0 != 0) && ((s8) *(u16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x14)) + 0) == 0)) {
                        var_a1 = 1;
loop_23:
                        if (var_a1 < temp_a0_2) {
                            if (*(*(u8 **)((u8 *)arg0 + 0x14) + var_a1) == 0) {
                                var_a1 += 1;
                                goto loop_23;
                            }
                        }
                        var_s0 = var_a1 < temp_a0_2;
                    }
                    func_0016F050(temp_s3, var_a1, temp_s3, sp);
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 0, temp_s3);
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, sp);
                    if (var_s0 == 0) {
                        goto loop_29;
                    }
                }
            }
        } else if (*(s32 *)((u8 *)arg0 + 0x34) >= func_00159E28(arg0)) {
            *(s8 *)((u8 *)arg0 + 1) = 3;
            (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, temp_s3);
        } else {
            temp_a0_3 = *(u8 ***)((u8 *)arg0 + 0xC);
            temp_s0 = func_00159DF8(arg0);
            temp_v0_2 = (*(u32 (**)(u8 **, s32))((u8 *)(*temp_a0_3) + 0x24))(temp_a0_3, 0);
            if (((s32) ((temp_v0_2 >> 0x1F) + temp_v0_2) >> 1) < temp_s0) {
block_36:
                (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, temp_s3);
            } else {
                if (func_00150D58(temp_s4) == 0xA) {
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, temp_s3);
                }
                if (func_00150D58(temp_s4) == 0xF) {
                    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, temp_s3);
                }
                func_001510C0(temp_s4, *(u8 **)((u8 *)arg0 + 0x14), *(s32 *)((u8 *)arg0 + 0x18));
                func_00151148(temp_s4);
            }
        }
    } else {
        *(s8 *)((u8 *)arg0 + 1) = 3;
    }
}
