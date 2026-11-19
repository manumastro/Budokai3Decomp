/* Draft (not built): func_002C1E10 at 0x002C1E10, size 0x178, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x178
 * Original: asm/nonmatchings/story/str_status/func_002C1E10.s */

// src/story/str_status.c func_002C1E10 size diff=48/102
void func_002C1E10(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a0_3;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
    D_00470704 = (int)(temp_a0_2);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x2000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 8);
    if (temp_s2 != NULL) {
        func_0022C060((s32)(temp_s2), 0x3F800000);
        func_0022CD00((s32)(temp_s2));
    }
    func_002C0860((s32 *)(temp_s0));
    A2d_FlushList();
    func_00133B50(0, 0);
    if (((s64) (func_0027DAB0((s32)(*(u8 **)((u8 *)temp_s0 + 0xA0))) << 0x38) >> 0x38) >= 7) {
        func_0027E120((s32)(*(u8 **)((u8 *)temp_s0 + 0xA0)));
        *(u8 **)((u8 *)temp_s0 + 0xA0) = NULL;
        *(u8 *)((u8 *)temp_s0 + 0xB2) = (u8) (*(u8 *)((u8 *)temp_s0 + 0xB2) - 1);
        temp_v0 = (*(u8 *)((u8 *)temp_s0 + 0xB2) * 0xC) + temp_s0;
        temp_a0_3 = *(s32 *)((u8 *)temp_v0 + 0x44);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
            *(s32 *)((u8 *)temp_v0 + 0x44) = 0;
        }
        temp_v1 = *(u8 *)((u8 *)temp_s0 + 0xB2);
        *(u8 **)((u8 *)temp_s0 + 0xA0) = (unsigned char *)(func_0027E2D0(3, 6, (temp_v1 + 1) & 0xFF, (s64) ((s64) temp_v1 << 0x38) >> 0x38, 0, 0, 0, 0));
        *(s8 *)((u8 *)temp_s0 + 0xAF) = 0xB;
        *(s32 *)((u8 *)temp_s0 + 0xC4) = 0x42700000;
        var_v1 = (int *)(&func_002C2470);
        if (&func_002C2470 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: StrStatus_TaskRequestScene (src/story/str_status.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void StrStatus_TaskRequestScene(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s2;
    s32 r;
    void *f;
    s32 v;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s2 = (s32 *)s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        D_005C4140[0] = *(u8 *)((char *)s0 + 0xAC);
        func_00304DC0((s32)D_005C4140, *(u8 *)((char *)s0 + 0xAB));
        Scene_Request(0x11, 0xFF);
        Scene_FadeTo(0xA, 0);
        f = (void *)func_002C1A00;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
