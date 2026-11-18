/* Draft (not built): func_0030FB00 at 0x0030FB00, size 0x42C, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  to 'int' mwccps2.exe Compiler: @ 409: 32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x14)) + 4)))))), 0);
 * Original: asm/nonmatchings/story/str_dataerase/func_0030FB00.s */

// src/story/str_dataerase.c func_0030FB00 cerr diff=-1/0
extern s32 func_0022D670(s32, f32);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00492FD2;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_0030FB00(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_a0;
    u16 temp_v1;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_14;
    u8 *temp_a0_15;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = D_004B4B63 * 0xB8;
    temp_v1 = *(D_00492FCE + temp_a0);
    if (temp_v1 & 0x4000) {
        if (*(u8 *)((u8 *)temp_s0 + 0xF) == 1) {
            *(s32 *)((u8 *)temp_s0 + 0x10) = 0x41A00000;
            temp_s2 = (u8 *)(D_0047099C);
            temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0xC);
            D_00470704 = (s32)(temp_a0_2);
            D_0047070C = 0x6000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0x6000);
            D_00470238 = 0;
            temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0);
            if (temp_a0_3 != NULL) {
                func_0022D0E0((s32)(temp_a0_3), 1);
            }
            *(u8 **)((u8 *)temp_s0 + 0) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x14)) + 4))))))), 0);
            temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 4);
            if (temp_a0_4 != NULL) {
                func_0022D0E0((s32)(temp_a0_4), 1);
                *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            }
            var_v0 = (s32 *)(&func_0030F350);
            if (&func_0030F350 == NULL) {
                var_v0 = NULL;
            }
        } else {
            *(s32 *)((u8 *)temp_s0 + 0x10) = 0x41A00000;
            temp_s2_2 = (u8 *)(D_0047099C);
            temp_a0_5 = *(u8 **)((u8 *)temp_s2_2 + 0xC);
            D_00470704 = (s32)(temp_a0_5);
            D_0047070C = 0x6000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_5), 0x6000);
            D_00470238 = 0;
            temp_a0_6 = *(u8 **)((u8 *)temp_s0 + 0);
            if (temp_a0_6 != NULL) {
                func_0022D0E0((s32)(temp_a0_6), 1);
            }
            *(u8 **)((u8 *)temp_s0 + 0) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2_2 + 8)) + 0x14)) + 4))))))), 0);
            temp_a0_7 = *(u8 **)((u8 *)temp_s0 + 4);
            if (temp_a0_7 != NULL) {
                func_0022D0E0((s32)(temp_a0_7), 1);
                *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            }
            var_v0 = (s32 *)(&func_0030F9C0);
            if (&func_0030F9C0 == NULL) {
                var_v0 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x16, 0);
        }
    } else if (temp_v1 & 0x1000) {
        *(s32 *)((u8 *)temp_s0 + 0x10) = 0x41A00000;
        temp_s2_3 = (u8 *)(D_0047099C);
        temp_a0_8 = *(u8 **)((u8 *)temp_s2_3 + 0xC);
        D_00470704 = (s32)(temp_a0_8);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_8), 0x6000);
        D_00470238 = 0;
        temp_a0_9 = *(u8 **)((u8 *)temp_s0 + 0);
        if (temp_a0_9 != NULL) {
            func_0022D0E0((s32)(temp_a0_9), 1);
        }
        *(u8 **)((u8 *)temp_s0 + 0) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 8)) + 0x14)) + 4))))))), 0);
        temp_a0_10 = *(u8 **)((u8 *)temp_s0 + 4);
        if (temp_a0_10 != NULL) {
            func_0022D0E0((s32)(temp_a0_10), 1);
            *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        }
        var_v0_2 = (s32 *)(&func_0030F350);
        if (&func_0030F350 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x16, 0);
        }
    } else if ((*(&D_00492FD2 + temp_a0) | *(&D_00493032 + temp_a0)) & 0x50) {
        if (*(u8 *)((u8 *)temp_s0 + 0xF) != 0) {
            *(u8 *)((u8 *)temp_s0 + 0xF) = 0U;
        } else {
            *(u8 *)((u8 *)temp_s0 + 0xF) = 1U;
        }
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        temp_s1 = (u8 *)(D_0047099C);
        temp_a0_11 = *(u8 **)((u8 *)temp_s1 + 0xC);
        D_00470704 = (s32)(temp_a0_11);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_11), 0x6000);
        D_00470238 = 0;
        temp_a0_12 = *(u8 **)((u8 *)temp_s0 + 4);
        if (temp_a0_12 != NULL) {
            func_0022D0E0((s32)(temp_a0_12), 1);
        }
        *(u8 **)((u8 *)temp_s0 + 4) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x1C) + ((*(u8 *)((u8 *)temp_s0 + 0xF) + 0xE) * 4)), 0);
    }
    temp_s1_2 = (u8 *)(D_0047099C);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0_13 = *(u8 **)((u8 *)temp_s1_2 + 0xC);
    D_00470704 = (s32)(temp_a0_13);
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_13), 0x6000);
    D_00470238 = 0;
    temp_a0_14 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0_14 != NULL) {
        func_0022C060((s32)(temp_a0_14), 0x3F800000);
        func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0))));
    }
    temp_a0_15 = *(u8 **)((u8 *)temp_s0 + 4);
    if (temp_a0_15 != NULL) {
        func_0022C060((s32)(temp_a0_15), 0x3F800000);
        func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 4))));
    }
}
