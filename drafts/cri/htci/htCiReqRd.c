/* Draft (not built): htCiReqRd at 0x001685D8, size 0x190, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/htci/htCiReqRd.s */

s32 func_00163E60();                                /* extern */
s32 func_00163EE8(s32);                         /* extern */
s32 func_00164078(s32, s32, s32, u64);              /* extern */
s32 func_001648B0();                            /* extern */
s32 func_001649C0();                            /* extern */
s32 func_00167C90(s32 *);                   /* extern */
s32 func_00167CC0(s32 *);                       /* extern */
s32 func_00167D78(void *, s32, s32, u64);       /* extern */
extern s32 D_00413D10;
extern s32 D_00463B10;
extern s32 D_00463B28;
extern s32 D_00463B48;

s32 htCiReqRd(u8 *arg0, s32 arg1, s32 arg2) {
    s32 *var_a1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_v0;
    u64 temp_a3;
    u64 temp_s0;

    if (arg0 == NULL) {
        var_a1 = &D_00463B10;
        goto block_7;
    }
    if (arg1 < 0) {
        var_a1 = &D_00463B28;
        goto block_7;
    }
    if (arg2 == 0) {
        var_a1 = &D_00463B48;
block_7:
        func_00167C90(var_a1);
        var_v0 = 0;
    } else if (func_00167CC0(&D_00463B48) != 1) {
        var_v0 = 0;
        if (*(s8 *)((u8 *)arg0 + 2) != 2) {
            if (arg1 == 0) {
                *(s8 *)((u8 *)arg0 + 2) = 1;
            } else {
                var_v0 = func_00163E60();
                *(s32 *)((u8 *)arg0 + 0x2C) = var_v0;
                if (var_v0 != 0) {
                    temp_s0 = arg1 << 0xB;
                    temp_a3 = *(u64 *)((u8 *)arg0 + 8);
                    temp_v0 = *(s32 *)((u8 *)arg0 + 0x10) - *(s32 *)((u8 *)arg0 + 0x1C);
                    *(s32 *)((u8 *)arg0 + 0x20) = arg2;
                    temp_a2 = temp_a3 < temp_s0;
                    temp_a1 = (arg1 >= temp_v0) ? temp_v0 : arg1;
                    *(s32 *)((u8 *)arg0 + 0x24) = temp_a1;
                    func_00167D78(arg0, temp_a1, temp_a2, temp_a3);
                    var_v0 = func_00164078(*(s32 *)((u8 *)arg0 + 0x2C), *(s32 *)((u8 *)arg0 + 0x18), *(s32 *)((u8 *)arg0 + 0x1C), (temp_a2 != 0) ? temp_a3 : temp_s0);
                    if (var_v0 != 0) {
                        temp_s0_2 = D_00413D10;
                        if (temp_s0_2 != 1) {
                            *(s8 *)((u8 *)arg0 + 2) = 2;
                            *(s32 *)((u8 *)arg0 + 0x28) = 0;
                            var_v0 = *(s32 *)((u8 *)arg0 + 0x24);
                        } else {
                            func_001649C0();
                            func_001648B0();
                            *(s32 *)((u8 *)arg0 + 0x1C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1C) + *(s32 *)((u8 *)arg0 + 0x24));
                            func_00163EE8(*(s32 *)((u8 *)arg0 + 0x2C));
                            *(s32 *)((u8 *)arg0 + 0x2C) = 0;
                            var_v0 = *(s32 *)((u8 *)arg0 + 0x24);
                            *(s8 *)((u8 *)arg0 + 2) = (s8) temp_s0_2;
                            *(s32 *)((u8 *)arg0 + 0x28) = var_v0;
                        }
                        *(s32 *)((u8 *)arg0 + 0x14) = 0;
                    }
                }
            }
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
