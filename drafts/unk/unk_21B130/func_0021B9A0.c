/* Draft (not built): func_0021B9A0 at 0x0021B9A0, size 0xBC, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021B9A0.s */

// src/unk/unk_21B130.c func_0021B9A0 diff diff=6/47
void func_0021B9A0(void) {
    s32 temp_a0;
    u8 *var_s0;
    u8 *temp_v1;
    u8 *var_s1;

    var_s0 = gBtlSys;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0xE64);
        D_00470704 = temp_a0;
        D_0047070C = 0x04001000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04001000);
        D_00470238 = 0;
        temp_v1 = *(u8 **)((u8 *)var_s0 + 0xEE8);
        if (temp_v1 != NULL) {
            var_s1 = temp_v1 + 0x30;
            if (*(s32 *)((u8 *)temp_v1 + 0x30) != 0) {
                func_0022C060(1.0f);
            }
            if (*(s32 *)((u8 *)var_s1 + 4) != 0) {
                func_0022C060(1.0f);
            }
        }
        if (*(s32 *)((u8 *)var_s0 + 0xDF8) != 0) {
            func_0021B1E0();
        }
    }
}
