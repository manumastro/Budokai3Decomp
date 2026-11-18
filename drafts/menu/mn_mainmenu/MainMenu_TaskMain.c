/* Draft (not built): MainMenu_TaskMain at 0x00267440, size 0x4CC, segment menu/mn_mainmenu (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mp_s0 + 0x90), *(&D_0046B3D0 + (*(u8 *)((u8 *)temp_s0 + 0x96) * 2))); @ 185: D_004B4B62 = *(u8 *)((u8 *)temp_s0 + 0x96);
 * Original: asm/nonmatchings/menu/mn_mainmenu/MainMenu_TaskMain.s */

// src/menu/mn_mainmenu.c MainMenu_TaskMain cerr diff=-1/0
extern f32 D_004E0618[];
extern void Obj_SetF3C(void *, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_Stop(s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
s32 Help_Open(s64, s32);
s32 Scene_FadeTo(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s32 amAdx_GetStat(s32, s32, u16);
s32 func_002668F0(void *);
s32 func_00266AC0(void *);
extern s32 D_00452E80;
extern s32 D_0046B3D0;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void Scene_Request();
void MainMenu_TaskMain(u8 *arg0) {
    s32 sp30;
    s32 sp50;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_00267090((struct MainMenuWork *)(temp_s0));
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x08000000 << 0x20, 3);
    }
    temp_a0 = *D_00492FCE | D_00493086;
    if (temp_a0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        func_002668F0(temp_s0);
        temp_v0 = *(u8 *)((u8 *)temp_s0 + 0x96);
        switch (temp_v0) {
        case 0:
            Scene_Request(6, 0);
            break;
        case 1:
            Scene_Request(0xE, 0);
            break;
        case 2:
            Scene_Request(0x10, 0);
            break;
        case 3:
            Scene_Request(0x13, 0);
            break;
        case 4:
            Scene_Request(0x16, 0);
            break;
        case 5:
            Scene_Request(0x1C, 0);
            break;
        case 6:
            Scene_Request(0x17, 0);
            break;
        }
        amAdx_Stop(*(s32 *)((u8 *)temp_s0 + 0xA4));
        D_004B4B62 = *(u8 *)((u8 *)temp_s0 + 0x96);
        if (*D_00492FCE & 0x4008) {
            D_004B4B63 = 0;
        } else {
            D_004B4B63 = 1;
        }
        Scene_FadeTo(0xA, 0);
        var_v1 = (s32 *)(&MainMenu_TaskDecide);
        if (&MainMenu_TaskDecide == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        amAdx_Stop(*(s32 *)((u8 *)temp_s0 + 0xA4));
        Obj_SetF3C((void *)(*(s32 *)((u8 *)temp_s0 + 0x90)), -1);
        func_00266AC0(temp_s0);
        var_v1_2 = (s32 *)(&MainMenu_TaskCancel);
        if (&MainMenu_TaskCancel == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    temp_a1 = D_00492FD2 | D_00493032;
    if ((temp_a1 | (D_0049308A | D_004930EA)) & 0x50) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, D_00492FD2), D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x10) {
            temp_v0_2 = *(u8 *)((u8 *)temp_s0 + 0x96);
            if (temp_v0_2 != 0) {
                var_v0 = temp_v0_2 - 1;
            } else {
                var_v0 = *(u8 *)((u8 *)temp_s0 + 0x97) - 1;
            }
            goto block_42;
        }
        temp_v1 = *(u8 *)((u8 *)temp_s0 + 0x96);
        if ((s32) temp_v1 >= (*(u8 *)((u8 *)temp_s0 + 0x97) - 1)) {
            *(u8 *)((u8 *)temp_s0 + 0x96) = 0U;
        } else {
            var_v0 = temp_v1 + 1;
block_42:
            *(u8 *)((u8 *)temp_s0 + 0x96) = var_v0;
        }
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x90), *(&D_0046B3D0 + (*(u8 *)((u8 *)temp_s0 + 0x96) * 2)));
        *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00452E80) + 0);
        *(s64 *)((u8 *)(&sp50) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00452E80) + 0x10);
        *(f32 *)((u8 *)(&sp50) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00452E80) + 0x18);
        *(s32 *)((u8 *)temp_s0 + 0xA4) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0x96) * 4) + sp) + 0x50) | 0x20000, 0, &sp50);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0xA4), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0xA4), 0);
        *(u8 *)((u8 *)temp_s0 + 0xA8) = (u8) (*(u8 *)((u8 *)temp_s0 + 0x96) + 1);
        return;
    }
    if ((*(u8 *)((u8 *)temp_s0 + 0xA8) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s0 + 0xA4), temp_a1, D_00492FD2) == 5)) {
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x90), *(&D_0046B3D0 + (*(u8 *)((u8 *)temp_s0 + 0x96) * 2)));
        *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00452E80) + 0);
        *(s64 *)((u8 *)(&sp30) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00452E80) + 0x10);
        *(f32 *)((u8 *)(&sp30) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00452E80) + 0x18);
        *(s32 *)((u8 *)temp_s0 + 0xA4) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0x96) * 4) + sp) + 0x30) | 0x20000, 0, &sp30);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0xA4), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0xA4), 0);
        *(u8 *)((u8 *)temp_s0 + 0xA8) = (u8) (*(u8 *)((u8 *)temp_s0 + 0x96) + 1);
    }
}
