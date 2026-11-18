/* Draft (not built): func_002E5980 at 0x002E5980, size 0x190, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x184, original 0x190
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E5980.s */

// src/unk/unk_2E4030.c func_002E5980 size diff=40/97
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_GetStat(s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
extern u16 D_00493086;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void Obj_SetF3C();
extern char D_00492FCE[];
extern void func_002E5840(void);
void func_002E5980(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f0;
    f32 temp_f2;
    s32 var_s0;
    u8 temp_v1;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s0 = 0;
    func_002E4D60((struct Sub57 *)(temp_s1));
    temp_f2 = *(f32 *)((u8 *)temp_s1 + 0x10C);
    if (!(temp_f2 <= 0.0f)) {
        temp_f0 = temp_f2 - gFrameDelta;
        *(f32 *)((u8 *)temp_s1 + 0x10C) = temp_f0;
        if (temp_f0 <= 0.0f) {
            *(s32 *)((u8 *)temp_s1 + 0x110) = amAdx_PlayAfs(1, 0x210A2, 0);
            amAdx_SetVolume(*(s32 *)((u8 *)temp_s1 + 0x110), D_004E0618);
            amAdx_Pause(*(s32 *)((u8 *)temp_s1 + 0x110), 0);
            Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 8), 0x14);
        }
        return;
    }
    temp_v1 = *(u8 *)((u8 *)temp_s1 + 0xCD);
    if (temp_v1 & 1) {
        var_s0 = (0 | *D_00492FCE) & 0xFFFF;
    }
    if (temp_v1 & 2) {
        var_s0 = (var_s0 | D_00493086) & 0xFFFF;
    }
    if ((amAdx_GetStat(*(s32 *)((u8 *)temp_s1 + 0x110)) == 5) || (var_s0 & 0xFFFF & 0x5000)) {
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 0xD, 0);
        }
        *(f32 *)((u8 *)temp_s1 + 0x10C) = 145.0f;
        *(s8 *)((u8 *)temp_s1 + 0xF4) = 5;
        Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 8), -1);
        func_002E5040(temp_s1);
        var_v1 = (s32 *)(&func_002E5840);
        if (&func_002E5840 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
