/* Draft (not built): func_0030F420 at 0x0030F420, size 0x140, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x140
 * Original: asm/nonmatchings/story/str_dataerase/func_0030F420.s */

// src/story/str_dataerase.c func_0030F420 size diff=20/82
extern s32 func_0022D860(s32, f32);
extern void func_0022D0E0(s32, s32);
void func_0030F420(u8 *arg0) {
    s32 *var_v0;
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s1;
    s32 temp_s2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x10) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x10) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x10) = 20.0f;
        temp_s2 = D_0047099C;
        temp_a0 = *(s32 *)((u8 *)temp_s2 + 0xC);
        D_00470704 = temp_a0;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x6000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        *(s32 *)((u8 *)temp_s0 + 0) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x14)) + 0x14), 0.0f);
        var_v0 = (int *)(&func_0030F350);
        if (&func_0030F350 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    }
    temp_s1 = D_0047099C;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 0xC);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x6000);
    D_00470238 = 0;
    temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0);
    if (temp_a0_4 != 0) {
        func_0022C060(temp_a0_4, 1.0f);
        func_0022CD00(*(s32 *)((u8 *)temp_s0 + 0));
    }
    temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 4);
    if (temp_a0_5 != 0) {
        func_0022C060(temp_a0_5, 1.0f);
        func_0022CD00(*(s32 *)((u8 *)temp_s0 + 4));
    }
}

/* Similar function already in C: func_0030F650 (src/story/str_dataerase.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void func_0030F650(s32 *a0) {
    s32 *s1 = a0;
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s2;
    f32 t = *(f32 *)&s0[0x10 / 4] - gFrameDelta;
    *(f32 *)&s0[0x10 / 4] = t;
    if (t <= 0.0f) {
        s0[0x10 / 4] = 0x41F00000;
        s2 = (s32 *)D_0047099C;
        {
            s32 v = s2[0xC / 4];
            D_00470704 = v;
            D_0047070C = 0x6000;
            D_00470708 = 0;
            amModel_SetCurrent(v, 0x6000);
        }
        D_00470238 = 0;
        if (s0[0] != 0) {
            func_0022D0E0(s0[0], 1);
        }
        s0[0] = func_0022D860(((s32 *)((s32 *)s2[0x8 / 4])[0x14 / 4])[0x10 / 4], 0.0f);
        {
            void *f = func_0030F560;
            s1[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
    s1 = (s32 *)D_0047099C;
    A2d_FlushList();
    func_00133B50(0, 0);
    {
        s32 v = s1[0xC / 4];
        D_00470704 = v;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x6000);
    }
    D_00470238 = 0;
    if (s0[0] != 0) {
        func_0022C060(s0[0], 1.0f);
        func_0022CD00(s0[0]);
    }
    if (s0[1] != 0) {
        func_0022C060(s0[1], 1.0f);
        func_0022CD00(s0[1]);
    }
}
#endif
