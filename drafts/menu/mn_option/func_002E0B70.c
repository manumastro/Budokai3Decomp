/* Draft (not built): func_002E0B70 at 0x002E0B70, size 0xB4, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int *' to 'float' @ 565: func_002D2AD0(&sp40, &sp30, *(f32 *)((u8 *)temp_s0 + 0xC));
 * Original: asm/nonmatchings/menu/mn_option/func_002E0B70.s */

// src/menu/mn_option.c func_002E0B70 cerr diff=-1/0
extern void func_002E08F0(void);
void func_002E0B70(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 *var_v1;
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = gOptionState;
    sp44 = 0x42200000;
    sp40 = 0;
    sp30 = 0x44070000;
    sp48 = 0x3F800000;
    sp34 = 0x43800000;
    sp4C = 0x3F800000;
    sp38 = 0x3F800000;
    sp3C = 0x3F800000;
    func_002D2AD0(&sp40, &sp30, *(f32 *)((u8 *)temp_s0 + 0xC));
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC) + 0.05f;
    *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        var_v1 = (s32 *)(&func_002E08F0);
        *(f32 *)((u8 *)temp_s0 + 0xC) = 1.0f;
        if (&func_002E08F0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
