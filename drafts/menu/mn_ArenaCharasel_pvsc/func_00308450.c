/* Draft (not built): func_00308450 at 0x00308450, size 0xA4, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xA4
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00308450.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00308450 size diff=16/46
s32 func_00229800(s32, f32 *, s32, s32);
void func_00308450(u8 *arg0) {
    s32 sp34;
    f32 sp30;
    f32 temp_f0;
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(temp_s1);
    temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x40) - gFrameDelta;
    *(f32 *)((u8 *)temp_s1 + 0x40) = temp_f0;
    if (temp_f0 <= 0.0f) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x1C)) + 0x24), &sp30, -1, 0);
        *(f32 *)((u8 *)temp_s1 + 0x34) = sp30;
        *(f32 *)((u8 *)temp_s1 + 0x38) = sp34;
        *(s32 *)((u8 *)temp_s1 + 0x3C) = 0x42700000;
        func_00307AF0(temp_s1);
        var_v1 = func_003081F0;
        if (func_003081F0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: DataLoad_TaskWait (src/menu/mn_dataload.c), similarity 0.72.
 * It is the template below (not built). */
#if 0
void DataLoad_TaskWait(u8 *a0) {
    u8 *s0;
    u8 *s1;
    u8 *v;
    f32 f;
    f32 loc[8];
    s0 = a0;
    s1 = *(u8 **)(a0 + 0x34);
    func_00265800(s1);
    f = *(f32 *)(s1 + 0x34) - 1.0f;
    *(f32 *)(s1 + 0x34) = f;
    if (f <= 0.0f) {
        v = *(u8 **)s1;
        v = *(u8 **)(v + 0x1C);
        func_00229800(*(void **)(v + 0x1B4), loc, -1, 0.0f);
        Obj_CopyVec4F50(*(s32 *)(s1 + 0x4C), loc);
        Obj_SetF3C(*(s32 *)(s1 + 0x4C), 0);
        *(s32 *)(s1 + 0x50) = amAdx_PlayAfs(1, 0x210E9, 0);
        amAdx_SetVolume(*(s32 *)(s1 + 0x50), D_004E0618[0]);
        amAdx_Pause(*(s32 *)(s1 + 0x50), 0);
        *(s8 *)(s1 + 0x54) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_00265BF0 == 0) ? 0 : (void *)func_00265BF0;
    }
}
#endif
