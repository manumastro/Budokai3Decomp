/* Draft (not built): func_00208530 at 0x00208530, size 0x414, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 674: *(((u8 *)&D_0044B860) + (*(u16 *)((u8 *)sp48 + 4) * 0x10))(&sp40, sp44, temp_a2);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00208530.s */

// src/unk/unk_1FB760.c func_00208530 cerr diff=-1/0
void func_00208530(u8 *arg0, u8 *arg1) {
    s32 sp30;
    s32 sp40;
    u8 *sp44;
    u8 *sp48;
    s32 *sp4C;
    s32 *sp50;
    s32 *sp54;
    s32 sp58;
    s32 sp5C;
    s32 *temp_a2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 var_a2;
    u8 *temp_a1;
    u8 *temp_v1;

    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    memset(&sp40, 0, 0x20);
    sp40 = *(s32 *)((u8 *)arg0 + 0x10);
    sp44 = *(u8 **)((u8 *)arg0 + 0x1C);
    sp48 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C)) + 0x14);
    sp58 = (int)(arg1 + 0x10);
    sp5C = (int)(arg1 + 0x20);
    sp50 = &sp30;
    sp54 = &sp30;
    if (*(s32 *)((u8 *)arg0 + 8) & 0x2000) {
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C);
        *(s32 *)((u8 *)temp_v1 + 8) = (s32) (*(s32 *)((u8 *)temp_v1 + 8) | 0x2000);
    }
    temp_a2 = (int *)(*(((u8 *)&D_00526440) + (D_00470668 * 4)));
    D_00470668 += 1;
    if (D_00470668 >= 0x800) {
        D_00470668 = 0;
    }
    *(s32 **)((u8 *)temp_a2 + 4) = (s32 *) *(s32 **)((u8 *)sp44 + 0x48);
    *(s32 **)((u8 *)temp_a2 + 0) = (int *)(**(s32 **)((u8 *)sp44 + 0x48));
    **(s32 **)((u8 *)sp44 + 0x48) = (int)(temp_a2);
    *(s32 **)((u8 *)sp44 + 0x48) = temp_a2;
    *(s32 *)((u8 *)sp44 + 0x4C) = (s32) (*(s32 *)((u8 *)sp44 + 0x4C) + 1);
    sp4C = temp_a2;
    *(((u8 *)&D_0044B860) + (*(u16 *)((u8 *)sp48 + 4) * 0x10))(&sp40, sp44, temp_a2);
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x14);
    temp_a2_2 = (s32) *(u16 *)((u8 *)sp48 + 4);
    if (*(s32 *)((u8 *)temp_a1 + 4) == temp_a2_2) {
        switch (temp_a2_2) {                        /* irregular */
        case 0x20000:
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x20000) {
                temp_a3 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a3) & 8) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a3 ^ 8);
                    temp_f1 = *(f32 *)((u8 *)sp4C + 0x40);
                    *(f32 *)((u8 *)sp4C + 0x40) = (f32) *(f32 *)((u8 *)sp4C + 0x48);
                    *(f32 *)((u8 *)sp4C + 0x48) = temp_f1;
                }
            }
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x40000) {
                temp_a1_2 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a1_2) & 0x10) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a1_2 ^ 0x10);
                    temp_f1_2 = *(f32 *)((u8 *)sp4C + 0x44);
                    *(f32 *)((u8 *)sp4C + 0x44) = (f32) *(f32 *)((u8 *)sp4C + 0x4C);
                    *(f32 *)((u8 *)sp4C + 0x4C) = temp_f1_2;
                    return;
                }
            }
            break;
        case 0x20001:
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x20) {
                if (*(s32 *)((u8 *)arg1 + 0xC) & 4) {
                    var_a2 = *(s32 *)((u8 *)sp4C + 0xC) | 4;
                } else {
                    var_a2 = *(s32 *)((u8 *)sp4C + 0xC) & ~4;
                }
                *(s32 *)((u8 *)sp4C + 0xC) = var_a2;
            }
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x20000) {
                temp_a3_2 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a3_2) & 8) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a3_2 ^ 8);
                    temp_f1_3 = *(f32 *)((u8 *)sp4C + 0x40);
                    *(f32 *)((u8 *)sp4C + 0x40) = (f32) *(f32 *)((u8 *)sp4C + 0x48);
                    *(f32 *)((u8 *)sp4C + 0x48) = temp_f1_3;
                }
            }
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x40000) {
                temp_a1_3 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a1_3) & 0x10) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a1_3 ^ 0x10);
                    temp_f1_4 = *(f32 *)((u8 *)sp4C + 0x44);
                    *(f32 *)((u8 *)sp4C + 0x44) = (f32) *(f32 *)((u8 *)sp4C + 0x4C);
                    *(f32 *)((u8 *)sp4C + 0x4C) = temp_f1_4;
                    return;
                }
            }
            break;
        case 0x20002:
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x20000) {
                temp_a3_3 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a3_3) & 8) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a3_3 ^ 8);
                    temp_f1_5 = *(f32 *)((u8 *)sp4C + 0x50);
                    *(f32 *)((u8 *)sp4C + 0x50) = (f32) *(f32 *)((u8 *)sp4C + 0x58);
                    *(f32 *)((u8 *)sp4C + 0x58) = temp_f1_5;
                }
            }
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x40000) {
                temp_a1_4 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a1_4) & 0x10) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a1_4 ^ 0x10);
                    temp_f1_6 = *(f32 *)((u8 *)sp4C + 0x54);
                    *(f32 *)((u8 *)sp4C + 0x54) = (f32) *(f32 *)((u8 *)sp4C + 0x5C);
                    *(f32 *)((u8 *)sp4C + 0x5C) = temp_f1_6;
                    return;
                }
            }
            break;
        case 0x20003:
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x20000) {
                temp_a3_4 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a3_4) & 8) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a3_4 ^ 8);
                    temp_f1_7 = *(f32 *)((u8 *)sp4C + 0x60);
                    *(f32 *)((u8 *)sp4C + 0x60) = (f32) *(f32 *)((u8 *)sp4C + 0x68);
                    *(f32 *)((u8 *)sp4C + 0x68) = temp_f1_7;
                }
            }
            if (*(s32 *)((u8 *)temp_a1 + 8) & *(s32 *)((u8 *)sp48 + 8) & 0x40000) {
                temp_a1_5 = *(s32 *)((u8 *)sp4C + 0xC);
                if ((*(s32 *)((u8 *)arg1 + 0xC) ^ temp_a1_5) & 0x10) {
                    *(s32 *)((u8 *)sp4C + 0xC) = (s32) (temp_a1_5 ^ 0x10);
                    temp_f1_8 = *(f32 *)((u8 *)sp4C + 0x64);
                    *(f32 *)((u8 *)sp4C + 0x64) = (f32) *(f32 *)((u8 *)sp4C + 0x6C);
                    *(f32 *)((u8 *)sp4C + 0x6C) = temp_f1_8;
                }
            }
            break;
        }
    }
}
