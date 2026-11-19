/* Draft (not built): func_002E2850 at 0x002E2850, size 0x5F8, segment unk/unk_2E2290 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 238 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x568, original 0x5F8
 * Original: asm/nonmatchings/unk/unk_2E2290/func_002E2850.s */

// src/unk/unk_2E2290.c func_002E2850 size diff=238/346
s32 Help_Open(s32, s32, s32, u16);
s32 func_0026E000(s32 *, s32);
s32 func_002B4E40(s32, s32 *, s32, s32);
s32 func_002B5030(s32, s32, s8);
s32 func_002E8540(void *, s32, s8, s32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern s8 D_004B4B63;
extern char D_00492FCE[];
void func_002E2850(u8 *arg0, s32 arg2, u16 arg3) {
    u8 sp[0x400];
    s32 saved_reg_s3;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp88;
    f32 sp8C;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v0_4;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s3;
    s16 *var_a0_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3_2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_a0_5;
    s8 temp_s4;
    s8 temp_s4_2;
    s8 temp_s4_3;
    s8 temp_t0;
    s8 temp_v0;
    s8 temp_v1_2;
    s8 var_a2_3;
    u16 var_a3;
    u8 *temp_a0;
    u8 *temp_a0_4;
    u8 *temp_a0_6;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s3_2;

    var_s3 = saved_reg_s3;
    var_a2 = arg2;
    var_a3 = arg3;
    var_v1 = 0;
    var_v0 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_t0 = *(s8 *)((u8 *)temp_s1 + 3);
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 0xC);
    var_a0 = 0;
    if (temp_t0 & 1) {
        var_a3 = D_00492FD2;
        var_v0 = 1 & 0xFFFF;
        var_a2 = (var_a3 | D_00493032) & 0xFFFF;
        var_a0 = (0 | var_a2) & 0xFFFF;
        var_v1 = (0 | *D_00492FCE) & 0xFFFF;
    }
    if (temp_t0 & 2) {
        var_a3 = D_0049308A;
        var_v0 = (var_v0 | 2) & 0xFFFF;
        var_a2 = (var_a3 | D_004930EA) & 0xFFFF;
        var_a0 = (var_a0 | var_a2) & 0xFFFF;
        var_v1 = (var_v1 | D_00493086) & 0xFFFF;
    }
    if (var_v1 & 0xFFFF & 1) {
        Help_Open(0x40000 | (0x800040 << 0x20), var_v0 & 0xFF, var_a2, var_a3);
        var_a0 = 0;
        var_v1 = 0;
    }
    temp_v1 = var_v1 & 0xFFFF;
    if (temp_v1 & 0x4000) {
        SoundRpc_SetVolume(0, 0,(*(f32 *)(D_004E0614)));
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        temp_v0 = *(s8 *)((u8 *)temp_s1 + 0);
        if (temp_v0 != 1) {
            if (temp_v0 != 0) {

            } else {
                temp_s3 = (unsigned char *)(gCsSubArena);
                temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
                D_00470704 = temp_a0;
                D_0047070C = 0x6000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0, 0x6000);
                D_00470238 = 0;
                sp8C = (*(f32 *)(&D_00470190));
                temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 0x10);
                temp_s4 = *(s8 *)((u8 *)temp_s1 + 2);
                if (temp_a0_2 != 0) {
                    func_0022D0E0((void *)(temp_a0_2), 1);
                }
                *(s32 *)((u8 *)temp_s1 + 0x10) = (int)(func_0022D670((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C) + (*(s16 *)((u8 *)((((s64) ((s64) temp_s4 << 0x38) >> 0x38) * 2) + sp) + 0x8C) * 4))), 0));
                temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 0x1C);
                if (temp_a0_3 != 0) {
                    func_0022D0E0((void *)(temp_a0_3), 1);
                    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
                }
                temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0x78);
                var_a3_2 = 0;
                var_a2_2 = 0;
                var_a1 = 0;
                var_a0_2 = (short *)(temp_a0_4 + (*(s8 *)((u8 *)temp_a0_4 + 0xB60) * 0xE) + 0x44);
                do {
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x78) + var_a1) + 0xB72) = (s16) *var_a0_2;
                    if (*var_a0_2 != 0) {
                        var_a3_2 = (var_a3_2 + 1) & 0xFF;
                    }
                    var_a2_2 += 1;
                    var_a0_2 += 2;
                    var_a1 += 2;
                } while (var_a2_2 < 7);
                *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x78)) + 0xB70) = (s16) (var_a3_2 & 0xFF);
                temp_a0_5 = *(s8 *)((u8 *)temp_s1 + 2);
                var_a2_3 = temp_a0_5;
                if (D_004B4B59 == 3) {
                    var_a2_3 = -1;
                } else if (D_004B4B59 == 1) {
                    var_a2_3 = D_004B4B63;
                }
                func_002E8540(*(u8 **)((u8 *)temp_s0 + 0x78), temp_a0_5 & 0xFF, var_a2_3, var_a3_2);
                *(s32 *)((u8 *)temp_s1 + 8) = 0x41F00000;
                var_v0_2 = (int *)(&func_002E2690);
                *(s8 *)((u8 *)temp_s1 + 4) = 3;
                if (&func_002E2690 == NULL) {
                    var_v0_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
            }
        } else {
            temp_s4_2 = *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x78)) + 0xB60);
            if (((s32)(D_005C4120) != (s32)(2)) && ((s32)(D_005C4120) != (s32)(1))) {
                if (D_005C4120 != 0) {

                } else {
                    var_s3 = 0;
                }
            } else {
                var_s3 = (*(s8 *)((u8 *)temp_s1 + 2) == 0) ? 1 : 2;
            }
            temp_v1_2 = *(s8 *)((u8 *)temp_s1 + 3);
            var_a1_2 = 1;
            if (temp_v1_2 == 1) {
                var_a1_2 = 0;
            } else if (temp_v1_2 == 2) {

            } else {
                var_a1_2 = 2;
            }
            func_002B5030(var_s3, var_a1_2, temp_s4_2);
            temp_v0_2 = temp_s4_2 * 0xE;
            sp64 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x44);
            sp68 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x46);
            sp6C = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x48);
            sp70 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x4A);
            sp74 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x4C);
            sp78 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x4E);
            sp7C = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)temp_s0 + 0x78)) + 0x50);
            sp60 = 7;
            switch (D_004B4B41) {
            case 1:
                var_a1_3 = 0x40;
                break;
            case 2:
                var_a1_3 = 0x80;
                break;
            case 3:
                var_a1_3 = 0x10;
                break;
            default:
            case 0:
            case 4:
            case 5:
            case 6:
                var_a1_3 = 0xF0;
                break;
            }
            func_0026E000(&sp60, var_a1_3);
            func_002B4E40(var_s3, &sp60, 0, 0);
            var_v0_3 = (int *)(&func_002E2700);
            if (&func_002E2700 == NULL) {
                var_v0_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
        }
    } else if (temp_v1 & 0x1000) {
        SoundRpc_SetVolume(0, 0,(*(f32 *)(D_004E0614)));
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        temp_s3_2 = (unsigned char *)(gCsSubArena);
        temp_a0_6 = *(u8 **)((u8 *)temp_s3_2 + 0xC);
        D_00470704 = temp_a0_6;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_6, 0x6000);
        D_00470238 = 0;
        sp88 = (*(f32 *)(&D_00470190));
        temp_a0_7 = *(s32 *)((u8 *)temp_s1 + 0x10);
        temp_s4_3 = *(s8 *)((u8 *)temp_s1 + 2);
        if (temp_a0_7 != 0) {
            func_0022D0E0((void *)(temp_a0_7), 1);
        }
        *(s32 *)((u8 *)temp_s1 + 0x10) = (int)(func_0022D670((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3_2 + 8)) + 0x1C) + (*(s16 *)((u8 *)((((s64) ((s64) temp_s4_3 << 0x38) >> 0x38) * 2) + sp) + 0x88) * 4))), 0));
        temp_a0_8 = *(s32 *)((u8 *)temp_s1 + 0x1C);
        if (temp_a0_8 != 0) {
            func_0022D0E0((void *)(temp_a0_8), 1);
            *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
        }
        *(s32 *)((u8 *)temp_s1 + 8) = 0x41F00000;
        *(s8 *)((u8 *)temp_s1 + 4) = 4;
        var_v0_4 = (int *)(&func_002E2630);
        if (&func_002E2630 == NULL) {
            var_v0_4 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_4;
    } else if (var_a0 & 0xFFFF & 0x50) {
        SoundRpc_SetVolume(0, 0,(*(f32 *)(D_004E0614)));
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        if (*(s8 *)((u8 *)temp_s1 + 0) != 0) {
            *(s8 *)((u8 *)temp_s1 + 0) = 0;
        } else {
            *(s8 *)((u8 *)temp_s1 + 0) = 1;
        }
    }
    *(s8 *)((u8 *)temp_s0 + 0xC) = 1;
    func_002E2290((Work *)(temp_s1));
}
