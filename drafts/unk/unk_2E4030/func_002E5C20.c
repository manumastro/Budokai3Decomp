/* Draft (not built): func_002E5C20 at 0x002E5C20, size 0x658, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); , int *)' does not match 'func_002E53B0(unsigned char *, short)' @ 590: func_002E53B0(temp_s3, temp_a1, var_a2, var_a3);
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E5C20.s */

// src/unk/unk_2E4030.c func_002E5C20 cerr diff=-1/0
s32 Help_Open(s32, s32, u8);
s32 SoundRpc_SetVolume(s32, s32, f32);
u32 func_0012EAE0(s32);
extern s32 D_00453490;
extern s32 D_00470838;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s32 D_004B4B50;
extern s8 D_004B4B56;
extern s8 D_004B4B5B;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern s16 D_005C9ED4;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_002E5980(void);
extern void func_002E5B10(void);
void func_002E5C20(u8 *arg0) {
    s32 *var_a2;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s16 temp_a0;
    s32 *var_a3;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_t0;
    s64 var_v0;
    u16 temp_a1;
    u8 temp_a0_6;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_v1;
    u8 var_a3_2;
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_a2_2;
    u8 *temp_s3;
    u8 *var_a2_2;

    var_s2 = 0;
    var_s1 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s0 = 0;
    func_002E4D60((Sub57 *)(temp_s3));
    if (*(u16 *)((u8 *)temp_s3 + 0xD0) & 0x80) {
        var_t0 = 0;
        var_a3 = &D_00470838;
        var_a2 = &D_0058F680;
        do {
            if ((*var_a3 & 0x7FFF) == 4) {
                D_004B4B50 |= *(u16 *)((u8 *)var_a2 + 0xA4);
            }
            var_t0 += 1;
            var_a2 = var_a2 + 0x7FFF + 0x5681;
            var_a3 += 4;
        } while (var_t0 < 2);
        *(u16 *)((u8 *)temp_s3 + 0xD4) = (u16) (*(u16 *)((u8 *)temp_s3 + 0xD4) | (u16) D_004B4B50);
        temp_a1 = *(u16 *)((u8 *)temp_s3 + 0xD4);
        if (*(u16 *)((u8 *)temp_s3 + 0xD2) != temp_a1) {
            func_002E53B0(temp_s3, temp_a1, var_a2, var_a3);
        }
    }
    temp_a2 = *(u8 *)((u8 *)temp_s3 + 0xCD);
    if (temp_a2 & 1) {
        var_s0 = 1 & 0xFF;
        var_s1 = (0 | *D_00492FCE) & 0xFFFF;
        var_s2 = (0 | ((D_00492FD2 | D_00493032) & 0xFFFF)) & 0xFFFF;
    }
    if (temp_a2 & 2) {
        var_s0 = (var_s0 | 2) & 0xFF;
        var_s1 = (var_s1 | D_00493086) & 0xFFFF;
        var_s2 = (var_s2 | ((D_0049308A | D_004930EA) & 0xFFFF)) & 0xFFFF;
    }
    if (var_s1 & 0xFFFF & 1) {
        Help_Open(0x01000000 | (0x820040 << 0x20), var_s0, temp_a2);
        var_s2 = 0;
        var_s1 = 0;
    }
    temp_s0 = var_s1 & 0xFFFF;
    if (temp_s0 & 0x6000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        D_004B4B56 = (s8) *(s16 *)((u8 *)temp_s3 + 0xF0);
        if (*(s16 *)((u8 *)temp_s3 + 0xF0) == 0xC) {
            *(s16 *)((u8 *)temp_s3 + 0xF0) = (s16) *(s16 *)((u8 *)(((func_0012EAE0(8) % (u32) (*(u8 *)((u8 *)temp_s3 + 0xF3) - 1)) * 2) + temp_s3) + 0xD6);
            var_v0 = (s64) (((func_0012EAE0(8) >> 2) & 1) << 0x30) >> 0x30;
        } else {
            var_v0 = 0;
            if (temp_s0 & 0x4000) {

            } else {
                var_v0 = 1;
            }
        }
        temp_a3 = *(s16 *)((u8 *)temp_s3 + 0xF0) * 4;
        temp_a2_2 = (unsigned char *)(&D_00453490 + temp_a3);
        temp_a0 = *((((s64) (var_v0 << 0x30) >> 0x30) * 2) + temp_a2_2);
        D_004B4B5B = (s8) temp_a0;
        D_005C9ED4 = temp_a0;
        *(s8 *)((u8 *)temp_s3 + 0xF4) = 4;
        *(s32 *)((u8 *)temp_s3 + 0x10C) = 0x420C0000;
        temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 4);
        D_00470704 = (int)(temp_a0_2);
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x7000, temp_a2_2, temp_a3);
        D_00470238 = 0;
        temp_a0_3 = *(s32 *)((u8 *)temp_s3 + 0x14);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 0);
        }
        *(s32 *)((u8 *)temp_s3 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x14)) + 0x10), 0);
        var_v1 = (int *)(&func_002E5980);
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x114)) + 0x34) = -1;
        *(s8 *)((u8 *)temp_s3 + 0xCE) = 0;
        if (&func_002E5980 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x114)) + 0x34) = -1;
        *(s8 *)((u8 *)temp_s3 + 0xCE) = 0;
        *(s32 *)((u8 *)temp_s3 + 0x10C) = 0x42700000;
        *(s32 *)((u8 *)temp_s3 + 0x2C) = 0;
        ArenaStageSel_CreateObj(temp_s3,(struct Ctx2E4 *)(-1));
        var_v1_2 = (int *)(&func_002E5690);
        if (&func_002E5690 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    if ((temp_s0 & 0x8000) && (*(s16 *)((u8 *)temp_s3 + 0xF0) != 0xC)) {
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 0xB, 0);
        }
        temp_a1_2 = *(u8 *)((u8 *)temp_s3 + 0xF3);
        var_a3_2 = 0;
        if ((s32) temp_a1_2 > 0) {
            var_a2_2 = temp_s3;
loop_39:
            if (*(s16 *)((u8 *)var_a2_2 + 0x38) == 0xC) {
                *(u8 *)((u8 *)temp_s3 + 0xF2) = var_a3_2;
                *(s16 *)((u8 *)temp_s3 + 0xF0) = 0xC;
                *(s32 *)((u8 *)temp_s3 + 0xFC) = (s32) *(s32 *)((u8 *)((var_a3_2 * 0xC) + temp_s3) + 0x34);
                *(s32 *)((u8 *)temp_s3 + 0xF8) = (s32) *(s32 *)((u8 *)temp_s3 + 0xFC);
                *(s32 *)((u8 *)temp_s3 + 0x100) = 0;
                *(s32 *)((u8 *)temp_s3 + 0x108) = 0;
                *(s8 *)((u8 *)temp_s3 + 0xF4) = 2;
                *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x114)) + 0x34) = (s16) *(s16 *)((u8 *)temp_s3 + 0xF0);
                *(s8 *)((u8 *)temp_s3 + 0xCE) = 0;
                temp_a0_4 = *(u8 **)((u8 *)temp_s3 + 4);
                D_00470704 = (int)(temp_a0_4);
                D_0047070C = 0x7000;
                D_00470708 = 0;
                amModel_SetCurrent((s32)(temp_a0_4), 0x7000, var_a2_2, var_a3_2);
                D_00470238 = 0;
                temp_a0_5 = *(s32 *)((u8 *)temp_s3 + 0x20);
                if (temp_a0_5 != 0) {
                    func_0022D0E0(temp_a0_5, 0);
                }
                *(s32 *)((u8 *)temp_s3 + 0x20) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x1C) + (*(((u8 *)&D_0046F4B8) + *(s16 *)((u8 *)temp_s3 + 0xF0)) * 4)), 0);
                return;
            }
            var_a3_2 += 1;
            var_a2_2 += 0xC;
            if ((s32) var_a3_2 >= (s32) temp_a1_2) {
                return;
            }
            goto loop_39;
        }
    } else {
        temp_s0_2 = var_s2 & 0xFFFF;
        if (temp_s0_2 & 0xA0) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xB, 0);
            }
            if (temp_s0_2 & 0x20) {
                temp_a0_6 = *(u8 *)((u8 *)temp_s3 + 0xF2);
                if ((s32) temp_a0_6 < (*(u8 *)((u8 *)temp_s3 + 0xF3) - 1)) {
                    *(u8 *)((u8 *)temp_s3 + 0xF2) = (u8) (temp_a0_6 + 1);
                } else {
                    *(u8 *)((u8 *)temp_s3 + 0xF2) = 0U;
                }
                *(s32 *)((u8 *)temp_s3 + 0x100) = (s32) *(s32 *)((u8 *)temp_s3 + 0x104);
            } else if (temp_s0_2 & 0x80) {
                temp_v1 = *(u8 *)((u8 *)temp_s3 + 0xF2);
                if ((s32) temp_v1 > 0) {
                    *(u8 *)((u8 *)temp_s3 + 0xF2) = (u8) (temp_v1 - 1);
                } else {
                    *(u8 *)((u8 *)temp_s3 + 0xF2) = (u8) (*(u8 *)((u8 *)temp_s3 + 0xF3) - 1);
                }
                *(s32 *)((u8 *)temp_s3 + 0x100) = (s32) -*(s32 *)((u8 *)temp_s3 + 0x104);
            }
            var_v1_3 = (int *)(&func_002E5B10);
            *(s16 *)((u8 *)temp_s3 + 0xF0) = (s16) *(s16 *)((u8 *)((*(u8 *)((u8 *)temp_s3 + 0xF2) * 0xC) + temp_s3) + 0x38);
            *(s32 *)((u8 *)temp_s3 + 0xFC) = (s32) *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s3 + 0xF2) * 0xC) + temp_s3) + 0x34);
            *(s32 *)((u8 *)temp_s3 + 0x108) = 0x41400000;
            *(s8 *)((u8 *)temp_s3 + 0xF4) = 3;
            if (&func_002E5B10 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x114)) + 0x34) = -1;
            *(s8 *)((u8 *)temp_s3 + 0xCE) = 0;
        }
    }
}
