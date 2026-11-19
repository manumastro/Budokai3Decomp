/* Draft (not built): func_0023DC10 at 0x0023DC10, size 0x644, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 276 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x66C, original 0x644
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023DC10.s */

// src/unk/unk_23A890.c func_0023DC10 size diff=276/411
void *BtlSys_GetSlot(void *);
extern f32 D_00470710;
void func_0023DC10(s32 arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_9;
    s32 var_s4;
    u16 temp_v1;
    u16 temp_v1_10;
    u16 temp_v1_11;
    u16 temp_v1_4;
    u16 temp_v1_5;
    u16 temp_v1_6;
    u16 temp_v1_7;
    u16 temp_v1_8;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;

    var_s2 = gBtlSys;
    var_s4 = arg0;
    var_s0 = (unsigned char *)(func_0021C3D0(0));
    func_0021C660((s32)(var_s0));
    func_0021C430((s32)(var_s0));
    var_s3 = BtlSys_GetSlot(var_s0);
    temp_a0 = *(u8 **)((u8 *)var_s2 + 0xE64);
    var_s1 = (unsigned char *)((int)func_0021C400((s32)(var_s0)) + 0x4C);
    var_s0 = ((u8 *)&D_0058BF70) + (var_s4 * 0x70) + 0x3A0;
    D_00470704 = (int)(temp_a0);
    var_s2 = var_s3 + 0x4C;
    D_0047070C = 0x04001000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04001000);
    D_00470238 = 0;
    if (*(s16 *)((u8 *)var_s1 + 4) < *(s16 *)((u8 *)var_s2 + 4)) {
        temp_v1 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1 & 1) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x60) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x60) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1 | 1);
            *(f32 *)((u8 *)var_s3 + 0x60) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 1) {
        temp_f1 = *(f32 *)((u8 *)var_s3 + 0x60) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x60) = temp_f1;
        if (!(temp_f1 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 1);
            *(f32 *)((u8 *)var_s3 + 0x60) = 0.0f;
        }
    }
    temp_v1_2 = *(s16 *)((u8 *)var_s2 + 6);
    if ((*(s16 *)((u8 *)var_s1 + 6) != temp_v1_2) && (temp_v1_2 != 0)) {
        *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 2);
        *(f32 *)((u8 *)var_s3 + 0x64) = 0.0f;
    } else if (temp_v1_2 != 0) {
        temp_f1_2 = *(f32 *)((u8 *)var_s3 + 0x64) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x64) = temp_f1_2;
        if (!(temp_f1_2 < 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 2);
            *(f32 *)((u8 *)var_s3 + 0x64) = 0.0f;
            *(s16 *)((u8 *)var_s2 + 6) = 0;
        }
    }
    temp_v1_3 = *(s16 *)((u8 *)var_s2 + 8);
    if ((*(s16 *)((u8 *)var_s1 + 8) != temp_v1_3) && (temp_v1_3 != 0)) {
        *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 4);
        *(f32 *)((u8 *)var_s3 + 0x68) = 0.0f;
    } else if (temp_v1_3 != 0) {
        temp_f1_3 = *(f32 *)((u8 *)var_s3 + 0x68) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x68) = temp_f1_3;
        if (!(temp_f1_3 < 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 4);
            *(f32 *)((u8 *)var_s3 + 0x68) = 0.0f;
            *(s16 *)((u8 *)var_s2 + 8) = 0;
        }
    }
    if (*(s16 *)((u8 *)var_s1 + 0xA) < *(s16 *)((u8 *)var_s2 + 0xA)) {
        temp_v1_4 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_4 & 8) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x6C) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x6C) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_4 | 8);
            *(f32 *)((u8 *)var_s3 + 0x6C) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 8) {
        temp_f1_4 = *(f32 *)((u8 *)var_s3 + 0x6C) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x6C) = temp_f1_4;
        if (!(temp_f1_4 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 8);
            *(f32 *)((u8 *)var_s3 + 0x6C) = 0.0f;
        }
    }
    if (*(s16 *)((u8 *)var_s2 + 0xC) < *(s16 *)((u8 *)var_s1 + 0xC)) {
        temp_v1_5 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_5 & 0x20) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x70) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x70) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_5 & 0xFFCF);
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 0x20);
            *(f32 *)((u8 *)var_s3 + 0x70) = 0.0f;
        }
    }
    if (*(s16 *)((u8 *)var_s1 + 0xC) < *(s16 *)((u8 *)var_s2 + 0xC)) {
        temp_v1_6 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_6 & 0x10) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x70) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x70) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_6 & 0xFFCF);
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 0x10);
            *(f32 *)((u8 *)var_s3 + 0x70) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 0x30) {
        temp_f1_5 = *(f32 *)((u8 *)var_s3 + 0x70) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x70) = temp_f1_5;
        if (!(temp_f1_5 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) & 0xFFCF);
            *(f32 *)((u8 *)var_s3 + 0x70) = 0.0f;
        }
    }
    if (*(s16 *)((u8 *)var_s2 + 0xE) < *(s16 *)((u8 *)var_s1 + 0xE)) {
        temp_v1_7 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_7 & 0x80) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x74) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x74) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_7 & 0xFF3F);
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 0x80);
            *(f32 *)((u8 *)var_s3 + 0x74) = 0.0f;
        }
    }
    if (*(s16 *)((u8 *)var_s1 + 0xE) < *(s16 *)((u8 *)var_s2 + 0xE)) {
        temp_v1_8 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_8 & 0x40) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x74) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x74) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_8 & 0xFF3F);
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) | 0x40);
            *(f32 *)((u8 *)var_s3 + 0x74) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 0xC0) {
        temp_f1_6 = *(f32 *)((u8 *)var_s3 + 0x74) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x74) = temp_f1_6;
        if (!(temp_f1_6 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) & 0xFF3F);
            *(f32 *)((u8 *)var_s3 + 0x74) = 0.0f;
        }
    }
    temp_v1_9 = *(s16 *)((u8 *)var_s2 + 0x10);
    if ((*(s16 *)((u8 *)var_s1 + 0x10) < temp_v1_9) && (temp_v1_9 != 0)) {
        temp_v1_10 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_10 & 0x100) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x78) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x78) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_10 | 0x100);
            *(f32 *)((u8 *)var_s3 + 0x78) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 0x100) {
        temp_f1_7 = *(f32 *)((u8 *)var_s3 + 0x78) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x78) = temp_f1_7;
        if (!(temp_f1_7 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 0x100);
            *(f32 *)((u8 *)var_s3 + 0x78) = 0.0f;
        }
    }
    if (*(s16 *)((u8 *)var_s1 + 0x12) < *(s16 *)((u8 *)var_s2 + 0x12)) {
        temp_v1_11 = *(u16 *)((u8 *)var_s3 + 0x4C);
        if (temp_v1_11 & 0x200) {
            if (!(*(f32 *)((u8 *)var_s3 + 0x7C) < 30.0f)) {
                *(f32 *)((u8 *)var_s3 + 0x7C) = 30.0f;
            }
        } else {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (temp_v1_11 | 0x200);
            *(f32 *)((u8 *)var_s3 + 0x7C) = 0.0f;
        }
    }
    if (*(u16 *)((u8 *)var_s3 + 0x4C) & 0x200) {
        temp_f1_8 = *(f32 *)((u8 *)var_s3 + 0x7C) + D_00470710;
        *(f32 *)((u8 *)var_s3 + 0x7C) = temp_f1_8;
        if (!(temp_f1_8 <= 90.0f)) {
            *(u16 *)((u8 *)var_s3 + 0x4C) = (u16) (*(u16 *)((u8 *)var_s3 + 0x4C) ^ 0x200);
            *(f32 *)((u8 *)var_s3 + 0x7C) = 0.0f;
        }
    }
    func_0023AB60(var_s4, var_s0, var_s3, 0);
}
