/* Draft (not built): func_00241AC0 at 0x00241AC0, size 0x148, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 1014: func_00243280(temp_a1, gBattle, temp_a3);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241AC0.s */

// src/unk/unk_23A890.c func_00241AC0 cerr diff=-1/0
void func_00241AC0(s32 arg0) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f2_2;
    u8 *temp_a1;
    u8 *temp_a3;
    u8 *temp_v0;

    temp_a3 = gBattle + (arg0 * 0x2020) + 0x830;
    temp_a1 = D_0046FE44 + (arg0 << 7);
    if (*(s32 *)((u8 *)temp_a1 + 0x2C) & 0x80) {
        temp_v0 = *(u8 **)((u8 *)temp_a3 + 0x1354);
        if (!(*(f32 *)((u8 *)temp_v0 + 0x1A40) <= 0.0f)) {
            var_f2 = *(f32 *)((u8 *)temp_v0 + 0x17D4);
        } else {
            var_f2 = *(f32 *)((u8 *)temp_v0 + 0x17D0);
        }
        var_f1 = *(f32 *)((u8 *)temp_v0 + 0x17D4);
    } else {
        if (!(*(f32 *)((u8 *)temp_a3 + 0x1A40) <= 0.0f)) {
            var_f2 = *(f32 *)((u8 *)temp_a3 + 0x17D4);
        } else {
            var_f2 = *(f32 *)((u8 *)temp_a3 + 0x17D0);
        }
        var_f1 = *(f32 *)((u8 *)temp_a3 + 0x17D4);
    }
    if (*(f32 *)((u8 *)temp_a3 + 0x17C0) <= 0.0f) {
        if (gBattle != NULL) {
            var_f2_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f2_2 = 1.0f;
        } else {
            var_f2_2 = 1.2f;
        }
        *(f32 *)((u8 *)temp_a1 + 0x24) = (f32) (*(f32 *)((u8 *)temp_a1 + 0x24) - (0.005f * var_f2_2));
    } else {
        *(f32 *)((u8 *)temp_a1 + 0x24) = (f32) (var_f2 / var_f1);
    }
    if (!(*(f32 *)((u8 *)temp_a1 + 0x24) <= 1.0f)) {
        *(f32 *)((u8 *)temp_a1 + 0x24) = 1.0f;
    }
    if (*(f32 *)((u8 *)temp_a1 + 0x24) <= 0.0f) {
        *(f32 *)((u8 *)temp_a1 + 0x24) = 0.0f;
    }
    func_00243280(temp_a1, gBattle, temp_a3);
}
