/* Draft (not built): func_00281A40 at 0x00281A40, size 0x218, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) * 4)), 0); @ 327: *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x40) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_280730/func_00281A40.s */

// src/unk/unk_280730.c func_00281A40 cerr diff=-1/0
s32 func_0022D670(s32, s32);
extern s32 D_00453430;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gCsSubStat;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00281A40(u8 *arg0) {
    s32 sp40;
    s32 temp_s0_2;
    s8 temp_s0;
    u8 *temp_a0;
    u8 *temp_s1;

    temp_s1 = gCsSubStat;
    *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00453430) + 0);
    *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453430) + 0x10);
    *(f32 *)((u8 *)(&sp40) + 0x20) = (f32) *(f32 *)((u8 *)(&D_00453430) + 0x20);
    temp_s0 = *(s8 *)((u8 *)arg0 + 4);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000, &sp40, &D_00453430);
    D_00470238 = 0;
    temp_s0_2 = ((s64) ((s64) temp_s0 << 0x30) >> 0x30) * 2;
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x40) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x44) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x28) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x48) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x4C) * 4)), 0);
    if (*(u8 *)((u8 *)arg0 + 1) != 2) {
        *(s32 *)((u8 *)arg0 + 0x18) = 0;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
        *(s32 *)((u8 *)arg0 + 0x20) = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x50) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x54) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x20) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x58) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x5C) * 4)), 0);
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + (*(s16 *)((u8 *)(temp_s0_2 + sp) + 0x60) * 4)), 0);
}
