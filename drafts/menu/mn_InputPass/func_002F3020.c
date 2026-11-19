/* Draft (not built): func_002F3020 at 0x002F3020, size 0x1E8, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x204, original 0x1E8
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F3020.s */

// src/menu/mn_InputPass.c func_002F3020 size diff=50/129
s32 func_002F4A70(s32);
void func_002F3020(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s2;
    void (*var_v0)(Task *);
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
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
    func_002F2D50(var_s3);
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)var_s3 + 0x60) < 5) {
        var_s1 = var_s3;
        var_s0 = var_s3;
        do {
            if (*(s16 *)((u8 *)var_s1 + 0x50) != -1) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 8);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (((s64) (func_002F4A80(*(s32 *)((u8 *)var_s3 + 0x3C)) << 0x30) >> 0x30) == 4) {
        if (func_002F4A70(*(s32 *)((u8 *)var_s3 + 0x3C)) != 0) {
            var_v0 = func_002F3210;
            if (func_002F3210 == NULL) {
                var_v0 = NULL;
            }
        } else {
            *(s8 *)((u8 *)var_s3 + 0x61) = 1;
            *(s32 *)((u8 *)var_s3 + 0x40) = 0x41A00000;
            *(u8 *)((u8 *)var_s3 + 0x60) = 5U;
            var_s0 = gInputName;
            temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x10);
            D_00470704 = temp_a0_2;
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_2, 0x5000);
            D_00470238 = 0;
            temp_a0_3 = *(u8 **)((u8 *)var_s3 + 0);
            if (temp_a0_3 != NULL) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(u8 **)((u8 *)var_s3 + 0) = func_0022D860(0.0f, *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xC)) + 0x14)) + 0xC));
            temp_a0_4 = *(u8 **)((u8 *)var_s3 + 0x28);
            if (temp_a0_4 != NULL) {
                func_0022D0E0(temp_a0_4, 1);
                *(u8 **)((u8 *)var_s3 + 0x28) = NULL;
            }
            temp_a0_5 = *(u8 **)((u8 *)var_s3 + 0x2C);
            if (temp_a0_5 != NULL) {
                func_0022D0E0(temp_a0_5, 1);
                *(u8 **)((u8 *)var_s3 + 0x2C) = NULL;
            }
            var_v0 = func_002F2F00;
            if (func_002F2F00 == NULL) {
                var_v0 = NULL;
            }
        }
        *(void (**)(Task *))((u8 *)var_s4 + 0x1C) = var_v0;
        func_002F4A90(*(s32 *)((u8 *)var_s3 + 0x3C));
        *(s32 *)((u8 *)var_s3 + 0x3C) = 0;
    }
}

/* Similar function already in C: func_002F3C60 (src/menu/mn_InputPass.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
void func_002F3C60(Task *a0) {
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
    func_002F2D50(s3);
    if (*(u8 *)(s3 + 0x60) < 5) {
        s2 = 0;
        s1 = (u16 *)s3;
        s0 = s3;
        do {
            if (*(s16 *)((u8 *)s1 + 0x50) != 0xFFFF) {
                func_0022CF70(*(s32 *)(s0 + 0x4));
            }
            s2++;
            s1 = s1 + 1;
            s0 = s0 + 4;
        } while (s2 < 0x8);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    f1 = *(f32 *)(s3 + 0x40) - gFrameDelta;
    *(f32 *)(s3 + 0x40) = f1;
    if (f1 <= 0.0f) {
        s0 = (u8 *)gInputName;
        v = *(s32 *)(s0 + 0x10);
        D_00470704 = v;
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x5000);
        D_00470238 = 0;
        if (*(void **)(s3 + 0x28) != 0) {
            func_0022D0E0(*(void **)(s3 + 0x28), 1);
        }
        *(void **)(s3 + 0x28) = func_0022D670(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x1C) + 0x108));
        if (*(void **)(s3 + 0x2C) != 0) {
            func_0022D0E0(*(void **)(s3 + 0x2C), 1);
        }
        *(void **)(s3 + 0x2C) = func_0022D670(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x1C) + 0x10));
        *(u8 *)(s3 + 0x60) = 2;
        *(void **)(s4 + 0x1C) = ((void *)func_002F3210 == 0) ? 0 : (void *)func_002F3210;
    }
}
#endif
