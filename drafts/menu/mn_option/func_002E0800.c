/* Draft (not built): func_002E0800 at 0x002E0800, size 0xE4, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int *' to 'float' @ 531: func_002D2AD0(&sp40, &sp30, *(f32 *)((u8 *)temp_s0 + 0xC));
 * Original: asm/nonmatchings/menu/mn_option/func_002E0800.s */

// src/menu/mn_option.c func_002E0800 cerr diff=-1/0
extern void func_002E06A0(void);
void func_002E0800(u8 *arg0) {
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
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC) - 0.05f;
    *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1;
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0xC) = 0.0f;
        if (*(s8 *)((u8 *)temp_s0 + 0x14) == 0) {
            *(s8 *)((u8 *)temp_s0 + 0x14) = 1;
            var_v1 = (s32 *)(&func_002E06A0);
            *(s8 *)((u8 *)temp_s0 + 0x15) = 0x64;
            if (&func_002E06A0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        amTask_Kill(*(u8 **)((u8 *)temp_s0 + 0x18));
        *(u8 **)((u8 *)temp_s0 + 0x18) = NULL;
        *(s32 *)((u8 *)temp_s0 + 8) = 4;
    }
}
