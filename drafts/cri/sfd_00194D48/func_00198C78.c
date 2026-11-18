/* Draft (not built): func_00198C78 at 0x00198C78, size 0x164, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00198C78.c:61: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198C78.s */

s32 func_0017EE78(s32, s32, s32);               /* extern */
s32 func_0018D3C0(void *);                          /* extern */
s32 func_00198DE0(void *, void *);                  /* extern */
s32 func_00198E60(void *, void *, s32 *);           /* extern */
s32 func_00198EE0(void *);                          /* extern */
s32 func_00199610(void *, s32);                 /* extern */

void func_00198C78(u8 *arg0) {
    s32 sp4;
    s32 temp_a0;
    s32 temp_a2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x31E8);
    temp_s3 = temp_s0 + 0xC;
    temp_s4 = temp_s0 + 0x8A0;
    temp_s1 = temp_s0 + 0xAC4;
    temp_s2 = temp_s0 + 0xD00;
    if ((*(s32 *)((u8 *)temp_s0 + 0) == 0) && (func_00198DE0(temp_s2, sp) == 0) && (func_00198E60(arg0, temp_s1, &sp4) == 0)) {
        if (func_00198EE0(arg0) != 0) {
            *(s32 *)((u8 *)temp_s0 + 0x8A0) = 1;
            if (*(s32 *)((u8 *)temp_s0 + 0xC) == 0) {
                var_a1 = *(s32 *)((u8 *)temp_s4 + 4);
            } else {
                var_v0 = *(s32 *)((u8 *)temp_s3 + 0xC);
                if (var_v0 > 0) {
                    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0xDB4);
                    temp_a2 = *(s32 *)((u8 *)temp_s3 + 0x34);
                    if (temp_a0 > 0) {
                        if (temp_a2 > 0) {
                            var_v0 = func_0017EE78(temp_a0, 0x3E8, temp_a2);
                        }
                    }
                    goto block_17;
                }
                if (func_0018D3C0(arg0) >= 0x6C) {
                    var_a1 = *(s32 *)((u8 *)temp_s4 + 4);
                } else {
                    var_v0 = (s32) (*(s32 *)((u8 *)temp_s4 + 4) << 0xB) / 2018;
block_17:
                    var_a1 = var_v0;
                }
            }
            var_v1 = *(s32 *)((u8 *)temp_s4 + 8);
            goto block_24;
        }
        if (sp4 != 0) {
            var_v1 = *(s32 *)((u8 *)temp_s1 + 8);
            var_a1 = *(s32 *)((u8 *)temp_s1 + 4);
            goto block_24;
        }
        if (sp0 != 0) {
            var_v1 = *(s32 *)((u8 *)temp_s2 + 8);
            var_a1 = *(s32 *)((u8 *)temp_s2 + 4);
block_24:
            *(s32 *)((u8 *)temp_s0 + 4) = var_a1;
            *(s32 *)((u8 *)temp_s0 + 0) = 1;
            *(s32 *)((u8 *)temp_s0 + 8) = var_v1;
            func_00199610(arg0, var_a1);
        }
    }
}
