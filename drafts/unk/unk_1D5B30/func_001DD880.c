/* Draft (not built): func_001DD880 at 0x001DD880, size 0x1AC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A4, original 0x1AC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DD880.s */

// src/unk/unk_1D5B30.c func_001DD880 size diff=90/105
void func_001DD880(u8 *arg0) {
    s32 sp10;
    s32 sp14;
    s16 temp_a3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s8 temp_a1;
    s8 temp_a2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    *(s32 *)((u8 *)arg0 + 0x1A28) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A28) + 1);
    if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
        var_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_v1 = (unsigned char *)(gBattle + (var_v1 * 0x48));
    *(s16 *)((u8 *)temp_v1 + 0x8980) = (s16) (*(s16 *)((u8 *)temp_v1 + 0x8980) + 1);
    temp_a2 = *(s8 *)((u8 *)arg0 + 0x2015);
    if (temp_a2 != 0) {
        var_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_2 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    if (temp_a2 != 0) {
        var_v1_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_3 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    if (temp_a2 != 0) {
        var_v1_4 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_4 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    *(s16 *)((u8 *)(gBattle + (var_v1_4 * 0x48)) + 0x8982) = (s16) ((s64) ((*(s16 *)((u8 *)(gBattle + (var_v1_3 * 0x48)) + 0x897E) + *(s16 *)((u8 *)(gBattle + (var_v1_2 * 0x48)) + 0x8980)) << 0x30) >> 0x30);
    temp_a1 = *(s8 *)((u8 *)arg0 + 0x2015);
    if (temp_a1 != 0) {
        var_v1_5 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_5 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_a3 = *(s16 *)((u8 *)(gBattle + (var_v1_5 * 0x48)) + 0x8982);
    if (temp_a1 != 0) {
        var_v1_6 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_6 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_v1_2 = (unsigned char *)(gBattle + (var_v1_6 * 0x48) + 0x897E);
    if (*(s16 *)((u8 *)temp_v1_2 + 6) < temp_a3) {
        *(s16 *)((u8 *)temp_v1_2 + 6) = temp_a3;
    }
    sp10 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350);
    sp14 = *(s32 *)((u8 *)arg0 + 0x1A24) + *(s32 *)((u8 *)arg0 + 0x1A28);
    A2d_CallHandler(6, &sp10);
}
