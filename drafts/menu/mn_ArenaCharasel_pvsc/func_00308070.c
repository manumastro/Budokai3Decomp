/* Draft (not built): func_00308070 at 0x00308070, size 0xBC, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 14 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC8, original 0xBC
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00308070.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00308070 size diff=14/50
extern s32 ArenaList_Create(s16);
extern s16 D_005C4136[];
s32 func_00229800(s32, f32 *, s32, s32);
extern void func_00307F10(void);
void func_00308070(u8 *arg0) {
    s32 sp34;
    f32 sp30;
    f32 temp_f1;
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(temp_s1);
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x40) - gFrameDelta;
    *(f32 *)((u8 *)temp_s1 + 0x40) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s32 *)((u8 *)temp_s1 + 0x10) = ArenaList_Create(*D_005C4136);
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x1C)) + 0x24), &sp30, -1, 0);
        *(f32 *)((u8 *)temp_s1 + 0x34) = sp30;
        *(f32 *)((u8 *)temp_s1 + 0x38) = sp34;
        *(s32 *)((u8 *)temp_s1 + 0x3C) = 0x42700000;
        func_00307AF0(temp_s1);
        var_v1 = func_00307F10;
        if (func_00307F10 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: Logomark_StopMovie (src/menu/mn_Logomark.c), similarity 0.63.
 * It is the template below (not built). */
#if 0
void Logomark_StopMovie(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 f;
    f32 f1;

    s0 = a0;
    s1 = s0 + 0x30;
    f = 1.0f;
    if (*(s32 *)(s0 + 0x38) == 1) {
        f = *(f32 *)(s1 + 4) / 50.0f;
    }
    func_002E7400(s1, f);
    f1 = *(f32 *)(s1 + 4) - gFrameDelta;
    *(f32 *)(s1 + 4) = f1;
    if (f1 <= 0.0f) {
        amSofdec_Stop(*(s32 *)(s1 + 0xC));
        *(void **)(s0 + 0x1C) = ((void *)Logomark_EndMovie == 0) ? 0 : (void *)Logomark_EndMovie;
    }
}
#endif
