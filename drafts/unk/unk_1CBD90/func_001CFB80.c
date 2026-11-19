/* Draft (not built): func_001CFB80 at 0x001CFB80, size 0x2C8, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 152 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3F0, original 0x2C8
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CFB80.s */

// src/unk/unk_1CBD90.c func_001CFB80 size diff=152/252
void func_001CFB80(u8 *arg0, f32 fparg0, f32 fparg1) {
    f32 var_f0;
    f32 var_f0_2;
    s16 temp_t0;
    s16 temp_t0_4;
    s16 temp_t0_5;
    s16 temp_t0_6;
    s16 temp_t0_7;
    s16 temp_t0_9;
    s32 temp_t0_8;
    s32 var_a1;
    s32 var_a2;
    s32 var_t1;
    u16 temp_t0_2;
    u16 temp_v1;
    u32 temp_t0_3;
    u8 *temp_t1;
    u8 *temp_t2;

    var_a2 = 0;
    temp_t0 = *(s16 *)((u8 *)arg0 + 2);
    var_t1 = 0;
loop_3:
    if (var_a2 < temp_t0) {
        temp_v1 = *(s32 *)(*(s32 *)((u8 *)arg0 + 4) + var_t1);
        if ((s32) temp_v1 >= 0) {
            var_f0 = (f32) temp_v1;
        } else {
            var_f0 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        }
        if (var_f0 <= fparg0) {
            var_t1 += 0x10;
            var_a2 += 1;
            goto loop_3;
        }
    }
    if (var_a2 < temp_t0) {
        var_a1 = var_a2 * 0x10;
loop_36:
        if (var_a2 < *(s16 *)((u8 *)arg0 + 2)) {
            temp_t2 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 4) + var_a1);
            temp_t0_2 = *(u16 *)((u8 *)temp_t2 + 0);
            if ((s32) temp_t0_2 >= 0) {
                var_f0_2 = (f32) temp_t0_2;
            } else {
                var_f0_2 = 2.0f * (f32) ((temp_t0_2 >> 1) | (temp_t0_2 & 1));
            }
            if (!(var_f0_2 <= fparg1)) {

            } else {
                temp_t0_3 = *(u32 *)((u8 *)temp_t2 + 4);
                temp_t1 = temp_t2 + 4;
                switch (temp_t0_3) {
                case 0:
                    temp_t0_4 = *(s16 *)((u8 *)D_00470588 + 0x1C8);
                    if (temp_t0_4 < 7) {
                        *(s16 *)((u8 *)(D_00470588 + (temp_t0_4 * 2)) + 0x1CA) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x1C8) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x1C8) + 1);
                    }
                    break;
                case 3:
                    if (*(s16 *)((u8 *)D_00470588 + 0x1D8) <= 0) {
                        *(s16 *)((u8 *)D_00470588 + 0x1DA) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x1D8) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x1D8) + 1);
                    }
                    break;
                case 1:
                    temp_t0_5 = *(s16 *)((u8 *)D_00470588 + 0x1DC);
                    if (temp_t0_5 < 7) {
                        *(s16 *)((u8 *)(D_00470588 + (temp_t0_5 * 2)) + 0x1DE) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x1DC) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x1DC) + 1);
                    }
                    break;
                case 2:
                    temp_t0_6 = *(s16 *)((u8 *)D_00470588 + 0x1EC);
                    if (temp_t0_6 < 7) {
                        *(s16 *)((u8 *)(D_00470588 + (temp_t0_6 * 2)) + 0x1EE) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x1EC) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x1EC) + 1);
                    }
                    break;
                case 4:
                    temp_t0_7 = *(s16 *)((u8 *)D_00470588 + 0x1FC);
                    if (temp_t0_7 < 7) {
                        *(s16 *)((u8 *)(D_00470588 + (temp_t0_7 * 2)) + 0x1FE) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x1FC) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x1FC) + 1);
                    }
                    break;
                case 5:
                    temp_t0_8 = *(s32 *)((u8 *)D_00470588 + 0x20C);
                    if (temp_t0_8 < 7) {
                        *(s32 *)((u8 *)(D_00470588 + (temp_t0_8 * 4)) + 0x210) = (s32) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s32 *)((u8 *)D_00470588 + 0x20C) = (s32) (*(s32 *)((u8 *)D_00470588 + 0x20C) + 1);
                    }
                    break;
                case 6:
                    temp_t0_9 = *(s16 *)((u8 *)D_00470588 + 0x22C);
                    if (temp_t0_9 < 7) {
                        *(s16 *)((u8 *)(D_00470588 + (temp_t0_9 * 2)) + 0x22E) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x22C) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x22C) + 1);
                    }
                    break;
                case 7:
                    if (*(s16 *)((u8 *)D_00470588 + 0x23C) <= 0) {
                        *(s16 *)((u8 *)D_00470588 + 0x23E) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x23C) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x23C) + 1);
                    }
                    break;
                case 8:
                    if (*(s16 *)((u8 *)D_00470588 + 0x240) <= 0) {
                        *(s16 *)((u8 *)D_00470588 + 0x242) = (s16) *(s32 *)((u8 *)temp_t1 + 4);
                        *(s16 *)((u8 *)D_00470588 + 0x240) = (s16) (*(s16 *)((u8 *)D_00470588 + 0x240) + 1);
                    }
                    break;
                case 9:
                    *(f32 *)((u8 *)D_00470588 + 0x244) = (f32) ((f32) *(s32 *)((u8 *)temp_t1 + 4) / 10.0f);
                    break;
                }
                var_a1 += 0x10;
                var_a2 += 1;
                goto loop_36;
            }
        }
    }
}
