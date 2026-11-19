/* Draft (not built): func_00251A60 at 0x00251A60, size 0x1BC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x128, original 0x1BC
 * Original: asm/nonmatchings/battle/skill_cmd/func_00251A60.s */

// src/battle/skill_cmd.c func_00251A60 size diff=73/74
extern void func_001F9CD0(s32, s32, s32, s32, s32);
s16 func_0020F690();
s32 func_00214F80(s16, s32 *);
s32 func_0025BD40(s32 *);
extern s128 D_004502A0;
extern void func_00214DD0();
void func_00251A60(u8 *arg0) {
    s32 sp30;
    u8 *sp40;
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
    u8 *spBC;
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
    sp110 = D_004502A0;
    if (!(*(s16 *)((u8 *)arg0 + 4) & 0x200)) {
        if (*(s16 *)((u8 *)temp_s0 + 0xE2) != 0) {
            func_001F9CD0((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1350)), (s32)(*(s32 *)((u8 *)temp_s0 + 0xE4)), (s32)(arg0 + 0x20), (s32)(&sp110), 0);
            if (*(s16 *)((u8 *)temp_s0 + 0xE2) != 1) {
                goto block_4;
            }
        } else {
block_4:
            if (*(s16 *)((u8 *)temp_s0 + 0xB6) != 0) {
                memset(&sp50, 0, 0xB0);
                spA0 = 0x400;
                spA2 = *(s16 *)((u8 *)temp_s0 + 0xBE);
                spA4 = 0;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                temp_v1 = *(s16 *)((u8 *)temp_s0 + 0xC0);
                spA6 = temp_v1;
                spA8 = *(s16 *)((u8 *)temp_s0 + 0xC2);
                if ((((s64) ((s64) temp_v1 << 0x30) >> 0x30) == 9) || (spA8 == 5)) {
                    func_00146F60((f32 *)(&sp100), (s32 *)(arg0 + 0x30));
                    func_00141C30((f32 *)(&sp90), (f32 *)(&sp110), (f32 *)(&sp100));
                }
                spE4 = *(s16 *)((u8 *)temp_s0 + 0xAC);
                spE6 = *(s16 *)((u8 *)temp_s0 + 0xAE);
                spE8 = *(s16 *)((u8 *)temp_s0 + 0xB0);
                spEE = *(s16 *)((u8 *)temp_s0 + 0xB2);
                spF0 = *(s16 *)((u8 *)temp_s0 + 0xB4);
                spF2 = *(s16 *)((u8 *)temp_s0 + 0xB6);
                spF4 = *(s16 *)((u8 *)temp_s0 + 0xB8);
                spFA = *(s16 *)((u8 *)temp_s0 + 0xBA);
                spBC = *(u8 **)((u8 *)arg0 + 8);
                spE0 = func_0020F690();
                spD0 = *(f32 *)((u8 *)temp_s0 + 0xC4);
                spC8 = *(s32 *)((u8 *)temp_s0 + 0x2C);
                func_00214DD0(&sp50);
                func_00214F80(*(s16 *)((u8 *)temp_s0 + 0xBE), &sp50);
            }
            if (*(s16 *)((u8 *)temp_s0 + 0xBA) != 0) {
                sp40 = *(u8 **)((u8 *)arg0 + 8);
                sp44 = *(s16 *)((u8 *)temp_s0 + 0xB2);
                sp46 = *(s16 *)((u8 *)temp_s0 + 0xBA);
                func_0025BD40(&sp30);
            }
        }
    }
}
