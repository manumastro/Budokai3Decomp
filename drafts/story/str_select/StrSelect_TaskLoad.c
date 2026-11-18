/* Draft (not built): StrSelect_TaskLoad at 0x002EC3B0, size 0x25C, segment story/str_select (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal explicit conversion from 'float *' to 'float' mwccps2.exe Compiler: @ 476: amAdx_SetVolume(0, (f32)(D_004E0610));
 * Original: asm/nonmatchings/story/str_select/StrSelect_TaskLoad.s */

// src/story/str_select.c StrSelect_TaskLoad cerr diff=-1/0
void StrSelect_TaskLoad(u8 *arg0) {
    f32 sp50;
    s32 *var_v1;
    s16 temp_a0_2;
    s32 temp_a0;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = (u8 *)(gStrSelect);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_s1 = arg0 + 0x30;
    if (temp_a0 != 0) {
        if (temp_a0 == 0xA) {
            amAdx_Stop(-1);
        }
        *(s32 *)((u8 *)temp_s1 + 4) = (s32) (*(s32 *)((u8 *)temp_s1 + 4) - 1);
        return;
    }
    temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 4);
    if ((temp_a0_2 == 3) && (DataErase_IsReady() == 1)) {
        Fade_Request(-1, 0, 0);
        amAdx_SetVolume(0, (f32)(D_004E0610));
        amAdx_PlayAfs(0, 0x210A9, 0);
        amAdx_Pause(0, 0);
        *(u8 **)((u8 *)temp_s0 + 0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 0), 0);
        *(u8 **)((u8 *)temp_s2 + 0) = NULL;
        *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 4), 0);
        *(u8 **)((u8 *)temp_s2 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 0));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 4));
        *(u8 **)((u8 *)temp_s0 + 0xC) = amTask_Create(&StrSelect_TaskDrawEnd, 0, 0x3000, 8);
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 4);
        D_00470704 = (s32)(temp_a0_3);
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x2000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s0 + 0x10) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x14), 0);
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x24), &sp50, -1, 0);
        *(f32 *)((u8 *)temp_s0 + 0x44) = sp50;
        *(f32 *)((u8 *)temp_s0 + 0x48) = sp54;
        *(s32 *)((u8 *)temp_s0 + 0x4C) = 0x42700000;
        func_0027D820(0);
        *(s32 *)((u8 *)temp_s0 + 8) = func_0027E2D0(((*(u8 *)((u8 *)temp_s0 + 0x52) == 0) ? 1 : 7) & 0xFF, ((D_004B4B63 == 0) ? 2 : 4) & 0xFF, 1, -1, 0, 0, 0, 0);
        *(s32 *)((u8 *)temp_s0 + 0x54) = 0x42700000;
        var_v1 = (s32 *)(&StrSelect_TaskOpen);
        if (&StrSelect_TaskOpen == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
