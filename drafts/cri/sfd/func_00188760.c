/* Draft (not built): func_00188760 at 0x00188760, size 0x25C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00188760.c:67: parse error before '}' token
 * Original: asm/nonmatchings/cri/sfd/func_00188760.s */

s32 func_0015FC98(s32, s32, s32 *);             /* extern */
s32 func_001889C0(s32, s32, s32 *);                 /* extern */
s32 func_00188A48(void *, s32, s32);                /* extern */
s32 func_00188D48(void *, s32 *);                   /* extern */
s32 func_00199818(void *, s32, s32);    /* extern */
s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019A488(s32, s32);                        /* extern */
s32 func_0019A4D8(s32, s32, s32 *);                 /* extern */
s32 func_0019A550(s32, s32, s32);               /* extern */
extern s32 func_001886A8;

void func_00188760(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_s6;
    u8 *temp_s3;

    temp_s1 = arg0 + 0xCC0;
    *arg3 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    if (func_00188D48(sp, &sp4) == 0) {
        temp_v0 = func_0019A488(temp_s1, sp4);
        if (temp_v0 >= 0) {
            if (func_001999E0(arg0, 5) != 0) {
                temp_v0_2 = func_0019A4D8(temp_s1, sp4, &sp8);
                if (temp_v0_2 >= 0) {
                    var_s6 = 0;
                    func_0019A550(temp_s1, temp_v0_2, sp4);
                    temp_v1 = (temp_v0_2 - temp_v0) - *(s32 *)((u8 *)temp_s3 + 0x38);
                    if (temp_v1 >= 0) {
                        temp_s1_2 = (temp_v1 >> 5) * sp0 * 0x12;
                        spC = 0;
                        if (((temp_s1_2 <= 0) || (temp_v0_3 = (arg2 / (s32) (sp0 * 0x12)) * sp0 * 0x12, temp_s0 = (temp_v0_3 >= temp_s1_2) int temp_s1_2 : temp_v0_3, var_s6 = func_001889C0(arg1, temp_s0, &spC), *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) + ((var_s6 / (s32) (sp0 * 0x12)) << 5)), ((temp_s1_2 - temp_s0) <= 0))) && (sp8 != 0)) {
                            *(s32 **)((u8 *)temp_s3 + 0x3C) = &func_001886A8;
                            spC = func_0015FC98(arg1, arg2, &sp10);
                        }
                        if (spC != 0) {
                            func_00199818(arg0, 6, 0);
                        }
                    } else {
                        temp_a0 = -temp_v1;
                        if ((sp8 != 0) && ((temp_s0_2 = ((s32) ((temp_a0 < 0) int (temp_a0 + 0x1F) : temp_a0) >> 5) << 5, (temp_s0_2 <= 0)) || (temp_v0_4 = func_00188A48(arg0, sp0, temp_s0_2), *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) - temp_v0_4), ((temp_s0_2 - temp_v0_4) <= 0)))) {
                            *(s32 **)((u8 *)temp_s3 + 0x3C) = &func_001886A8;
                        }
                    }
                    *arg3 = var_s6;
                }
            } else {
                func_0019A550(temp_s1, temp_v0, sp4);
                goto block_6;
            }
        }
    } else {
block_6:
        *(s32 **)((u8 *)temp_s3 + 0x3C) = &func_001886A8;
    }
}
