/* Draft (not built): func_001548B0 at 0x001548B0, size 0x1FC, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001548B0.c:90: parse error before "int"
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001548B0.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 ADXF_ReadNw(s32, s32, s32, s32);                /* extern */
s32 adxf_ChkPrmPt(void *);                          /* extern */
s32 func_00128040(void *, s32, s32);        /* extern */
s32 func_00155118(s32, s32);                        /* extern */
s32 func_00155290(s32, s32);                        /* extern */
s32 func_001553A0(s32);                         /* extern */
s32 func_00155E40(s32, s32, void *, void *);        /* extern */
s32 memset(void *, s32, s32, s32 *);    /* extern */
extern s32 D_00402550;
extern s32 D_00402A7C;
extern s32 D_00402A80;
extern s32 D_00402A84;
extern s32 D_00402A88;
extern s32 D_00402A8C;
extern s32 D_004605C0;
extern s32 D_004605F0;
extern s32 D_00460618;
extern s32 D_00460648;

s32 func_001548B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg_sp0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 temp_a3;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    u8 *temp_s1;

    temp_s4 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s1 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t3 */);
    sp0 = M2C_ERROR(/* Read from unset register $t0 */);
    if (temp_s4 == 0) {
        var_a0 = &D_004605C0;
        goto block_5;
    }
    if (temp_s2 <= 0) {
        var_a0 = &D_004605F0;
block_5:
        ADXERR_CallErrFunc1(var_a0);
        return -3;
    }
    var_v0 = adxf_ChkPrmPt(temp_s1);
    if (var_v0 >= 0) {
        if (D_00402A84 >= 0) {
            var_a0_2 = &D_00460618;
            goto block_17;
        }
        D_00402A84 = arg0;
        D_00402A7C = 0;
        memset(temp_s1, 0, 0x11C, &D_00402A84);
        *(&D_00402550 + (arg0 * 4)) = temp_s1;
        *(s32 *)((u8 *)temp_s1 + 0) = 0;
        if (arg3 == 0) {
            temp_v0_2 = func_00155290(arg1, arg2);
            D_00402A80 = temp_v0_2;
            if (temp_v0_2 != 0) {
                var_v0 = func_00155E40(arg1, arg2, temp_s1 + 0x10, sp);
                if (var_v0 >= 0) {
                    *(s32 *)((u8 *)temp_s1 + 0x114) = sp4;
                    goto block_19;
                }
                /* Duplicate return node #25. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_16;
        }
        temp_v0_3 = func_00155118(arg3, sp0);
        D_00402A80 = temp_v0_3;
        if (temp_v0_3 == 0) {
block_16:
            var_a0_2 = &D_00460648;
block_17:
            ADXERR_CallErrFunc1(var_a0_2);
            return -1;
        }
        func_00128040(temp_s1 + 0x10, arg3, 0x100);
block_19:
        *(s8 *)((u8 *)temp_s1 + 0xE) = 0;
        *(s8 *)((u8 *)temp_s1 + 0xF) = (s8) arg_sp0;
        temp_a3 = (s32) ((temp_s2 < 0) int (temp_s2 + 0x7FF) : temp_s2) >> 0xB;
        *(s32 *)((u8 *)temp_s1 + 0x110) = sp0;
        D_00402A88 = temp_s4;
        D_00402A8C = temp_a3;
        temp_v0 = ADXF_ReadNw(D_00402A80, temp_a3, temp_s4, temp_a3);
        if (temp_v0 >= 0) {
            *(s32 *)((u8 *)temp_s1 + 8) = 0;
            var_v0 = 0;
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return var_v0;
        }
        func_001553A0(D_00402A80);
        return temp_v0;
    }
    return var_v0;
}
