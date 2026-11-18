/* Draft (not built): func_001EF930 at 0x001EF930, size 0x474, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x56C, original 0x474
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF930.s */

// src/battle/btb_draw.c func_001EF930 size diff=54/347
s32 func_0026DC80(void *, void *);
s32 memcpy(void *, void *, s32, void *);
void func_001EF930(u8 *arg0, u8 *arg1) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0_2;
    s32 var_s2;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 *temp_v0;
    u8 *var_a2_2;
    u8 *var_a3;
    u8 *var_a3_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s2_2;
    u8 *var_t0;

    var_a2 = 4;
    temp_v0 = arg0 + 0x2BA9C;
    var_t0 = arg1 + 0x6A;
    var_a3 = temp_v0 + 8;
    *(s128 *)((u8 *)arg0 + 0x80) = (s128) *(s128 *)((u8 *)arg1 + 0x30);
    *(s128 *)((u8 *)arg0 + 0x90) = (s128) *(s128 *)((u8 *)arg1 + 0x40);
    *(s32 *)((u8 *)arg0 + 0xA0) = (s32) *(s32 *)((u8 *)arg1 + 0x50);
    *(s16 *)((u8 *)arg0 + 0x2BA9C) = (s16) *(s16 *)((u8 *)arg1 + 0x60);
    *(s16 *)((u8 *)temp_v0 + 2) = (s16) *(s16 *)((u8 *)arg1 + 0x62);
    *(s16 *)((u8 *)temp_v0 + 4) = (s16) *(s16 *)((u8 *)arg1 + 0x64);
    *(s16 *)((u8 *)temp_v0 + 0x2C) = (s16) *(s16 *)((u8 *)arg1 + 0x66);
    *(s8 *)((u8 *)temp_v0 + 6) = (s8) *(s8 *)((u8 *)arg1 + 0x68);
    *(s8 *)((u8 *)temp_v0 + 7) = (s8) *(s8 *)((u8 *)arg1 + 0x69);
    do {
        var_a2 -= 1;
        temp_v1 = *(s8 *)((u8 *)var_t0 + 1);
        *(s8 *)((u8 *)var_a3 + 0) = (s8) *(s8 *)((u8 *)var_t0 + 0);
        var_t0 += 2;
        *(s8 *)((u8 *)var_a3 + 1) = temp_v1;
        var_a3 += 2;
    } while (var_a2 > 0);
    var_a3_2 = arg1 + 0x74;
    var_a2_2 = temp_v0 + 0x12;
    var_a1 = 4;
    *(s8 *)((u8 *)temp_v0 + 0x10) = (s8) *(s8 *)((u8 *)arg1 + 0x72);
    *(s8 *)((u8 *)temp_v0 + 0x11) = (s8) *(s8 *)((u8 *)arg1 + 0x73);
    do {
        var_a1 -= 1;
        temp_v1_2 = *(s8 *)((u8 *)var_a3_2 + 1);
        *(s8 *)((u8 *)var_a2_2 + 0) = (s8) *(s8 *)((u8 *)var_a3_2 + 0);
        var_a3_2 += 2;
        *(s8 *)((u8 *)var_a2_2 + 1) = temp_v1_2;
        var_a2_2 += 2;
    } while (var_a1 > 0);
    *(s16 *)((u8 *)temp_v0 + 0x1E) = (s16) *(s16 *)((u8 *)arg1 + 0x7C);
    *(s16 *)((u8 *)temp_v0 + 0x20) = (s16) *(s16 *)((u8 *)arg1 + 0x7E);
    *(s32 *)((u8 *)temp_v0 + 0x24) = (s32) *(s16 *)((u8 *)arg1 + 0x80);
    *(s32 *)((u8 *)temp_v0 + 0x28) = (s32) *(s16 *)((u8 *)arg1 + 0x82);
    *(s32 *)((u8 *)temp_v0 + 0x30) = (s32) *(s8 *)((u8 *)arg1 + 0x85);
    temp_v1_3 = *(u8 *)((u8 *)arg1 + 0x86);
    if ((s32) temp_v1_3 >= 0) {
        var_f1 = (f32) temp_v1_3;
    } else {
        var_f1 = 2.0f * (f32) ((temp_v1_3 >> 1) | (temp_v1_3 & 1));
    }
    *(f32 *)((u8 *)temp_v0 + 0x34) = (f32) (0.003921569f * var_f1);
    temp_v1_4 = *(u8 *)((u8 *)arg1 + 0x87);
    if ((s32) temp_v1_4 >= 0) {
        var_f1_2 = (f32) temp_v1_4;
    } else {
        var_f1_2 = 2.0f * (f32) ((temp_v1_4 >> 1) | (temp_v1_4 & 1));
    }
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (0.003921569f * var_f1_2);
    temp_v1_5 = *(u8 *)((u8 *)arg1 + 0x88);
    if ((s32) temp_v1_5 >= 0) {
        var_f1_3 = (f32) temp_v1_5;
    } else {
        var_f1_3 = 2.0f * (f32) ((temp_v1_5 >> 1) | (temp_v1_5 & 1));
    }
    *(f32 *)((u8 *)temp_v0 + 0x3C) = (f32) (0.003921569f * var_f1_3);
    *(s8 *)((u8 *)temp_v0 + 0x40) = (s8) *(s8 *)((u8 *)arg1 + 0x89);
    *(s8 *)((u8 *)temp_v0 + 0x41) = (s8) *(s8 *)((u8 *)arg1 + 0x8A);
    *(s8 *)((u8 *)temp_v0 + 0x42) = (s8) *(s8 *)((u8 *)arg1 + 0x8B);
    *(s8 *)((u8 *)arg0 + 0xAB) = (s8) *(s8 *)((u8 *)arg1 + 0x8C);
    *(s32 *)((u8 *)arg0 + 0xAC) = (s32) *(u16 *)((u8 *)arg1 + 0xA4);
    *(s8 *)((u8 *)arg0 + 0xA4) = (s8) *(s8 *)((u8 *)arg1 + 0xA0);
    *(s32 *)((u8 *)arg0 + 0x2AFA8) = (s32) *(s32 *)((u8 *)arg1 + 0x98);
    *(s32 *)((u8 *)arg0 + 0xB0) = (s32) *(s32 *)((u8 *)arg1 + 0x9C);
    *(s8 *)((u8 *)arg0 + 0xA5) = (s8) *(s8 *)((u8 *)arg1 + 0xA1);
    *(s8 *)((u8 *)arg0 + 0xA6) = (s8) *(s8 *)((u8 *)arg1 + 0xA2);
    *(s8 *)((u8 *)arg0 + 0xA7) = (s8) *(s8 *)((u8 *)arg1 + 0xA3);
    *(s64 *)((u8 *)arg0 + 0xB8) = (s64) *(s64 *)((u8 *)arg1 + 0x90);
    memcpy(arg0 + 0x2B456, arg1 + 0xA6, 0x630, var_a3_2);
    memcpy(arg0 + 0x2B240, arg1 + 0x8A0, 0x216, 0);
    memcpy(arg0 + 0xC0, arg1 + 0xCD8, 0x80, 0);
    memcpy(arg0 + 0x140, arg1 + 0xD60, 0x1210, 0);
    memcpy(arg0 + 0x2560, arg1 + 0x1F70, 0x1210, 0);
    memcpy(arg0 + 0x3770, arg1 + 0x3180, 0x1210, 0);
    memcpy(arg0 + 0x4980, arg1 + 0x4390, 0x1210, 0);
    memcpy(arg0 + 0x7FB0, arg1 + 0x55A0, 0x1210, 0);
    memcpy(arg0 + 0xB5E0, arg1 + 0x67B0, 0x1210, 0);
    memcpy(arg0 + 0xC7F0, arg1 + 0x79C0, 0x1210, 0);
    memcpy(arg0 + 0xDA00, arg1 + 0x8BD0, 0x1210, 0);
    memcpy(arg0 + 0xEC10, arg1 + 0x9DE0, 0x1210, 0);
    memcpy(arg0 + 0x13450, arg1 + 0xAFF0, 0x1210, 0);
    memcpy(arg0 + 0x26760, arg1 + 0xC200, 0x1210, 0);
    var_s2 = 0;
    var_s1 = arg1;
    var_s0 = arg0;
    do {
        memcpy(var_s0 + 0x1330, var_s1 + 0xAB8, 0xE, 0);
        var_s2 += 1;
        var_s1 += 0xE;
        var_s0 += 0x1210;
    } while (var_s2 < 0x26);
    var_s0_2 = 0;
    var_s2_2 = arg1;
    var_s1_2 = arg0;
    do {
        *(s8 *)((u8 *)var_s1_2 + 0x1327) = (s8) *(s8 *)((u8 *)var_s2_2 + 0x6D8);
        memcpy(var_s1_2 + 0x1328, var_s2_2 + 0x6D9, 7, 0);
        var_s0_2 += 1;
        *(s32 *)((u8 *)var_s1_2 + 0x1340) = (s32) *(s32 *)((u8 *)var_s2_2 + 0x6E0);
        var_s2_2 += 0xC;
        var_s1_2 += 0x1210;
    } while (var_s0_2 < 0x26);
    *(s64 *)((u8 *)arg0 + 0x2AFA0) = (s64) *(s64 *)((u8 *)arg1 + 0xD410);
    *(s32 *)((u8 *)arg0 + 0x2AFAC) = (s32) *(s32 *)((u8 *)arg1 + 0xD418);
    *(s8 *)((u8 *)arg0 + 0x2AFB0) = (s8) *(s8 *)((u8 *)arg1 + 0xD41C);
    memcpy(arg0 + 0x2AFD9, arg1 + 0xD41D, 0x260, 0);
    func_0026DC80(arg0, arg0 + 0x2AFD9);
}
