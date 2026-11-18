/* Draft (not built): func_002695B0 at 0x002695B0, size 0x170, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x170
 * Original: asm/nonmatchings/menu/mn_vsmode/func_002695B0.s */

// src/menu/mn_vsmode.c func_002695B0 size diff=41/99
extern void *D_004707DC;
extern void amCdFs_Close(void *, s32);
s32 A2d_SetMode(s32);
s32 Fade_Request(s32, s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_00229800(s32, s32 *, s32, s32);
extern s16 D_004E05F8;
extern f32 D_004E0610;
extern void amFile_Load(void *);
extern void Obj_CopyVec4F50(void *, void *);
extern void func_0022E0B0(void *);
extern void amAdx_Pause();
extern void func_002693E0(void);
void func_002695B0(u8 *arg0) {
    s32 sp40;
    s32 *var_v1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = D_004707DC;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4) == 3) {
        *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = 0;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
        *(s32 *)((u8 *)temp_s0 + 0) = 0;
        *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 0xC));
        Fade_Request(-1, 0, 0);
        temp_s0_2 = D_004707DC;
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x1C)) + 0x74), &sp40, -1, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s1 + 0x44), &sp40);
        *(s32 *)((u8 *)temp_s1 + 0) = 0;
        func_00268860(temp_s1);
        *(s8 *)((u8 *)temp_s1 + 0x51) = 1;
        *(s32 *)((u8 *)temp_s1 + 0x48) = 0x42200000;
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x210A5, 0);
        amAdx_Pause(0, 0);
        var_v1 = (s32 *)(&func_002693E0);
        if (&func_002693E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
