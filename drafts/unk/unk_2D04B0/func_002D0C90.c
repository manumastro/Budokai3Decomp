/* Draft (not built): func_002D0C90 at 0x002D0C90, size 0x614, segment unk/unk_2D04B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  @ 138: 32 *)((u8 *)temp_s0 + 0x40) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((temp_s2 * 4) + sp) + 0x78) | 0x20000, 0, &sp78);
 * Original: asm/nonmatchings/unk/unk_2D04B0/func_002D0C90.s */

// src/unk/unk_2D04B0.c func_002D0C90 cerr diff=-1/0
s32 Help_Open(s32, s32);
s32 Scene_FadeTo(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_GetStat(s32);
s32 func_0012EAE0(s32);
s32 func_0022C060(void *, s32);
extern s64 D_00470158;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00492FC0;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern s32 D_00493078;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern u8 D_005C4120;
extern s8 D_005C4121;
extern s16 D_005C4122;
extern s16 D_005C4124;
extern s16 D_005C4126;
extern s16 D_005C4128;
extern s16 D_005C412A;
extern s16 D_005C412C;
extern s16 D_005C412E;
extern s16 D_005C4130;
extern s16 D_005C4132;
extern s16 D_005C4134;
extern s16 D_005C4136;
extern s16 D_005C4138;
extern s16 D_005C9DAA;
extern s16 D_005C9DFA;
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void SoundRpc_Send3();
extern void Obj_SetF3C();
extern char D_00492FCE[];
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Scene_Request();
extern void func_002D0A00(void);
extern void func_002D0B60(void);
void func_002D0C90(u8 *arg0) {
    u8 *sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s64 sp70;
    s64 sp78;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    s32 var_v0_4;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0_3;
    u8 **var_s1;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s3;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    if ((*(u8 *)((u8 *)temp_s0 + 0x44) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s0 + 0x40)) == 5)) {
        temp_s2 = func_0012EAE0(0x20) & 1;
        *(u8 *)((u8 *)temp_s0 + 0x3A) = (u8) (temp_s2 + 7);
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x30), *(u8 *)((u8 *)temp_s0 + 0x3A));
        sp78 = D_00470158;
        *(s32 *)((u8 *)temp_s0 + 0x40) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((temp_s2 * 4) + sp) + 0x78) | 0x20000, 0, &sp78);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0x40), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0x40), 0);
        *(u8 *)((u8 *)temp_s0 + 0x44) = 1U;
    }
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    temp_v1 = *D_00492FCE | D_00493086;
    if (temp_v1 & 0x4000) {
        temp_v1_2 = *(u8 *)((u8 *)temp_s0 + 0x35);
        var_a1 = 1;
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            D_005C9DAA = 0;
            D_005C9DFA = -1;
            D_004B4B63 = (*D_00492FCE & 0x4000) == 0;
            break;
        case 1:
            if ((D_00492FC0 != 3) || (D_00493078 != 3)) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
                var_a1 = 0;
            } else {
                D_005C9DAA = 0;
                D_005C9DFA = 1;
            }
            break;
        case 2:
            D_005C9DAA = -1;
            D_005C9DFA = -1;
            break;
        }
        if (var_a1 != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x30), -1U);
            temp_a2 = *(u8 *)((u8 *)temp_s0 + 0x35);
            D_005C4120 = temp_a2;
            D_005C412C = 1;
            D_005C4121 = 0;
            D_005C4122 = 0;
            D_005C4124 = 0;
            D_005C4126 = 0;
            D_005C4128 = 0;
            D_005C412A = 0;
            D_005C412E = 0;
            D_005C4130 = 0;
            D_005C4132 = 0;
            D_005C4134 = 0;
            D_005C4136 = 0;
            D_005C4138 = 0;
            *(u8 *)((u8 *)temp_s0 + 0x37) = 5U;
            *(s32 *)((u8 *)temp_s0 + 0x3C) = 0x42700000;
            func_002D0830(temp_s0, 1, temp_a2);
            Scene_Request(0x18, 0);
            var_v0 = (s32 *)(&func_002D0A00);
            if (&func_002D0A00 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        }
    } else if (temp_v1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(u8 *)((u8 *)temp_s0 + 0x37) = 6U;
        Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x30), -1U);
        Scene_Request(5, 0);
        Scene_FadeTo(0xA, 0);
        var_v0_2 = (s32 *)(&func_002D0B60);
        if (&func_002D0B60 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x50) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        if (*(u8 *)((u8 *)temp_s0 + 0x44) == 0) {
            temp_s1 = func_0012EAE0(0x20) & 1;
            *(u8 *)((u8 *)temp_s0 + 0x3A) = (u8) (temp_s1 + 7);
            Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x30), *(u8 *)((u8 *)temp_s0 + 0x3A));
            sp70 = D_00470158;
            *(s32 *)((u8 *)temp_s0 + 0x40) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((temp_s1 * 4) + sp) + 0x70) | 0x20000, 0, &sp70);
            amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0x40), D_004E0618);
            amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0x40), 0);
            *(u8 *)((u8 *)temp_s0 + 0x44) = 1U;
        }
        if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x10) {
            temp_v0 = *(u8 *)((u8 *)temp_s0 + 0x35);
            if (temp_v0 == 0) {
                var_v0_3 = 2;
            } else {
                var_v0_3 = temp_v0 - 1;
            }
            goto block_46;
        }
        temp_v1_3 = *(u8 *)((u8 *)temp_s0 + 0x35);
        if (temp_v1_3 == 2) {
            *(u8 *)((u8 *)temp_s0 + 0x35) = 0U;
        } else {
            var_v0_3 = temp_v1_3 + 1;
block_46:
            *(u8 *)((u8 *)temp_s0 + 0x35) = var_v0_3;
        }
    }
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    var_v1 = &sp50;
    D_00470238 = 0;
    var_v0_4 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0_4 -= 1;
            var_v1 += 1;
        } while (var_v0_4 != 0);
    }
    sp50 = *(u8 **)((u8 *)temp_s0 + 8);
    sp54 = *(s32 *)((u8 *)temp_s0 + 0xC);
    sp58 = *(s32 *)((u8 *)temp_s0 + 0x10);
    sp5C = *(s32 *)((u8 *)temp_s0 + 0x14);
    sp60 = *(s32 *)((u8 *)temp_s0 + 0x24);
    sp64 = *(s32 *)((u8 *)temp_s0 + 0x2C);
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x1000);
    D_00470238 = 0;
    var_s2 = 0;
    var_s1 = &sp50;
    do {
        temp_s3 = *var_s1;
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 6);
    if ((s32) *(u8 *)((u8 *)temp_s0 + 0x37) >= 3) {
        func_002D0530(temp_s0);
    }
    A2d_FlushList();
}
