/* Draft (not built): func_002A81B0 at 0x002A81B0, size 0x178, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'signed char *' * 'int' @ 2832: temp_v1 = D_004E6560 + (D_00511450 * 0x1210) + 0x80;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A81B0.s */

// src/story/evt_scrp.c func_002A81B0 cerr diff=-1/0
void func_002A81B0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_a1;
    s32 var_a1_2;
    u32 temp_a1;
    u8 *temp_v1;

    temp_a1 = (u32) (arg0 & 0xFFFF0000) >> 0x10;
    temp_a0 = arg0 & 0xFFFF;
    temp_v1 = D_004E6560 + (D_00511450 * 0x1210) + 0x80;
    if ((temp_a1 != 0x6A) && (temp_a1 != 0x68) && (temp_a1 != 0x66) && (temp_a1 != 0x64)) {
        return;
    }
    switch (temp_a0) {                              /* irregular */
    case 13:
    case 12:
    case 11:
    case 10:
    case 4:
    case 3:
    case 2:
    case 0:
        temp_a0_2 = temp_a1 - 0x64;
        var_a1 = temp_a0_2 >> 1;
        if (temp_a0_2 < 0) {
            var_a1 = (s32) (temp_a0_2 + 1) >> 1;
        }
        *(s32 *)((u8 *)temp_v1 + 0x11DC) = (s32) *(&D_004700B4 + var_a1);
        return;
    case 7:
        temp_a0_3 = temp_a1 - 0x64;
        var_a1_2 = temp_a0_3 >> 1;
        if (temp_a0_3 < 0) {
            var_a1_2 = (s32) (temp_a0_3 + 1) >> 1;
        }
        *(s32 *)((u8 *)temp_v1 + 0x11DC) = (s32) *(&D_004700B8 + var_a1_2);
        return;
    case 17:
        *(s32 *)((u8 *)temp_v1 + 0x11DC) = 4;
        return;
    case 34:
        *(s32 *)((u8 *)temp_v1 + 0x11DC) = 5;
        return;
    default:
        *(s32 *)((u8 *)temp_v1 + 0x11DC) = 0;
        return;
    }
}
