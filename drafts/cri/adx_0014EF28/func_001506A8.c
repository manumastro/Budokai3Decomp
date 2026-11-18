/* Draft (not built): func_001506A8 at 0x001506A8, size 0x140, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001506A8.s */

s32 func_001507E8(void *);                      /* extern */
s32 func_001618D0();                                /* extern */
s32 memset(void *, s32, s32, s32);      /* extern */
extern s16 D_004010A8;
extern s32 func_00150658;
extern s32 func_00150688;

u8 *func_001506A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 *var_v1;
    s32 temp_v0;
    s32 var_a3;
    u8 *temp_s0;
    u8 *var_v0;

    var_v1 = &D_004010A8;
    var_a3 = 0;
    if (D_004010A8 != 0) {
        var_a3 = 1;
loop_2:
        var_v1 += 0xF4;
        if (var_a3 < 0x10) {
            if (*var_v1 != 0) {
                var_a3 += 1;
                goto loop_2;
            }
        }
    }
    var_v0 = NULL;
    if (var_a3 != 0x10) {
        temp_s0 = (var_a3 * 0xF4) + &D_004010A8;
        memset(temp_s0, 0, 0xF4, var_a3);
        *(s16 *)((u8 *)temp_s0 + 0) = 1;
        temp_v0 = func_001618D0();
        *(s32 *)((u8 *)temp_s0 + 8) = temp_v0;
        if (temp_v0 == 0) {
            func_001507E8(temp_s0);
            return NULL;
        }
        *(s32 *)((u8 *)temp_s0 + 0x38) = arg0;
        *(s32 *)((u8 *)temp_s0 + 0x3C) = arg1;
        *(s32 *)((u8 *)temp_s0 + 0x40) = arg2;
        *(s32 *)((u8 *)temp_s0 + 0x44) = arg3;
        *(s32 **)((u8 *)temp_s0 + 0x78) = &func_00150658;
        *(s32 **)((u8 *)temp_s0 + 0x80) = &func_00150688;
        *(s16 *)((u8 *)temp_s0 + 0xE4) = -0x80;
        *(u8 **)((u8 *)temp_s0 + 0x7C) = temp_s0;
        *(u8 **)((u8 *)temp_s0 + 0x84) = temp_s0;
        *(s32 *)((u8 *)temp_s0 + 0xCC) = 0;
        *(s16 *)((u8 *)temp_s0 + 0xE0) = 0;
        *(s16 *)((u8 *)temp_s0 + 0xE2) = -0x80;
        memset(temp_s0 + 0xD0, 0, 0x10, -0x80);
        var_v0 = temp_s0;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
