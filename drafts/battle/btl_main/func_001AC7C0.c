/* Draft (not built): func_001AC7C0 at 0x001AC7C0, size 0x1CC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x1CC
 * Original: asm/nonmatchings/battle/btl_main/func_001AC7C0.s */

// src/battle/btl_main.c func_001AC7C0 size diff=62/103
s32 memcpy(void *, void *, s32);
void func_001AC7C0(s32 arg1) {
    s16 temp_a0;
    s16 temp_a1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s0_2;

    var_a1 = arg1;
    temp_s3 = (u8 *)(gBattle);
    var_a2 = 0;
    if (*(s16 *)((u8 *)temp_s3 + 0x8944) != 0) {
        var_a1 = 0;
        do {
            temp_v0 = gScrMachines + var_a1;
            if (*(s32 *)((u8 *)temp_v0 + 0xC) != 0) {
                *(s32 *)((u8 *)temp_v0 + 0xC) = 3;
            }
            var_a2 += 1;
            var_a1 += 0x5C;
        } while (var_a2 < 2);
    }
    AdxSlot_SetPausedAll(1);
    var_s1 = 0;
    if (*(s32 *)((u8 *)temp_s3 + 0x88D8) > 0) {
        var_s0 = temp_s3;
        do {
            temp_a0 = *(s16 *)((u8 *)var_s0 + 0x1BD4);
            if (temp_a0 >= 0) {
                func_001A3610(temp_a0);
            }
            func_001D9C00(var_s0 + 0x830);
            func_001E3200(var_s0 + 0x830);
            var_s1 += 1;
            var_s0 += 0x2020;
        } while (var_s1 < *(s32 *)((u8 *)temp_s3 + 0x88D8));
    }
    if (*(s8 *)((u8 *)temp_s3 + 0x8AB4) == 0) {
        temp_s2 = (u8 *)(gBattle);
        var_s1_2 = 0;
        if (*(s32 *)((u8 *)temp_s2 + 0x88D8) > 0) {
            var_s0_2 = temp_s2;
            do {
                temp_a1 = *(s16 *)((u8 *)var_s0_2 + 0x1BD4);
                if (temp_a1 >= 0) {
                    memcpy(var_s0_2 + 0x830 + 0x1EFC, &D_00492FC0 + (temp_a1 * 0xB8), 0xB8);
                }
                var_s1_2 += 1;
                var_s0_2 += 0x2020;
            } while (var_s1_2 < *(s32 *)((u8 *)temp_s2 + 0x88D8));
        }
    }
    func_0029D860(1);
    func_002CF650(1);
    if (*(s8 *)((u8 *)temp_s3 + 0x8AB4) == 0) {
        *(s8 *)((u8 *)gBattle + 0x8975) = 1;
        RenderTex_Start(0);
    }
}
