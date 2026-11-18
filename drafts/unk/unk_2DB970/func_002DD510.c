/* Draft (not built): func_002DD510 at 0x002DD510, size 0x38C, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) + (temp_s1_2 * 4)), 0); @ 125: temp_s1_2 = **(s16 **)((u8 *)temp_v0 + 0x3D0) + *(s32 *)((u8 *)(temp_s1 + sp) + 0x130);
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DD510.s */

// src/unk/unk_2DB970.c func_002DD510 cerr diff=-1/0
s32 Help_Open(s64, s32, u16, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s64 *, s8 *, f32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 func_002D2E50(s8);
s32 func_002D3170(s32, s16 *, s32, s32);
s32 func_002D33B0(s32, void *, s32, s32);
extern s32 D_00456B98;
extern s32 D_00456BA8;
extern f32 D_00470178;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern char D_00492FCE[];
extern char D_004E05DC[];
extern char D_00456C80[];
extern void func_002DDF00(void);
void func_002DD510(void) {
    s64 sp90;
    s32 sp120;
    s32 sp130;
    f32 sp13C;
    s128 temp_v0_3;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_s5_2;
    s32 temp_s7;
    s32 var_a0;
    s32 var_s3;
    s64 *var_a1;
    s8 *var_a2;
    u8 *temp_s0;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s1;

    temp_s0 = (u8 *)(gOptionWork);
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x37C);
    temp_s7 = *D_00492FCE | D_00493086;
    temp_a3 = D_00492FD2 | D_00493032;
    *(s64 *)((u8 *)(&sp130) + 0) = (s64) *(s64 *)((u8 *)(&D_00456B98) + 0);
    temp_s4 = temp_a3 | (D_0049308A | D_004930EA);
    *(f32 *)((u8 *)(&sp130) + 8) = (f32) *(f32 *)((u8 *)(&D_00456B98) + 8);
    if (temp_s7 & 1) {
        Help_Open(0x40041 << 0x20, 3, D_0049308A, temp_a3);
        return;
    }
    if (temp_s4 & 0xA0) {
        temp_s1 = temp_s2 * 4;
        if (temp_s2 != 3) {
            temp_v0 = temp_s1 + temp_s0;
            func_002D3170(temp_s4, *(s16 **)((u8 *)temp_v0 + 0x3D0), *(s32 *)((u8 *)temp_v0 + 0x3DC), 0);
            temp_s5 = (u8 *)(gOptionWork);
            temp_v0_2 = temp_s1 + temp_s0;
            temp_a0 = *(s32 *)((u8 *)temp_v0_2 + 0x84);
            temp_s1_2 = **(s16 **)((u8 *)temp_v0 + 0x3D0) + *(s32 *)((u8 *)(temp_s1 + sp) + 0x130);
            if (temp_a0 != 0) {
                func_0022D0E0(temp_a0, 1);
            }
            *(s32 *)((u8 *)temp_v0_2 + 0x84) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 8)) + 0x1C) + (temp_s1_2 * 4)), 0);
            if (temp_s2 == 1) {
                *(s64 *)((u8 *)(&sp120) + 0) = (s64) *(s64 *)((u8 *)(&D_00456BA8) + 0);
                *(s16 *)((u8 *)(&sp120) + 8) = (s16) *(s16 *)((u8 *)(&D_00456BA8) + 8);
                *(s16 *)((u8 *)D_004E05DC + 4) = (s16) *(s16 *)((u8 *)((*(s16 *)((u8 *)temp_s0 + 0x3E8) * 2) + sp) + 0x120);
            }
        }
    }
    if ((temp_s7 & 0x4000) && (temp_s2 == 3)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s16 *)((u8 *)D_004E05DC + 0) = 1;
        *(s16 *)((u8 *)D_004E05DC + 4) = -1;
        var_s2 = &sp130;
        *(s16 *)((u8 *)D_004E05DC + 2) = 1;
        var_s3 = 0;
        *(s16 *)((u8 *)temp_s0 + 0x3E8) = 4;
        var_s1 = temp_s0;
        do {
            temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0x84);
            temp_s6 = (u8 *)(gOptionWork);
            temp_s5_2 = **(s16 **)((u8 *)var_s1 + 0x3D0) + *var_s2;
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            *(s32 *)((u8 *)var_s1 + 0x84) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6 + 8)) + 0x1C) + (temp_s5_2 * 4)), 0);
            var_s3 += 1;
            var_s2 += 4;
            var_s1 += 4;
        } while (var_s3 < 3);
    }
    func_002D33B0(temp_s4, temp_s0 + 0x37C, 0, 4);
    sp13C = D_00470178;
    func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0x37C) + sp) + 0x13C));
    if (temp_s7 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_a2 = (s8 *)(D_00456C80[0]);
        var_a1 = &sp90;
        var_a0 = 4;
        do {
            var_a0 -= 1;
            temp_v0_3 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0_3;
            var_a1 += 0x20;
        } while (var_a0 > 0);
        *var_a1 = *var_a2;
        amAdx_SetVolume(1, var_a1, var_a2, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, sp98 | 0x20000, 0);
        *(s32 *)((u8 *)gOptionWork + 0x360) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x368) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
        *(void (**)())((u8 *)gOptionWork + 0x344) = func_002DDF00;
    }
}
