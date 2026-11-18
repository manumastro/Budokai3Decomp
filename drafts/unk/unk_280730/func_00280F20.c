/* Draft (not built): func_00280F20 at 0x00280F20, size 0x2B0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); << 0x30) >> 0x30) * 4)), 0); @ 344: (*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (((s64) (var_s0 << 0x30) >> 0x30) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_280730/func_00280F20.s */

// src/unk/unk_280730.c func_00280F20 cerr diff=-1/0
s32 func_0022D0E0(s32, s32, s64, s8);
s32 func_0022D670(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gCsSubStat;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00280F20(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s64 temp_a2;
    s64 temp_a2_2;
    s64 temp_s0;
    s64 temp_s0_2;
    s64 var_s0;
    s8 temp_a3;
    s8 temp_a3_2;
    s8 temp_v1;
    u8 *temp_a0;
    u8 *temp_s2;
    u8 *var_s0_2;

    temp_s2 = gCsSubStat;
    var_s0 = 0x40;
    if (*(s8 *)((u8 *)arg0 + 6) != 3) {
        var_s0 = (s64) (0x41 << 0x30) >> 0x30;
    }
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000);
    D_00470238 = 0;
    if ((*(s8 *)((u8 *)arg0 + 7) == 3) || (*(s8 *)((u8 *)arg0 + 6) == 3)) {
        temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x3C);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1, 0, 0);
        }
        *(s32 *)((u8 *)arg0 + 0x3C) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (((s64) (var_s0 << 0x30) >> 0x30) * 4)), 0);
    }
    temp_a3 = *(s8 *)((u8 *)arg0 + 4);
    temp_a2 = (temp_a3 == 0) ? 0x2C : 0x32;
    temp_s0 = (s64) (temp_a2 << 0x30) >> 0x30;
    if (*(s8 *)((u8 *)arg0 + 7) == 1) {
        temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x30);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1, temp_a2, temp_a3);
        }
        var_v0 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (((s64) (temp_s0 << 0x30) >> 0x30) * 4)), 0);
        goto block_16;
    }
    if (*(s8 *)((u8 *)arg0 + 6) == 1) {
        temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x30);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1, temp_a2, temp_a3);
        }
        var_v0 = func_0022D670(*(s32 *)((u8 *)((((s64) (temp_s0 << 0x30) >> 0x30) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)) + 8), 0);
block_16:
        *(s32 *)((u8 *)arg0 + 0x30) = var_v0;
    }
    temp_a3_2 = *(s8 *)((u8 *)arg0 + 4);
    temp_a2_2 = (temp_a3_2 == 0) ? 0x2F : 0x35;
    temp_s0_2 = (s64) (temp_a2_2 << 0x30) >> 0x30;
    if (*(s8 *)((u8 *)arg0 + 7) == 7) {
        temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x34);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1, temp_a2_2, temp_a3_2);
        }
        var_v0_2 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (((s64) (temp_s0_2 << 0x30) >> 0x30) * 4)), 0);
        goto block_26;
    }
    if (*(s8 *)((u8 *)arg0 + 6) == 7) {
        temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x34);
        if (temp_a0_6 != 0) {
            func_0022D0E0(temp_a0_6, 1, temp_a2_2, temp_a3_2);
        }
        var_v0_2 = func_0022D670(*(s32 *)((u8 *)((((s64) (temp_s0_2 << 0x30) >> 0x30) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)) + 8), 0);
block_26:
        *(s32 *)((u8 *)arg0 + 0x34) = var_v0_2;
    }
    var_s1 = 0;
    var_s0_2 = arg0;
    do {
        temp_a0_7 = *(s32 *)((u8 *)var_s0_2 + 0x40);
        if (temp_a0_7 != 0) {
            func_0022D0E0(temp_a0_7, 1, 0, 0);
        }
        temp_v1 = *(s8 *)((u8 *)arg0 + 6);
        if (var_s1 < temp_v1) {
            var_v1 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + ((temp_v1 + 0x16) * 4)), 0);
        } else {
            var_v1 = 0;
        }
        *(s32 *)((u8 *)var_s0_2 + 0x40) = var_v1;
        var_s1 += 1;
        var_s0_2 += 4;
    } while (var_s1 < 7);
    *(s8 *)((u8 *)arg0 + 7) = (s8) *(s8 *)((u8 *)arg0 + 6);
}
