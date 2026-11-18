/* Draft (not built): func_002E06A0 at 0x002E06A0, size 0x154, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int *' to 'float' @ 506: func_002D2AD0(&sp70, &sp60, *(f32 *)((u8 *)temp_s0 + 0xC));
 * Original: asm/nonmatchings/menu/mn_option/func_002E06A0.s */

// src/menu/mn_option.c func_002E06A0 cerr diff=-1/0
s32 func_002D2530(s32, s32, s32, f32 *);
s32 func_002D27E0(s32, s8, s32 *, s32 *);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void func_002E0260(void);
void func_002E06A0(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    f32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 *var_v1;
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = gOptionState;
    sp74 = 0x42200000;
    sp70 = 0;
    sp60 = 0x44070000;
    sp78 = 0x3F800000;
    sp64 = 0x43000000;
    sp7C = 0x3F800000;
    sp68 = 0x3F800000;
    sp6C = 0x3F800000;
    func_002D2AD0(&sp70, &sp60, *(f32 *)((u8 *)temp_s0 + 0xC));
    sp58 = 0x42A00000;
    sp5C = 0x3F800000;
    sp50 = D_0047042C / 2.0f;
    sp54 = (D_00470430 / 2.0f) - 30.0f;
    func_002D2530(*(s32 *)((u8 *)gOptionState + 4), 4, 0x80000, &sp50);
    sp44 = 0x43800000;
    sp40 = 0;
    sp30 = 0x42A00000;
    sp48 = 0x3F800000;
    sp34 = 0x42300000;
    sp4C = 0x3F800000;
    sp38 = 0x3F800000;
    sp3C = 0x3F800000;
    func_002D27E0(*(s32 *)((u8 *)gOptionState + 4), *(s8 *)((u8 *)gOptionState + 0x14), &sp40, &sp30);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC) + 0.05f;
    *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0xC) = 1.0f;
        var_v1 = (s32 *)(&func_002E0260);
        *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
        if (&func_002E0260 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
