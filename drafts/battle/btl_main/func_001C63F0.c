/* Draft (not built): func_001C63F0 at 0x001C63F0, size 0x384, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); p_s2_2, 0, *(f32 *)((u8 *)temp_s2_2 + 0x17BC)); @ 5509: *(&D_00468600 + (*(s16 *)((u8 *)temp_s2 + 0xCAC) * 4))(temp_s2);
 * Original: asm/nonmatchings/battle/btl_main/func_001C63F0.s */

// src/battle/btl_main.c func_001C63F0 cerr diff=-1/0
extern void func_001E5230(void *f, s32 x);
extern void func_001D8CD0(void *f);
extern void amMotion_BuildMatrices(void *o);
s32 amMotion_SavePose(s8 *);
s32 func_001D90D0(void *);
s32 func_001DC3E0(void *);
s32 func_001DCB70(void *);
s32 func_001DCC90(void *);
s32 func_001E3310(s32);
s32 func_001E3EB0(s32);
s32 func_001E4440();
extern s32 D_00468600;
extern void func_001E8640();
void func_001C63F0(void) {
    s32 *var_s1_2;
    s32 temp_s6;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s5;
    u8 *var_s0;
    u8 *var_s0_2;
    u8 *var_s0_3;
    u8 *var_s2;
    u8 *var_s7;

    temp_s5 = (u8 *)(gBattle);
    var_s7 = temp_s5 + 0x830;
    if (*(s32 *)((u8 *)temp_s5 + 0x88EC) == 0) {
        var_s1 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
            var_s0 = temp_s5;
            do {
                temp_s2 = *(u8 **)((u8 *)var_s0 + 0x88DC);
                *(&D_00468600 + (*(s16 *)((u8 *)temp_s2 + 0xCAC) * 4))(temp_s2);
                if (*(s8 *)((u8 *)temp_s2 + 0x133C) == 0) {
                    D_004686B4(temp_s2);
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
        }
        func_001E3310(*(s32 *)((u8 *)gBattle + 0x88DC));
        func_001E3310(*(s32 *)((u8 *)gBattle + 0x88E0));
        func_001E4440();
        func_001E3EB0(*(s32 *)((u8 *)gBattle + 0x88DC));
        func_001E3EB0(*(s32 *)((u8 *)gBattle + 0x88E0));
        if (*(s8 *)((u8 *)temp_s5 + 0x8AAE) != 0) {
            var_s4 = 0;
            if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
                var_s2 = temp_s5;
                do {
                    temp_s6 = *(s32 *)((u8 *)var_s2 + 0x88DC);
                    var_s3 = 0;
                    if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
                        var_s1_2 = (s32 *)(temp_s5 + 0x88DC);
                        do {
                            if (var_s3 != var_s4) {
                                func_001C4C10(temp_s6, *var_s1_2);
                            }
                            var_s3 += 1;
                            var_s1_2 += 4;
                        } while (var_s3 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
                    }
                    var_s4 += 1;
                    var_s2 += 4;
                } while (var_s4 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
            }
            func_001C4870(*(s32 *)((u8 *)gBattle + 0x88DC));
            func_001C4870(*(s32 *)((u8 *)gBattle + 0x88E0));
        }
        var_s1_3 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
            var_s0_2 = temp_s5;
            do {
                temp_s2_2 = *(u8 **)((u8 *)var_s0_2 + 0x88DC);
                func_001E4820(temp_s2_2, 0, *(f32 *)((u8 *)temp_s2_2 + 0x17BC));
                func_001E5230(temp_s2_2, 0);
                func_001DCC90(temp_s2_2);
                func_001DCB70(temp_s2_2);
                amMotion_BuildMatrices(*(s8 **)((u8 *)temp_s2_2 + 0xB88));
                amMotion_SavePose(*(s8 **)((u8 *)temp_s2_2 + 0xB88));
                if (*(s8 *)((u8 *)temp_s2_2 + 0x1FFE) == 0) {
                    func_001DC3E0(temp_s2_2);
                }
                var_s1_3 += 1;
                var_s0_2 += 4;
            } while (var_s1_3 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
        }
        var_s1_4 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
            var_s0_3 = var_s7;
            do {
                func_001E4FA0(var_s0_3, -1);
                if (*(s8 *)((u8 *)var_s0_3 + 0x133C) == 0) {
                    func_001E8640(var_s0_3 + 0xCD0, -1);
                }
                func_001D90D0(var_s0_3);
                func_001D8CD0(var_s0_3);
                var_s1_4 += 1;
                var_s0_3 += 0x2020;
            } while (var_s1_4 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
        }
        var_s0_4 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 0x88D8) > 0) {
            do {
                func_001C3AF0(var_s7);
                var_s0_4 += 1;
                var_s7 += 0x2020;
            } while (var_s0_4 < *(s32 *)((u8 *)temp_s5 + 0x88D8));
        }
        *(s8 *)((u8 *)temp_s5 + 0x8976) = (s8) ((s32) (*(s8 *)((u8 *)temp_s5 + 0x8976) + 1) % (s32) *(s32 *)((u8 *)gBattle + 0x88D8));
    }
}
