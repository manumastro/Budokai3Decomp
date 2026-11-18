/* Draft (not built): func_002A6210 at 0x002A6210, size 0xB98, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  (*)(struct Task *), int, int, @ 2283: (u8 **)((u8 *)temp_s0 + 0x40) = amTask_Create(&func_002A19B0, 0, 0x9000, 0x4000);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A6210.s */

// src/story/evt_scrp.c func_002A6210 cerr diff=-1/0
extern s32 D_004700A8;
s32 Snd_SetSlotF2C(s32, s32, void *, s32);
s32 Zenie_Create(s32, s32, s32, s32);
s32 func_0026DC80(s8 *, s8 *, s8 *, s8 *);
s32 func_0026DE30(s32, s64, s8 *, s32);
s32 func_00298890(s8 *, s32);
s32 func_002989F0(s32, s32, s32, s32);
s32 func_00298A50(s32, s32, void *, s32);
s32 func_00298B10(s32, s32, s32, s32);
s32 func_00298C40(s32, s32, void *, s32);
s32 func_00298CC0(s32, s32, s32, f32 *, f32);
s32 func_002A1330(s32);
s32 func_002A1350(s32, s32, void *, s32);
extern s8 D_004708E0;
extern s32 D_004E066D;
extern s32 D_005AB3A0;
extern s32 D_005AB8D0;
extern s32 D_005ABA60;
extern char D_004B4B40[];
extern void func_00127A88(char *, char *);
extern void func_00298DA0(void);
extern void func_002A5D80(void);
extern void func_002A19B0(void);
extern void func_002A5F50(void);
void func_002A6210(u8 *arg0) {
    s8 sp80;
    s8 sp90;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 *var_a0;
    s32 *var_v1_4;
    f32 *var_a0_2;
    f32 *var_v1;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_7;
    s32 temp_a3;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *temp_a0_4;
    s8 *temp_a0_5;
    s8 *temp_a0_6;
    s8 *temp_a1_6;
    s8 *temp_a2_2;
    s8 *temp_a2_3;
    s8 *temp_a2_6;
    s8 *temp_s0_2;
    s8 *temp_s0_4;
    s8 *temp_v0;
    s8 *temp_v0_2;
    s8 *temp_v0_3;
    s8 *temp_v0_4;
    s8 *temp_v1_4;
    s8 *temp_v1_5;
    s8 *temp_v1_6;
    s8 temp_v1_7;
    u8 temp_a1_3;
    u8 temp_a1_5;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_v1_2;
    u8 *temp_v1_3;

    temp_s4 = (u8 *)(gEvtWork);
    temp_a3 = *(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x11;
    temp_s5 = (u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80);
    if (*(s32 *)((u8 *)temp_s4 + 0xD4) >= *(s32 *)((u8 *)temp_s4 + 0x30)) {
        var_a0 = (s32 *)(&func_002A5D80);
        *(s32 *)((u8 *)temp_s4 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xC) | 2);
        if (&func_002A5D80 == NULL) {
            var_a0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_a0;
        return;
    }
    *(u8 **)((u8 *)temp_s4 + 0x34) = (u8 *) (*(u8 **)((u8 *)temp_s4 + 0x34) + 4);
    temp_a2 = *(u8 **)((u8 *)temp_s4 + 0x34);
    temp_s2 = *(s32 *)((u8 *)temp_a2 + 0);
    temp_s1 = *(s32 *)((u8 *)temp_a2 + 4);
    var_s0 = *(s32 *)((u8 *)temp_a2 + 8);
    *(u8 **)((u8 *)temp_s4 + 0x34) = (u8 *) (temp_a2 + 8);
    temp_a1 = *(s32 *)((u8 *)temp_s4 + 0xD4) + 1;
    *(s32 *)((u8 *)temp_s4 + 0xD4) = temp_a1;
    switch (temp_s2) {                              /* irregular */
    case 0x11:
        D_004708D8 = var_s0;
        return;
    case 0x12:
        *(s32 *)((u8 *)temp_s4 + 0xF4) = var_s0;
        Zenie_Create(0x8000, 0, 0x11402000, 0);
        temp_s0 = (u8 *)(gEvtWork);
        *(s32 *)((u8 *)temp_s0 + 0x44) = amCdFs_ReadFileId(0x10786, 0, 1);
        *(s32 *)((u8 *)temp_s0 + 0x48) = amCdFs_ReadFileId(0x10787, 0, 1);
        *(u8 **)((u8 *)temp_s0 + 0x40) = amTask_Create(&func_002A19B0, 0, 0x9000, 0x4000);
        *(s32 *)((u8 *)gEvtWork + 0x4C) = 0;
        *(s32 *)((u8 *)gEvtWork + 0x50) = 0;
        *(s32 *)((u8 *)gEvtWork + 0x54) = 0;
        *(s32 *)((u8 *)gEvtWork + 0x58) = 0;
        *(s32 *)((u8 *)gEvtWork + 0x64) = 0;
        *(s32 *)((u8 *)gEvtWork + 0x68) = 0;
        return;
    case 0x26:
        func_002A1350(var_s0, temp_a1, temp_a2, temp_a3);
        *(s32 *)((u8 *)temp_s4 + 0x124) = func_002A1B30();
        func_002A1330(-*(s32 *)((u8 *)temp_s4 + 0x124));
        return;
    case 0x27:
        *(s8 *)((u8 *)(D_004E6560 + (D_00511450 * 0x1210)) + 0x1265) = 1;
        return;
    case 0x28:
        *(s8 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210)) + 0x1266) = 1;
        return;
    case 0x35:
        *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100) = var_s0;
        temp_a0 = (*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4;
        if ((s32) *(u8 *)((u8 *)(&D_004E6560[*(s32 *)((u8 *)temp_a0 + 0x100)]) + 0x2AF19) >= temp_s1) {
            *(s32 *)((u8 *)temp_a0 + 0x100) = -1;
            return;
        }
    case 0x13:
        *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100) = var_s0;
        temp_a0_2 = (*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4;
        if (*(u8 *)((u8 *)(&D_004E6560[*(s32 *)((u8 *)temp_a0_2 + 0x100)]) + 0x2AF19) == 0) {
            *(s32 *)((u8 *)temp_a0_2 + 0x110) = 1;
        }
        temp_a1_2 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100);
        temp_a2_2 = &D_004E6560[temp_a1_2];
        temp_a1_3 = *(u8 *)((u8 *)temp_a2_2 + 0x2AF19);
        if ((s32) temp_a1_3 < (s32) *(&D_004E066D + (temp_a1_2 * 0x28))) {
            *(u8 *)((u8 *)temp_a2_2 + 0x2AF19) = (u8) (temp_a1_3 + 1);
            func_0026DC80(D_004B4B40, D_004E6560[0] + 0x2AF19, temp_a2_2, D_004E6560[0]);
        }
        *(s32 *)((u8 *)temp_s4 + 0xF8) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xF8) + 1);
        return;
    case 0x2B:
        *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100) = var_s0;
        *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100) = func_0026DE30(*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100), *(s64 *)((u8 *)D_004B4B40 + 8), D_004E6560 + 0x2AF19, temp_a3);
        temp_a0_3 = (*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4;
        temp_v1 = *(s32 *)((u8 *)temp_a0_3 + 0x100);
        if (temp_v1 > 0) {
            if (*(u8 *)((u8 *)(&D_004E6560[temp_v1]) + 0x2AF19) == 0) {
                *(s32 *)((u8 *)temp_a0_3 + 0x110) = 1;
            }
            temp_a1_4 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0xF8) * 4) + temp_s4) + 0x100);
            temp_a2_3 = &D_004E6560[temp_a1_4];
            temp_a1_5 = *(u8 *)((u8 *)temp_a2_3 + 0x2AF19);
            if ((s32) temp_a1_5 < (s32) *(&D_004E066D + (temp_a1_4 * 0x28))) {
                *(u8 *)((u8 *)temp_a2_3 + 0x2AF19) = (u8) (temp_a1_5 + 1);
                func_0026DC80(D_004B4B40, D_004E6560[0] + 0x2AF19, temp_a2_3, D_004E6560[0]);
            }
        }
        *(s32 *)((u8 *)temp_s4 + 0xF8) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xF8) + 1);
        return;
    case 0x29:
        *(s32 *)((u8 *)temp_s4 + 0xA0) = temp_s1;
        *(s32 *)((u8 *)temp_s4 + 0xA4) = 0;
        *(s8 *)((u8 *)temp_s4 + 0xC4) = 1;
        *(u8 **)((u8 *)temp_s4 + 0x9C) = amTask_Create(&func_002A5790, 0, 0x1000, 0x4000);
        var_a3 = 0;
