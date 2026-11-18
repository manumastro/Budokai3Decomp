/* Draft (not built): func_0018C3B0 at 0x0018C3B0, size 0xD8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0018C3B0.c:20: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_0018C3B0.s */

s32 func_001881A8(s32 *, s32, void *);          /* extern */
s32 memcpy(s32 *, s32, s32);                /* extern */
extern s32 D_004671E8;
extern s32 D_0048CFF0;

s32 func_0018C3B0(s32 arg0, s32 arg1, u8 *arg2) {
    s32 *var_s1;
    s32 temp_a1;
    s32 var_s0;

    var_s0 = (arg1 >= 0x801) int 0x800 : arg1;
    var_s1 = &D_0048CFF0;
    memcpy(&D_0048CFF0, arg0, var_s0);
    if (var_s0 > 0) {
loop_2:
        temp_a1 = var_s0;
        var_s0 -= 4;
        if (func_001881A8(var_s1, temp_a1, sp) != 0) {
            *(s32 **)((u8 *)arg2 + 0xC) = &D_004671E8;
            *(u8 *)((u8 *)arg2 + 0x28) = (u8) *(u8 *)((u8 *)var_s1 + 7);
            *(s32 *)((u8 *)arg2 + 0x2C) = (s32) ((*(u8 *)((u8 *)var_s1 + 8) << 0x18) | *(u8 *)((u8 *)var_s1 + 0xB) | ((*(u8 *)((u8 *)var_s1 + 0xA) << 8) | (*(u8 *)((u8 *)var_s1 + 9) << 0x10)));
            return 1;
        }
        var_s1 += 4;
        if (var_s0 <= 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
