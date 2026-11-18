/* Draft (not built): func_002D7050 at 0x002D7050, size 0x178, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s3 + 0x37C) * 4) + sp) + 0x5C); @ 772: sp70 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s3 + 0x37C) * 4) + sp) + 0x50);
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D7050.s */

// src/unk/unk_2D2530.c func_002D7050 cerr diff=-1/0
extern s32 D_00456BE0;
void func_002D7050(void) {
    s32 sp50;
    f32 sp70;
    f32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    f32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;

    var_s2 = 0;
    temp_s3 = (u8 *)(gOptionWork);
    *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00456BE0) + 0);
    *(s64 *)((u8 *)(&sp50) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456BE0) + 0x10);
    sp70 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s3 + 0x37C) * 4) + sp) + 0x50);
    sp80 = 0x43410000;
    sp78 = 0;
    sp7C = 0x3F800000;
    sp74 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s3 + 0x37C) * 4) + sp) + 0x5C);
    sp8C = 0x3F800000;
    sp88 = 0;
    sp84 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s3 + 0x37C) * 4) + sp) + 0x5C);
loop_7:
    if (var_s2 < 2) {
        temp_s0 = (u8 *)(gOptionWork);
        temp_s1 = *(u8 **)((u8 *)((var_s2 * 4) + temp_s3) + 0x26C);
        func_00228430(0);
        func_00228430(0);
        temp_a0 = (var_s2 * 0x10) + sp + 0x70;
        if (temp_a0 != NULL) {
            func_00227A30((struct Vec4 *)(temp_a0));
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = (s32)(temp_a0_2);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((void *)(temp_s1));
        func_00228410();
        var_s2 += 1;
        goto loop_7;
    }
}
