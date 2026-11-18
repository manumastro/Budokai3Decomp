/* Draft (not built): func_00196FB8 at 0x00196FB8, size 0x17C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00196FB8.c:53: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196FB8.s */

s32 func_0017EE78(s32, s32, s32);               /* extern */
s32 func_0018B790(void *, s32);                 /* extern */
s32 func_00197218(void *);                          /* extern */
s32 func_001972B8(void *);                          /* extern */
s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019A718(void *, void *, s32 *);       /* extern */
s32 func_0019AB10(s32, s32, s32, s32);              /* extern */
s32 func_0019C188(void *, s32);                 /* extern */

s32 func_00196FB8(u8 *arg0) {
    s32 sp4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_v1;

    var_v0 = func_001999E0((u8 *)0x43);
    if (var_v0 != 0) {
        var_v0 = func_001999E0(arg0, 0xF);
        if (var_v0 != 0) {
            var_v0 = 0;
            if ((*(s32 *)((u8 *)arg0 + 0x50) == 0) && (*(s32 *)((u8 *)arg0 + 0x48) == 4)) {
                if (func_00197218(arg0) != 0) {
                    return 0;
                }
                if (func_001999E0(arg0, 5) == 1) {
                    var_v0 = 0;
                    if (*(s32 *)((u8 *)(arg0 + 0x94C) + 0x24) != 0) {
                        goto block_10;
                    }
                    /* Duplicate return node #22. Try simplifying control flow for better match */
                    return var_v0;
                }
block_10:
                if (func_001999E0(arg0, 6) == 1) {
                    var_v0 = 0;
                    if (func_0018B790(arg0, 2) <= 0) {
                        goto block_13;
                    }
                    /* Duplicate return node #22. Try simplifying control flow for better match */
                    return var_v0;
                }
block_13:
                if (((func_0019C188(arg0, 1) == 0) || (var_v0 = 0, (func_0018B790(arg0, 0) <= 0))) && ((func_001999E0(arg0, 5) != 1) || (var_v0 = 0, (func_001972B8(arg0) == 0)))) {
                    func_0019A718(arg0, sp, &sp4);
                    temp_v1 = arg0 + 0xCC0;
                    temp_s1 = *(s32 *)((u8 *)temp_v1 + 0x27C);
                    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x278);
                    temp_s0_2 = temp_s0 - func_0017EE78(func_001999E0(arg0, 0x44), temp_s1, 0xF4240);
                    if ((sp0 <= 0) || (temp_s0_2 <= 0)) {
                        return 0;
                    }
                    var_v0 = func_0019AB10(sp0, sp4, temp_s0_2, temp_s1) == 0;
                    /* Duplicate return node #22. Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    return var_v0;
}
