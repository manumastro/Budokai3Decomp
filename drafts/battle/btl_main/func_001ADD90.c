/* Draft (not built): func_001ADD90 at 0x001ADD90, size 0x150, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); C) * 4) + sp) + 0x20); @ 1053: A2d_CallHandler(*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x88FC) * 4) + sp) + 0x40), 0);
 * Original: asm/nonmatchings/battle/btl_main/func_001ADD90.s */

// src/battle/btl_main.c func_001ADD90 cerr diff=-1/0
extern s32 func_00218CD0(s32, s32);
s32 func_00218E50(s32);
extern s32 D_00431300;
extern s32 D_00431320;
void func_001ADD90(void) {
    s32 sp20;
    s32 sp40;
    s32 var_a1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s0 = (u8 *)(gBattle);
    *(s32 *)((u8 *)temp_s0 + 0x88F8) = 5;
    *(s32 *)((u8 *)temp_s0 + 0x890C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8910) = 0;
    *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00431300) + 0);
    *(s64 *)((u8 *)(&sp40) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00431300) + 0x10);
    A2d_CallHandler(*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x88FC) * 4) + sp) + 0x40), 0);
    *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00431320) + 0);
    *(s64 *)((u8 *)(&sp20) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00431320) + 0x10);
    temp_a0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x88FC) * 4) + sp) + 0x20);
    if (temp_a0 >= 0) {
        temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x8900);
        var_a1 = 0;
        if (temp_v1 >= 0) {
            temp_v0 = temp_s0 + (temp_v1 * 0x2020);
            temp_v1_2 = *(s16 *)((u8 *)temp_v0 + 0x1BD4);
            temp_a2 = *(u8 **)((u8 *)temp_v0 + 0x1B84);
            if ((temp_v1_2 >= 0) && (*(s16 *)((u8 *)temp_a2 + 0x13A4) < 0)) {
                var_a1 = 1;
            }
            if ((temp_v1_2 < 0) && (*(s16 *)((u8 *)temp_a2 + 0x13A4) >= 0)) {
                var_a1 = 2;
            }
        }
        func_00218CD0(temp_a0, var_a1);
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x88FC);
        if (temp_a0_2 == 5) {
            func_00218E50(temp_a0_2);
        }
    }
}
