/* Draft (not built): DTR_ExecHndl at 0x00165180, size 0x36C, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: : d_00165180.c:108: too few arguments to function `scePrintf'
 * Original: asm/nonmatchings/cri/dtr/DTR_ExecHndl.s */

s32 func_0010AB58(s32, s32);                    /* extern */
s32 func_0016F050(s32 *, s32, s32 *, s32 *); /* extern */
s32 scePrintf(s32 *, s32, s32, s32);        /* extern */
s32 sceSifSetDma(void *, s32, s32, s32);        /* extern */
extern s32 D_00463210;
extern s32 D_00463230;
extern s32 D_00463258;
extern s32 D_00463288;
extern s32 D_004632B0;
extern s32 D_004632D8;

void DTR_ExecHndl(u8 *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp30;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s8 temp_a0;
    u8 **temp_a0_2;
    u8 **temp_a0_3;
    u8 **temp_a0_4;
    u8 **temp_a0_5;
    u8 **temp_a0_6;
    u8 **temp_a0_7;
    u8 **temp_a0_8;
    u8 **temp_a0_9;

    temp_a0 = *(s8 *)((u8 *)arg0 + 1);
    if (temp_a0 == 1) {
        if (*(s8 *)((u8 *)arg0 + 2) == temp_a0) {
            temp_a0_2 = *(u8 ***)((u8 *)arg0 + 4);
            (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_2) + 0x20))(temp_a0_2, 0, arg0 + 0xC);
            *(s32 *)((u8 *)arg0 + 0xC) = 0;
            temp_a0_3 = *(u8 ***)((u8 *)arg0 + 8);
            *(s32 *)((u8 *)arg0 + 0x10) = 0;
            (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0_3) + 0x20))(temp_a0_3, 1, arg0 + 0x14);
            *(s32 *)((u8 *)arg0 + 0x14) = 0;
            temp_v1 = *(s32 *)((u8 *)arg0 + 0x10);
            *(s32 *)((u8 *)arg0 + 0x18) = 0;
            *(s8 *)((u8 *)arg0 + 2) = 0;
            *(s32 *)((u8 *)arg0 + 0x3C) = (s32) (*(s32 *)((u8 *)arg0 + 0x3C) + temp_v1);
            if (temp_v1 != 0) {
                scePrintf(&D_00463210);
loop_4:
                goto loop_4;
            }
            goto block_7;
        }
block_7:
        if ((u8) *(s8 *)((u8 *)arg0 + 2) == 0) {
            temp_a0_4 = *(u8 ***)((u8 *)arg0 + 4);
            (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_a0_4) + 0x18))(temp_a0_4, 1, 0x7FFFFFFF, sp);
            temp_a0_5 = *(u8 ***)((u8 *)arg0 + 8);
            (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_a0_5) + 0x18))(temp_a0_5, 0, 0x7FFFFFFF, &sp20);
            temp_a1 = *(s32 *)((u8 *)arg0 + 0x38);
            temp_s1 = ((s32) ((sp4 < sp24) int sp4 : sp24) / temp_a1) * temp_a1;
            func_0016F050(sp, temp_s1, sp, &sp10);
            temp_a0_6 = *(u8 ***)((u8 *)arg0 + 4);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_a0_6) + 0x1C))(temp_a0_6, 1, &sp10);
            func_0016F050(&sp20, temp_s1, &sp20, &sp30);
            temp_a0_7 = *(u8 ***)((u8 *)arg0 + 8);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_a0_7) + 0x1C))(temp_a0_7, 0, &sp30);
            if (temp_s1 > 0) {
                if (sp4 & 0x3F) {
                    scePrintf(&D_00463230);
                    scePrintf(&D_00463258, sp0, sp20, sp4);
loop_11:
                    goto loop_11;
                }
                if (!(sp0 & 0x3F)) {
                    temp_a1_2 = sp0 + sp4;
                    if (sp20 & 0x3F) {
                        scePrintf(&D_004632B0, temp_a1_2);
                        scePrintf(&D_00463258, sp0, sp20, sp4);
loop_21:
                        goto loop_21;
                    }
                    func_0010AB58(sp0, temp_a1_2 - 1);
                    *(s32 *)((u8 *)arg0 + 0x1C) = (s32) (sp0 & 0x0FFFFFFF);
                    *(s32 *)((u8 *)arg0 + 0x20) = sp20;
                    *(s32 *)((u8 *)arg0 + 0x24) = sp4;
                    *(s32 *)((u8 *)arg0 + 0x28) = 0;
                    temp_v0 = sceSifSetDma(arg0 + 0x1C, 1, sp4, sp20);
                    *(s32 *)((u8 *)arg0 + 0x2C) = temp_v0;
                    if (temp_v0 == 0) {
                        scePrintf(&D_004632D8);
                        temp_a0_8 = *(u8 ***)((u8 *)arg0 + 4);
                        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_a0_8) + 0x1C))(temp_a0_8, 1, sp);
                        temp_a0_9 = *(u8 ***)((u8 *)arg0 + 8);
                        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_a0_9) + 0x1C))(temp_a0_9, 0, &sp20);
                    } else {
                        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($sp) */);
                        M2C_ERROR(/* unknown instruction: ldr $a0, ($sp) */);
                        M2C_ERROR(/* unknown instruction: sdl $a0, 0x13($s2) */);
                        M2C_ERROR(/* unknown instruction: sdr $a0, 0xc($s2) */);
                        M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($s3) */);
                        M2C_ERROR(/* unknown instruction: ldr $a0, ($s3) */);
                        M2C_ERROR(/* unknown instruction: sdl $a0, 0x1b($s2) */);
                        M2C_ERROR(/* unknown instruction: sdr $a0, 0x14($s2) */);
                        *(s8 *)((u8 *)arg0 + 2) = 1;
                    }
                } else {
                    scePrintf(&D_00463288);
                    scePrintf(&D_00463258, sp0, sp20, sp4);
loop_17:
                    goto loop_17;
                }
            }
        }
    }
}
