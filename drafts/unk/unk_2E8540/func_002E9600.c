/* Draft (not built): func_002E9600 at 0x002E9600, size 0x168, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E9600.s */

// src/unk/unk_2E8540.c func_002E9600 diff diff=18/90
s32 func_0022C060(s32, s32);
void func_002E9600(void) {
    s32 saved_reg_s0;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 phi_s0;

    var_s0 = saved_reg_s0;
    var_s2 = gBtlSys;
    var_s1 = 0;
    phi_s0 = saved_reg_s0;
    if ((*(s32 *)((u8 *)gBattle + 0x88EC) == 0) && (*D_005C9F14 != 0)) {
        if ((*D_005C9F1C != 0) && (*D_005C9F68 != 0)) {
            temp_a0 = *(s32 *)((u8 *)var_s2 + 0xE64);
            D_00470704 = temp_a0;
            D_0047070C = 0x04001000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x04001000);
            D_00470238 = 0;
            func_0022C060(*D_005C9F68, 0x3F800000);
        }
        if (*D_005C9F6C != 0) {
            temp_v1 = *(s32 *)(D_004573C0[*D_005C9F60] + (*D_005C9F64 * 0x10));
            switch (temp_v1) {                      /* irregular */
            case 0:
                var_s1 = *(s32 *)((u8 *)var_s2 + 0xE60);
                var_s0_2 = 0x04000000;
                phi_s0 = 0x04000000;
                break;
            case 1:
                var_s1 = *(s32 *)((u8 *)var_s2 + 0xE84);
                var_s0_2 = 0x04010000;
                phi_s0 = 0x04010000;
                break;
            case 2:
                var_s1 = *(s32 *)((u8 *)var_s2 + 0xE64);
                var_s0_2 = 0x04001000;
                phi_s0 = 0x04001000;
                break;
            }
            D_00470704 = var_s1;
            D_00470708 = 0;
            D_0047070C = phi_s0;
            amModel_SetCurrent(var_s1, phi_s0);
            D_00470238 = 0;
            func_0022C060(*D_005C9F6C, 0x3F800000);
        }
    }
}
