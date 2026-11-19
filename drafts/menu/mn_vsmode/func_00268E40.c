/* Draft (not built): func_00268E40 at 0x00268E40, size 0x5A0, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 209 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x518, original 0x5A0
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268E40.s */

// src/menu/mn_vsmode.c func_00268E40 size diff=209/326
extern void *D_004707DC;
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, u16, f32);
s32 amAdx_GetStat(s32, s32, u16);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_0022C060(void *, s32);
extern s128 D_00452EA0;
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
extern f32 D_004E0614;
extern f32 D_004E0618;
extern void A2d_FlushList(void);
extern void amAdx_Stop();
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern void SoundRpc_Send3();
extern void VsCharasel_Load(void);
extern void amAdx_Pause();
extern void Obj_SetF3C();
extern char D_00492FCE[];
extern void func_00268D00(void);
extern void func_00268BF0(void);
void func_00268E40(u8 *arg0) {
    u8 sp[0x400];
    s128 sp60;
    s128 sp70;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_a1;
    s32 var_s3;
    u16 temp_a2;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s4;

    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s1 = arg0;
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s2 = *(u8 **)((u8 *)var_s0 + 0);
    if (var_s2 != NULL) {
        func_0022C060(var_s2, 0x3F800000);
        func_0022CD00(var_s2);
    }
    var_s3 = 0;
    var_s2 = var_s0;
    do {
        var_s4 = *(u8 **)((u8 *)var_s2 + 0x2C);
        if (var_s4 != NULL) {
            func_0022C060(var_s4, 0x3F800000);
            func_0022CD00(var_s4);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 2);
    func_00268170(var_s0);
    func_00267E00(var_s0);
    var_s3 = 0;
    var_s2 = var_s0;
    do {
        var_s4 = *(u8 **)((u8 *)var_s2 + 4);
        if (var_s4 != NULL) {
            func_0022C060(var_s4, 0x3F800000);
            func_0022CD00(var_s4);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 2);
    A2d_FlushList();
    temp_a2 = *D_00492FCE | D_00493086;
    if (temp_a2 & 0x4000) {
        temp_v1 = *(u8 *)((u8 *)var_s0 + 0x53);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (!(*D_00492FCE & 0x4000)) {
                SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
                return;
            }
        default:
block_30:
            SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            func_00268550(var_s0);
            amAdx_Stop(*(s32 *)((u8 *)var_s0 + 0x4C));
            VsCharasel_Load();
            var_v1 = (int *)(&func_00268D00);
            if (&func_00268D00 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1;
            return;
        case 2:
            if (!(D_00493086 & 0x4000)) {
                SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
                return;
            }
            goto block_30;
        case 1:
            if (D_00492FC0 == 3) {
                if (D_00493078 != 3) {
                    goto block_27;
                }
                goto block_30;
            }
block_27:
            SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            return;
        }
    } else {
        if (temp_a2 & 0x1000) {
            SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            func_002682E0(var_s0);
            amAdx_Stop(*(s32 *)((u8 *)var_s0 + 0x4C));
            Obj_SetF3C(*(s32 *)((u8 *)var_s0 + 0x44), -1);
            var_v1_2 = (int *)(&func_00268BF0);
            if (&func_00268BF0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1_2;
            return;
        }
        temp_a1 = D_00492FD2 | D_00493032;
        if ((temp_a1 | (D_0049308A | D_004930EA)) & 0x50) {
            SoundRpc_SetVolume(0, 0, D_00492FD2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x10) {
                temp_v0 = *(u8 *)((u8 *)var_s0 + 0x53);
                if (temp_v0 != 0) {
                    var_v0 = temp_v0 - 1;
                } else {
                    var_v0 = 3;
                }
                goto block_53;
            }
            temp_v1_2 = *(u8 *)((u8 *)var_s0 + 0x53);
            if (temp_v1_2 == 3) {
                *(u8 *)((u8 *)var_s0 + 0x53) = 0U;
            } else {
                var_v0 = temp_v1_2 + 1;
block_53:
                *(u8 *)((u8 *)var_s0 + 0x53) = var_v0;
            }
            Obj_SetF3C(*(s32 *)((u8 *)var_s0 + 0x44), (s64) ((*(u8 *)((u8 *)var_s0 + 0x53) + 1) << 0x30) >> 0x30);
            sp70 = D_00452EA0;
            *(s32 *)((u8 *)var_s0 + 0x4C) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)var_s0 + 0x53) * 4) + sp) + 0x70) | 0x20000, 0);
            amAdx_SetVolume(*(s32 *)((u8 *)var_s0 + 0x4C), D_004E0618);
            amAdx_Pause(*(s32 *)((u8 *)var_s0 + 0x4C), 0);
            *(u8 *)((u8 *)var_s0 + 0x50) = (u8) (*(u8 *)((u8 *)var_s0 + 0x53) + 1);
            return;
        }
        if ((*(u8 *)((u8 *)var_s0 + 0x50) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)var_s0 + 0x4C), temp_a1, D_00492FD2) == 5)) {
            Obj_SetF3C(*(s32 *)((u8 *)var_s0 + 0x44), (s64) ((*(u8 *)((u8 *)var_s0 + 0x53) + 1) << 0x30) >> 0x30);
            sp60 = D_00452EA0;
            *(s32 *)((u8 *)var_s0 + 0x4C) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)var_s0 + 0x53) * 4) + sp) + 0x60) | 0x20000, 0);
            amAdx_SetVolume(*(s32 *)((u8 *)var_s0 + 0x4C), D_004E0618);
            amAdx_Pause(*(s32 *)((u8 *)var_s0 + 0x4C), 0);
            *(u8 *)((u8 *)var_s0 + 0x50) = (u8) (*(u8 *)((u8 *)var_s0 + 0x53) + 1);
        }
    }
}
