/* Draft (not built): func_00294A10 at 0x00294A10, size 0x850, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); void *, void *, void *, void *, int, int, int)' @ 459: func_0028EE90(D_005AA5A0, &D_005AA5CC, &D_005AA5D8, &D_005AA5E4);
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00294A10.s */

// src/unk/unk_2918A0.c func_00294A10 cerr diff=-1/0
s32 Help_Open(s32, s32, s32);
s32 SklEdit_Open(s32, s8 *, s32, s32);
s32 SoundRpc_SetVolume(s32, s32, s32, f32);
s32 StrStatus_Dispatch(s32 *);
s32 func_0028EBB0(void *, s32, s32, s32);
s32 func_0028EC10(void *, s32, s32, s32);
s32 func_002A94B0(s32);
s32 func_002B4E40(s32, s32 *, s32, s32);
s32 func_002B5030(s32, s8, s8);
extern s32 D_00453E30;
extern s32 D_00453E50;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s8 D_00511450;
extern s32 D_005AA5B0;
extern void *D_005AA5B4;
extern void *D_005AA5B8;
extern s32 D_005AA620;
extern s32 D_005AA634;
extern void *D_005AA638;
extern s32 D_005AA63C;
extern s32 D_005AA644;
extern s32 D_005AA66C;
extern void Fade_SetRequest();
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_002BD6B0(void *);
extern char D_00511479[];
extern void Ball_Start(void);
extern void func_002BFC50(void);
extern void func_002934F0(void);
extern void func_00292A40(void);
void func_00294A10(u8 *arg0) {
    s8 sp40;
    s16 sp42;
    s8 sp48;
    s16 sp4A;
    s32 sp60;
    s16 sp74;
    s32 sp90;
    s32 spC0;
    s32 spD0;
    s32 spD4;
    s32 spF0;
    s8 sp110;
    s8 sp111;
    s8 sp112;
    s8 sp113;
    s8 sp114;
    s32 sp115;
    s32 sp11C;
    s32 sp120;
    s32 sp124;
    s32 sp128;
    s32 sp12C;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    s32 sp140;
    s32 *var_v1_4;
    s16 *var_a2;
    s32 *var_a1;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a3;
    s32 var_s0;
    u16 temp_a0;
    void (*var_v1)();
    void (*var_v1_2)();
    void (*var_v1_3)();
    void (*var_v1_5)();
    u8 **temp_s1_2;
    u8 **temp_s2;

    func_00291BF0();
    temp_a2 = D_004B4B63 * 0xB8;
    temp_a0 = *(D_00492FCE + temp_a2);
    if (temp_a0 & 1) {
        Help_Open(0x40000 | (0xC0040 << 0x20), (1 << D_004B4B63) & 0xFF, temp_a2);
        return;
    }
    if (temp_a0 & 0x1008) {
        SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s128 *)((u8 *)(&sp90) + 0) = (s128) *(s128 *)((u8 *)(&D_00453E50) + 0);
        *(s128 *)((u8 *)(&sp90) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453E50) + 0x10);
        *(s64 *)((u8 *)(&sp90) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00453E50) + 0x20);
        func_0028EE90(D_005AA5A0, &D_005AA5CC, &D_005AA5D8, &D_005AA5E4);
        func_0028EC10(D_005AA5B4, D_005AA5CC, 0x25, 0);
        func_0028EBB0(D_005AA5B4, 0, D_005AA5CC, 0x25);
        func_0028EC10(D_005AA5B8, D_005AA5CC, 0x26, 0);
        func_0028EBB0(D_005AA5B8, 0, D_005AA5CC, 0x26);
        if (D_005AA5F4 != 0) {
            func_0022D0E0((s32)(D_005AA5F4), 1);
            D_005AA5F4 = 0;
        }
        if (D_005AA5BC != NULL) {
            amTask_Kill((s32)((void *)(D_005AA5BC)));
            D_005AA5BC = NULL;
        }
        var_v1 = func_00294960;
        if (func_00294960 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_a0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        switch (D_005AA634) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_a3 = 0;
            spF0 = 0;
            var_a1 = &spF0;
            var_a2 = (s16 *)(D_005AA604 + 0x11F0);
            do {
                if (*var_a2 != -1) {
                    spF0 += 1;
                }
                var_a3 += 1;
                *(s32 *)((u8 *)var_a1 + 4) = (s32) *var_a2;
                var_a2 += 2;
                var_a1 += 4;
            } while (var_a3 < 7);
            SklEdit_Open(0xB000, (s8 *)(D_00511479[0]), 0, 0x303000);
            func_002B5030(0, D_004B4B63, D_00511450);
            func_002B4E40(0, &spF0, 0, 0);
            var_v1_2 = func_002934F0;
            if (func_002934F0 == NULL) {
                var_v1_2 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        case 1:                                     /* switch 1 */
            sp110 = D_00511450;
            sp111 = *(s8 *)((u8 *)D_005AA604 + 0x11E1);
            sp112 = *(s8 *)((u8 *)D_005AA604 + 0x11E3);
            sp113 = *(s8 *)((u8 *)D_005AA604 + 0x11E2);
            sp114 = *(s8 *)((u8 *)D_005AA604 + 0x11E7);
            *(s8 *)((u8 *)(&sp115) + 0) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E8);
            *(s8 *)((u8 *)(&sp115) + 1) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E9);
            *(s8 *)((u8 *)(&sp115) + 2) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EA);
            *(s8 *)((u8 *)(&sp115) + 3) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EB);
            *(s8 *)((u8 *)(&sp115) + 4) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EC);
            *(s8 *)((u8 *)(&sp115) + 5) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11ED);
            *(s8 *)((u8 *)(&sp115) + 6) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EE);
            sp11C = *(s32 *)((u8 *)D_005AA604 + 0x1200);
            sp120 = 0;
            sp124 = 0;
            sp128 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F0);
            sp12C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F2);
            sp130 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F4);
            sp134 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F6);
            sp138 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F8);
            sp13C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FA);
            sp140 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FC);
            func_002BD6B0(&sp110);
            spD0 = 2;
            spD4 = 0;
            StrStatus_Dispatch(&spC0);
            Fade_SetRequest(0xA, StrStatus_OpenScene, 0);
            var_v1_3 = func_002935F0;
            if (func_002935F0 == NULL) {
                var_v1_3 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_3;
            return;
        case 2:                                     /* switch 1 */
            D_005AA638 = NULL;
            *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00453E50) + 0);
            *(s128 *)((u8 *)(&sp60) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453E50) + 0x10);
            *(s64 *)((u8 *)(&sp60) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00453E50) + 0x20);
            sp74 = 0x20;
            func_0028EE90(D_005AA5A0, &D_005AA5CC, &D_005AA5D8, &D_005AA5E4);
            func_0028EC10(D_005AA5B4, D_005AA5CC, 0x25, 0);
            func_0028EBB0(D_005AA5B4, 0, D_005AA5CC, 0x25);
            func_0028EC10(D_005AA5B8, D_005AA5CC, 0x26, 0);
            func_0028EBB0(D_005AA5B8, 0, D_005AA5CC, 0x26);
            if (D_005AA5F4 != 0) {
                func_0022D0E0((s32)(D_005AA5F4), 1);
                D_005AA5F4 = 0;
            }
            if (D_005AA5BC != NULL) {
                amTask_Kill((s32)((void *)(D_005AA5BC)));
                D_005AA5BC = NULL;
            }
            func_002A94B0(0x40000000);
            D_005AA620 = 0;
            D_005AA66C = 0;
            D_005AA640 = 0;
            D_005AA63C = 0;
            temp_s0 = (s32)(D_005AA664);
            D_005AA664 = 0;
            *(s32 *)((u8 *)D_005AA604 + 0x11D4) = -1;
            *(s32 *)((u8 *)D_005AA604 + 0x11D8) = -1;
            D_005AA644 = 0;
            if (D_005AA638 != NULL) {
                *(f32 *)((u8 *)D_005AA604 + 0x11C0) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x10);
                *(f32 *)((u8 *)D_005AA604 + 0x11C8) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x18);
            }
            func_002BFC50();
            Ball_Start();
            var_v1_4 = (s32 *)(&func_00292A40);
            if (&func_00292A40 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)(*D_005AA5A0) + 0x1C) = var_v1_4;
            var_v1_5 = func_002929A0;
            D_005AA664 = temp_s0;
            if (func_002929A0 == NULL) {
                var_v1_5 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_5;
            return;
        }
    } else {
        temp_a0_2 = (*(&D_00492FD2 + temp_a2) | *(&D_00493032 + temp_a2)) & 0x50;
        temp_s1 = D_005AA634;
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 0x10:                                  /* switch 2 */
            var_s0 = (s32) (temp_s1 + 2) % 3;
block_54:
            SoundRpc_SetVolume(0, 0, temp_a2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00453E30) + 0);
            *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453E30) + 0x10);
            sp40 = temp_s1 + 4;
            sp42 = temp_s1 + 1;
            sp48 = var_s0 + 4;
            sp4A = var_s0 + 1;
            func_0028EE90(D_005AA5A0, &D_005AA5CC, &D_005AA5D8, &D_005AA5E4);
            if (temp_s1 != 0) {
                temp_s2 = (u8 **)(&D_005AA5B0 + (temp_s1 * 4));
                func_0028EC10(*temp_s2, D_005AA5CC, temp_s1 + 0x24, 0);
                func_0028EBB0(*temp_s2, 0, D_005AA5CC, temp_s1 + 0x24);
            }
            if (var_s0 != 0) {
                temp_s1_2 = (u8 **)(&D_005AA5B0 + (var_s0 * 4));
                func_0028EC10(*temp_s1_2, D_005AA5CC, var_s0 + 0x24, 0);
                func_0028EBB0(*temp_s1_2, 0, D_005AA5CC, var_s0 + 0x24);
                func_0028EBB0(D_005AA5BC, 0, D_005AA5CC, var_s0 + 0x24);
            }
            D_005AA634 = var_s0;
            return;
        case 0x40:                                  /* switch 2 */
            var_s0 = (s32) (temp_s1 + 1) % 3;
            goto block_54;
        }
    }
}
