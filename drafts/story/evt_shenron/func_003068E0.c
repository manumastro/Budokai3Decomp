/* Draft (not built): func_003068E0 at 0x003068E0, size 0x1F0, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 113 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_shenron/func_003068E0.s */

// src/story/evt_shenron.c func_003068E0 diff diff=113/124
s32 Help_Open(s32, s32, s32, s8);
s32 func_00283D00(s32, s32, s32, s32);
extern s32 D_00492FD2;
extern s32 D_00493032;
extern void func_003067A0(void);
void func_003068E0(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a2;
    s32 var_a0;
    u16 var_s0;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(D_0047097C);
    temp_a2 = ((s32)(D_004B4B63)) * 0xB8;
    var_s0 = *(D_00492FCE + temp_a2);
    var_a0 = *(&D_00492FD2 + temp_a2) | *(&D_00493032 + temp_a2);
    if (var_s0 & 1) {
        Help_Open((s32)(0x40000 | (0x40 << 0x20)), 3, (s32)(temp_a2), (s8)(D_004B4B63));
        var_a0 = 0;
        var_s0 = 0;
    }
    if (var_a0 & 0x10) {
        SoundRpc_SetVolume(0, 0);
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x20) - 1);
        if (*(s32 *)((u8 *)temp_s1 + 0x20) < 0) {
            *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x10) - 1);
        }
    } else if (var_a0 & 0x40) {
        SoundRpc_SetVolume(0, 0);
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x20) + 1);
        if (*(s32 *)((u8 *)temp_s1 + 0x20) >= *(s32 *)((u8 *)temp_s1 + 0x10)) {
            *(s32 *)((u8 *)temp_s1 + 0x20) = 0;
        }
    }
    if (var_s0 & 0x4000) {
        func_00283D00(0x5000, *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x20) * 4) + temp_s1) + 0x14), 1, 0x11403000);
        *(s32 *)((u8 *)temp_s1 + 8) = 0;
        amAdx_PlayAfs(1, 0x21052, 0);
        var_v1 = (int *)(&func_003067A0);
        if (&func_003067A0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
