/* Draft (not built): func_0015BE68 at 0x0015BE68, size 0x1D0, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015BE68.c:70: too few arguments to function `func_0015A8A0'
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015BE68.s */

s32 func_00152FD0(s32, s32, s32, s32); /* extern */
s32 func_0015A8A0(s32, s32, s32, s32);      /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s8 D_0040E088;

u8 *func_0015BE68(s8 arg0, s32 arg1, s32 arg2) {
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    s8 *var_v1;
    u8 *temp_s1;
    u8 *var_v0;

    var_v1 = &D_0040E088;
    var_a1 = 0;
    if (D_0040E088 != 0) {
loop_1:
        var_a1 += 1;
        var_v1 += 0x2F8;
        if (var_a1 < 8) {
            if (*var_v1 != 0) {
                goto loop_1;
            }
        }
    }
    var_v0 = NULL;
    if (var_a1 != 8) {
        var_a2 = 0;
        temp_s1 = (var_a1 * 0x2F8) + &D_0040E088;
        *(s8 *)((u8 *)temp_s1 + 2) = arg0;
        if (arg0 > 0) {
            do {
                temp_v0 = var_a2 * 4;
                var_a2 += 1;
                *(temp_s1 + 4 + temp_v0) = *(temp_v0 + arg1);
            } while (var_a2 < arg0);
        }
        *(s32 *)((u8 *)temp_s1 + 0xC) = arg2;
        *(s8 *)((u8 *)temp_s1 + 1) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x28) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x2C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x30) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x34) = 0x7FFF0000;
        temp_v0_2 = func_00152FD0(0, 0, 4, 4);
        temp_lo = 0x80 / 4;
        *(s32 *)((u8 *)temp_s1 + 0x4C) = 3;
        *(s32 *)((u8 *)temp_s1 + 0x5C) = 0xAC44;
        *(s32 *)((u8 *)temp_s1 + 0x50) = 0x12;
        *(s32 *)((u8 *)temp_s1 + 0x54) = 4;
        *(s32 *)((u8 *)temp_s1 + 0x48) = temp_v0_2;
        *(s32 *)((u8 *)temp_s1 + 0x58) = (s32) arg0;
        *(s32 *)((u8 *)temp_s1 + 0x64) = 0x1F4;
        *(s32 *)((u8 *)temp_s1 + 0x60) = 0x7FFF0000;
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x6C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x70) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x74) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x78) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x7C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x38) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x3C) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x44) = temp_lo;
        *(s32 *)((u8 *)temp_s1 + 0x40) = 0x7FFF0000;
        *(s32 *)((u8 *)temp_s1 + 0x80) = func_0015A8A0(0x20, temp_lo, 3, 0xAC44);
        temp_v0_3 = func_0015A8A0(*(s32 *)((u8 *)temp_s1 + 0x44));
        *(s16 *)((u8 *)temp_s1 + 0x2CC) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x84) = temp_v0_3;
        *(s16 *)((u8 *)temp_s1 + 0x2EC) = -0x80;
        *(s16 *)((u8 *)temp_s1 + 0x2EA) = -0x80;
        *(s16 *)((u8 *)temp_s1 + 0x2C8) = 0;
        *(s16 *)((u8 *)temp_s1 + 0x2CE) = 0;
        *(s16 *)((u8 *)temp_s1 + 0x2CA) = 0;
        *(s8 *)((u8 *)temp_s1 + 0x2D6) = 0;
        *(s16 *)((u8 *)temp_s1 + 0x2E8) = 0;
        memset(temp_s1 + 0x2D7, 0, 0x10);
        *(s8 *)((u8 *)temp_s1 + 0) = 1;
        var_v0 = temp_s1;
    }
    return var_v0;
}
