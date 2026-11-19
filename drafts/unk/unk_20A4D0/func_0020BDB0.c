/* Draft (not built): func_0020BDB0 at 0x0020BDB0, size 0x180, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A0, original 0x180
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020BDB0.s */

// src/unk/unk_20A4D0.c func_0020BDB0 size diff=26/104
void func_0020BDB0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 var_f3;
    s32 var_v1;

    var_v1 = 0;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    }
    if (var_v1 == 0) {
        if (gBattle != NULL) {
            var_f3 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f3 = 1.0f;
        } else {
            var_f3 = 1.2f;
        }
        *(f32 *)((u8 *)arg0 + 0x2120) = (f32) (*(f32 *)((u8 *)arg0 + 0x2120) + (*(f32 *)((u8 *)arg0 + 0x2118) * var_f3));
        *(f32 *)((u8 *)arg0 + 0x2124) = (f32) (*(f32 *)((u8 *)arg0 + 0x2124) + (*(f32 *)((u8 *)arg0 + 0x211C) * var_f3));
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x2120);
        if (temp_f1 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 0x2120) = (f32) (temp_f1 + 1.0f);
        }
        temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x2124);
        if (temp_f1_2 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 0x2124) = (f32) (temp_f1_2 + 1.0f);
        }
        temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x2120);
        if (!(temp_f1_3 <= 1.0f)) {
            *(f32 *)((u8 *)arg0 + 0x2120) = (f32) (temp_f1_3 - 1.0f);
        }
        temp_f1_4 = *(f32 *)((u8 *)arg0 + 0x2124);
        if (!(temp_f1_4 <= 1.0f)) {
            *(f32 *)((u8 *)arg0 + 0x2124) = (f32) (temp_f1_4 - 1.0f);
        }
        *(f32 *)((u8 *)arg0 + 0x2130) = (f32) (*(f32 *)((u8 *)arg0 + 0x2130) + (*(f32 *)((u8 *)arg0 + 0x2134) * var_f3));
        temp_f1_5 = *(f32 *)((u8 *)arg0 + 0x2128) + (*(f32 *)((u8 *)arg0 + 0x212C) * var_f3);
        *(f32 *)((u8 *)arg0 + 0x2128) = temp_f1_5;
        if (temp_f1_5 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 0x2128) = 0.0f;
        }
        if (!(*(f32 *)((u8 *)arg0 + 0x2128) <= 1.0f)) {
            *(f32 *)((u8 *)arg0 + 0x2128) = 1.0f;
        }
    }
}
