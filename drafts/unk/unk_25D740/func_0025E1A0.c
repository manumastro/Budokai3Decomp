/* Draft (not built): func_0025E1A0 at 0x0025E1A0, size 0xD0, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); clared as: 'void (struct ScrFadeTask *)' now declared as: 'void (unsigned char *)' @ 599: void func_0025E1A0(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_25D740/func_0025E1A0.s */

// src/unk/unk_25D740.c func_0025E1A0 cerr diff=-1/0
void func_0025E1A0(u8 *arg0) {
    f32 temp_f1;
    f32 var_f1;
    s32 var_v1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        if (*(f32 *)((u8 *)temp_s0 + 8) != -1.0f) {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1 = 1.0f;
            } else {
                var_f1 = 1.2f;
            }
            temp_f1 = *(f32 *)((u8 *)temp_s0 + 4) + var_f1;
            *(f32 *)((u8 *)temp_s0 + 4) = temp_f1;
            if (!(temp_f1 < *(f32 *)((u8 *)temp_s0 + 8))) {
                amTask_Kill(arg0);
            }
        }
        func_0020EA70(*(s32 *)((u8 *)arg0 + 0x30));
    }
}
