/* Draft (not built): func_002872A0 at 0x002872A0, size 0x610, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 273 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5D0, original 0x610
 * Original: asm/nonmatchings/menu/mn_StageSel/func_002872A0.s */

// src/menu/mn_StageSel.c func_002872A0 size diff=273/372
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
u32 func_0012EAE0(s32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
extern s32 D_00453490;
extern s32 D_0046B860;
extern s32 D_0046B861;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B56;
extern s8 D_004B4B5B;
extern f32 D_004E0614;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_00287110(void);
void func_002872A0(u8 *arg0) {
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v0_4;
    s16 temp_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s64 var_v0;
    u16 temp_a1;
    u16 temp_a1_2;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 var_a2;
    u8 *temp_a0_2;
    u8 *temp_s3;
    u8 *var_a1;

    var_s2 = 0;
    var_s1 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a1 = *(u16 *)((u8 *)temp_s3 + 0x240);
    var_s0 = 0;
    if (*(u16 *)((u8 *)temp_s3 + 0x23E) != temp_a1) {
        func_00286DA0(temp_s3, temp_a1);
    }
    temp_a1_2 = *(u16 *)((u8 *)temp_s3 + 0x23C);
    if (temp_a1_2 & 2) {
        var_s0 = 1 & 0xFF;
        var_s1 = (0 | *D_00492FCE) & 0xFFFF;
        var_s2 = (0 | ((D_00492FD2 | D_00493032) & 0xFFFF)) & 0xFFFF;
    }
    if (temp_a1_2 & 4) {
        var_s0 = (var_s0 | 2) & 0xFF;
        var_s1 = (var_s1 | D_00493086) & 0xFFFF;
        var_s2 = (var_s2 | ((D_0049308A | D_004930EA) & 0xFFFF)) & 0xFFFF;
    }
    if (var_s1 & 0xFFFF & 1) {
        Help_Open(0x01000000 | (0x820040 << 0x20), var_s0);
        var_s2 = 0;
        var_s1 = 0;
    }
    temp_s0 = var_s1 & 0xFFFF;
    if (temp_s0 & 0x6000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        func_00286840(temp_s3);
        *(s8 *)((u8 *)temp_s3 + 0x262) = 4;
        *(s8 *)((u8 *)temp_s3 + 0x264) = 4;
        D_004B4B56 = (s8) *(s16 *)((u8 *)temp_s3 + 0x25C);
        if (*(s16 *)((u8 *)temp_s3 + 0x25C) == 0xC) {
            *(s16 *)((u8 *)temp_s3 + 0x25C) = (s16) *(s16 *)((u8 *)(((func_0012EAE0(8) % (u32) (*(u8 *)((u8 *)temp_s3 + 0x261) - 1)) * 2) + temp_s3) + 0x242);
            var_v0 = (s64) (((func_0012EAE0(8) >> 2) & 1) << 0x30) >> 0x30;
        } else {
            var_v0 = 0;
            if (temp_s0 & 0x4000) {

            } else {
                var_v0 = 1;
            }
        }
        var_v0_2 = (int *)(&func_002870D0);
        D_004B4B5B = (s8) *((((s64) (var_v0 << 0x30) >> 0x30) * 2) + (&D_00453490 + (*(s16 *)((u8 *)temp_s3 + 0x25C) * 4)));
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x230)) + 0x34) = -1;
        *(s8 *)((u8 *)temp_s3 + 0x263) = 0;
        *(s32 *)((u8 *)temp_s3 + 0x28C) = 0x42700000;
        if (&func_002870D0 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
    } else if (temp_s0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        func_00286650(temp_s3);
        *(s32 *)((u8 *)temp_s3 + 0x28C) = 0x42700000;
        var_v0_3 = (int *)(&func_00287060);
        *(s8 *)((u8 *)temp_s3 + 0x264) = 5;
        if (&func_00287060 == NULL) {
            var_v0_3 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
    } else if ((temp_s0 & 0x8000) && (*(s16 *)((u8 *)temp_s3 + 0x25C) != 0xC)) {
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 0xE, 0);
        }
        temp_a0 = *(u8 *)((u8 *)temp_s3 + 0x261);
        var_a2 = 0;
        if ((s32) temp_a0 > 0) {
            var_a1 = temp_s3;
loop_33:
            if (*(s16 *)((u8 *)var_a1 + 0x4C) == 0xC) {
                *(s8 *)((u8 *)temp_s3 + 0x263) = 0;
                *(u8 *)((u8 *)temp_s3 + 0x260) = var_a2;
                *(s16 *)((u8 *)temp_s3 + 0x25C) = 0xC;
                *(s32 *)((u8 *)temp_s3 + 0x270) = (s32) *(s32 *)((u8 *)((var_a2 * 0xC) + temp_s3) + 0x48);
                *(s32 *)((u8 *)temp_s3 + 0x26C) = (s32) *(s32 *)((u8 *)temp_s3 + 0x270);
                *(s32 *)((u8 *)temp_s3 + 0x274) = 0;
                *(s32 *)((u8 *)temp_s3 + 0x27C) = 0;
                *(s8 *)((u8 *)temp_s3 + 0x262) = 2;
                *(s8 *)((u8 *)temp_s3 + 0x264) = 2;
                *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x230)) + 0x34) = (s16) *(s16 *)((u8 *)temp_s3 + 0x25C);
                *(s8 *)((u8 *)temp_s3 + 0x263) = 0;
                temp_v1 = *(s16 *)((u8 *)temp_s3 + 0x25C);
                if (*(s16 *)((u8 *)temp_s3 + 0x25E) != temp_v1) {
                    *(s16 *)((u8 *)temp_s3 + 0x25E) = temp_v1;
                    temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 4);
                    D_00470704 = temp_a0_2;
                    D_0047070C = 0x7000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_2, 0x7000, var_a2);
                    D_00470238 = 0;
                    temp_a0_3 = *(s32 *)((u8 *)temp_s3 + 0x18);
                    if (temp_a0_3 != 0) {
                        func_0022D0E0(temp_a0_3, 1);
                    }
                    *(s32 *)((u8 *)temp_s3 + 0x18) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x1C) + (*(&D_0046B860 + (*(s16 *)((u8 *)temp_s3 + 0x25C) * 2)) * 4)), 0);
                    temp_a0_4 = *(s32 *)((u8 *)temp_s3 + 0x28);
                    if (temp_a0_4 != 0) {
                        func_0022D0E0(temp_a0_4, 1);
                    }
                    *(s32 *)((u8 *)temp_s3 + 0x28) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x1C) + (*(&D_0046B861 + (*(s16 *)((u8 *)temp_s3 + 0x25C) * 2)) * 4)), 0);
                }
            } else {
                var_a2 += 1;
                var_a1 += 0xC;
                if ((s32) var_a2 >= (s32) temp_a0) {

                } else {
                    goto loop_33;
                }
            }
        }
    } else {
        temp_s0_2 = var_s2 & 0xFFFF;
        if (temp_s0_2 & 0xA0) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xE, 0);
            }
            if (temp_s0_2 & 0x20) {
                temp_v1_2 = *(u8 *)((u8 *)temp_s3 + 0x260);
                if ((s32) temp_v1_2 < (*(u8 *)((u8 *)temp_s3 + 0x261) - 1)) {
                    *(u8 *)((u8 *)temp_s3 + 0x260) = (u8) (temp_v1_2 + 1);
                } else {
                    *(u8 *)((u8 *)temp_s3 + 0x260) = 0U;
                }
                *(s32 *)((u8 *)temp_s3 + 0x274) = (s32) *(s32 *)((u8 *)temp_s3 + 0x278);
            } else if (temp_s0_2 & 0x80) {
                temp_v0 = *(u8 *)((u8 *)temp_s3 + 0x260);
                if ((s32) temp_v0 > 0) {
                    *(u8 *)((u8 *)temp_s3 + 0x260) = (u8) (temp_v0 - 1);
                } else {
                    *(u8 *)((u8 *)temp_s3 + 0x260) = (u8) (*(u8 *)((u8 *)temp_s3 + 0x261) - 1);
                }
                *(s32 *)((u8 *)temp_s3 + 0x274) = (s32) -*(s32 *)((u8 *)temp_s3 + 0x278);
            }
            *(s8 *)((u8 *)temp_s3 + 0x263) = 0;
            var_v0_4 = (int *)(&func_00287110);
            *(s16 *)((u8 *)temp_s3 + 0x25C) = (s16) *(s16 *)((u8 *)((*(u8 *)((u8 *)temp_s3 + 0x260) * 0xC) + temp_s3) + 0x4C);
            *(s32 *)((u8 *)temp_s3 + 0x270) = (s32) *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s3 + 0x260) * 0xC) + temp_s3) + 0x48);
            *(s32 *)((u8 *)temp_s3 + 0x27C) = 0x41400000;
            *(s8 *)((u8 *)temp_s3 + 0x262) = 3;
            *(s8 *)((u8 *)temp_s3 + 0x264) = 3;
            if (&func_00287110 == NULL) {
                var_v0_4 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_4;
            *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x230)) + 0x34) = -1;
            *(s8 *)((u8 *)temp_s3 + 0x263) = 0;
        }
    }
    func_00284AA0((s32)(temp_s3));
    func_002861B0(temp_s3);
    func_00285EF0((s32)(temp_s3));
}
