/* Draft (not built): func_0017DCC8 at 0x0017DCC8, size 0x1C8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0017DCC8.c:65: parse error before "int"
 * Original: asm/nonmatchings/cri/mpv/func_0017DCC8.s */

s32 func_0017B420(s32);                             /* extern */
s32 func_0017DE90(void *, s32, s32);                /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */

s32 func_0017DCC8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 (*temp_v1)(s32, s32);
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s6;
    s32 var_fp;
    s32 var_s2;
    s32 var_v1;
    u8 **temp_s1;
    u8 *var_v0;

    var_s2 = 4;
    var_fp = 0;
    temp_s6 = *(s32 *)((u8 *)arg0 + 0x3B4);
    temp_s0 = arg2 - 3;
loop_2:
    var_v1 = var_s2 ^ temp_s0;
    if (var_s2 < temp_s0) {
        var_v1 = var_s2 ^ temp_s0;
        if (func_0017B420(arg1 + var_s2) == 0) {
            var_s2 += 1;
            goto loop_2;
        }
    }
    if (temp_s6 == 1) {
        var_fp = func_0017DE90(arg0, arg1, var_s2);
    }
    temp_s4 = (temp_s6 * 0xC) + 0x3B0;
    temp_s1 = *(u8 ***)((u8 *)(arg0 + temp_s4) + 8);
    if (temp_s1 != NULL) {
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 0, var_s2, sp);
        memcpy(sp0, arg1, sp4);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 1, sp);
        var_v0 = arg0 + temp_s4;
        if (sp4 < var_s2) {
            (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 0, var_s2 - sp4, &sp10);
            memcpy(sp10, arg1 + sp4, sp14);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 1, &sp10);
            var_v0 = arg0 + temp_s4;
        }
        temp_v1 = *(s32 (**)(s32, s32))((u8 *)var_v0 + 0xC);
        if (temp_v1 != NULL) {
            temp_v1(*(s32 *)((u8 *)var_v0 + 0x10), temp_s6);
        }
    }
    if (temp_s6 == 3) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x3E8);
        if (temp_a0 != 0) {
            temp_a2 = *(s32 *)((u8 *)arg0 + 0x3EC);
            temp_a2_2 = (var_s2 < temp_a2) int var_s2 : temp_a2;
            *(s32 *)((u8 *)arg0 + 0x3F0) = temp_a2_2;
            memcpy(temp_a0, arg1, temp_a2_2);
        }
    }
    return (var_fp == 0) int ((var_v1 != 0) int 0 : -1) : var_fp;
}
