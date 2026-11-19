/* Draft (not built): func_001EFDB0 at 0x001EFDB0, size 0x4C8, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x540, original 0x4C8
 * Original: asm/nonmatchings/battle/btb_draw/func_001EFDB0.s */

// src/battle/btb_draw.c func_001EFDB0 size diff=84/336
s32 memcpy(s32 *, void *, s32);
void func_001EFDB0(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_v1;
    f32 var_v1_2;
    f32 var_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s2;
    s8 temp_v0;
    s8 temp_v0_2;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a2;
    u8 *var_a2_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s4;

    var_s4 = arg0;
    var_s3 = arg1;
    var_s0 = var_s3 + 0x2BA9C;
    memcpy((s32 *)(&D_004696F0), (void *)((u8 *)8), 0);
    *(s128 *)((u8 *)var_s4 + 0x30) = (s128) *(s128 *)((u8 *)var_s3 + 0x80);
    *(s128 *)((u8 *)var_s4 + 0x40) = (s128) *(s128 *)((u8 *)var_s3 + 0x90);
    *(s32 *)((u8 *)var_s4 + 0x50) = (s32) *(s32 *)((u8 *)var_s3 + 0xA0);
    *(s32 *)((u8 *)var_s4 + 0x54) = func_0012EAE0(0x20);
    *(s32 *)((u8 *)var_s4 + 0x58) = func_0012EAE0(0x20);
    *(s32 *)((u8 *)var_s4 + 0x5C) = func_0012EAE0(0x20);
    var_a2 = var_s0 + 8;
    var_a1 = var_s4 + 0x6A;
    var_a0 = 4;
    *(s16 *)((u8 *)var_s4 + 0x60) = (s16) *(s16 *)((u8 *)var_s3 + 0x2BA9C);
    *(s16 *)((u8 *)var_s4 + 0x62) = (s16) *(s16 *)((u8 *)var_s0 + 2);
    *(s16 *)((u8 *)var_s4 + 0x64) = (s16) *(s16 *)((u8 *)var_s0 + 4);
    *(s16 *)((u8 *)var_s4 + 0x66) = (s16) *(s16 *)((u8 *)var_s0 + 0x2C);
    *(s8 *)((u8 *)var_s4 + 0x68) = (s8) *(s8 *)((u8 *)var_s0 + 6);
    *(s8 *)((u8 *)var_s4 + 0x69) = (s8) *(s8 *)((u8 *)var_s0 + 7);
    do {
        var_a0 -= 1;
        temp_v0 = *(s8 *)((u8 *)var_a2 + 1);
        *(s8 *)((u8 *)var_a1 + 0) = (s8) *(s8 *)((u8 *)var_a2 + 0);
        var_a2 += 2;
        *(s8 *)((u8 *)var_a1 + 1) = temp_v0;
        var_a1 += 2;
    } while (var_a0 > 0);
    var_a2_2 = var_s0 + 0x12;
    var_a1_2 = var_s4 + 0x74;
    var_a0_2 = 4;
    *(s8 *)((u8 *)var_s4 + 0x72) = (s8) *(s8 *)((u8 *)var_s0 + 0x10);
    *(s8 *)((u8 *)var_s4 + 0x73) = (s8) *(s8 *)((u8 *)var_s0 + 0x11);
    do {
        var_a0_2 -= 1;
        temp_v0_2 = *(s8 *)((u8 *)var_a2_2 + 1);
        *(s8 *)((u8 *)var_a1_2 + 0) = (s8) *(s8 *)((u8 *)var_a2_2 + 0);
        var_a2_2 += 2;
        *(s8 *)((u8 *)var_a1_2 + 1) = temp_v0_2;
        var_a1_2 += 2;
    } while (var_a0_2 > 0);
    *(s16 *)((u8 *)var_s4 + 0x7C) = (s16) *(s16 *)((u8 *)var_s0 + 0x1E);
    *(s16 *)((u8 *)var_s4 + 0x7E) = (s16) *(s16 *)((u8 *)var_s0 + 0x20);
    *(s16 *)((u8 *)var_s4 + 0x80) = (s16) *(s32 *)((u8 *)var_s0 + 0x24);
    *(s16 *)((u8 *)var_s4 + 0x82) = (s16) *(s32 *)((u8 *)var_s0 + 0x28);
    *(s8 *)((u8 *)var_s4 + 0x85) = (s8) *(s32 *)((u8 *)var_s0 + 0x30);
    temp_f1 = 255.0f * *(f32 *)((u8 *)var_s0 + 0x34);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_v1 = temp_f1;
    } else {
        var_v1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1 - 2.1474836e9f)) | 0x80000000));
    }
    *(s8 *)((u8 *)var_s4 + 0x86) = M2C_BITWISE(s8, var_v1);
    temp_f1_2 = 255.0f * *(f32 *)((u8 *)var_s0 + 0x38);
    if (!(temp_f1_2 >= 2.1474836e9f)) {
        var_v1_2 = temp_f1_2;
    } else {
        var_v1_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
    }
    *(s8 *)((u8 *)var_s4 + 0x87) = M2C_BITWISE(s8, var_v1_2);
    temp_f1_3 = 255.0f * *(f32 *)((u8 *)var_s0 + 0x3C);
    if (!(temp_f1_3 >= 2.1474836e9f)) {
        var_v1_3 = temp_f1_3;
    } else {
        var_v1_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_3 - 2.1474836e9f)) | 0x80000000));
    }
    *(s8 *)((u8 *)var_s4 + 0x88) = M2C_BITWISE(s8, var_v1_3);
    *(s8 *)((u8 *)var_s4 + 0x89) = (s8) *(s8 *)((u8 *)var_s0 + 0x40);
    *(s8 *)((u8 *)var_s4 + 0x8A) = (s8) *(s8 *)((u8 *)var_s0 + 0x41);
    *(s8 *)((u8 *)var_s4 + 0x8B) = (s8) *(s8 *)((u8 *)var_s0 + 0x42);
    *(s8 *)((u8 *)var_s4 + 0x8C) = (s8) *(s8 *)((u8 *)var_s3 + 0xAB);
    *(s8 *)((u8 *)var_s4 + 0xA0) = (s8) *(s8 *)((u8 *)var_s3 + 0xA4);
    *(s16 *)((u8 *)var_s4 + 0xA4) = (s16) *(s32 *)((u8 *)var_s3 + 0xAC);
    *(s32 *)((u8 *)var_s4 + 0x98) = (s32) *(s32 *)((u8 *)var_s3 + 0x2AFA8);
    *(s32 *)((u8 *)var_s4 + 0x9C) = (s32) *(s32 *)((u8 *)var_s3 + 0xB0);
    *(s8 *)((u8 *)var_s4 + 0xA1) = (s8) *(s8 *)((u8 *)var_s3 + 0xA5);
    *(s8 *)((u8 *)var_s4 + 0xA2) = (s8) *(s8 *)((u8 *)var_s3 + 0xA6);
    *(s8 *)((u8 *)var_s4 + 0xA3) = (s8) *(s8 *)((u8 *)var_s3 + 0xA7);
    *(s64 *)((u8 *)var_s4 + 0x90) = (s64) *(s64 *)((u8 *)var_s3 + 0xB8);
    memcpy((s32 *)(var_s4 + 0xA6), (void *)(var_s3 + 0x2B456), 0x630);
    memcpy((s32 *)(var_s4 + 0x8A0), (void *)(var_s3 + 0x2B240), 0x216);
    var_s2 = 0;
    var_s1 = var_s3;
    var_s0 = var_s4;
    *(s16 *)((u8 *)var_s4 + 0xAB6) = (s16) *(s16 *)((u8 *)var_s3 + 0x2B240);
    do {
        memcpy((s32 *)(var_s0 + 0xAB8), (void *)(var_s1 + 0x1330), 0xE);
        var_s2 += 1;
        var_s1 += 0x1210;
        var_s0 += 0xE;
    } while (var_s2 < 0x26);
    var_s0 = NULL;
    var_s2 = (s32) var_s3;
    var_s1 = var_s4;
    do {
        *(s8 *)((u8 *)var_s1 + 0x6D8) = (s8) *(s8 *)((u8 *)var_s2 + 0x1327);
        memcpy((s32 *)(var_s1 + 0x6D9), (void *)(var_s2 + 0x1328), 7);
        var_s0 += 1;
        *(s32 *)((u8 *)var_s1 + 0x6E0) = (s32) *(s32 *)((u8 *)var_s2 + 0x1340);
        var_s2 += 0x1210;
        var_s1 += 0xC;
    } while ((s32) var_s0 < 0x26);
    memcpy((s32 *)(var_s4 + 0xCD8), (void *)(var_s3 + 0xC0), 0x80);
    memcpy((s32 *)(var_s4 + 0xD60), (void *)(var_s3 + 0x140), 0x1210);
    memcpy((s32 *)(var_s4 + 0x1F70), (void *)(var_s3 + 0x2560), 0x1210);
    memcpy((s32 *)(var_s4 + 0x3180), (void *)(var_s3 + 0x3770), 0x1210);
    memcpy((s32 *)(var_s4 + 0x4390), (void *)(var_s3 + 0x4980), 0x1210);
    memcpy((s32 *)(var_s4 + 0x55A0), (void *)(var_s3 + 0x7FB0), 0x1210);
    memcpy((s32 *)(var_s4 + 0x67B0), (void *)(var_s3 + 0xB5E0), 0x1210);
    memcpy((s32 *)(var_s4 + 0x79C0), (void *)(var_s3 + 0xC7F0), 0x1210);
    memcpy((s32 *)(var_s4 + 0x8BD0), (void *)(var_s3 + 0xDA00), 0x1210);
    memcpy((s32 *)(var_s4 + 0x9DE0), (void *)(var_s3 + 0xEC10), 0x1210);
    memcpy((s32 *)(var_s4 + 0xAFF0), (void *)(var_s3 + 0x13450), 0x1210);
    memcpy((s32 *)(var_s4 + 0xC200), (void *)(var_s3 + 0x26760), 0x1210);
    *(s64 *)((u8 *)var_s4 + 0xD410) = (s64) *(s64 *)((u8 *)var_s3 + 0x2AFA0);
    *(s32 *)((u8 *)var_s4 + 0xD418) = (s32) *(s32 *)((u8 *)var_s3 + 0x2AFAC);
    *(s8 *)((u8 *)var_s4 + 0xD41C) = (s8) *(s8 *)((u8 *)var_s3 + 0x2AFB0);
    memcpy((s32 *)(var_s4 + 0xD41D), (void *)(var_s3 + 0x2AFD9), 0x260);
}
