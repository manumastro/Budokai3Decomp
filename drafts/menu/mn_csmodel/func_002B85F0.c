/* Draft (not built): func_002B85F0 at 0x002B85F0, size 0x3E4, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 152 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3D4, original 0x3E4
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B85F0.s */

// src/menu/mn_csmodel.c func_002B85F0 size diff=152/245
extern s32 D_0047010C;
s32 Help_Open(s64, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00455370;
extern s64 D_00470110;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s16 D_005C9F02;
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_002B85F0(u8 *arg0) {
    u8 sp[0x400];
    s32 sp30;
    s64 sp68;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_v1;
    u16 temp_v1;
    u8 temp_a1;
    u8 temp_v1_2;
    u8 var_v0_3;
    u8 *temp_a0_3;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 1) {
        Help_Open(0x40041 << 0x20, 3);
    }
    temp_a0 = D_004B4B63 * 0xB8;
    temp_v1 = *(D_00492FCE + temp_a0);
    if (temp_v1 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s8 *)((u8 *)temp_s1 + 0x61) = 9;
        D_005C9F02 = (s16) *(u8 *)((u8 *)temp_s1 + 0x5E);
        D_0047010C = (s32) *(u8 *)((u8 *)temp_s1 + 0x5E);
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0x41A00000;
        amAdx_Stop(*(s32 *)((u8 *)temp_s1 + 0x58));
        var_v0 = (int *)(&CsModel_TaskEnd);
        if (&CsModel_TaskEnd == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    } else if (temp_v1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s8 *)((u8 *)temp_s1 + 0x61) = 0xA;
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0x41A00000;
        amAdx_Stop(*(s32 *)((u8 *)temp_s1 + 0x58));
        var_v0_2 = (int *)(&func_002B8410);
        if (&func_002B8410 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else {
        temp_a0_2 = *(&D_00492FD2 + temp_a0) | *(&D_00493032 + temp_a0);
        if (temp_a0_2 & 0xF0) {
            temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 0x5F);
            if ((s32) temp_v1_2 >= 2) {
                temp_a1 = *(u8 *)((u8 *)temp_s1 + 0x5E);
                if (temp_a0_2 & 0x10) {
                    var_v0_3 = temp_v1_2 - 1;
                    if (temp_a1 == 0) {

                    } else {
                        var_v0_3 = temp_a1 - 1;
                    }
                    goto block_35;
                }
                if (temp_a0_2 & 0x40) {
                    if (temp_a1 == (temp_v1_2 - 1)) {
                        *(u8 *)((u8 *)temp_s1 + 0x5E) = 0U;
                    } else {
                        var_v0_3 = temp_a1 + 1;
                        goto block_35;
                    }
                } else if (((s32) temp_v1_2 >= 6) && (temp_a0_2 & 0xA0)) {
                    if ((s32) temp_a1 < 6) {
                        *(u8 *)((u8 *)temp_s1 + 0x5E) = (u8) (temp_a1 + 6);
                        temp_v1_3 = *(u8 *)((u8 *)temp_s1 + 0x5F) - 1;
                        if (temp_v1_3 < (s32) *(u8 *)((u8 *)temp_s1 + 0x5E)) {
                            *(u8 *)((u8 *)temp_s1 + 0x5E) = (u8) temp_v1_3;
                        }
                    } else {
                        var_v0_3 = temp_a1 - 6;
block_35:
                        *(u8 *)((u8 *)temp_s1 + 0x5E) = var_v0_3;
                    }
                }
                if (temp_a1 != *(u8 *)((u8 *)temp_s1 + 0x5E)) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    sp68 = D_00470110;
                    *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0);
                    *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x10);
                    *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x20);
                    var_s0 = 0;
                    if ((s32) *(u8 *)((u8 *)temp_s1 + 0x5D) < 3) {
                        var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x68);
                    } else {
                        var_s0 = 3;
                        var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x30);
                    }
                    *(s32 *)((u8 *)temp_s1 + 0x58) = amAdx_PlayAfs(1, var_v1 | 0x20000, 0);
                    amAdx_SetVolume((void *)(*(s32 *)((u8 *)temp_s1 + 0x58)),(*(f32 *)(D_004E0618)));
                    amAdx_Pause(*(s32 *)((u8 *)temp_s1 + 0x58), 0);
                    *(s8 *)((u8 *)temp_s1 + 0x5C) = (s8) (*(u8 *)((u8 *)temp_s1 + 0x5E) + var_s0 + 1);
                    Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x54), (s64) ((*(u8 *)((u8 *)temp_s1 + 0x5E) + 3) << 0x30) >> 0x30);
                }
            }
        }
    }
    temp_a0_3 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0x1000);
    D_00470238 = 0;
    func_002B7690(temp_s1);
    A2d_FlushList();
}
