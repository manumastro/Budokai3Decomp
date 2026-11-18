/* Draft (not built): func_00251DA0 at 0x00251DA0, size 0x184, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE4, original 0x184
 * Original: asm/nonmatchings/battle/skill_cmd/func_00251DA0.s */

// src/battle/skill_cmd.c func_00251DA0 size diff=68/57
s16 func_0020F690();
s32 func_00214F80(s16, s32 *);
s32 func_0025BD40(s32 *);
extern s128 D_00450290;
extern void func_00214DD0();
void func_00251DA0(u8 *arg0) {
    s32 sp30;
    s32 sp40;
    s16 sp44;
    s16 sp46;
    s32 sp50;
    s32 sp60;
    s32 sp90;
    s16 spA0;
    s16 spA2;
    s16 spA4;
    s16 spA6;
    s16 spA8;
    s32 spBC;
    s32 spC8;
    f32 spD0;
    s16 spE0;
    s16 spE4;
    s16 spE6;
    s16 spE8;
    s16 spEE;
    s16 spF0;
    s16 spF2;
    s16 spF4;
    s16 spFA;
    s32 sp100;
    s128 sp110;
    s16 temp_v1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    sp110 = D_00450290;
    if (!(*(s16 *)((u8 *)arg0 + 4) & 0x200)) {
        if (*(s16 *)((u8 *)temp_s0 + 0x7A) != 0) {
            memset(&sp50, 0, 0xB0);
            spA0 = 0x400;
            spA2 = *(s16 *)((u8 *)temp_s0 + 0x82);
            spA4 = 0;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_v1 = *(s16 *)((u8 *)temp_s0 + 0x84);
            spA6 = temp_v1;
            spA8 = *(s16 *)((u8 *)temp_s0 + 0x86);
            if ((((s64) ((s64) temp_v1 << 0x30) >> 0x30) == 9) || (spA8 == 5)) {
                func_00146F60(&sp100, arg0 + 0x30);
                func_00141C30((void *)(&sp90), (void *)(&sp110), (void *)(&sp100));
            }
            spE4 = *(s16 *)((u8 *)temp_s0 + 0x70);
            spE6 = *(s16 *)((u8 *)temp_s0 + 0x72);
            spE8 = *(s16 *)((u8 *)temp_s0 + 0x74);
            spEE = *(s16 *)((u8 *)temp_s0 + 0x76);
            spF0 = *(s16 *)((u8 *)temp_s0 + 0x78);
            spF2 = *(s16 *)((u8 *)temp_s0 + 0x7A);
            spF4 = *(s16 *)((u8 *)temp_s0 + 0x7C);
            spFA = *(s16 *)((u8 *)temp_s0 + 0x7E);
            spBC = *(s32 *)((u8 *)arg0 + 8);
            spE0 = func_0020F690();
            spD0 = *(f32 *)((u8 *)temp_s0 + 0x88);
            spC8 = *(s32 *)((u8 *)temp_s0 + 0x2C);
            func_00214DD0(&sp50);
            func_00214F80(*(s16 *)((u8 *)temp_s0 + 0x82), &sp50);
        }
        if (*(s16 *)((u8 *)temp_s0 + 0x7E) != 0) {
            sp40 = *(s32 *)((u8 *)arg0 + 8);
            sp44 = *(s16 *)((u8 *)temp_s0 + 0x76);
            sp46 = *(s16 *)((u8 *)temp_s0 + 0x7E);
            func_0025BD40(&sp30);
        }
    }
}
