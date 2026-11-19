/* Draft (not built): func_00265BF0 at 0x00265BF0, size 0x474, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 137 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x450, original 0x474
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265BF0.s */

// src/menu/mn_dataload.c func_00265BF0 size diff=137/276
extern void Obj_SetF3C(s32, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s32 amAdx_GetStat(s32, s32, u16);
extern s32 D_00452E60;
extern s128 D_00452E70;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void Save_Load();
extern void Save_Request();
extern char D_00492FCE[];
extern void func_00265A00(void);
void func_00265BF0(u8 *arg0) {
    u8 sp[0x400];
    s128 sp30;
    s32 sp40;
    s32 sp50;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_4;
    s32 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v1_3;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x34);
    if ((*D_00492FCE | D_00493086) & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3);
    }
    func_00265800(temp_s0);
    if ((*D_00492FCE | D_00493086) & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        temp_v0 = *(u8 *)((u8 *)temp_s0 + 0x30);
        switch (temp_v0) {                          /* irregular */
        case 0:
            Save_Load(0, 1);
            Save_Request(0, -1, 0);
            var_v1 = (int *)(&func_00265A00);
            if (&func_00265A00 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        case 1:
            Save_Load(0, 1);
            Save_Request(1, -1, 0);
            var_v1_2 = (int *)(&func_00265A00);
            if (&func_00265A00 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        default:
            amAdx_Stop(*(s32 *)((u8 *)temp_s0 + 0x50), 1);
            func_001F07B0(5);
            return;
        }
    } else {
        temp_a1 = D_00492FD2 | D_00493032;
        if ((temp_a1 | (D_0049308A | D_004930EA)) & 0x50) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, D_00492FD2), D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            if ((D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA)) & 0x10) {
                temp_v0_2 = *(u8 *)((u8 *)temp_s0 + 0x30);
                if (temp_v0_2 != 0) {
                    var_v0 = temp_v0_2 - 1;
                } else {
                    var_v0 = *(u8 *)((u8 *)temp_s0 + 0x31) - 1;
                }
                goto block_27;
            }
            temp_v1 = *(u8 *)((u8 *)temp_s0 + 0x30);
            if ((s32) temp_v1 >= (*(u8 *)((u8 *)temp_s0 + 0x31) - 1)) {
                *(u8 *)((u8 *)temp_s0 + 0x30) = 0U;
            } else {
                var_v0 = temp_v1 + 1;
block_27:
                *(u8 *)((u8 *)temp_s0 + 0x30) = var_v0;
            }
            Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x4C), (s64) ((*(u8 *)((u8 *)temp_s0 + 0x30) + 1) << 0x30) >> 0x30);
            *(s64 *)((u8 *)(&sp50) + 0) = (s64) *(s64 *)((u8 *)(&D_00452E60) + 0);
            *(f32 *)((u8 *)(&sp50) + 8) = (f32) *(f32 *)((u8 *)(&D_00452E60) + 8);
            *(s32 *)((u8 *)temp_s0 + 0x50) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0x30) * 4) + sp) + 0x50) | 0x20000, 0);
            *(u8 *)((u8 *)temp_s0 + 0x54) = (u8) ((*(u8 *)((u8 *)temp_s0 + 0x30) + 1) * 2);
            return;
        }
        if ((*(u8 *)((u8 *)temp_s0 + 0x54) == 1) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s0 + 0x50), temp_a1, D_00492FD2) == 5)) {
            Obj_SetF3C(*(s32 *)((u8 *)temp_s0 + 0x4C), (s64) ((*(u8 *)((u8 *)temp_s0 + 0x30) + 1) << 0x30) >> 0x30);
            *(s64 *)((u8 *)(&sp40) + 0) = (s64) *(s64 *)((u8 *)(&D_00452E60) + 0);
            *(f32 *)((u8 *)(&sp40) + 8) = (f32) *(f32 *)((u8 *)(&D_00452E60) + 8);
            *(s32 *)((u8 *)temp_s0 + 0x50) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0x30) * 4) + sp) + 0x40) | 0x20000, 0);
            var_v1_3 = (*(u8 *)((u8 *)temp_s0 + 0x30) + 1) * 2;
            goto block_36;
        }
        if (!(*(u8 *)((u8 *)temp_s0 + 0x54) & 1) && (amAdx_GetStat(*(s32 *)((u8 *)temp_s0 + 0x50), 0, 0) == 5)) {
            sp30 = D_00452E70;
            *(s32 *)((u8 *)temp_s0 + 0x50) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((((s32) *(u8 *)((u8 *)temp_s0 + 0x54) >> 1) * 4) + sp) + 0x30) | 0x20000, 0);
            var_v1_3 = *(u8 *)((u8 *)temp_s0 + 0x54) + 1;
block_36:
            *(u8 *)((u8 *)temp_s0 + 0x54) = var_v1_3;
        }
        if ((*D_00492FCE | D_00493086) & 0x1000) {
            SoundRpc_SetVolume(0, 0, D_004E0614, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            amAdx_Stop(*(s32 *)((u8 *)temp_s0 + 0x50));
            var_v1_4 = (int *)(&func_00265B40);
            if (&func_00265B40 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
        }
    }
}
