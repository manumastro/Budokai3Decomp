/* Draft (not built): func_001723E0 at 0x001723E0, size 0x308, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_001723E0.s */

s64 dpmul(s64, s64);                                /* extern */
s32 func_00121930(s64, s64);                        /* extern */
s64 func_00121988(s64, s64);                        /* extern */
s32 func_00121ED8(s64, s64);                        /* extern */
s64 func_00121F28(s32);                             /* extern */
s16 func_00121FE0(s32);                             /* extern */
extern s64 D_00465090;
extern s64 D_00465098;
extern s64 D_004650A0;
extern s64 D_004650A8;
extern s64 D_004650B0;
extern s64 D_004650B8;
extern s64 D_004650C0;
extern s64 D_004650C8;
extern s64 D_004650D0;

void func_001723E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s64 temp_a0;
    s64 temp_s4;
    s64 temp_v0;
    s64 temp_v0_4;
    s64 temp_v0_5;
    u8 *temp_s0;
    u8 *temp_s1_2;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_v0;

    temp_s4 = 0xFF80 << 0x2E;
    sp0 = arg2 & 0xFF;
    sp4 = arg3 & 0xFF;
    var_s3 = 0;
    do {
        temp_s1 = var_s3 * 8;
        temp_v0 = func_00121F28(var_s3 - 0x80);
        temp_s0 = temp_s1 + (arg0 + 0x800);
        temp_s1_2 = temp_s1 + (arg0 + 0x1000);
        temp_a0 = dpmul(temp_v0, D_00465090);
        var_s3 += 1;
        *(s16 *)((u8 *)temp_s0 + 4) = func_00121FE0(func_00121930(temp_a0, temp_s4));
        temp_v0_2 = func_00121FE0(func_00121930(dpmul(temp_v0, D_00465098), temp_s4));
        *(s16 *)((u8 *)temp_s0 + 0) = 0;
        *(s16 *)((u8 *)temp_s0 + 2) = temp_v0_2;
        *(s16 *)((u8 *)temp_s0 + 6) = 0;
        *(s16 *)((u8 *)temp_s1_2 + 4) = 0;
        *(s16 *)((u8 *)temp_s1_2 + 2) = func_00121FE0(func_00121930(dpmul(temp_v0, D_004650A0), temp_s4));
        temp_v0_3 = func_00121FE0(func_00121930(dpmul(temp_v0, D_004650A8), temp_s4));
        *(s16 *)((u8 *)temp_s1_2 + 6) = 0;
        *(s16 *)((u8 *)temp_s1_2 + 0) = temp_v0_3;
    } while (var_s3 < 0x100);
    var_v0 = arg0;
    var_s3_2 = 8;
    do {
        var_s3_2 -= 1;
        *(s16 *)((u8 *)var_v0 + 4) = 0;
        *(s16 *)((u8 *)var_v0 + 2) = 0;
        *(s16 *)((u8 *)var_v0 + 0) = 0;
        *(s16 *)((u8 *)var_v0 + 6) = (s16) (arg1 & 0xFF);
        var_v0 += 8;
    } while (var_s3_2 >= 0);
    var_s3_3 = 9;
    var_s1 = arg0 + 0x48;
    do {
        temp_a0_2 = var_s3_3;
        var_s3_3 += 1;
        temp_v0_4 = func_00121988(func_00121F28(temp_a0_2), 0x8060 << 0x2F);
        var_v1 = 0;
        if (func_00121ED8(temp_v0_4, 0) >= 0) {
            var_v1 = -0x6C37;
            if (func_00121ED8(temp_v0_4, D_004650B0) <= 0) {
                var_v1 = func_00121FE0(func_00121930(dpmul(dpmul(temp_v0_4, 0x80A0 << 0x2F), D_004650B8), 0xFF80 << 0x2E));
            }
        }
        *(s16 *)((u8 *)var_s1 + 6) = (s16) (sp0 << 6);
        *(s16 *)((u8 *)var_s1 + 0) = var_v1;
        *(s16 *)((u8 *)var_s1 + 4) = var_v1;
        *(s16 *)((u8 *)var_s1 + 2) = var_v1;
        var_s1 += 8;
    } while (var_s3_3 < 0x86);
    var_s1_2 = arg0 + 0x430;
    var_s3_4 = 0x86;
    do {
        temp_a0_3 = var_s3_4;
        var_s3_4 += 1;
        temp_v0_5 = func_00121988(D_004650C0, func_00121F28(temp_a0_3));
        var_v1_2 = 0;
        if (func_00121ED8(temp_v0_5, 0) >= 0) {
            var_v1_2 = -0x6C37;
            if (func_00121ED8(temp_v0_5, D_004650C8) <= 0) {
                var_v1_2 = func_00121FE0(func_00121930(dpmul(dpmul(temp_v0_5, 0x80A0 << 0x2F), D_004650D0), 0xFF80 << 0x2E));
            }
        }
        *(s16 *)((u8 *)var_s1_2 + 6) = (s16) (sp4 << 6);
        *(s16 *)((u8 *)var_s1_2 + 0) = var_v1_2;
        *(s16 *)((u8 *)var_s1_2 + 4) = var_v1_2;
        *(s16 *)((u8 *)var_s1_2 + 2) = var_v1_2;
        var_s1_2 += 8;
    } while (var_s3_4 < 0x100);
}
