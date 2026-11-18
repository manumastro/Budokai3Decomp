/* Draft (not built): func_001B34B0 at 0x001B34B0, size 0x1B0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A8, original 0x1B0
 * Original: asm/nonmatchings/battle/btl_main/func_001B34B0.s */

// src/battle/btl_main.c func_001B34B0 size diff=41/106
extern s32 func_001E9290(Fighter *c);
extern s32 func_001AA9D0(s32);
extern void func_0025B2E0(s32, f32);
void func_001B34B0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f1;
    s16 temp_v0;
    s32 var_f0;

    temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if ((*(s16 *)((u8 *)gBattle + 0x8944) == 0) && (*(s8 *)((u8 *)gBattle + 0x8AB2) == 0)) {
        temp_v0 = *(s16 *)((u8 *)arg0 + 0x13A4);
        if (temp_v0 >= 0) {
            var_f0 = func_001AA9D0(temp_v0);
        } else {
            var_f0 = func_001E9290(0);
        }
        temp_f2 = (f32) var_f0;
        if (!(temp_f2 <= 0.0f)) {
            *(f32 *)((u8 *)arg0 + 0xCA0) = (f32) (*(f32 *)((u8 *)arg0 + 0xCA0) + (0.05f * temp_f20 * temp_f2));
        } else {
            *(f32 *)((u8 *)arg0 + 0xCA0) = (f32) (*(f32 *)((u8 *)arg0 + 0xCA0) - (0.01f * temp_f20));
        }
        var_f1 = *(f32 *)((u8 *)arg0 + 0xCA0);
        if (!(var_f1 <= 1.0f)) {
            var_f1 = 1.0f;
        } else if (var_f1 < 0.0f) {
            var_f1 = 0.0f;
        }
        *(f32 *)((u8 *)arg0 + 0xCA0) = var_f1;
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x18A8) - (1.0f + (2.0f * *(f32 *)((u8 *)arg0 + 0xCA0)));
        *(f32 *)((u8 *)arg0 + 0x18A8) = temp_f1;
        if (temp_f1 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 0x18A8) = 0.0f;
        }
        func_0025B2E0(*(s32 *)((u8 *)arg0 + 0x1350), 1.0f + *(f32 *)((u8 *)arg0 + 0xCA0));
    }
    func_001E4E20(arg0, 0);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        *(f32 *)((u8 *)arg0 + 0x44) = (f32) *(f32 *)((u8 *)arg0 + 0x1844);
    }
    *(s32 *)((u8 *)arg0 + 0x17BC) = 0;
}
