/* Draft (not built): func_002DD2B0 at 0x002DD2B0, size 0x260, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0); @ 97: func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x37C) + sp) + 0xCC), temp_a1, D_00492FD2, *D_00492FCE);
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DD2B0.s */

// src/unk/unk_2DB970.c func_002DD2B0 cerr diff=-1/0
s32 Help_Open(s32, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s64 *, s8 *, f32);
s32 func_002D2E50(s8, s32, u16, u16);
s32 func_002D33B0(s32, void *, s32, s32);
extern s16 D_0047017C;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern s32 func_002DF5D0;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern void Save_Request();
extern void amAdx_Pause();
extern void Option_Nop1(void);
extern char D_00492FCE[];
extern char D_00456C80[];
extern void func_002DDF00(void);
void func_002DD2B0(void) {
    s64 sp40;
    s16 spCC;
    s128 temp_v0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a0;
    s64 *var_a1;
    s8 *var_a2;
    u8 *temp_s2;

    temp_s2 = (u8 *)(gOptionWork);
    temp_s0 = *D_00492FCE | D_00493086;
    temp_a1 = D_00492FD2 | D_00493032;
    temp_s1 = temp_a1 | (D_0049308A | D_004930EA);
    if (temp_s0 & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), 3, D_00492FD2, *D_00492FCE);
        return;
    }
    spCC = D_0047017C;
    func_002D2E50(*(s8 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x37C) + sp) + 0xCC), temp_a1, D_00492FD2, *D_00492FCE);
    func_002D33B0(temp_s1, temp_s2 + 0x37C, 0, 2);
    if (temp_s0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        if (*(s32 *)((u8 *)temp_s2 + 0x37C) == 0) {
            Save_Request(2, -1, 0);
        } else {
            Save_Request(3, -1, 0);
        }
        *(void (**)())((u8 *)temp_s2 + 0x344) = Option_Nop1;
        *(u8 **)((u8 *)temp_s2 + 0x324) = amTask_Create(&func_002DF5D0, 0, 0x2000, 0x4000);
        return;
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_a2 = (s8 *)(D_00456C80[0]);
        var_a1 = &sp40;
        var_a0 = 4;
        do {
            var_a0 -= 1;
            temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
            var_a1 += 0x20;
        } while (var_a0 > 0);
        *var_a1 = *var_a2;
        amAdx_SetVolume(1, var_a1, var_a2, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, sp4C | 0x20000, 0);
        *(s32 *)((u8 *)gOptionWork + 0x360) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x368) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x37C) = 0;
        *(void (**)())((u8 *)gOptionWork + 0x344) = func_002DDF00;
    }
}
