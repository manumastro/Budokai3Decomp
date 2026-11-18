/* Draft (not built): func_00306AD0 at 0x00306AD0, size 0x118, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ps2.exe Compiler: 315: *(D_00492FCE + (D_004B4B63 * 0xB8)) = 0; @ 309: if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8)) {
 * Original: asm/nonmatchings/story/evt_shenron/func_00306AD0.s */

// src/story/evt_shenron.c func_00306AD0 cerr diff=-1/0
extern void func_00305590(void);
extern s32 amAdx_IsStopped(s32);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern void func_003068E0(void);
extern void func_003062B0(void);
void func_00306AD0(void) {
    void (*var_v0)();
    u8 **temp_s0;
    u8 **temp_s0_2;

    temp_s0 = (u8 **)(D_0047097C);
    *(f32 *)((u8 *)temp_s0 + 8) = (f32) (*(f32 *)((u8 *)temp_s0 + 8) + func_002B06A0());
    func_00305590();
    temp_s0_2 = (u8 **)(D_0047097C);
    if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 8)) {
        if (!(*(f32 *)((u8 *)temp_s0_2 + 8) < 1650.0f) && (amAdx_IsStopped(1) != 0)) {
            goto block_4;
        }
    } else {
block_4:
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
