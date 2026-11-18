/* Draft (not built): func_00180290 at 0x00180290, size 0x38C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00180290.c:141: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00180290.s */

s32 LSC_Create(s32);                                /* extern */
s32 func_001699D0(s32, s32);                    /* extern */
s32 func_0016DBE0(s32, s32);                /* extern */
s32 func_0017EF98(void *, void *, s32 *, s32 *); /* extern */
s32 func_0017F750(void *, void *);                  /* extern */
s32 func_0017FED0(void *);                      /* extern */
s32 func_00180078(void *, void *, s32, s32);    /* extern */
s32 func_00180268(void *);                          /* extern */
s32 func_00180620(void *);                          /* extern */
s32 func_00180670(void *, void *);              /* extern */
s32 func_001806C8();                                /* extern */
s32 func_00180730(void *);                          /* extern */
s32 func_001807F8(void *);                      /* extern */
s32 func_00181BB0(void *);                      /* extern */
s32 func_00181C30(void *);                      /* extern */
s32 func_00181FA8();                                /* extern */
s32 func_00182420(s32);                     /* extern */
s32 func_00182F70(void *);                      /* extern */
s32 func_001847A0(s32, s32, s32, s32);              /* extern */
s32 func_00184E18(void *, s32);                 /* extern */
s32 func_00185218(void *);                          /* extern */
s32 func_001852A8(void *);                          /* extern */
s32 func_00185308(void *);                      /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00187D20(void *, s32);             /* extern */
s32 func_00187D30(void *, s32);             /* extern */
s32 func_00188028(s32);                             /* extern */
s32 func_00199CA8(s32, s32, void *);            /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s32 D_004250B0;
extern s32 D_00465768;
extern s32 D_00465798;
extern s32 D_004657C8;
extern s32 D_00465808;
extern s32 D_00465830;
extern s32 D_00465858;
extern s32 D_00465880;
extern s32 D_004658A0;

