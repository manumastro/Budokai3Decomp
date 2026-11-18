/* Draft (not built): func_002BCCD0 at 0x002BCCD0, size 0x468, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *(s32 *)((u8 *)gStrStatus + 0x288) * 4)) + (temp_a2 * 4)); @ 631: if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x5000)) {
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BCCD0.s */

// src/unk/unk_2B98D0.c func_002BCCD0 cerr diff=-1/0
extern s32 D_00455760;
extern s128 D_00455D80;
extern s32 D_00455FD0;
extern s128 D_00455FF0;
extern s32 D_00470118;
extern s32 D_00511768;
extern void func_002BAC80(void);
void func_002BCCD0(u8 *arg0) {
    s128 sp40;
    s32 sp50;
    s32 sp70;
    s32 sp80;
    s32 sp84;
    s128 spA0;
    s32 *var_v1;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    u32 temp_a1;

    var_a2 = *(s32 *)((u8 *)gStrStatus + 0x2D8);
    if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x5000)) {
        temp_f0 = (f32) var_a2;
        var_a2 = M2C_BITWISE(s32, temp_f0);
        if (!(temp_f0 <= ((f32) D_00470118 * gFrameDelta))) {

        }
    }
    var_s1 = *(s32 *)((u8 *)gStrStatus + 0x2D4) + var_a2;
    if (var_s1 >= 0x98967F) {
        *(s32 *)((u8 *)gStrStatus + 0x2D4) = 0x98967F;
        var_s1 = 0x98967F;
        *(s32 *)((u8 *)gStrStatus + 0x2D8) = 0;
    } else {
        *(s32 *)((u8 *)gStrStatus + 0x2D4) = var_s1;
        *(s32 *)((u8 *)gStrStatus + 0x2D8) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x2D8) - var_a2);
    }
loop_6:
    temp_a2 = *(s32 *)((u8 *)gStrStatus + 0x298);
    temp_s0 = *(*(&D_00455760 + (*(s32 *)((u8 *)gStrStatus + 0x288) * 4)) + (temp_a2 * 4));
    if ((temp_s0 != 0) && (temp_a2 < 0x63)) {
        var_s0 = temp_s0 - var_s1;
        if (var_s0 <= 0) {
            if (*(s32 *)((u8 *)gStrStatus + 0x400) == 0) {
                spA0 = D_00455D80;
                func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            }
            *(s32 *)((u8 *)gStrStatus + 0x298) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x298) + 1);
            *(s32 *)((u8 *)gStrStatus + 0x400) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x400) + 1);
            *(s32 *)((u8 *)gStrStatus + 0x404) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x404) + 1);
            StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x44), (f32) *(s32 *)((u8 *)gStrStatus + 0x298), 0);
            goto loop_6;
        }
    } else {
        var_s0 = 0;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x4C), M2C_BITWISE(f32, gStrStatus), temp_a2, (f32) ((var_s1 / 10000) + ((u32) var_s1 >> 0x1F)), 0);
    var_a1 = 0;
    if (var_s1 >= 0x2710) {
        var_a1 = 0x2710;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x48), M2C_BITWISE(f32, var_a1), M2C_BITWISE(s32, (f32) ((var_s1 % 10000) + var_a1)), 0.0f);
    temp_a1 = (u32) var_s0 >> 0x1F;
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x54), M2C_BITWISE(f32, temp_a1), M2C_BITWISE(s32, (f32) ((var_s0 / 10000) + temp_a1)), 0.0f);
    var_a1_2 = 0;
    if (var_s0 >= 0x2710) {
        var_a1_2 = 0x2710;
    }
    StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0x50), M2C_BITWISE(f32, var_a1_2), M2C_BITWISE(s32, (f32) ((var_s0 % 10000) + var_a1_2)), 0.0f);
    if (*(s32 *)((u8 *)gStrStatus + 0x2D8) == 0) {
        if (*(s32 *)((u8 *)gStrStatus + 0x400) == 0) {
            if (D_00511768 != 0) {
                *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00455FD0) + 0);
                *(s64 *)((u8 *)(&sp50) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00455FD0) + 0x10);
                func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
                StrBg_SetPos(*(s32 *)((u8 *)gStrStatus + 0xC8), (f32) D_005116E8, 0);
                var_v1 = (s32 *)(&func_002BB890);
                *(u8 **)((u8 *)gStrStatus + 0x148) = amTask_Create(func_002BAC80, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x44, 2);
                if (&func_002BB890 == NULL) {
                    var_v1 = NULL;
                }
            } else {
                var_v1 = (s32 *)(&func_002BB650);
                if (&func_002BB650 == NULL) {
                    var_v1 = NULL;
                }
            }
        } else {
            sp40 = D_00455FF0;
            func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            *(u8 **)((u8 *)gStrStatus + 0xB0) = amTask_Create(func_002BB100, 0, *(s32 *)((u8 *)gStrStatus + 0x274) + 0x1E, 2);
            sp80 = 3;
            sp84 = 0;
            StrStatus_Dispatch(&sp70);
            SoundRpc_SetVolume(0, 0, (s32)(D_004E0614));
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x18, 0);
            }
            var_v1 = (s32 *)(&func_002BCBE0);
            if (&func_002BCBE0 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
