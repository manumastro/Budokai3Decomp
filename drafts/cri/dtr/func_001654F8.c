/* Draft (not built): func_001654F8 at 0x001654F8, size 0xBC, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dtr/func_001654F8.s */

s32 DTR_ExecHndl(s8 *);                         /* extern */
s32 func_001660C0();                            /* extern */
s32 sceSifDmaStat(s32);                             /* extern */
extern s8 D_00411618;

void func_001654F8(void) {
    s32 var_s1;
    s32 var_s1_2;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 temp_v1;

    var_s0 = &D_00411618;
    var_s1 = 0;
loop_1:
    temp_v1 = *(s8 *)((u8 *)var_s0 + 1);
    if ((temp_v1 == 1) && (*(s8 *)((u8 *)var_s0 + 2) == temp_v1)) {
        if (sceSifDmaStat(*(s32 *)((u8 *)var_s0 + 0x2C)) >= 0) {
            return;
        }
        goto block_6;
    }
block_6:
    var_s1 += 1;
    var_s0 += 0x40;
    if (var_s1 >= 0x20) {
        var_s0_2 = &D_00411618;
        var_s1_2 = 0x1F;
        do {
            if (*var_s0_2 == 1) {
                DTR_ExecHndl(var_s0_2);
            }
            var_s1_2 -= 1;
            var_s0_2 += 0x40;
        } while (var_s1_2 >= 0);
        func_001660C0();
        return;
    }
    goto loop_1;
}
