/* Draft (not built): func_00218E50 at 0x00218E50, size 0xA4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA0, original 0xA4
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218E50.s */

// src/unk/unk_20A4D0.c func_00218E50 size diff=19/40
void func_00218E50(void) {
    s32 temp_a0;
    u8 *temp_v1;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;

    var_s0 = gBattle;
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0x684);
    if (temp_a0 != -1) {
        temp_v1 = var_s0 + (temp_a0 << 5);
        var_a1 = *(u8 **)((u8 *)temp_v1 + 0x5E0);
        var_s1 = temp_v1 + 0x5C4;
        if (var_a1 != NULL) {

        } else {
            var_a1 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
        }
        *(u8 **)((u8 *)var_a1 + 0x30) = var_s1;
        *(f32 *)((u8 *)var_a1 + 0x34) = (f32) *(f32 *)((u8 *)temp_v1 + 0x5C4);
        *(s32 *)((u8 *)var_a1 + 0x38) = 0;
        *(s32 *)((u8 *)var_a1 + 0x3C) = 0;
        *(s32 *)((u8 *)var_a1 + 0x40) = 0x42F00000;
        *(u8 **)((u8 *)var_s1 + 0x1C) = var_a1;
        *(s32 *)((u8 *)var_s0 + 0x684) = -1;
    }
}
