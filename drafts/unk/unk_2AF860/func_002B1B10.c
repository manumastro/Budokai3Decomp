/* Draft (not built): func_002B1B10 at 0x002B1B10, size 0x148, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x148
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1B10.s */

// src/unk/unk_2AF860.c func_002B1B10 size diff=55/90
void func_002B1B10(u8 *arg0, s32 arg1) {
    s32 *var_t2;
    s16 var_a2;
    s16 var_v1;
    s32 temp_a1;
    s32 temp_t1;
    s32 var_a3;
    u8 *var_t4;
    u8 *temp_a0;
    u8 *temp_a0_2;

    var_t2 = (s32 *)(&D_004E0688);
    if (arg1 > 0) {
        *(s32 *)((u8 *)arg0 + 0x24) = (s32) (*(u8 *)((u8 *)(&D_004E0660 + (arg1 * 0x28)) + 0xA) & 3);
    }
    temp_t1 = *(s32 *)((u8 *)arg0 + 0x24);
    var_a3 = 1;
    var_v1 = 0;
    var_a2 = 0;
    temp_a0 = arg0 + (temp_t1 * 0x1C);
    temp_a0_2 = temp_a0 + 0x48;
    var_t4 = (u8 *)(*(s32 *)((u8 *)gSklEdit + 0x44) + 1);
    do {
        if (var_a3 == arg1) {
            var_v1 = var_a2;
        }
        if ((*(s64 *)((u8 *)var_t2 + 0) & (1 << (s64) *(s32 *)((u8 *)arg0 + 0x1C))) && ((*(u8 *)((u8 *)var_t2 + 0xA) & 3) == temp_t1) && (*(u8 *)((u8 *)var_t2 + 8) & 7) && ((s32) *var_t4 > 0)) {
            var_a2 += 1;
        }
        var_a3 += 1;
        var_t2 += 0x28;
        var_t4 += 1;
    } while (var_a3 < 0x253);
    *(s16 *)((u8 *)temp_a0_2 + 0x1A) = var_a2;
    if (var_a2 < 9) {
        *(s32 *)((u8 *)temp_a0 + 0x48) = 0;
        *(s32 *)((u8 *)temp_a0_2 + 4) = (s32) var_v1;
        return;
    }
    temp_a1 = var_v1 - *(s32 *)((u8 *)temp_a0 + 0x48);
    if (temp_a1 < 9) {
        *(s32 *)((u8 *)temp_a0_2 + 4) = temp_a1;
        return;
    }
    if ((var_v1 + 9) < var_a2) {
        *(s32 *)((u8 *)temp_a0 + 0x48) = (s32) var_v1;
        *(s32 *)((u8 *)temp_a0_2 + 4) = 0;
        return;
    }
    *(s32 *)((u8 *)temp_a0 + 0x48) = (s32) (var_a2 - 9);
    *(s32 *)((u8 *)temp_a0_2 + 4) = (s32) (*(s32 *)((u8 *)temp_a0 + 0x48) - var_v1);
}
