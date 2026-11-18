/* Draft (not built): func_00251C20 at 0x00251C20, size 0x17C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xCC, original 0x17C
 * Original: asm/nonmatchings/battle/skill_cmd/func_00251C20.s */

// src/battle/skill_cmd.c func_00251C20 size diff=65/51
s16 func_0020F690();
s32 func_00214F80(s16, s32 *);
s32 func_0025BD40(s32 *);
extern void func_00214DD0();
void func_00251C20(u8 *arg0) {
    s32 sp30;
    s32 sp40;
    s16 sp44;
    s16 sp46;
    s32 sp50;
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
    s32 sp110;
    s32 sp114;
    s32 sp118;
    s32 sp11C;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0xC);
    if (!(*(s16 *)((u8 *)arg0 + 4) & 0x200)) {
        if (*(s16 *)((u8 *)temp_s0 + 0x96) != 0) {
            memset(&sp50, 0, 0xB0);
            spA0 = 0x400;
            spA2 = *(s16 *)((u8 *)temp_s0 + 0x9C);
            spA4 = *(s16 *)((u8 *)temp_s0 + 0x9E);
            spA6 = *(s16 *)((u8 *)temp_s0 + 0xA0);
            spA8 = *(s16 *)((u8 *)temp_s0 + 0xA2);
            if (spA6 != 9) {
                if (spA8 == 5) {
                    goto block_5;
                }
            } else {
block_5:
                sp114 = 0x3F800000;
                sp11C = 0x3F800000;
                sp110 = 0;
                sp118 = 0;
                func_00146F60(&sp100, arg0 + 0x30);
                func_00141C30((void *)(&sp90), (void *)(&sp110), (void *)(&sp100));
            }
            spE4 = *(s16 *)((u8 *)temp_s0 + 0x8C);
            spE6 = *(s16 *)((u8 *)temp_s0 + 0x8E);
            spE8 = *(s16 *)((u8 *)temp_s0 + 0x90);
            spEE = *(s16 *)((u8 *)temp_s0 + 0x92);
            spF0 = *(s16 *)((u8 *)temp_s0 + 0x94);
            spF2 = *(s16 *)((u8 *)temp_s0 + 0x96);
            spF4 = *(s16 *)((u8 *)temp_s0 + 0x98);
            spFA = *(s16 *)((u8 *)temp_s0 + 0x9A);
            spBC = *(s32 *)((u8 *)arg0 + 8);
            spE0 = func_0020F690();
            spD0 = *(f32 *)((u8 *)temp_s0 + 0xA4);
            spC8 = *(s32 *)((u8 *)temp_s0 + 0xA8);
            func_00214DD0(&sp50);
            func_00214F80(*(s16 *)((u8 *)temp_s0 + 0x9C), &sp50);
        }
        if (*(s16 *)((u8 *)temp_s0 + 0x9A) != 0) {
            sp40 = *(s32 *)((u8 *)arg0 + 8);
            sp44 = *(s16 *)((u8 *)temp_s0 + 0x92);
            sp46 = *(s16 *)((u8 *)temp_s0 + 0x9A);
            func_0025BD40(&sp30);
        }
    }
}