loop_68:
        if (var_a3 < 7) {
            temp_a2_4 = var_a3 * 4;
            temp_v1_2 = temp_a2_4 + temp_s4;
            *(s32 *)((u8 *)temp_v1_2 + 0xA8) = (s32) ((*(*(s8 **)((u8 *)temp_s4 + 0x34) + temp_a2_4) & 0xFFF) | 0x1000);
            if (*(s32 *)((u8 *)temp_v1_2 + 0xA8) != -1) {
                *(s32 *)((u8 *)temp_s4 + 0xA4) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xA4) + 1);
            }
            var_a3 += 1;
            goto loop_68;
        }
        return;
    case 0x2A:
        *(s32 *)((u8 *)temp_s4 + 0xA0) = temp_s1;
        *(s32 *)((u8 *)temp_s4 + 0xA4) = 0;
        *(s8 *)((u8 *)temp_s4 + 0xC4) = 0;
        *(u8 **)((u8 *)temp_s4 + 0x9C) = amTask_Create(&func_002A5790, 0, 0x1000, 0x4000);
        var_a2 = 0;
loop_75:
        if (var_a2 < 7) {
            temp_v1_3 = (var_a2 * 4) + temp_s4;
            *(s32 *)((u8 *)temp_v1_3 + 0xA8) = (s32) *(s16 *)((u8 *)((var_a2 * 2) + temp_s5) + 0x11F0);
            if (*(s32 *)((u8 *)temp_v1_3 + 0xA8) != -1) {
                *(s32 *)((u8 *)temp_s4 + 0xA4) = (s32) (*(s32 *)((u8 *)temp_s4 + 0xA4) + 1);
            }
            var_a2 += 1;
            goto loop_75;
        }
        return;
    case 0x14:
        D_004700A0 = var_s0;
        return;
    case 0x32:
        D_004700A8 = 0x40000004;
        return;
    case 0x15:
        D_004700AC = var_s0;
        return;
    case 0xF:
        *(s32 *)((u8 *)(&D_005AB490) + 0x160) = var_s0;
        return;
    case 0x2C:
        temp_a1_6 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(f32 *)((u8 *)temp_s4 + 0xE0) = (f32) var_s0;
        *(s32 *)((u8 *)temp_s4 + 0xE4) = 0x43C80000;
        *(f32 *)((u8 *)temp_s4 + 0xE8) = (f32) *(s32 *)((u8 *)temp_a1_6 + 4);
        *(s32 *)((u8 *)temp_s4 + 0xEC) = 0x3F800000;
        *(s32 *)((u8 *)temp_s4 + 0xF0) = (s32) *(s32 *)((u8 *)temp_a1_6 + 8);
        *(s32 *)((u8 *)temp_s4 + 0x140) = 0;
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (*(s8 **)((u8 *)temp_s4 + 0x34) + 8);
        return;
    case 0x33:
        *(s32 *)((u8 *)temp_s4 + 0x134) = var_s0;
        return;
    case 0x2D:
        *(s32 *)((u8 *)temp_s4 + 0x138) = var_s0;
        return;
    case 0x2E:
        *(s32 *)((u8 *)temp_s4 + 0x13C) = var_s0;
        return;
    case 0x2F:
        *(s32 *)((u8 *)temp_s4 + 0x130) = var_s0;
        return;
    case 0x36:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)(&D_005AB3A0) + 0x10) = (s32) *(s32 *)((u8 *)temp_s5 + 0x11D0);
        return;
    case 0x18:
        temp_a0_4 = *(s8 **)((u8 *)temp_s4 + 0x34);
        var_v1 = &spB0;
        temp_a1_7 = *(s32 *)((u8 *)temp_a0_4 + 4);
        temp_a2_5 = *(s32 *)((u8 *)temp_a0_4 + 8);
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        spB0 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0xC);
        spB4 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0x10);
        spB8 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0x14);
        temp_v0 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v0 + 0x18);
        func_00298CC0(var_s0, temp_a1_7, temp_a2_5, &spB0, (f32) *(s32 *)((u8 *)temp_v0 + 0x18));
        return;
    case 0x30:
        temp_a2_6 = *(s8 **)((u8 *)temp_s4 + 0x34);
        var_a0_2 = &spA0;
        temp_a1_8 = *(s32 *)((u8 *)temp_a2_6 + 4);
        temp_a2_7 = *(s32 *)((u8 *)temp_a2_6 + 8);
        var_v1_2 = 0x10;
        if (var_a0_2 != NULL) {
            do {
                *var_a0_2 = 0;
                var_v1_2 -= 1;
                var_a0_2 += 1;
            } while (var_v1_2 != 0);
        }
        spA0 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0xC);
        spA4 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0x10);
        spA8 = (f32) *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 0x14);
        temp_a0_5 = *(s8 **)((u8 *)temp_s4 + 0x34);
        temp_f0 = (f32) *(s32 *)((u8 *)temp_a0_5 + 0x1C);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_a0_5 + 0x1C);
        var_a0_3 = M2C_BITWISE(s32, temp_f0) >> 4;
        if (M2C_BITWISE(s32, temp_f0) < 0) {
            var_a0_3 = (s32) (M2C_BITWISE(s32, temp_f0) + 0xF) >> 4;
        }
        var_v1_3 = M2C_BITWISE(s32, temp_f0) & 0xF;
        if (M2C_BITWISE(s32, temp_f0) < 0) {
            var_a3_2 = var_v1_3 * 2;
            if (var_v1_3 != 0) {
                var_v1_3 -= 0x10;
                goto block_99;
            }
        } else {
block_99:
            var_a3_2 = var_v1_3 * 2;
        }
        if ((3 << var_a3_2) & *(D_004E6560 + (var_a0_3 * 4))) {
            func_00298CC0(var_s0, temp_a1_8, temp_a2_7, &spA0, (f32) *(s32 *)((u8 *)temp_a0_5 + 0x18));
        }
        return;
    case 0x34:
        D_004700A4 = var_s0;
        return;
    case 0x16:
        func_00298DA0();
        return;
    case 0x17:
        func_00298C40(var_s0, temp_a1, temp_a2, temp_a3);
        func_00298C40(var_s0 | 0x8000, 0, 0, 0);
        return;
    case 0x31:
        temp_a0_6 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_a0_6 + 4);
        *(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80 + (var_s0 * 4)) = *(s32 *)((u8 *)temp_a0_6 + 4);
        return;
    case 0x1F:
        temp_v1_4 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v1_4 + 0xC);
        func_00298B10(var_s0, ((*(s32 *)((u8 *)temp_v1_4 + 4) & 0x1F) * 4) + 0x20000000, *(s32 *)((u8 *)temp_v1_4 + 8), *(s32 *)((u8 *)temp_v1_4 + 0xC));
        return;
    case 0x22:
        Snd_SetSlotF2C(var_s0, *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 4), temp_a2, temp_a3);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (*(s8 **)((u8 *)temp_s4 + 0x34) + 4);
        return;
    case 0x23:
        temp_v0_2 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v0_2 + 4);
        func_00298A50(var_s0, *(s32 *)((u8 *)temp_v0_2 + 4), temp_a2, temp_a3);
        return;
    case 0x24:
        temp_v1_5 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v1_5 + 8);
        func_002989F0(var_s0, *(s32 *)((u8 *)temp_v1_5 + 4), *(s32 *)((u8 *)temp_v1_5 + 8), temp_a3);
        return;
    case 0x1D:
        temp_s0_2 = *(s8 **)((u8 *)temp_s4 + 0x34);
        memset(&sp90, 0, 0x10);
        func_00127A88((char *)(&sp90), (char *)(temp_s0_2));
        temp_v1_6 = *(s8 **)((u8 *)temp_s4 + 0x34);
        temp_s0_3 = *(s32 *)((u8 *)temp_v1_6 + 0x10);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v1_6 + 0x10);
        memset(&D_005AB8D0 + (D_004708E0 * 0x10), 0, 0x10);
        func_00127A88((char *)(&D_005AB8D0 + (D_004708E0 * 0x10)), (char *)(&sp90));
        *(&D_005ABA60 + D_004708E0) = (s8) temp_s0_3;
        D_004708E0 += 1;
        return;
    case 0x1E:
        temp_s0_4 = *(s8 **)((u8 *)temp_s4 + 0x34);
        memset(&sp80, 0, 0x10);
        var_a0_4 = 0;
