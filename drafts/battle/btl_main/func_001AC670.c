/* Draft (not built): func_001AC670 at 0x001AC670, size 0x144, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x12C, original 0x144
 * Original: asm/nonmatchings/battle/btl_main/func_001AC670.s */

// src/battle/btl_main.c func_001AC670 size diff=37/75
extern u8 *gScrMachines;
extern void AdxSlot_SetPausedAll(s32 a);
extern void func_0029D860(s32 a);
extern void func_002CF650(s32 a);
s32 memcpy(void *, void *, s32);
extern void func_002CFD70(void);
void func_001AC670(s32 arg0) {
    s16 temp_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_s0;

    temp_s2 = (u8 *)(gBattle);
    if (arg0 != 0) {
        var_a2 = 0;
        if (*(s16 *)((u8 *)temp_s2 + 0x8944) != 0) {
            var_a1 = 0;
            do {
                temp_v0 = gScrMachines + var_a1;
                if (*(s32 *)((u8 *)temp_v0 + 0xC) != 0) {
                    *(s32 *)((u8 *)temp_v0 + 0xC) = 2;
                }
                var_a2 += 1;
                var_a1 += 0x5C;
            } while (var_a2 < 2);
        } else if (*(s8 *)((u8 *)temp_s2 + 0x8AB4) == 0) {
            var_s1 = 0;
            if (*(s32 *)((u8 *)temp_s2 + 0x88D8) > 0) {
                var_s0 = temp_s2;
                do {
                    temp_a0 = *(s16 *)((u8 *)var_s0 + 0x1BD4);
                    if (temp_a0 >= 0) {
                        memcpy(&D_00492FC0 + (temp_a0 * 0xB8), var_s0 + 0x830 + 0x1EFC, 0xB8);
                    }
                    var_s1 += 1;
                    var_s0 += 0x2020;
                } while (var_s1 < *(s32 *)((u8 *)temp_s2 + 0x88D8));
            }
        }
        AdxSlot_SetPausedAll(0);
        func_0029D860(0);
        func_002CF650(0);
    }
    *(s8 *)((u8 *)gBattle + 0x8975) = 0;
    func_002CFD70();
}
