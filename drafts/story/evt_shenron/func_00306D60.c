/* Draft (not built): func_00306D60 at 0x00306D60, size 0x210, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); wccps2.exe Compiler: 363: *(D_00492FCE + (D_004B4B63 * 0xB8)) = 0; @ 350: temp_s0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
 * Original: asm/nonmatchings/story/evt_shenron/func_00306D60.s */

// src/story/evt_shenron.c func_00306D60 cerr diff=-1/0
void func_00306D60(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    f32 temp_f0;
    u16 temp_s0;
    void (*var_v0)();
    u8 **temp_s0_2;
    u8 **temp_s1;

    temp_s0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
    temp_s1 = (u8 **)(D_0047097C);
    temp_f0 = *(f32 *)((u8 *)temp_s1 + 8) + func_002B06A0();
    *(f32 *)((u8 *)temp_s1 + 8) = temp_f0;
    if (!(temp_f0 < 1100.0f)) {
        amAdx_PlayAfs(1, 0x2104F, 0);
        var_v1 = (s32 *)(&func_00306BF0);
        if (&func_00306BF0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
    if (temp_s0 & 8) {
        *(D_00492FCE + (D_004B4B63 * 0xB8)) = 0;
        *(f32 *)((u8 *)temp_s1 + 8) = 1100.0f;
        amAdx_PlayAfs(1, 0x2104F, 0);
        SoundRpc_SendWord(0);
        var_v1_2 = (s32 *)(&func_00306BF0);
        if (&func_00306BF0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
    temp_s0_2 = (u8 **)(D_0047097C);
    if ((*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8) || (!(*(f32 *)((u8 *)temp_s0_2 + 8) < 1650.0f) && (amAdx_IsStopped(1, D_004B4B63) != 0))) {
        *(D_00492FCE + (D_004B4B63 * 0xB8)) = 0;
        SoundRpc_SendWord(0);
        amAdx_Stop(1);
        var_v0 = func_003068E0;
        if (func_003068E0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0)) + 0x1C) = var_v0;
        amTask_Create(func_003062B0, 0, 0x5000, 0x4000, 0, 0);
    }
}