loop_117:
        if (var_a0_4 >= 0x10) {

        } else {
            temp_v1_7 = temp_s0_4[var_a0_4];
            if (temp_v1_7 != 0) {
                *(s8 *)((u8 *)(var_a0_4 + sp) + 0x80) = temp_v1_7;
                var_a0_4 += 1;
                goto loop_117;
            }
        }
        temp_v0_3 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v0_3 + 0x10);
        func_00298890(&sp80, *(s32 *)((u8 *)temp_v0_3 + 0x10));
        return;
    case 0xE:
    case 0xD:
        func_002A0A60(temp_s1, var_s0, temp_a2, temp_a3);
        return;
        return;
    case 0x3:
        temp_v0_4 = *(s8 **)((u8 *)temp_s4 + 0x34);
        *(s8 **)((u8 *)temp_s4 + 0x34) = (s8 *) (temp_v0_4 + 4);
        var_s0 = *(s32 *)((u8 *)(*(s8 **)((u8 *)temp_s4 + 0x34)) + 4);
        *(s32 *)((u8 *)temp_s4 + 0xD8) = (s32) *(s32 *)((u8 *)temp_v0_4 + 0);
        /* fallthrough */
    default:
        *(s32 *)((u8 *)temp_s4 + 0xC8) = amCdFs_ReadFileId(var_s0, 0, 1);
        *(s32 *)((u8 *)temp_s4 + 0xCC) = temp_s2;
        var_v1_4 = (s32 *)(&func_002A5F50);
        *(s32 *)((u8 *)temp_s4 + 0xD0) = temp_s1;
        if (&func_002A5F50 == NULL) {
            var_v1_4 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
        return;
    }
}
