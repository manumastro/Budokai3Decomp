/* Draft (not built): func_0021BA60 at 0x0021BA60, size 0x438, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 148 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x444, original 0x438
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021BA60.s */

// src/unk/unk_21B130.c func_0021BA60 size diff=148/273
s32 memcpy(u8 *, u8 *, s32, u8 *);
extern void func_0023FC80(void);
void func_0021BA60(void) {
    u8 sp80;
    s16 temp_a1;
    s16 temp_a2;
    s32 *var_a1;
    s32 temp_a0;
    s32 var_s3;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_s2;
    s8 temp_v1_2;
    u8 *temp_a3;
    u8 *temp_s1;
    u8 *temp_s4;
    u8 *temp_v1;
    u8 *var_a3;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_t0;
    u8 *var_a0;
    u8 *var_s5;
    u8 *var_s6;

    temp_s4 = gBtlSys;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) != 0) {
        goto block_46;
    }
    if (!(*(s32 *)((u8 *)temp_s4 + 0xE30) & 4)) {
        goto block_16;
    }
    var_v0 = 0;
    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        goto block_16;
    }
    var_a3 = temp_s4;
loop_4:
    var_t1 = 0;
    if (*(s32 *)((u8 *)gBattle + 0x88D8) <= 0) {
        goto block_10;
    }
loop_6:
    if (*(s8 *)((u8 *)(&gBtlSys[var_t1]) + 0xCA0) != *(s32 *)((u8 *)var_a3 + 0xE34)) {
        goto block_8;
    }
    goto block_11;
block_8:
    var_t1 += 1;
    if (var_t1 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        goto loop_6;
    }
block_10:
    var_t1 = -1;
block_11:
    if (var_t1 != -1) {
        goto block_13;
    }
    var_a1 = NULL;
    goto block_14;
block_13:
    var_a1 = (int *)(gBtlSys + (var_t1 * 0x190) + 0x110);
block_14:
    var_v0 += 1;
    var_a3 += 4;
    *var_a1 |= 0x80;
    if (var_v0 < 2) {
        goto loop_4;
    }
    *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) ^ 4);
    *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) | 8);
block_16:
    if (!(*(s32 *)((u8 *)temp_s4 + 0xE30) & 8)) {
        goto block_43;
    }
    temp_a0 = *(s32 *)((u8 *)gBattle + 0x88D8);
    var_s3 = 0;
    if (temp_a0 <= 0) {
        goto block_23;
    }
loop_19:
    if (*(s8 *)((u8 *)(&gBtlSys[var_s3]) + 0xCA0) != *(s32 *)((u8 *)temp_s4 + 0xE34)) {
        goto block_21;
    }
    goto block_24;
block_21:
    var_s3 += 1;
    if (var_s3 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        goto loop_19;
    }
block_23:
    var_s3 = -1;
block_24:
    var_v0_2 = 0;
    if (temp_a0 <= 0) {
        goto block_30;
    }
loop_26:
    if (*(s8 *)((u8 *)(&gBtlSys[var_v0_2]) + 0xCA0) != *(s32 *)((u8 *)temp_s4 + 0xE38)) {
        goto block_28;
    }
    goto block_31;
block_28:
    var_v0_2 += 1;
    if (var_v0_2 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        goto loop_26;
    }
block_30:
    var_v0_2 = -1;
block_31:
    temp_t0 = gBtlSys + (var_s3 * 0x190);
    temp_a3 = gBtlSys + (var_v0_2 * 0x190);
    if (var_s3 != -1) {
        goto block_33;
    }
    var_a0 = NULL;
    goto block_34;
block_33:
    var_a0 = temp_t0 + 0x110;
block_34:
    if (!(*(s32 *)((u8 *)var_a0 + 0) & 0x80)) {
        goto block_43;
    }
    if (*(f32 *)((u8 *)var_a0 + 0x30) <= 50.0f) {
        goto block_43;
    }
    temp_a2 = *(s16 *)((u8 *)temp_t0 + 0x3E);
    temp_a1 = *(s16 *)((u8 *)temp_t0 + 0x42);
    *(s16 *)((u8 *)temp_t0 + 0x3E) = (s16) *(s16 *)((u8 *)temp_a3 + 0x3E);
    *(s16 *)((u8 *)temp_t0 + 0x42) = (s16) *(s16 *)((u8 *)temp_a3 + 0x42);
    *(s16 *)((u8 *)temp_a3 + 0x3E) = temp_a2;
    *(s16 *)((u8 *)temp_a3 + 0x42) = temp_a1;
    temp_s1 = gBtlSys;
    temp_s2 = *(s8 *)((u8 *)(&temp_s1[var_s3]) + 0xCA0);
    if (temp_s2 != -1) {
        goto block_38;
    }
    var_s5 = NULL;
    goto block_39;
block_38:
    var_s5 = temp_s1 + (temp_s2 * 0x190) + 0x110;
block_39:
    temp_v1 = &temp_s1[var_v0_2];
    temp_v1_2 = *(s8 *)((u8 *)temp_v1 + 0xCA0);
    var_s6 = NULL;
    if (temp_v1_2 != -1) {
        goto block_41;
    }
    goto block_42;
block_41:
    var_s6 = temp_s1 + (temp_v1_2 * 0x190) + 0x110;
block_42:
    memcpy(&sp80, var_s5 + 0x4C, 0x14, temp_a3);
    memcpy(var_s5 + 0x4C, var_s6 + 0x4C, 0x14, 0);
    memcpy(var_s6 + 0x4C, &sp80, 0x14, 0);
    temp_s5 = gBtlSys + (temp_s2 * 0x190) + 0x760;
    temp_s6 = gBtlSys + (*(s8 *)((u8 *)temp_v1 + 0xCA0) * 0x190) + 0x760;
    memcpy(&sp80, temp_s5 + 0x4C, 0x14, gBtlSys);
    memcpy(temp_s5 + 0x4C, temp_s6 + 0x4C, 0x14, 0);
    memcpy(temp_s6 + 0x4C, &sp80, 0x14, 0);
    *(s8 *)((u8 *)(&temp_s1[var_s3]) + 0xCA0) = (s8) *(s8 *)((u8 *)temp_v1 + 0xCA0);
    *(s8 *)((u8 *)temp_v1 + 0xCA0) = temp_s2;
    *(s32 *)((u8 *)temp_s4 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xE30) ^ 8);
block_43:
    if (*(s32 *)((u8 *)temp_s4 + 0xDF8) == 0) {
        goto block_45;
    }
    func_0021B1E0();
block_45:
    func_00228430(0);
    func_002284D0(0);
    func_0021B420();
    func_0023FC80();
    func_00228410();
    memcpy(temp_s4 + 0x650, temp_s4, 0x650, 0);
block_46:
    return;
}
