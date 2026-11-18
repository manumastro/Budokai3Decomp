/* Draft (not built): func_0020EE10 at 0x0020EE10, size 0x170, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); om 'unsigned char *' to 'float' @ 1986: *)((u8 *)temp_a3 + 0x2114), gBattle, temp_a3, *(f32 *)((u8 *)temp_a3 + 0x2104));
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020EE10.s */

// src/unk/unk_20A4D0.c func_0020EE10 cerr diff=-1/0
s32 func_0020EE10(s32 arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f2;
    s32 var_s0;
    s32 var_v0;
    u8 *temp_a3;

    temp_a3 = &D_00568C90 + (arg0 * 0x2140);
    temp_f3 = *(f32 *)((u8 *)temp_a3 + 0x210C) - 1.0f;
    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return 0;
    }
    if (*(s32 *)((u8 *)temp_a3 + 0x20EC) & 0x10) {
        var_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104) + *(f32 *)((u8 *)temp_a3 + 0x2110);
    } else {
        if (gBattle != NULL) {
            var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f2 = 1.0f;
        } else {
            var_f2 = 1.2f;
        }
        var_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104) + (*(f32 *)((u8 *)temp_a3 + 0x2110) * var_f2);
    }
    *(f32 *)((u8 *)temp_a3 + 0x2104) = var_f0;
    if (*(f32 *)((u8 *)temp_a3 + 0x2104) < 0.0f) {
        *(f32 *)((u8 *)temp_a3 + 0x2104) = 0.0f;
    }
    temp_f0 = *(f32 *)((u8 *)temp_a3 + 0x2104);
    if (!(temp_f0 <= temp_f3)) {
        if (arg1 != 0) {
            *(f32 *)((u8 *)temp_a3 + 0x2104) = (f32) (temp_f0 - temp_f3);
        } else {
            *(f32 *)((u8 *)temp_a3 + 0x2104) = temp_f3;
        }
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    amMotSet_Apply(temp_a3 + 0xA0, *(s32 *)((u8 *)temp_a3 + 0x2114), gBattle, temp_a3, *(f32 *)((u8 *)temp_a3 + 0x2104));
    return var_s0;
}
