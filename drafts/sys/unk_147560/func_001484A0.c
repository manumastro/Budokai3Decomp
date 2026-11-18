/* Draft (not built): func_001484A0 at 0x001484A0, size 0x54C, segment sys/unk_147560 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 207 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x560, original 0x54C
 * Original: asm/nonmatchings/sys/unk_147560/func_001484A0.s */

// src/sys/unk_147560.c func_001484A0 size diff=207/344
extern s32 D_004703DC;
extern s8 D_00470404;
extern f32 D_0047040C;
extern f32 D_00470410;
extern s32 D_00470414;
extern f32 D_0047042C;
extern f32 D_00470430;
extern f32 D_00470434;
extern f32 D_00470438;
extern f32 D_0047043C;
extern f32 D_00470440;
extern f32 D_00470444;
extern f32 D_00470448;
extern s32 D_00470498;
extern s32 D_0047049C;
extern f32 D_004704A0;
extern f32 D_004704A4;
extern s8 D_004704A8;
extern f32 D_0047CA68;
extern f32 D_0047CA6C;
extern f32 D_0047CA80;
extern f32 D_0047CA84;
void func_001484A0(s32 arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;

    temp_v0 = D_004703DC;
    D_004703DC = arg0;
    if (D_004704A8 != 0) {
        if ((temp_v0 ^ arg0) & 6) {
            temp_a2 = (D_004703F8 == 0) ? 0x10 : 8;
            if (D_00470404 != 0) {
                if (0x10 >= 0) {
                    var_f1 = (f32) 0x10;
                } else {
                    var_f1 = 2.0f * (f32) ((0x10U >> 1) | (0x10 & 1));
                }
                D_004704A0 = (var_f1 * D_0047040C) / D_0047042C;
                if (temp_a2 >= 0) {
                    var_f1_2 = (f32) temp_a2;
                } else {
                    var_f1_2 = 2.0f * (f32) (((u32) temp_a2 >> 1) | (temp_a2 & 1));
                }
                D_004704A4 = (var_f1_2 * D_00470410) / D_00470430;
            } else {
                if (0x10 >= 0) {
                    var_f0 = (f32) 0x10;
                } else {
                    var_f0 = 2.0f * (f32) ((0x10U >> 1) | (0x10 & 1));
                }
                D_004704A0 = var_f0;
                if (temp_a2 >= 0) {
                    var_f0_2 = (f32) temp_a2;
                } else {
                    var_f0_2 = 2.0f * (f32) (((u32) temp_a2 >> 1) | (temp_a2 & 1));
                }
                D_004704A4 = var_f0_2;
            }
            if (arg0 & 6) {
                D_004704A0 *= 0.75f;
                D_0047043C = (4.0f * D_0047042C) / 3.0f;
                D_00470440 = D_00470430;
                temp_a1 = arg0 & 6;
                switch (temp_a1) {                  /* irregular */
                case 2:
                    D_00470498 = 0x8000 - (D_00470414 * 6);
                    D_0047049C = 0x8000 - (D_00470418 * 8);
                    D_00470444 = -0.5f * (D_0047043C - D_0047042C);
                    D_00470448 = -0.5f * (D_00470440 - D_00470430);
                    break;
                case 4:
                    D_00470498 = 0x8000 - (D_00470414 * 8);
                    D_0047049C = 0x8000 - (D_00470418 * 8);
                    D_00470444 = 0.0f;
                    D_00470448 = -0.5f * (D_00470440 - D_00470430);
                    break;
                case 6:
                    D_00470498 = 0x8000 - (D_00470414 * 4);
                    D_0047049C = 0x8000 - (D_00470418 * 8);
                    D_00470444 = -1.0f * (D_0047043C - D_0047042C);
                    D_00470448 = -0.5f * (D_00470440 - D_00470430);
                    break;
                }
            } else {
                D_00470498 = 0x8000 - (D_00470414 * 8);
                D_0047049C = 0x8000 - (D_00470418 * 8);
                D_0047043C = D_0047042C;
                D_00470440 = D_00470430;
                D_00470444 = 0.0f;
                D_00470448 = 0.0f;
            }
            sp0 = D_004704A0;
            sp4 = D_004704A4;
            sp8 = D_0047CA80;
            spC = D_0047CA68;
            sp10 = (f32) D_00470498;
            sp14 = (f32) D_0047049C;
            sp18 = D_0047CA84;
            sp1C = D_0047CA6C;
            M2C_ERROR(/* unknown instruction: lqc2 $vf20, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf21, 0x10($v1) */);
        }
        if ((temp_v0 ^ arg0) & 1) {
            if (arg0 & 1) {
                var_f3 = (3.0f * D_0047042C) / 4.0f;
                D_00470434 = (3.0f * D_0047040C) / (4.0f * D_0047042C);
            } else {
                var_f3 = (3.0f * D_0047042C) / 4.0f;
                D_00470434 = D_0047040C / D_0047042C;
            }
            if (D_004703F8 == 0) {
                if (D_00470418 >= 0) {
                    var_f0_3 = (f32) D_00470418;
                } else {
                    var_f0_3 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
                }
                D_00470438 = var_f0_3 / var_f3;
                return;
            }
            if (D_00470418 >= 0) {
                var_f0_4 = (f32) D_00470418;
            } else {
                var_f0_4 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
            }
            D_00470438 = (2.0f * var_f0_4) / var_f3;
        }
    }
}
