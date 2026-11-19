/* Draft (not built): func_002B8C70 at 0x002B8C70, size 0xA8, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B8C70.s */

// src/menu/mn_csmodel.c func_002B8C70 diff diff=12/42
void func_002B8C70(u8 *arg0) {
    f32 temp_f1;
    s32 temp_a0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(s32 *)((u8 *)gPracMode + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(temp_s0);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x68) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x68) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *D_004B4B41 = 4;
        *D_004B4B59 = (*(u8 *)((u8 *)temp_s0 + 0x63) != 0) ? 2U : 1U;
        VsCharasel_Start(1, (s8) *(u8 *)((u8 *)temp_s0 + 0x63));
        PracMode_Exit();
    }
}

/* Similar function already in C: CsModel_TaskEnd (src/menu/mn_csmodel.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
void CsModel_TaskEnd(u8 *a0) {
    u8 *s0;
    s32 v;
    s0 = *(u8 **)(a0 + 0x30);
    v = *(s32 *)((u8 *)gPracMode + 0xC);
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) - gFrameDelta;
    if (*(f32 *)(s0 + 0x68) <= 0.0f) {
        Scene_Request(0x15, 0);
        Scene_FadeTo(0xA, 0);
        *(void **)(a0 + 0x1C) = ((void *)CsModel_Start == 0) ? 0 : (void *)CsModel_Start;
    }
}
#endif
