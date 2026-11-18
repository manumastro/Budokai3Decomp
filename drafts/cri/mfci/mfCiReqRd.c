/* Draft (not built): mfCiReqRd at 0x0016AC50, size 0x188, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016AC50.c:71: too few arguments to function `func_0016A768'
 * Original: asm/nonmatchings/cri/mfci/mfCiReqRd.s */

s32 func_0016A768(s32 *);                   /* extern */
s32 func_0016A780(s32, s32);                    /* extern */
s32 func_0016A7B0(s32 *);                   /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */
s32 memset(s32, s32, s32);                  /* extern */
s32 mfci_get_adr_size(void *, void *);              /* extern */
extern s32 D_00464088;
extern s32 D_004640A8;
extern s32 D_004640C8;

s32 mfCiReqRd(u8 *arg0, s32 arg1, s32 arg2) {
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;

    if (arg0 == NULL) {
        var_a1 = &D_00464088;
        goto block_7;
    }
    if (arg1 < 0) {
        var_a1 = &D_004640A8;
        goto block_7;
    }
    if (arg2 == 0) {
        var_a1 = &D_004640C8;
block_7:
        func_0016A7B0(var_a1);
        return 0;
    }
    if (arg1 != 0) {
        var_v0 = 0;
        if (*(s8 *)((u8 *)arg0 + 1) != 2) {
            func_0016A768(&D_004640C8);
            *(s32 *)((u8 *)arg0 + 0x14) = 0;
            temp_a0 = *(s32 *)((u8 *)arg0 + 0x10);
            temp_a1 = *(s32 *)((u8 *)arg0 + 4);
            temp_v0 = *(s32 *)((u8 *)arg0 + 0xC) - temp_a0;
            temp_a0_2 = temp_a0 * temp_a1;
            temp_v0_2 = (arg1 < temp_v0) int arg1 : temp_v0;
            temp_v1 = temp_v0_2 * temp_a1;
            *(s32 *)((u8 *)arg0 + 0x18) = temp_v0_2;
            if (temp_v1 == 0) {
                *(s8 *)((u8 *)arg0 + 1) = 1;
                func_0016A780(temp_a0_2, temp_a1);
                return 0;
            }
            *(s32 *)((u8 *)arg0 + 0x30) = temp_a0_2;
            *(s32 *)((u8 *)arg0 + 0x34) = temp_v1;
            *(s8 *)((u8 *)arg0 + 1) = 2;
            temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x30);
            temp_s1 = mfci_get_adr_size(arg0 + 0x1C, sp);
            temp_s0 = *(s32 *)((u8 *)arg0 + 0x34);
            temp_v0_3 = sp0 - temp_a0_3;
            temp_s0_2 = (temp_v0_3 < temp_s0) int temp_v0_3 : temp_s0;
            func_0016A780(temp_a0_3);
            memcpy(arg2, temp_s1 + *(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)arg0 + 0x34));
            memset(arg2 + temp_s0_2, 0, *(s32 *)((u8 *)arg0 + 0x34) - temp_s0_2);
            func_0016A768();
            temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x18);
            *(s8 *)((u8 *)arg0 + 1) = 1;
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) + temp_a0_4);
            *(s32 *)((u8 *)arg0 + 0x14) = (s32) (temp_a0_4 * *(s32 *)((u8 *)arg0 + 4));
            func_0016A780(temp_a0_4, 1);
            var_v0 = *(s32 *)((u8 *)arg0 + 0x18);
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
    *(s8 *)((u8 *)arg0 + 1) = 1;
    return 0;
}
