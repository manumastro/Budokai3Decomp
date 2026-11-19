/* Draft (not built): func_002F10F0 at 0x002F10F0, size 0x208, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x21C, original 0x208
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F10F0.s */

// src/menu/mn_InputPass.c func_002F10F0 size diff=57/135
extern void *func_0022D860(f32, void *);
void InputPass_CopyBuf(Task *t, void *dst);
u8 InputPass_GetPhase(Task *t);
void InputPass_TaskFree(u8 *task);
extern void StrStatus_Free(void);
extern void func_002BFD90(void);
void func_002F10F0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 var_s2;
    s64 temp_a0_2;
    void (*var_v0)();
    void (*var_v0_2)();
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s4;

    var_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s0 = gInputName;
    var_s4 = arg0;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0x10);
    D_00470704 = temp_a0;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x5000);
    D_00470238 = 0;
    func_002F0BC0(var_s3);
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)var_s3 + 0x170) < 5) {
        var_s1 = var_s3;
        var_s0 = var_s3;
        do {
            if (*(u16 *)((u8 *)var_s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0_2 = (s64) (InputPass_GetPhase((Task *)(*(s32 *)((u8 *)var_s3 + 0x114))) << 0x30) >> 0x30;
    switch (temp_a0_2) {                            /* irregular */
    case 6:
        InputPass_CopyBuf((Task *)(*(s32 *)((u8 *)var_s3 + 0x114)), (void *)(var_s3 + 0xCC));
        var_s0 = gInputName;
        var_s1 = *(u8 **)((u8 *)var_s4 + 0x30);
        temp_a0_3 = *(s32 *)((u8 *)var_s0 + 0x10);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x5000);
        D_00470238 = 0;
        temp_a0_4 = *(u8 **)((u8 *)var_s1 + 0);
        if (temp_a0_4 != NULL) {
            func_0022D0E0(temp_a0_4, 1);
        }
        *(u8 **)((u8 *)var_s1 + 0) = func_0022D860(0.0f, *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xC)) + 0x14)) + 4));
        temp_a0_5 = *(u8 **)((u8 *)var_s1 + 0x98);
        if (temp_a0_5 != NULL) {
            func_0022D0E0(temp_a0_5, 1);
            *(u8 **)((u8 *)var_s1 + 0x98) = NULL;
        }
        temp_a0_6 = *(u8 **)((u8 *)var_s1 + 0x9C);
        if (temp_a0_6 != NULL) {
            func_0022D0E0(temp_a0_6, 1);
            *(u8 **)((u8 *)var_s1 + 0x9C) = NULL;
        }
        StrStatus_Free();
        func_002BFD90();
        var_v0 = func_002F0FD0;
        if (func_002F0FD0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)var_s4 + 0x1C) = var_v0;
block_23:
        InputPass_TaskFree((u8 *)(*(s32 *)((u8 *)var_s3 + 0x114)));
        *(s32 *)((u8 *)var_s3 + 0x114) = 0;
        return;
    case 7:
        *(s32 *)((u8 *)var_s3 + 0x110) = IpSysWnd_Start(4);
        var_v0_2 = func_002F1300;
        if (func_002F1300 == NULL) {
            var_v0_2 = NULL;
        }
        *(void (**)())((u8 *)var_s4 + 0x1C) = var_v0_2;
        goto block_23;
    }
}

/* Similar function already in C: func_002F21B0 (src/menu/mn_InputPass.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
void func_002F21B0(Task *a0) {
    u8 *s4;
    u8 *s3;
    s32 s2;
    u16 *s1;
    u8 *s0;
    s32 v;
    f32 f1;

    s4 = (u8 *)a0;
    s3 = *(u8 **)((u8 *)a0 + 0x30);
    s0 = (u8 *)gInputName;
    A2d_FlushList();
    func_00133B50(0, 0);
    v = *(s32 *)(s0 + 0x10);
    D_00470704 = v;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x5000);
    D_00470238 = 0;
    D_00470238 = 0;
    func_002F0BC0(s3);
    if (*(u8 *)(s3 + 0x170) < 5) {
        s2 = 0;
        s1 = (u16 *)s3;
        s0 = s3;
        do {
            if (*(u16 *)((u8 *)s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(s32 *)(s0 + 0x4));
            }
            s2++;
            s1 = s1 + 1;
            s0 = s0 + 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    f1 = *(f32 *)(s3 + 0x118) - gFrameDelta;
    *(f32 *)(s3 + 0x118) = f1;
    if (f1 <= 0.0f) {
        s0 = (u8 *)gInputName;
        v = *(s32 *)(s0 + 0x10);
        D_00470704 = v;
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x5000);
        D_00470238 = 0;
        if (*(void **)(s3 + 0x98) != 0) {
            func_0022D0E0(*(void **)(s3 + 0x98), 1);
        }
        *(void **)(s3 + 0x98) = func_0022D670(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x1C) + 0x108));
        if (*(void **)(s3 + 0x9C) != 0) {
            func_0022D0E0(*(void **)(s3 + 0x9C), 1);
        }
        *(void **)(s3 + 0x9C) = func_0022D670(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x1C) + 0x10));
        *(u8 *)(s3 + 0x170) = 2;
        *(void **)(s4 + 0x1C) = ((void *)func_002F1770 == 0) ? 0 : (void *)func_002F1770;
    }
}
#endif
