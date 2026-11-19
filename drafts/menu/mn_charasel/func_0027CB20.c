/* Draft (not built): func_0027CB20 at 0x0027CB20, size 0x45C, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 221 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x458, original 0x45C
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027CB20.s */

// src/menu/mn_charasel.c func_0027CB20 size diff=221/278
extern void *D_00470810;
s32 CsSubArena_Open(void *, s32);
s32 CsSubStat_Open(void *, u8, u8);
s32 DataErase_CreateCharaSel(s32, s8);
s32 Help_Open(s32, s32, s32);
s32 func_0022D860(s32, s32);
s32 func_0027A4C0(void *);
s32 func_002E8F90(s32, s8, s8, u8);
s32 func_002F91C0(s32, s64, s8);
s32 func_002F92D0(s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00493086;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern char D_00492FCE[];
extern void func_0027C2F0(void);
void func_0027CB20(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_a0_3;
    s32 temp_a0_6;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_v0;
    s64 temp_v1;
    s64 var_a1;
    s8 temp_a0_4;
    s8 var_a2;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 *temp_a0_2;
    u8 *temp_a0_5;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(s8 *)((u8 *)temp_s2 + 0) == 4) {
        temp_v1 = *(s64 *)((u8 *)temp_s2 + 0x18);
        if (*(s64 *)((u8 *)temp_s2 + 0x10) != temp_v1) {
            var_a2 = 0;
            var_a1 = 0;
            *(s64 *)((u8 *)temp_s2 + 0x10) = (s64) (temp_v1 & *(s64 *)((u8 *)temp_s2 + 0x20));
            *(s64 *)((u8 *)temp_s2 + 0x18) = (s64) (temp_v1 & *(s64 *)((u8 *)temp_s2 + 0x20));
            do {
                if (*(s64 *)((u8 *)temp_s2 + 0x10) & (1 << var_a1)) {
                    var_a2 += 1;
                }
                var_a1 += 1;
            } while (var_a1 < 0x27);
            *(s8 *)((u8 *)temp_s2 + 9) = var_a2;
            func_002F91C0(*(s32 *)((u8 *)temp_s2 + 0x28), *(s64 *)((u8 *)temp_s2 + 0x10), var_a2);
        }
    }
    temp_a0 = *(u8 *)((u8 *)temp_s2 + 6);
    var_a2_2 = 0;
    var_a1_2 = 0;
    if (temp_a0 & 2) {
        var_a1_2 = 1 & 0xFF;
        var_a2_2 = (0 | *D_00492FCE) & 0xFFFF;
    }
    if (temp_a0 & 4) {
        var_a1_2 = (var_a1_2 | 2) & 0xFF;
        var_a2_2 = (var_a2_2 | D_00493086) & 0xFFFF;
    }
    temp_v1_2 = *(u8 *)((u8 *)temp_s2 + 0xA);
    if (temp_v1_2 != 5) {
        if (temp_v1_2 != 6) {
            if (temp_v1_2 != 3) {
                if ((temp_v1_2 != 7) && (temp_v1_2 != 1)) {
                    if (var_a2_2 & 0xFFFF & 1) {
                        Help_Open(0x02040000 | (0x820048 << 0x20), var_a1_2, var_a2_2);
                    }
                }
            } else if (var_a2_2 & 0xFFFF & 1) {
                Help_Open(0x40000 | (0x820048 << 0x20), var_a1_2, var_a2_2);
            }
        } else if (var_a2_2 & 0xFFFF & 1) {
            Help_Open(0x40000 | (0x800048 << 0x20), var_a1_2, var_a2_2);
        }
    } else if (var_a2_2 & 0xFFFF & 1) {
        if ((D_004B4B59 == 1) || (D_004B4B59 == 2)) {
            Help_Open(0x02040000 | (0x800048 << 0x20), var_a1_2, var_a2_2);
        } else {
            Help_Open(0x02040008 | (0x800048 << 0x20), var_a1_2, var_a2_2);
        }
    }
    func_0027AC90(temp_s2);
    func_0027A4C0(temp_s2);
    if (*(u8 *)((u8 *)temp_s2 + 6) & 8) {
        var_v1 = (int *)(&func_0027C2F0);
        if (&func_0027C2F0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        *(s8 *)((u8 *)temp_s2 + 0) = 5;
        temp_a2 = *(u8 *)((u8 *)temp_s2 + 7);
        temp_s1 = D_00470810;
        if (*(s8 *)((u8 *)temp_s2 + 1) == 1) {
            *(s8 *)((u8 *)temp_s2 + 1) = 2;
            temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 0xC);
            D_00470704 = temp_a0_2;
            D_0047070C = 0x3000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_2, 0x3000, temp_a2);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s2 + 0x50);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x14) + (((temp_a2 == 0) ? 3 : 2) * 4)), 0);
        }
        return;
    }
    temp_a0_4 = *(s8 *)((u8 *)temp_s2 + 0);
    if ((temp_a0_4 != 4) && (temp_a0_4 == 5)) {
        temp_a2_2 = *(u8 *)((u8 *)temp_s2 + 7);
        temp_s1_2 = D_00470810;
        if (*(s8 *)((u8 *)temp_s2 + 1) == 1) {
            *(s8 *)((u8 *)temp_s2 + 1) = 2;
            temp_a0_5 = *(u8 **)((u8 *)temp_s1_2 + 0xC);
            D_00470704 = temp_a0_5;
            D_0047070C = 0x3000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_5, 0x3000, temp_a2_2);
            D_00470238 = 0;
            temp_a0_6 = *(s32 *)((u8 *)temp_s2 + 0x50);
            if (temp_a0_6 != 0) {
                func_0022D0E0(temp_a0_6, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1_2 + 8)) + 0x14) + (((temp_a2_2 == 0) ? 3 : 2) * 4)), 0);
        }
        temp_v1_3 = *(u8 *)((u8 *)temp_s2 + 0xA);
        switch (temp_v1_3) {
        case 2:
        case 3:
        case 4:
            func_002E8F90(*(s32 *)((u8 *)temp_s2 + 0x78), D_004B4B41, D_004B4B59, *(u8 *)((u8 *)temp_s2 + 7));
            func_002F92D0(*(s32 *)((u8 *)temp_s2 + 0x28));
            var_v0 = CsSubStat_Open(temp_s2, *(u8 *)((u8 *)temp_s2 + 0xC), *(u8 *)((u8 *)temp_s2 + 0xA));
block_51:
            *(s32 *)((u8 *)temp_s2 + 0x34) = var_v0;
            break;
        case 5:
            func_002E8F90(*(s32 *)((u8 *)temp_s2 + 0x78), D_004B4B41, D_004B4B59, *(u8 *)((u8 *)temp_s2 + 7));
            func_002F92D0(*(s32 *)((u8 *)temp_s2 + 0x28));
            var_v0 = CsSubArena_Open(temp_s2, 0);
            goto block_51;
        case 7:
            var_v0 = DataErase_CreateCharaSel(*(s32 *)((u8 *)temp_s2 + 0x78), *(s8 *)((u8 *)temp_s2 + 4));
            goto block_51;
        }
        var_v1_2 = (int *)(&func_0027C2F0);
        if (&func_0027C2F0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
