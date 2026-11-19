/* Draft (not built): func_002C3B40 at 0x002C3B40, size 0x1E0, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x1E0
 * Original: asm/nonmatchings/story/str_status/func_002C3B40.s */

// src/story/str_status.c func_002C3B40 size diff=59/124
u32 func_0012EAE0(s32);
s32 func_00229800(s32, s32 *, s32, s32);
extern s32 D_00456370;
extern f32 D_004E0610;
void func_002C3B40(u8 *arg0) {
    u8 sp[0x400];
    s32 sp40;
    s32 sp60;
    f32 temp_f0;
    s32 *temp_s0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 var_s2;
    void (*var_v1)();

    temp_s0 = *(s32 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x2000);
    D_00470238 = 0;
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 8);
    if (temp_s2 != 0) {
        func_0022C060(temp_s2, 1.0f);
        func_0022CD00(temp_s2);
    }
    func_002C0860(temp_s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_f0 = *(f32 *)((u8 *)temp_s0 + 0xC4) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0xC4) = temp_f0;
    if (temp_f0 <= 0.0f) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0)) + 0x1C)) + 0x94), &sp40, -1, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0 + 0x9C), &sp40);
        var_s2 = *(u8 *)((u8 *)temp_s0 + 0xAD) + 1;
        if (var_s2 >= 4) {
            var_s2 = 3;
        }
        *(u8 *)((u8 *)temp_s0 + 0xAE) = (u8) (func_0012EAE0(8) % (u32) var_s2);
        Obj_SetF3C(*(u8 **)((u8 *)temp_s0 + 0x9C), (s16) *(u8 *)((u8 *)temp_s0 + 0xAE));
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x210A7, 0);
        amAdx_Pause(0, 0);
        *(s64 *)((u8 *)(&sp60) + 0) = (s64) *(s64 *)((u8 *)(&D_00456370) + 0);
        *(f32 *)((u8 *)(&sp60) + 8) = (f32) *(f32 *)((u8 *)(&D_00456370) + 8);
        *(s32 *)((u8 *)temp_s0 + 0xC8) = amAdx_PlayAfs(1, *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s0 + 0xAE) * 4) + sp) + 0x60) | 0x20000, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s0 + 0xC8), *D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 0xC8), 0);
        var_v1 = func_002C32C0;
        *(s8 *)((u8 *)temp_s0 + 0xAF) = 1;
        if (func_002C32C0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
