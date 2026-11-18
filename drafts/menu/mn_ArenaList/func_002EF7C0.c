/* Draft (not built): func_002EF7C0 at 0x002EF7C0, size 0x914, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  explicit conversion from 'float *' to 'float' mwccps2.exe Compiler: @ 421: SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EF7C0.s */

// src/menu/mn_ArenaList.c func_002EF7C0 cerr diff=-1/0
s32 Help_Open(s32, s32, s32, s64);
s32 IpSysWnd_Start(s32);
s32 func_002A9480(s64);
extern s32 D_00457EB0;
extern s32 D_00457EE0;
extern s32 D_00457F10;
extern s32 D_00457F40;
extern s32 D_00457F70;
extern s32 D_00457FA0;
extern s32 D_00457FD0;
extern s32 D_0046B560;
extern s32 D_0046B5B0;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B63;
extern s32 D_005116E4;
extern s16 D_005C4122;
extern s16 D_005C9DA0;
extern s32 D_005C9DE0;
extern s32 D_005C9EE0;
extern char D_005116E0[];
extern void * InputPass_Create(void);
extern char D_00492FCE[];
extern void func_002EF680(void);
void func_002EF7C0(u8 *arg0) {
    s32 *var_a0;
    s32 *var_v0_3;
    s32 *var_v1;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_v1_3;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_a3;
    s64 temp_s0;
    s64 var_a2_2;
    s64 var_a3;
    u16 temp_v0;
    u8 *temp_a2;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_t0;
    u8 *temp_v1_2;
    u8 *var_a0_2;
    u8 *var_a1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (D_004B4B63 == 0) {
        var_s0 = 1 & 0xFF;
        var_s3 = (0 | *D_00492FCE) & 0xFFFF;
        var_v0 = 0 | ((D_00492FD2 | D_00493032) & 0xFFFF);
    } else {
        var_s0 = 2 & 0xFF;
        var_s3 = (0 | D_00493086) & 0xFFFF;
        var_v0 = 0 | ((D_0049308A | D_004930EA) & 0xFFFF);
    }
    var_s4 = var_v0 & 0xFFFF;
    temp_v1 = *(s16 *)((u8 *)temp_s1 + 8);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((*(s16 *)((u8 *)temp_s1 + 0xC) == 0) && (var_s3 & 0xFFFF & 0x4000)) {
            SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            var_v0_2 = var_s3 & 0xBFFF;
block_17:
            var_s3 = var_v0_2 & 0xFFFF;
        }
        break;
    case 1:
        if ((*(s16 *)((u8 *)temp_s1 + 0xE) == 0) && (var_s3 & 0xFFFF & 0x6000)) {
            SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            var_v0_2 = var_s3 & 0x9FFF;
            goto block_17;
        }
        break;
    }
    if (var_s3 & 0xFFFF & 1) {
        temp_a3 = 0x02800040 << 0x20;
        Help_Open((*(s16 *)((u8 *)temp_s1 + 8) != 0) ? (0x40404 | (0x02802040 << 0x20)) : (0x40004 | temp_a3), var_s0, 0x40004, temp_a3);
        var_s4 = 0;
        var_s3 = 0;
    }
    temp_a0 = var_s3 & 0xFFFF;
    if (temp_a0 & 0x4000) {
        SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        temp_s0 = (s64) (func_002EF1A0(temp_s1, *(&D_0046B5B0 + (D_005C9DA0 * 2)), (s64) ((*(s16 *)((u8 *)temp_s1 + 0xA) - 0x1E) << 0x30) >> 0x30, *(s8 *)((u8 *)temp_s1 + 0x2E)) << 0x30) >> 0x30;
        if (temp_s0 >= 0) {
            func_002A9480(temp_s0);
            D_005C9EE0 = 0xABD;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0) = 0x41700000;
            temp_v1_2 = (u8 *)(*(s32 *)((u8 *)temp_s1 + 0x244) + (temp_s0 << 5));
            *(s32 *)((u8 *)(&D_005C9DE0) + 4) = 0;
            temp_t0 = temp_v1_2 + 0x3048;
            *(s32 *)((u8 *)(&D_005C9DE0) + 8) = 0;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0xC) = 0x3F800000;
            var_a3 = 0;
            var_a2 = 0;
            var_a1 = temp_t0;
            var_a0 = &D_005C9DE0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x10) = (s16) *(&D_0046B560 + (*(u16 *)((u8 *)temp_v1_2 + 0x3048) * 2));
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x12) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x14) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x16) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x18) = 8;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x1A) = -1;
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x1C) = (u16) *(&D_00457FD0 + (*(u8 *)((u8 *)temp_v1_2 + 0x3051) * 2));
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x1E) = 1;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x20) = 0;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x24) = (s32) (*(&D_00457EB0 + (*(u8 *)((u8 *)temp_v1_2 + 0x304B) * 2)) + 0xBB8);
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x28) = (s32) (*(&D_00457EB0 + (*(u8 *)((u8 *)temp_v1_2 + 0x304B) * 2)) + 0xBB8);
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x2C) = -1;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x30) = 0x1B58;
            do {
                temp_v0 = *(u16 *)((u8 *)var_a1 + 0xA);
                *(u16 *)((u8 *)var_a0 + 0x36) = temp_v0;
                if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) != 0) {
                    var_a3 = (s64) ((var_a3 + 1) << 0x30) >> 0x30;
                }
                var_a2 += 1;
                var_a1 += 2;
                var_a0 += 2;
            } while (var_a2 < 7);
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x34) = (s16) var_a3;
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x44) = (u16) *(&D_00457F10 + (*(u8 *)((u8 *)temp_t0 + 5) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x46) = (u16) *(&D_00457F40 + (*(u8 *)((u8 *)temp_t0 + 6) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x48) = (u16) *(&D_00457F70 + (*(u8 *)((u8 *)temp_t0 + 7) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x4A) = (u16) *(&D_00457EE0 + (*(u8 *)((u8 *)temp_t0 + 4) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x4C) = (u16) *(&D_00457FA0 + (*(u8 *)((u8 *)temp_t0 + 8) * 2));
            *D_005116E0 = *(s32 *)((u8 *)temp_t0 + 0x18);
            D_005116E4 = (s32) *(u8 *)((u8 *)temp_t0 + 2);
            D_005C9F04 = (temp_s0 >> 1) + 0x3E8;
        } else {
            D_005C9EE0 = -1;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0) = 0x41700000;
            *(s32 *)((u8 *)(&D_005C9DE0) + 4) = 0;
            *(s32 *)((u8 *)(&D_005C9DE0) + 8) = 0;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0xC) = 0x3F800000;
            var_a2_2 = 0;
            var_a1_2 = 0;
            var_a0_2 = temp_s1;
            var_v1 = &D_005C9DE0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x10) = (s16) *(&D_0046B560 + (*(s16 *)((u8 *)temp_s1 + 0x2C) * 2));
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x12) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x14) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x16) = 0;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x18) = 8;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x1A) = -1;
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x1C) = (u16) *(&D_00457FD0 + (*(s8 *)((u8 *)temp_s1 + 0x35) * 2));
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x1E) = 1;
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x20) = 0;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x24) = (s32) (*(&D_00457EB0 + (*(s8 *)((u8 *)temp_s1 + 0x2F) * 2)) + 0xBB8);
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x28) = (s32) (*(&D_00457EB0 + (*(s8 *)((u8 *)temp_s1 + 0x2F) * 2)) + 0xBB8);
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x2C) = -1;
            *(s32 *)((u8 *)(&D_005C9DE0) + 0x30) = 0x1B58;
            do {
                temp_v0_2 = *(s16 *)((u8 *)var_a0_2 + 0x36);
                *(s16 *)((u8 *)var_v1 + 0x36) = temp_v0_2;
                if (temp_v0_2 != 0) {
                    var_a2_2 = (s64) ((var_a2_2 + 1) << 0x30) >> 0x30;
                }
                var_a1_2 += 1;
                var_a0_2 += 2;
                var_v1 += 2;
            } while (var_a1_2 < 7);
            *(s16 *)((u8 *)(&D_005C9DE0) + 0x34) = (s16) var_a2_2;
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x44) = (u16) *(&D_00457F10 + (*(s8 *)((u8 *)temp_s1 + 0x31) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x46) = (u16) *(&D_00457F40 + (*(s8 *)((u8 *)temp_s1 + 0x32) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x48) = (u16) *(&D_00457F70 + (*(s8 *)((u8 *)temp_s1 + 0x33) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x4A) = (u16) *(&D_00457EE0 + (*(s8 *)((u8 *)temp_s1 + 0x30) * 2));
            *(u16 *)((u8 *)(&D_005C9DE0) + 0x4C) = (u16) *(&D_00457FA0 + (*(s8 *)((u8 *)temp_s1 + 0x34) * 2));
            *D_005116E0 = *(s32 *)((u8 *)temp_s1 + 0x28);
            D_005116E4 = (s32) *(s8 *)((u8 *)temp_s1 + 0x2E);
        }
        temp_a2 = *(u8 **)((u8 *)arg0 + 0x30);
        var_v0_3 = (s32 *)(&ArenaList_Refresh);
        *(s16 *)((u8 *)temp_a2 + 0) = 4;
        *(s16 *)((u8 *)temp_a2 + 2) = 1;
        *(s16 *)((u8 *)temp_a2 + 4) = 3;
        if (&ArenaList_Refresh == NULL) {
            var_v0_3 = NULL;
        }
        goto block_72;
    }
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s16 *)((u8 *)temp_s1 + 0) = 4;
        *(s16 *)((u8 *)temp_s1 + 2) = 0;
        *(s16 *)((u8 *)temp_s1 + 4) = 3;
    } else {
        temp_v1_3 = var_s4 & 0xFFFF;
        if (temp_v1_3 & 0xF0) {
            if (*(s16 *)((u8 *)temp_s1 + 8) == 0) {
                func_002EEF00(temp_s1);
            } else {
                func_002EEC60(temp_s1);
            }
        } else if (temp_v1_3 & 0xC00) {
            SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            if (*(s16 *)((u8 *)temp_s1 + 8) != 0) {
                *(s16 *)((u8 *)temp_s1 + 8) = 0;
                func_002EEB80(temp_s1);
                func_002EDE90(temp_s1);
                *(s16 *)((u8 *)temp_s1 + 0x18) = 4;
            } else {
                *(s16 *)((u8 *)temp_s1 + 8) = 1;
                func_002EE7A0(temp_s1, 0);
                func_002EE9F0(temp_s1);
                func_002EDC50(temp_s1);
                *(s16 *)((u8 *)temp_s1 + 0x18) = 4;
            }
            D_005C4122 = *(s16 *)((u8 *)temp_s1 + 8) + 1;
        } else if (*(s16 *)((u8 *)temp_s1 + 8) != 0) {
            if (temp_a0 & 8) {
                SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
                if (*(s16 *)((u8 *)temp_s0_2 + 0xE) < 0x1E) {
                    *(u8 **)((u8 *)temp_s0_2 + 0x54) = InputPass_Create();
                    var_v0_3 = (s32 *)(&func_002EF680);
                    if (&func_002EF680 == NULL) {
                        var_v0_3 = NULL;
                    }
                } else {
                    *(s32 *)((u8 *)temp_s0_2 + 0x58) = IpSysWnd_Start(2);
                    var_v0_3 = (s32 *)(&func_002EF440);
                    if (&func_002EF440 == NULL) {
                        var_v0_3 = NULL;
                    }
                }
                goto block_72;
            }
            if (temp_a0 & 0x2000) {
                SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                temp_s0_3 = *(u8 **)((u8 *)arg0 + 0x30);
                *(s32 *)((u8 *)temp_s0_3 + 0x58) = IpSysWnd_Start(0);
                var_v0_3 = (s32 *)(&func_002EF540);
                if (&func_002EF540 == NULL) {
                    var_v0_3 = NULL;
                }
block_72:
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
            }
        }
    }
    func_002EE1C0(temp_s1);
    func_002ECFD0(temp_s1, 1);
}
