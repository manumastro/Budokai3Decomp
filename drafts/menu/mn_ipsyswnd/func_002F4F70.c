/* Draft (not built): func_002F4F70 at 0x002F4F70, size 0x1B0, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x1B0
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4F70.s */

// src/menu/mn_ipsyswnd.c func_002F4F70 size diff=45/113
s32 func_0022D860(s32, s32);
extern s8 D_004B4B63;
extern char D_00492FCE[];
void func_002F4F70(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0_2;
    s32 var_s2;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s1;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gOutputPass;
    func_00133B50(0, 0);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)gOutputPass + 0xC);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x6000);
    D_00470238 = 0;
    temp_s0_2 = *(s32 *)((u8 *)temp_s3 + 0);
    if (temp_s0_2 != 0) {
        func_0022C060(temp_s0_2, 1.0f);
        func_0022CD00(temp_s0_2);
    }
    var_s2 = 0;
    if (*(s16 *)((u8 *)temp_s3 + 0xC0) == 2) {
        var_s1 = temp_s3;
        var_s0 = temp_s3;
        do {
            if (*(u16 *)((u8 *)var_s1 + 0xC2) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 0x24);
    }
    A2d_FlushList();
    if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x5000) {
        temp_s0_3 = gOutputPass;
        temp_a0_3 = *(s32 *)((u8 *)temp_s0_3 + 0xC);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x6000);
        D_00470238 = 0;
        temp_a0_4 = *(s32 *)((u8 *)temp_s3 + 0);
        if (temp_a0_4 != 0) {
            func_0022D0E0((u8 *) temp_a0_4, 1);
        }
        *(s32 *)((u8 *)temp_s3 + 0) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 8)) + 0x14)) + 4), 0);
        *(s16 *)((u8 *)temp_s3 + 0xC0) = 3;
        *(s32 *)((u8 *)temp_s3 + 0xBC) = 0x41F00000;
        var_v1 = (int *)(&func_002F4E40);
        if (&func_002F4E40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002F4E40 (src/menu/mn_ipsyswnd.c), similarity 0.74.
 * It is the template below (not built). */
#if 0
void func_002F4E40(u8 *a0) {
    u8 *s4;
    u8 *s3;
    s32 s2;
    u16 *s1;
    u8 *s0;
    f32 f1;
    s32 v;

    s4 = a0;
    s3 = *(u8 **)(a0 + 0x30);
    s0 = gOutputPass;
    func_00133B50(0, 0);
    v = *(s32 *)(s0 + 0xC);
    D_00470704 = v;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x6000);
    s0 = gOutputPass;
    D_00470238 = 0;
    v = *(s32 *)(s0 + 0xC);
    D_00470704 = v;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x6000);
    D_00470238 = 0;
    s0 = *(u8 **)s3;
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    if (*(s16 *)(s3 + 0xC0) == 2) {
        s2 = 0;
        s1 = (u16 *)s3;
        s0 = s3;
        do {
            if (*(u16 *)((u8 *)s1 + 0xC2) != 0xFFFF) {
                func_0022CF70(*(s32 *)(s0 + 0x4));
            }
            s2++;
            s1 = s1 + 1;
            s0 = s0 + 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    f1 = *(f32 *)(s3 + 0xBC) - gFrameDelta;
    *(f32 *)(s3 + 0xBC) = f1;
    if (f1 <= 0.0f) {
        *(s16 *)(s3 + 0xC0) = 4;
        *(s32 *)(s4 + 0x1C) = 0;
    }
}
#endif
