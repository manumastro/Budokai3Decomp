/* Draft (not built): func_002DFEC0 at 0x002DFEC0, size 0x188, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DFEC0.s */

extern void amCdFs_Close(void *, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_00264140(s32, s32);
extern f32 D_004E0610;
extern void func_0022E0B0(void *);
extern void amAdx_Pause();
extern void * func_002C04A0(void);
void func_002DFEC0(u8 *arg0) {
    s32 *var_v1;
    s32 var_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    temp_s1 = gOptionWork;
    if (*(s16 *)((u8 *)*(u8 **)((u8 *)temp_s1 + 0) + 4) != 3) {
        var_a0 = 0;
    } else
        if (*(s16 *)((u8 *)*(u8 **)((u8 *)temp_s1 + 4) + 4) != 3) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    if (var_a0 != 1 || *(s32 *)((u8 *)temp_s1 + 0x414) == 0) {
        *(s32 *)((u8 *)temp_s1 + 0x414) = (s32)(*(s32 *)((u8 *)temp_s1 + 0x414) + 1);
        return;
    }
    if ((s32)func_002C04A0() << 0x30 >> 0x30 != 1 && (s32)func_002C04A0() << 0x30 >> 0x30 != 1) {
        *(u8 **)((u8 *)temp_s0 + 8) = (u8 *)*(u8 **)((u8 *)*(u8 **)((u8 *)temp_s0 + 0) + 0x54);
        temp_s0 = gOptionWork;
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)temp_s0 + 4) + 0x54);
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
        *(u8 **)((u8 *)*(u8 **)((u8 *)temp_s0 + 0) + 0x54) = NULL;
        *(s32 *)((u8 *)*(u8 **)((u8 *)temp_s0 + 4) + 0x54) = 0;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        func_00264140(-1, 0);
        func_002DE5A0();
        *(s32 *)((u8 *)temp_s1 + 0x3A4) = 0;
        amAdx_SetVolume(0, D_004E0610);
        amAdx_Pause(0, 0);
        amAdx_PlayAfs(0, 0x210AA, 0);
        var_v1 = (int *)&func_002DFE20;
        if (&func_002DFE20 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
