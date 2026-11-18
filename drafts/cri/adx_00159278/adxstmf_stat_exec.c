/* Draft (not built): adxstmf_stat_exec at 0x0015D208, size 0x1CC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/adxstmf_stat_exec.s */

s32 func_00154178(s32 *, s32);              /* extern */
s32 func_0015CCD8(void *, s32);             /* extern */
s32 func_0015CEC8(void *);                      /* extern */
s32 func_00162450(s32, s32, s32);               /* extern */
s32 func_001627A0(s32);                         /* extern */
s32 func_00162818(s32);                             /* extern */
s32 func_00162880(s32, s32, s32);       /* extern */
s32 func_0016FF40();                            /* extern */
s32 func_0016FF58();                            /* extern */
extern s32 D_004617B0;

void adxstmf_stat_exec(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    s8 temp_v1;
    s8 temp_v1_2;

    if (*(s8 *)((u8 *)arg0 + 2) == 0) {
        temp_v1 = *(s8 *)((u8 *)arg0 + 0x48);
        if (temp_v1 != 1) {

        } else {
            *(s8 *)((u8 *)arg0 + 0x48) = 0;
            if (*(s8 *)((u8 *)arg0 + 0x47) == 0) {
                *(s8 *)((u8 *)arg0 + 1) = temp_v1;
            }
        }
        if (*(s8 *)((u8 *)arg0 + 0x46) == 1) {
            temp_a0 = *(s32 *)((u8 *)arg0 + 8);
            if (temp_a0 != 0) {
                *(s32 *)((u8 *)arg0 + 8) = 0;
                func_001627A0(temp_a0);
            }
            *(s8 *)((u8 *)arg0 + 0x46) = 0;
            *(s8 *)((u8 *)arg0 + 0x49) = 0;
        }
        func_0016FF40();
        temp_v1_2 = *(s8 *)((u8 *)arg0 + 0x45);
        if (temp_v1_2 == 1) {
            *(s8 *)((u8 *)arg0 + 0x49) = temp_v1_2;
            func_0016FF58();
            if (*(s32 *)((u8 *)arg0 + 8) == 0) {
                temp_v0 = func_00162450(*(s32 *)((u8 *)arg0 + 0x50), *(s32 *)((u8 *)arg0 + 0x54), 0);
                *(s32 *)((u8 *)arg0 + 8) = temp_v0;
                if (temp_v0 == 0) {
                    func_00154178(&D_004617B0, *(s32 *)((u8 *)arg0 + 0x50));
                    *(s8 *)((u8 *)arg0 + 1) = 4;
                    *(s8 *)((u8 *)arg0 + 0x45) = 0;
                    *(s8 *)((u8 *)arg0 + 0x49) = 0;
                    return;
                }
                func_00162880(temp_v0, 0, 2);
                temp_s1 = func_00162818(*(s32 *)((u8 *)arg0 + 8));
                func_00162880(*(s32 *)((u8 *)arg0 + 8), 0, 0);
                if (*(s32 *)((u8 *)arg0 + 0x10) == 0x7FFFF800) {
                    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (temp_s1 << 0xB);
                    *(s32 *)((u8 *)arg0 + 0x14) = temp_s1;
                } else {
                    var_v1 = *(s32 *)((u8 *)arg0 + 0xC);
                    if (temp_s1 < var_v1) {
                        *(s32 *)((u8 *)arg0 + 0xC) = temp_s1;
                        var_v1 = temp_s1;
                    }
                    if (temp_s1 < (*(s32 *)((u8 *)arg0 + 0x14) + var_v1)) {
                        temp_v0_2 = temp_s1 - var_v1;
                        *(s32 *)((u8 *)arg0 + 0x14) = temp_v0_2;
                        *(s32 *)((u8 *)arg0 + 0x10) = (s32) (temp_v0_2 << 0xB);
                    }
                }
                func_0015CCD8(arg0, 0);
                *(s8 *)((u8 *)arg0 + 0x45) = 0;
                goto block_26;
            }
            goto block_26;
        }
        func_0016FF58();
block_26:
        if (*(s8 *)((u8 *)arg0 + 0x47) == 1) {
            *(s8 *)((u8 *)arg0 + 0x47) = 0;
        }
        goto block_28;
    }
block_28:
    if ((*(s8 *)((u8 *)arg0 + 1) == 2) && (*(s8 *)((u8 *)arg0 + 0x49) == 1)) {
        func_0015CEC8(arg0);
    }
}
