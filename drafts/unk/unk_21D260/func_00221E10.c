/* Draft (not built): func_00221E10 at 0x00221E10, size 0x464, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 146 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x458, original 0x464
 * Original: asm/nonmatchings/unk/unk_21D260/func_00221E10.s */

// src/unk/unk_21D260.c func_00221E10 size diff=146/278
s32 BtlChara_Reset(s16, s16);
void *BtlSys_GetSlot(s64);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0021C360(s64);
s32 func_0021C660(s64);
s32 func_0023F3F0(s32 *, s64, s32, s32);
extern f32 D_004E0614;
extern s8 D_0058BB31;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern void SoundRpc_Send3();
s32 func_00221E10(u8 *arg0) {
    s32 spA4;
    s32 sp70;
    f32 temp_f1;
    s16 var_a0;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s64 var_s3;
    u8 *var_s0;
    u8 *var_s4;
    u8 *var_s5;

    var_s0 = (unsigned char *)(gBtlSys);
    var_v1 = *(s16 *)((u8 *)var_s0 + 0xE42);
    var_s4 = arg0;
    if (var_v1 != -1) {

    } else {
        var_v1 = *(s16 *)((u8 *)var_s0 + 0xE40);
    }
    var_s3 = (s64) var_v1 << 0x30;
    var_s3 = var_s3 >> 0x30;
    func_0021C360(var_s3);
    func_0021C660(var_s3);
    var_s5 = BtlSys_GetSlot(var_s3);
    var_s2 = *(s32 *)((u8 *)var_s4 + 0x18);
    var_s1 = *(s32 *)((u8 *)var_s4 + 0x14) + *(s16 *)((u8 *)var_s4 + 0xA);
    if (var_s1 >= var_s2) {
        var_s1 -= var_s2;
    }
    *(f32 *)((u8 *)var_s4 + 0x1C) = (f32) (*(f32 *)((u8 *)var_s4 + 0x1C) + D_00470710);
    if (*(s16 *)((u8 *)var_s4 + 0x10) & 3) {
        temp_f1 = *(f32 *)((u8 *)var_s4 + 0x24) + D_00470710;
        *(f32 *)((u8 *)var_s4 + 0x24) = temp_f1;
        if (!(temp_f1 <= 8.0f)) {
            *(s16 *)((u8 *)var_s4 + 0x10) = 0;
        }
    }
    if (var_s2 <= 0) {
        if (D_0058BB33 == 0) {
            if (D_0058BB32 != 0) {
                goto block_12;
            }
            return -2;
        }
block_12:
        return -1;
    }
    if (D_0058BB32 != 0) {
        if (var_s2 >= 7) {
            func_0023F3F0(&sp70, var_s3, *(s32 *)((u8 *)((var_s3 * 4) + var_s0) + 0xEC0), var_s1);
            temp_v0 = BtlChara_Reset(*(s16 *)((u8 *)var_s0 + 0xE42), spA4);
            var_a0 = -1;
            if (gBattle != NULL) {
                var_a0 = *(s16 *)((u8 *)gBattle + 0x7E2);
            }
            if ((var_a0 != 3) || (temp_v0 == 2)) {
                *(s32 *)((u8 *)var_s5 + 0x1C) = var_s1;
                return *(s32 *)((u8 *)var_s5 + 0x1C);
            }
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            return -2;
        }
        return (s32) *(s16 *)((u8 *)var_s4 + 0xA);
    }
    if (D_0058BB33 != 0) {
        if (var_s2 >= 7) {
            *(s32 *)((u8 *)var_s5 + 0x1C) = var_s1;
        }
        return -1;
    }
    if (*D_0058BB30 != 0) {
        *(s16 *)((u8 *)var_s4 + 0xA) = (s16) (*(s16 *)((u8 *)var_s4 + 0xA) - ((s64) ((s64) *D_0058BB30 << 0x38) >> 0x38));
        if (*D_0058BB30 > 0) {
            var_v0 = 1;
        } else {
            var_v0 = 2;
        }
        *(s16 *)((u8 *)var_s4 + 0x10) = var_v0;
        *(f32 *)((u8 *)var_s4 + 0x24) = 0.0f;
        if (var_s2 >= 7) {
            if (*(s16 *)((u8 *)var_s4 + 0xA) < 0) {
                *(s16 *)((u8 *)var_s4 + 0xA) = 0;
                *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (*(s32 *)((u8 *)var_s4 + 0x14) - 1);
                if (*(s32 *)((u8 *)var_s4 + 0x14) < 0) {
                    *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (var_s2 - 1);
                }
            }
            if (*(s16 *)((u8 *)var_s4 + 0xA) >= 6) {
                *(s16 *)((u8 *)var_s4 + 0xA) = 5;
                *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (*(s32 *)((u8 *)var_s4 + 0x14) + 1);
                if (*(s32 *)((u8 *)var_s4 + 0x14) >= var_s2) {
                    *(s32 *)((u8 *)var_s4 + 0x14) = 0;
                }
            }
        } else {
            if (*(s16 *)((u8 *)var_s4 + 0xA) >= var_s2) {
                *(s16 *)((u8 *)var_s4 + 0xA) = 0;
            }
            if (*(s16 *)((u8 *)var_s4 + 0xA) < 0) {
                *(s16 *)((u8 *)var_s4 + 0xA) = (s16) (var_s2 - 1);
            }
        }
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    if (D_0058BB31 != 0) {
        if (((s64) ((s64) D_0058BB31 << 0x38) >> 0x38) > 0) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 1;
        }
        *(s16 *)((u8 *)var_s4 + 0x10) = var_v0_2;
        *(f32 *)((u8 *)var_s4 + 0x24) = 0.0f;
        if (var_s2 >= 7) {
            *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (*(s32 *)((u8 *)var_s4 + 0x14) + (D_0058BB31 * 6));
            if (*(s32 *)((u8 *)var_s4 + 0x14) >= var_s2) {
                do {
                    *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (*(s32 *)((u8 *)var_s4 + 0x14) - var_s2);
                } while (*(s32 *)((u8 *)var_s4 + 0x14) >= var_s2);
            }
            if (*(s32 *)((u8 *)var_s4 + 0x14) < 0) {
                do {
                    *(s32 *)((u8 *)var_s4 + 0x14) = (s32) (*(s32 *)((u8 *)var_s4 + 0x14) + var_s2);
                } while (*(s32 *)((u8 *)var_s4 + 0x14) < 0);
            }
        } else if (D_0058BB31 < 0) {
            *(s16 *)((u8 *)var_s4 + 0xA) = 0;
        } else {
            *(s16 *)((u8 *)var_s4 + 0xA) = (s16) (var_s2 - 1);
        }
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
    return -2;
}
