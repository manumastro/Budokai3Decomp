/* Draft (not built): func_002B8C70 at 0x002B8C70, size 0xA8, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); []' = 'int' mwccps2.exe Compiler: 455: D_004B4B59 = (*(u8 *)((u8 *)temp_s0 + 0x63) != 0) ? 2 : 1; @ 454: D_004B4B41 = 4;
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B8C70.s */

// src/menu/mn_csmodel.c func_002B8C70 cerr diff=-1/0
void func_002B8C70(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    D_00470238 = 0;
    func_002B7690(temp_s0);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x68) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x68) = temp_f1;
    if (temp_f1 <= 0.0f) {
        D_004B4B41 = 4;
        D_004B4B59 = (*(u8 *)((u8 *)temp_s0 + 0x63) != 0) ? 2 : 1;
        VsCharasel_Start(1, (s8) *(u8 *)((u8 *)temp_s0 + 0x63));
        PracMode_Exit();
    }
}
