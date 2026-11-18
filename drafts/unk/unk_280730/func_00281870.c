/* Draft (not built): func_00281870 at 0x00281870, size 0x1D0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) * 4)), 0); @ 336: *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x40) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_280730/func_00281870.s */

// src/unk/unk_280730.c func_00281870 cerr diff=-1/0
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
extern s32 D_00453460;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gCsSubStat;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00281870(u8 *arg0) {
    s32 sp40;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_s1_2;
    s8 temp_s1;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_s0 = gCsSubStat;
    *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00453460) + 0);
    *(f32 *)((u8 *)(&sp40) + 0x10) = (f32) *(f32 *)((u8 *)(&D_00453460) + 0x10);
    temp_s1 = *(s8 *)((u8 *)arg0 + 4);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_s1_2 = ((s64) ((s64) temp_s1 << 0x30) >> 0x30) * 2;
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x40) * 4)), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
        *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x44) * 4)), 0);
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
        *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x48) * 4)), 0);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
        *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x4C) * 4)), 0);
    }
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
        *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s1_2 + sp) + 0x50) * 4)), 0);
    }
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
    }
}
