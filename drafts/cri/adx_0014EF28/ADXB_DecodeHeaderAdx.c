/* Draft (not built): ADXB_DecodeHeaderAdx at 0x00150830, size 0x2EC, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/ADXB_DecodeHeaderAdx.s */

s32 func_00150FB8(void *, u8, u8, s32);             /* extern */
s32 func_001527C0(s32, s32, s16 *, s32, s32, s32);  /* extern */
s32 func_001528C0(s32, s32, void *);                /* extern */
s32 func_00152940(s32, s32, u8 *, u8 *);            /* extern */
s32 func_001529B8(s32, s32, s32 *, s32 *);  /* extern */
s32 func_00152AF0(s32, s32, void *, void *, void *); /* extern */
s32 func_00152D50(s32, s32, void *, void *);    /* extern */
s32 func_00154178(s32 *, s32 *);        /* extern */
s32 func_001619A0(s32, s32, s16);               /* extern */
s32 func_001619C8(s32, s32 *, s32 *);   /* extern */
s32 func_00161A18(s32, s16, s16, s16);          /* extern */
extern s32 (*D_00401090)(s32, s16 *);
extern s32 D_00460458;
extern s32 D_00460478;

s16 ADXB_DecodeHeaderAdx(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp20;
    s16 sp30;
    s32 sp32;
    s32 sp34;
    s32 sp36;
    s16 sp40;
    u8 sp42;
    u8 sp43;
    s16 sp44;
    s16 sp46;
    s16 sp48;
    s32 *sp4C;
    s16 var_v0;

    *(s16 *)((u8 *)arg0 + 2) = 1;
    sp4C = arg0 + 0x14;
    var_v0 = 0;
    if (func_001527C0(arg1, arg2, &sp40, arg0 + 0xC, arg0 + 0x18, arg0 + 0x10) >= 0) {
        if (*(s8 *)((u8 *)arg0 + 0xC) >= 5) {
            if (*(s32 *)((u8 *)arg0 + 0xB4) != 0) {
                *(s8 *)((u8 *)arg0 + 0xD) = 8;
                *(s8 *)((u8 *)arg0 + 0xF) = (s8) (*(s8 *)((u8 *)arg0 + 0xE) * 0xC0);
                *(s32 *)((u8 *)arg0 + 0x10) = 0x60;
                *(s16 *)((u8 *)arg0 + 0x98) = 0xA;
                *(s16 *)((u8 *)arg0 + 0x1C) = 0;
                *(s16 *)((u8 *)arg0 + 0x24) = 0;
                *(s16 *)((u8 *)arg0 + 0x26) = 0;
                *(s32 *)((u8 *)arg0 + 0x20) = 0;
                *(s32 *)((u8 *)arg0 + 0x28) = 0;
                *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                *(s32 *)((u8 *)arg0 + 0x30) = 0;
                *(s32 *)((u8 *)arg0 + 0x34) = 0;
                *(s32 *)((u8 *)arg0 + 0x88) = 0;
                if (func_00152940(arg1, arg2, &sp42, &sp43) >= 0) {
                    sp30 = 0;
                    var_v0 = -1;
                    if (func_00150FB8(arg0, sp42, sp43, *(s32 *)((u8 *)arg0 + 0x18)) >= 0) {
                        if (D_00401090 != NULL) {
                            D_00401090(*(s32 *)((u8 *)arg0 + 0xB4), &sp30);
                        }
                        goto block_22;
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_19;
            }
            func_00154178(&D_00460458, &D_00460478);
            goto block_6;
        }
        if (func_00152940(arg1, arg2, &sp42, &sp43) >= 0) {
            if (func_00150FB8(arg0, sp42, sp43, *(s32 *)((u8 *)arg0 + 0x18)) >= 0) {
                func_00161A18(*(s32 *)((u8 *)arg0 + 8), sp44, sp46, sp48);
                if (func_001528C0(arg1, arg2, arg0 + 0x1C) >= 0) {
                    if (func_001529B8(arg1, arg2, &sp10, &sp20) >= 0) {
                        func_001619A0(*(s32 *)((u8 *)arg0 + 8), *sp4C, *(s16 *)((u8 *)arg0 + 0x1C));
                        func_001619C8(*(s32 *)((u8 *)arg0 + 8), &sp10, &sp20);
                        func_00152AF0(arg1, arg2, arg0 + 0x20, arg0 + 0x24, arg0 + 0x34);
                        func_00152D50(arg1, arg2, arg0 + 0xCC, arg0 + 0xD0);
                        *(s16 *)((u8 *)arg0 + 0x98) = 0;
block_22:
                        *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s8 *)((u8 *)arg0 + 0xE);
                        *(s32 *)((u8 *)arg0 + 0x54) = (s32) *(s8 *)((u8 *)arg0 + 0xF);
                        *(s32 *)((u8 *)arg0 + 0x58) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
                        *(s32 *)((u8 *)arg0 + 0x5C) = (s32) *(s32 *)((u8 *)arg0 + 0x3C);
                        *(s32 *)((u8 *)arg0 + 0x60) = (s32) *(s32 *)((u8 *)arg0 + 0x40);
                        *(s32 *)((u8 *)arg0 + 0x64) = (s32) *(s32 *)((u8 *)arg0 + 0x44);
                        *(s32 *)((u8 *)arg0 + 0x8C) = 0;
                        var_v0 = sp40;
                        /* Duplicate return node #23. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_19;
                }
                goto block_19;
            }
block_6:
            return -1;
        }
block_19:
        return 0;
    }
    return var_v0;
}
