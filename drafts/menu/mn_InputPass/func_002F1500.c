/* Draft (not built): func_002F1500 at 0x002F1500, size 0x150, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F1500.s */

void func_002F1500(u8 *arg0) {
    u8 *temp_s3;
    s32 var_s2;
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *var_s0;
    u8 *var_s1;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gInputName;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x10);
    D_00470704 = (int)temp_a0;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)temp_a0, 0x5000);
    D_00470238 = 0;
    func_002F0BC0(temp_s3);
    var_s2 = 0;
    if ((s32)*(u8 *)((u8 *)temp_s3 + 0x170) >= 5) {
        goto block_6;
    }
    var_s0 = temp_s3;
    var_s1 = temp_s3;
    loop_2:
    if (*(u16 *)((u8 *)var_s1 + 0x128) == 0xFFFF) {
        goto block_4;
    }

    func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
    block_4:
    var_s2 += 1;

    var_s1 += 2;
    var_s0 += 4;
    if (var_s2 < 0x24) {
        goto loop_2;
    }
    block_6:
    A2d_FlushList();

    func_00133B50(0, 0);
    if (*(s32 *)((u8 *)gStrStatus + 0x27C) != 2) {
        goto block_9;
    }
    if (*(D_00492FCE + (s32)D_004B4B63 * 0xB8) & 0x4000) {
        goto block_10;
    }
    block_9:
    return;

    block_10:
    var_v1 = func_002F1300;

    *(s32 *)((u8 *)temp_s3 + 0x110) = IpSysWnd_Start(4, D_004B4B63);
    if (func_002F1300 != NULL) {
        goto block_12;
    }
    var_v1 = NULL;
    block_12:
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;

    return;
}

/* Similar function already in C: func_002F21B0 (src/menu/mn_InputPass.c), similarity 0.68.
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
