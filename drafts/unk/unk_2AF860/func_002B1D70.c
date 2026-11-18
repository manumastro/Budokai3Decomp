/* Draft (not built): func_002B1D70 at 0x002B1D70, size 0x118, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x128, original 0x118
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1D70.s */

// src/unk/unk_2AF860.c func_002B1D70 size diff=52/74
void func_002B1D70(u8 *arg0) {
    s32 *var_a3;
    s16 *temp_t4;
    s16 *var_a2_2;
    s16 *var_t3;
    s16 var_a2;
    s32 temp_t0;
    s32 var_a1;
    s32 var_v1;
    u8 *var_t2;
    u8 *temp_a0;
    u8 *temp_t5;

    temp_t0 = *(s32 *)((u8 *)arg0 + 0x24);
    var_a2 = 1;
    var_a3 = (s32 *)(&D_004E0688);
    var_a1 = 0;
    var_v1 = 0;
    temp_a0 = arg0 + (temp_t0 * 0x1C);
    temp_t5 = temp_a0 + 0x48;
    temp_t4 = (s16 *)(temp_t5 + 8);
    var_t3 = temp_t4;
    var_t2 = (u8 *)(*(s32 *)((u8 *)gSklEdit + 0x44) + 1);
    do {
        if ((*(s64 *)((u8 *)var_a3 + 0) & (1 << (s64) *(s32 *)((u8 *)arg0 + 0x1C))) && ((*(u8 *)((u8 *)var_a3 + 0xA) & 3) == temp_t0) && (*(u8 *)((u8 *)var_a3 + 8) & 7) && ((s32) *var_t2 > 0)) {
            if (var_a1 < *(s32 *)((u8 *)temp_a0 + 0x48)) {
                var_a1 += 1;
            } else {
                if (var_v1 < 9) {
                    *var_t3 = var_a2;
                }
                var_t3 += 2;
                var_v1 += 1;
            }
        }
        var_a2 += 1;
        var_a3 += 0x28;
        var_t2 += 1;
    } while (var_a2 < 0x253);
    *(s16 *)((u8 *)temp_t5 + 0x1A) = (s16) (*(s32 *)((u8 *)temp_a0 + 0x48) + var_v1);
    if (var_v1 < 9) {
        var_a2_2 = temp_t4 + (var_v1 * 2);
        do {
            var_v1 += 1;
            *var_a2_2 = -1;
            var_a2_2 += 2;
        } while (var_v1 < 9);
    }
}
