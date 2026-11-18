/* Draft (not built): func_002759F0 at 0x002759F0, size 0x9B8, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'int' to 'void *' mwccps2.exe Compiler: @ 553: temp_s2_4 = (void *)(func_0012EAE0(0x20, gEssShop, gEssShop, 0x30) & 3);
 * Original: asm/nonmatchings/menu/ess_shop/func_002759F0.s */

// src/menu/ess_shop.c func_002759F0 cerr diff=-1/0
extern f32 D_004E0618[];
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
s32 Help_Open(s32, s32);
s32 SklSheet_SetIndex(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, u16, s32, f32);
s32 func_0012EAE0(s32, void *, void *, s32);
s32 func_0026D530(s32, s32);
s32 func_00283D00(s32, s32, s32, s32);
extern s32 D_00452FB4;
extern s32 D_00452FB8;
extern s32 D_00452FC4;
extern s32 D_00452FC8;
extern s32 D_00453000;
extern s32 D_00453010;
extern s32 D_00453040;
extern s32 D_00453050;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 D_0059CA9D;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_00274A00(void);
void func_002759F0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s2;
    s32 temp_s2_4;
    s32 temp_s2_5;
    s32 temp_s2_6;
    s32 temp_s2_7;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_s0_7;
    u8 *temp_s1;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s3_2;

    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    temp_s2 = *(s32 *)((u8 *)gEssShop + 0x60);
    temp_a3 = D_00492FD2 | D_00493032;
    temp_a1 = D_0049308A | D_004930EA;
    temp_s3 = *D_00492FCE | D_00493086;
    var_s4 = temp_a3 | temp_a1;
    if (temp_s3 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_0049308A, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        if (*(s32 *)((u8 *)gEssShop + 0x5C) > 0) {
            temp_s0 = func_0012EAE0(0x20, 0, 0, 0) & 3;
            temp_s2_2 = (u8 *)(gEssShop + 0x1FC);
            *(s32 *)((u8 *)temp_s2_2 + 0x10) = (s32) *(temp_s0 + (&D_00452FC4 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
            func_0026D530(1, 5);
            temp_a1_2 = (EssMain_GetFlag() & 0xFF) * 0x70;
            temp_s0_2 = *((temp_s0 * 4) + (&D_00453040 + temp_a1_2));
            amAdx_SetVolume(1, temp_a1_2);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
        } else {
            temp_s0_3 = func_0012EAE0(0x20, 0, 0, 0) & 3;
            temp_s2_3 = (u8 *)(gEssShop + 0x1FC);
            *(s32 *)((u8 *)temp_s2_3 + 0x10) = (s32) *(temp_s0_3 + (&D_00452FC8 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
            func_0026D530(1, 6);
            temp_a1_3 = (EssMain_GetFlag() & 0xFF) * 0x70;
            temp_s0_4 = *((temp_s0_3 * 4) + (&D_00453050 + temp_a1_3));
            amAdx_SetVolume(1, temp_a1_3);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_4 | 0x20000, 0);
        }
        var_v1 = (s32 *)(&func_00274A00);
        if (&func_00274A00 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s3 & 0x4000) {
        temp_a0 = *(u8 **)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x68) * 4) + gEssShop) + 0x1B8);
        if (temp_a0 == NULL) {
            SoundRpc_SetVolume(0, 0, D_0049308A, temp_a3, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            goto block_28;
        }
        if (!(*(s32 *)((u8 *)temp_a0 + 0x10) & 1)) {
            if (*(s32 *)((u8 *)gEssShop + 0x70) >= *(s32 *)((u8 *)temp_a0 + 8)) {
                SoundRpc_SetVolume(0, 0, D_0049308A, temp_a3, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 0x15, 0);
                }
                *(s32 *)((u8 *)gEssShop + 0x2F4) = 0;
                *(s32 *)((u8 *)gEssShop + 0x2EC) = 7;
                *(s32 *)((u8 *)gEssShop + 0x2FC) = 0x30;
                *(s32 *)((u8 *)gEssShop + 0x300) = 0x2F;
                *(s32 *)((u8 *)gEssShop + 0x324) = 0;
                *(s32 *)((u8 *)gEssShop + 0x31C) = 0x33;
                *(s32 *)((u8 *)gEssShop + 0x354) = 0;
                *(s32 *)((u8 *)gEssShop + 0x34C) = 0x36;
                *(s32 *)((u8 *)gEssShop + 0x384) = 0;
                *(s32 *)((u8 *)gEssShop + 0x37C) = 0xA;
                temp_s2_4 = (void *)(func_0012EAE0(0x20, gEssShop, gEssShop, 0x30) & 3);
                temp_s3_2 = (u8 *)(gEssShop + 0x1FC);
                *(s32 *)((u8 *)temp_s3_2 + 0x10) = (s32) *(temp_s2_4 + (&D_00452FB8 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
                func_0026D530(1, 2);
                temp_a1_4 = (EssMain_GetFlag() & 0xFF) * 0x70;
                temp_s2_5 = *((temp_s2_4 * 4) + (&D_00453010 + temp_a1_4));
                amAdx_SetVolume(1, temp_a1_4);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s2_5 | 0x20000, 0);
                var_v1_2 = (s32 *)(&func_00275050);
                *(s32 *)((u8 *)(arg0 + 0x30) + 8) = 1;
                if (&func_00275050 == NULL) {
                    var_v1_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            } else {
                temp_s0_5 = func_0012EAE0(0x20, (u8 *) temp_a1, (u8 *) D_0049308A, temp_a3) & 3;
                temp_s1 = (u8 *)(gEssShop + 0x1FC);
                *(s32 *)((u8 *)temp_s1 + 0x10) = (s32) *(temp_s0_5 + (&D_00452FB4 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
                func_0026D530(1, 1);
                temp_a1_5 = (EssMain_GetFlag() & 0xFF) * 0x70;
                temp_s0_6 = *((temp_s0_5 * 4) + (&D_00453000 + temp_a1_5));
                amAdx_SetVolume(1, temp_a1_5);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s0_6 | 0x20000, 0);
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
            }
            return;
        }
        SoundRpc_SetVolume(0, 0, D_0049308A, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 6, 0);
        }
        goto block_28;
    }
block_28:
    if (temp_s3 & 0x8000) {
        temp_s0_7 = *(u8 **)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x68) * 4) + gEssShop) + 0x1B8);
        if ((temp_s0_7 != NULL) && (*(s32 *)((u8 *)temp_s0_7 + 0) != 0x242)) {
            func_00283D00(0x3220, *(s32 *)((u8 *)temp_s0_7 + 4), 0, 0x11403000);
            temp_a1_6 = *(s32 *)((u8 *)gEssShop + 0x50);
            SklSheet_SetIndex(*(*(s32 *)((u8 *)temp_s0_7 + 4) + (&D_0059CA9D + (temp_a1_6 * 0xD680))) == 0, temp_a1_6);
            var_v1_3 = (s32 *)(&func_00274B40);
            if (&func_00274B40 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
        }
        return;
    }
    if (temp_s3 & 1) {
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        Help_Open(0x08040000 | (0x804040 << 0x20), 3);
        var_s4 = 0;
    }
    temp_a0_2 = var_s4 & 0xF0;
    switch (temp_a0_2) {                            /* irregular */
    case 0x10:
        temp_v1 = *(s32 *)((u8 *)gEssShop + 0x68) - 1;
        *(s32 *)((u8 *)gEssShop + 0x68) = temp_v1;
        if (temp_v1 < 0) {
            *(s32 *)((u8 *)gEssShop + 0x68) = 0;
            temp_v1_2 = *(s32 *)((u8 *)gEssShop + 0x64) - 1;
            *(s32 *)((u8 *)gEssShop + 0x64) = temp_v1_2;
            if (temp_v1_2 < 0) {
                var_a0 = 0;
                *(s32 *)((u8 *)gEssShop + 0x64) = 0;
            } else {
                var_a0 = 1;
            }
        } else {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x40:
        if (func_00272D30(temp_a0_2) != 0) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x80:
        temp_s2_6 = temp_s2 - 1;
        if (temp_s2_6 >= 0) {
            *(s32 *)((u8 *)gEssShop + 0x60) = temp_s2_6;
            *(s32 *)((u8 *)gEssShop + 0x68) = 0;
            *(s32 *)((u8 *)gEssShop + 0x64) = 0;
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    case 0x20:
        temp_s2_7 = temp_s2 + 1;
        if (temp_s2_7 < 5) {
            *(s32 *)((u8 *)gEssShop + 0x60) = temp_s2_7;
            *(s32 *)((u8 *)gEssShop + 0x68) = 0;
            *(s32 *)((u8 *)gEssShop + 0x64) = 0;
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        break;
    }
    temp_a2 = *(u8 **)((u8 *)gEssShop + 0x1C8);
    if (*(s32 *)((u8 *)gEssShop + 0x64) == 0) {
        if (*(s32 *)((u8 *)gEssShop + 0x25C) == 0x2B) {
            *(s32 *)((u8 *)gEssShop + 0x25C) = 0x2D;
            goto block_71;
        }
    } else if (*(s32 *)((u8 *)gEssShop + 0x25C) == 0x2D) {
        *(s32 *)((u8 *)gEssShop + 0x25C) = 0x2B;
block_71:
        *(s32 *)((u8 *)(gEssShop + 0x25C) + 8) = 0;
    }
    if ((temp_a2 != NULL) && (*(s32 *)((u8 *)temp_a2 + 4) > 0)) {
        if (*(s32 *)((u8 *)gEssShop + 0x28C) == 0x2E) {
            *(s32 *)((u8 *)gEssShop + 0x28C) = 0x2C;
            goto block_79;
        }
    } else if (*(s32 *)((u8 *)gEssShop + 0x28C) == 0x2C) {
        *(s32 *)((u8 *)gEssShop + 0x28C) = 0x2E;
block_79:
        *(s32 *)((u8 *)(gEssShop + 0x28C) + 8) = 0;
    }
}
