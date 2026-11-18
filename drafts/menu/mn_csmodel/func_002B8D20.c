/* Draft (not built): func_002B8D20 at 0x002B8D20, size 0x4C4, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *)temp_s1 + 0x5E) * 4) + sp) + 0x60); @ 537: var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x98);
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B8D20.s */

// src/menu/mn_csmodel.c func_002B8D20 cerr diff=-1/0
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_GetStat(s32);
extern s32 D_00455370;
extern s64 D_00470110;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void VsCharasel_Load(void);
extern char D_00492FCE[];
extern void func_002B8C70(void);
void func_002B8D20(u8 *arg0) {
    s32 sp30;
    s32 sp60;
    s64 sp90;
    s64 sp98;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v1;
    u8 temp_v1_2;
    u8 *temp_a0_2;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    temp_a0 = D_004B4B63 * 0xB8;
    temp_v1 = *(D_00492FCE + temp_a0);
    if (temp_v1 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 0x5E);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            *(u8 *)((u8 *)temp_s1 + 0x5D) = 4U;
            *(s8 *)((u8 *)temp_s1 + 0x61) = 5;
            *(s32 *)((u8 *)temp_s1 + 0x68) = 0x420C0000;
            temp_a1 = *D_00492FCE & 0x4000;
            *(s8 *)((u8 *)temp_s1 + 0x63) = (s8) ((temp_a1 == 0) ? 2 : 0);
            func_002B7A60(temp_s1, temp_a1);
            VsCharasel_Load();
            var_v0 = (s32 *)(&func_002B8C70);
            if (&func_002B8C70 == NULL) {
                var_v0 = NULL;
            }
block_13:
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            break;
        case 1:
            *(s8 *)((u8 *)temp_s1 + 0x61) = 4;
            *(s32 *)((u8 *)temp_s1 + 0x68) = 0x41A00000;
            var_v0 = (s32 *)(&func_002B8B50);
            if (&func_002B8B50 == NULL) {
                var_v0 = NULL;
            }
            goto block_13;
        }
        amAdx_Stop(*(s32 *)((u8 *)temp_s1 + 0x58));
    } else if (temp_v1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(u8 *)((u8 *)temp_s1 + 0x5D) = 5U;
        *(s8 *)((u8 *)temp_s1 + 0x61) = 6;
        amAdx_Stop(*(s32 *)((u8 *)temp_s1 + 0x58));
        func_002B7A60(temp_s1);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x54), -1);
        Scene_Request(5, 0);
        Scene_FadeTo(0xA, 0);
        var_v0_2 = (s32 *)(&CsModel_Start2);
        if (&CsModel_Start2 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else if ((*(&D_00492FD2 + temp_a0) | *(&D_00493032 + temp_a0)) & 0x50) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(u8 *)((u8 *)temp_s1 + 0x5E) = (u8) (~*(u8 *)((u8 *)temp_s1 + 0x5E) & 1);
        sp98 = D_00470110;
        *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0);
        *(s128 *)((u8 *)(&sp60) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x10);
        *(s128 *)((u8 *)(&sp60) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x20);
        var_s0 = 0;
        if ((s32) *(u8 *)((u8 *)temp_s1 + 0x5D) < 3) {
            var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x98);
        } else {
            var_s0 = 3;
            var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x60);
        }
        *(s32 *)((u8 *)temp_s1 + 0x58) = amAdx_PlayAfs(1, var_v1 | 0x20000, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s1 + 0x58), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s1 + 0x58), 0);
        *(u8 *)((u8 *)temp_s1 + 0x5C) = (u8) (*(u8 *)((u8 *)temp_s1 + 0x5E) + var_s0 + 1);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x54), (s64) ((*(u8 *)((u8 *)temp_s1 + 0x5E) + 1) << 0x30) >> 0x30);
    }
    temp_a0_2 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x1000);
    D_00470238 = 0;
    func_002B7690(temp_s1);
    A2d_FlushList();
    if ((*(u8 *)((u8 *)temp_s1 + 0x5C) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s1 + 0x58)) == 5)) {
        Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x54), (s64) ((*(u8 *)((u8 *)temp_s1 + 0x5E) + 1) << 0x30) >> 0x30);
        sp90 = D_00470110;
        *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0);
        *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x10);
        *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x20);
        var_s0_2 = 0;
        if ((s32) *(u8 *)((u8 *)temp_s1 + 0x5D) < 3) {
            var_v1_2 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x90);
        } else {
            var_s0_2 = 3;
            var_v1_2 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x30);
        }
        *(s32 *)((u8 *)temp_s1 + 0x58) = amAdx_PlayAfs(1, var_v1_2 | 0x20000, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s1 + 0x58), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s1 + 0x58), 0);
        *(u8 *)((u8 *)temp_s1 + 0x5C) = (u8) (*(u8 *)((u8 *)temp_s1 + 0x5E) + var_s0_2 + 1);
    }
}