u8 *func_00180290(u8 *arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *var_a0;
    s32 *var_a0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_a0_2;
    u8 *temp_s2;
    u8 *var_s0;
    u8 *var_v0;
    u8 *var_v1;

    if (arg0 == NULL) {
        var_a0 = &D_00465768;
        goto block_18;
    }
    var_v0 = NULL;
    if (func_001806C8() == 1) {
        temp_v0 = func_00181FA8();
        var_a0_2 = 0;
        var_s0 = temp_v0 + 0x6C;
        temp_s2 = temp_v0 + 4;
        if (*(s32 *)((u8 *)var_s0 + 4) != 0) {
            var_v1 = var_s0;
            var_a0_2 = 1;
loop_6:
            var_v1 += 0x2B8;
            if (var_a0_2 < 8) {
                var_s0 = var_v1;
                if (*(s32 *)((u8 *)var_s0 + 4) != 0) {
                    var_a0_2 += 1;
                    goto loop_6;
                }
            }
        }
        if (var_a0_2 != 8) {
            if (func_00180620(arg0) == -1) {
                var_a0 = &D_004657C8;
                goto block_18;
            }
            if (var_s0 != NULL) {
                memset(var_s0, 0, 0x2B8);
            }
            func_00180670(var_s0, arg0);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($s1) */);
            M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s1) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($s1) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x1f($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x18($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x1b($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, 0x14($s0) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0x23($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x1c($s0) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x2b($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0x24($s0) */);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x27($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, 0x20($s1) */);
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x2f($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, 0x28($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x33($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0x2c($s0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x3b($s0) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, 0x34($s0) */);
            temp_v0_2 = func_0017F750(var_s0, arg0);
            *(s32 *)((u8 *)var_s0 + 0x40) = temp_v0_2;
            if (temp_v0_2 == 0) {
                var_a0_3 = &D_00465808;
                goto block_40;
            }
            func_0017FED0(var_s0);
            func_0017EF98(arg0, sp, &sp4, &sp8);
            func_00180078(var_s0, arg0, *(s32 *)((u8 *)temp_s2 + 4), *(s32 *)((u8 *)temp_s2 + 8));
            temp_v0_3 = func_00180268(var_s0);
            *(s32 *)((u8 *)var_s0 + 0x1D4) = temp_v0_3;
            if (temp_v0_3 == 0) {
                var_a0_3 = &D_00465830;
                goto block_40;
            }
            temp_v0_4 = func_0016DBE0(0, 0);
            *(s32 *)((u8 *)var_s0 + 0x1F4) = temp_v0_4;
            if (temp_v0_4 == 0) {
                var_a0_3 = &D_00465858;
                goto block_40;
            }
            *(s32 *)((u8 *)var_s0 + 0x3C) = 1;
            *(s32 *)((u8 *)var_s0 + 0x5C) = sp0;
            *(s32 *)((u8 *)var_s0 + 0x6C) = 0;
            *(s32 **)((u8 *)var_s0 + 0) = &D_004250B0;
            *(s32 *)((u8 *)var_s0 + 8) = 0;
            *(s32 *)((u8 *)var_s0 + 0x50) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
            *(s32 *)((u8 *)var_s0 + 0x54) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
            if (func_00199CA8(temp_v0_2, 3, var_s0 + 0x48) != 0) {
                *(s32 *)((u8 *)var_s0 + 0x48) = 0;
            }
            *(s32 *)((u8 *)var_s0 + 0x70) = 1;
            *(s8 *)((u8 *)var_s0 + 0x74) = 0;
            *(s8 *)((u8 *)var_s0 + 0x75) = 0;
            *(s8 *)((u8 *)var_s0 + 0x76) = 0;
            *(s8 *)((u8 *)var_s0 + 0x77) = 0;
            *(s32 *)((u8 *)var_s0 + 0x60) = 0;
            func_00187D20(var_s0, 0);
            func_00187D30(var_s0, 0);
            *(s32 *)((u8 *)var_s0 + 0x58) = 1;
            *(s32 *)((u8 *)var_s0 + 0x88) = 0;
            temp_v0_5 = func_00188028(*(s32 *)((u8 *)var_s0 + 0x1D4));
            *(s32 *)((u8 *)var_s0 + 0x44) = temp_v0_5;
            if (temp_v0_5 != 0) {
                func_00182F70(var_s0);
                temp_v0_6 = LSC_Create(*(s32 *)((u8 *)var_s0 + 0x1D4));
                *(s32 *)((u8 *)var_s0 + 0x78) = 0;
                *(s32 *)((u8 *)var_s0 + 0x4C) = temp_v0_6;
                func_001699D0(temp_v0_6, *(s32 *)((u8 *)var_s0 + 0x44));
                if (func_00180730(var_s0) != -1) {
                    temp_v0_7 = func_001847A0(*(s32 *)((u8 *)var_s0 + 0xB0), *(s32 *)((u8 *)var_s0 + 0xB4), *(s32 *)((u8 *)arg0 + 8), *(s32 *)((u8 *)arg0 + 0xC));
                    if (temp_v0_7 != 0) {
                        *(s32 *)((u8 *)var_s0 + 0xAC) = temp_v0_7;
                        func_00184E18(var_s0, *(s32 *)((u8 *)var_s0 + 0x2C));
                        *(s32 *)((u8 *)var_s0 + 0x190) = func_00185218(var_s0);
                        if (func_001852A8(var_s0) != 0) {
                            var_a0_3 = &D_004658A0;
                            goto block_40;
                        }
                        func_00185308(var_s0);
                        func_00181BB0(var_s0);
                        func_00181C30(var_s0);
                        *(s32 *)((u8 *)var_s0 + 4) = 1;
                        var_v0 = var_s0;
                        /* Duplicate return node #43. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    var_a0_3 = &D_00465880;
block_40:
                    func_001870E8(var_a0_3);
                    goto block_41;
                }
            }
block_41:
            func_001807F8(var_s0);
            return NULL;
        }
        func_00182420(-0xB);
        var_a0 = &D_00465798;
block_18:
        func_001870E8(var_a0);
        return NULL;
    }
    return var_v0;
}
