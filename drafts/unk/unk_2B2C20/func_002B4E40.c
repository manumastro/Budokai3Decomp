/* Draft (not built): func_002B4E40 at 0x002B4E40, size 0x1E4, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B4E40.s */

// src/unk/unk_2B2C20.c func_002B4E40 diff diff=89/121
s32 memcpy(s32 *, s32 *, s32, s32);
extern s32 D_004552C0;
void func_002B4E40(s32 arg0, s32 unused_arg1, s32 unused_arg2, s32 arg3) {
    s32 sp40;
    s32 sp60;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_a1_2;
    u8 *var_a2_2;
    u8 *var_a3_2;

    temp_v1 = (unsigned char *)(gSklEdit + ((arg0 >> 1) * 0x1C8));
    temp_s0 = temp_v1 + 0x48;
    temp_v1_2 = *(s32 *)((u8 *)temp_v1 + 0x54);
    if (temp_v1_2 == 1) {
        goto block_6;
    }
    var_v0 = 2;
    if (temp_v1_2 == 2) {
        goto block_10;
    }
    if (temp_v1_2 == 0) {
        goto block_5;
    }
    goto block_8;
block_5:
    goto block_9;
block_6:
    var_v0 = 3;
    goto block_9;
block_8:
    var_v0 = 3;
block_9:
    *(s32 *)((u8 *)temp_s0 + 0xC) = var_v0;
block_10:
    var_s2 = &sp60;
    *(s128 *)((u8 *)var_s2 + 0) = (s128) *(s128 *)((u8 *)(&D_004552C0) + 0);
    *(s64 *)((u8 *)var_s2 + 0x10) = (s64) *(s64 *)((u8 *)(&D_004552C0) + 0x10);
    *(f32 *)((u8 *)var_s2 + 0x18) = (f32) *(f32 *)((u8 *)(&D_004552C0) + 0x18);
    memcpy(&sp40, (s32 *)0x20, 0, 0);
    var_a3 = 0;
    if (sp40 <= 0) {
        goto block_15;
    }
    var_a2 = &sp40;
    var_a1 = var_s2;
loop_12:
    temp_a0 = *(s32 *)((u8 *)var_a2 + 4);
    if (!(temp_a0 & ~0xFFF)) {
        goto block_14;
    }
    *(s32 *)((u8 *)var_a2 + 4) = (s32) (temp_a0 & 0xFFF);
    *var_a1 = *(s32 *)((u8 *)var_a2 + 4);
block_14:
    var_a3 += 1;
    var_a2 += 4;
    var_a1 += 4;
    if (var_a3 < sp40) {
        goto loop_12;
    }
block_15:
    memcpy((s32 *)(temp_s0 + 0xB8), (s32 *)(&sp40), 0x20, (s32)(var_a3));
    var_t1 = 0;
    var_t0 = 0;
    var_a3_2 = temp_s0;
    var_a2_2 = temp_s0;
loop_16:
    temp_a1 = *(s32 *)((u8 *)var_a3_2 + 0xBC);
    if (temp_a1 <= 0) {
        goto block_19;
    }
    if (temp_a1 < 0x253) {
        goto block_20;
    }
block_19:
    *(s32 *)((u8 *)var_a3_2 + 0xBC) = -1;
    goto block_21;
block_20:
    *(s32 *)((u8 *)var_a2_2 + 0xBC) = temp_a1;
    var_a2_2 += 4;
    var_t0 += 1;
block_21:
    var_t1 += 1;
    var_a3_2 += 4;
    if (var_t1 < 7) {
        goto loop_16;
    }
    *(s32 *)((u8 *)temp_s0 + 0xB8) = var_t0;
    *(s32 *)((u8 *)temp_s0 + 0x2C) = -1;
    if (var_s2 == NULL) {
        goto block_28;
    }
    var_a0 = 0;
    if (*(s32 *)((u8 *)var_s2 + 0) <= 0) {
        goto block_27;
    }
    var_a1_2 = temp_s0;
loop_25:
    var_a0 += 1;
    *(s32 *)((u8 *)var_a1_2 + 0x2C) = (s32) *var_s2;
    var_s2 += 4;
    var_a1_2 += 4;
    if (*var_s2 > 0) {
        goto loop_25;
    }
block_27:
    *(s32 *)((u8 *)((var_a0 * 4) + temp_s0) + 0x2C) = -1;
block_28:
    *(s32 *)((u8 *)temp_s0 + 0x14) = arg3;
    return;
}
