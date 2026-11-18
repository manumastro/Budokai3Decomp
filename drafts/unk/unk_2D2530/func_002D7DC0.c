/* Draft (not built): func_002D7DC0 at 0x002D7DC0, size 0x1F4, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp' @ 887: sp50 = *(f32 *)((u8 *)(temp_v1 + sp) + 0x60);
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D7DC0.s */

// src/unk/unk_2D2530.c func_002D7DC0 cerr diff=-1/0
extern s32 D_00456BC8;
void func_002D7DC0(void) {
    f32 sp50;
    f32 sp54;
    s32 sp60;
    s32 temp_s1;
    s32 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = (u8 *)(gOptionWork);
    *(s64 *)((u8 *)(&sp60) + 0) = (s64) *(s64 *)((u8 *)(&D_00456BC8) + 0);
    *(f32 *)((u8 *)(&sp60) + 8) = (f32) *(f32 *)((u8 *)(&D_00456BC8) + 8);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x37C);
    if (temp_s1 != 3) {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
        sp54 = 40.0f * (f32) temp_s1;
        if (((s64) ((s64) **(s16 **)((u8 *)((temp_s1 * 4) + temp_s2) + 0x3D0) << 0x30) >> 0x30) != (*(s32 *)((u8 *)((temp_s1 * 4) + temp_s2) + 0x3DC) - 1)) {
            temp_s0 = *(u8 **)((u8 *)temp_s2 + 0x98);
            temp_s3 = (u8 *)(gOptionWork);
            func_00228430(0);
            func_00228430(0);
            if (&sp50 != NULL) {
                func_00227A30((struct Vec4 *)(&sp50));
            }
            temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
            D_00470704 = (s32)(temp_a0);
            D_00470708 = 0;
            D_0047070C = 0;
            amModel_SetCurrent((s32)(temp_a0), 0);
            D_00470238 = 0;
            func_0022C060((struct Model2D2530 *)(temp_s0), 0x3F800000);
            func_00228410();
            func_0022CD00((void *)(temp_s0));
            func_00228410();
        }
        temp_v1 = temp_s1 * 4;
        sp50 = *(f32 *)((u8 *)(temp_v1 + sp) + 0x60);
        if (**(s16 **)((u8 *)(temp_v1 + temp_s2) + 0x3D0) != 0) {
            temp_s0_2 = *(u8 **)((u8 *)temp_s2 + 0x94);
            temp_s1_2 = (u8 *)(gOptionWork);
            func_00228430(0);
            func_00228430(0);
            if (&sp50 != NULL) {
                func_00227A30((struct Vec4 *)(&sp50));
            }
            temp_a0_2 = *(u8 **)((u8 *)temp_s1_2 + 0xC);
            D_00470704 = (s32)(temp_a0_2);
            D_00470708 = 0;
            D_0047070C = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0);
            D_00470238 = 0;
            func_0022C060((struct Model2D2530 *)(temp_s0_2), 0x3F800000);
            func_00228410();
            func_0022CD00((void *)(temp_s0_2));
            func_00228410();
        }
    }
}
