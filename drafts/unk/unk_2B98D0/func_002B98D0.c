/* Draft (not built): func_002B98D0 at 0x002B98D0, size 0x340, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 136 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A8, original 0x340
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002B98D0.s */

// src/unk/unk_2B98D0.c func_002B98D0 size diff=136/170
s32 StrBg_SetFlags(s32, s32, s32 *);
extern s32 D_00456020;
extern s32 D_00456050;
void func_002B98D0(s32 arg0) {
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s8 spD0;
    s16 spD2;
    s16 spD4;
    s8 spD8;
    s16 spDA;
    s16 spDC;
    s8 spE0;
    s16 spE2;
    s8 spE8;
    s16 spEA;
    s32 *var_s0_2;
    s16 var_s2;
    s16 var_s5;
    s16 var_s7;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s8 var_fp;
    s8 var_s1_2;
    s8 var_s3;
    s8 var_s6;
    u8 *temp_a0_2;
    u8 *var_s4;

    var_s1 = 0;
    spC0 = arg0;
    var_s0 = 0;
    *(s128 *)((u8 *)(&spD0) + 0) = (s128) *(s128 *)((u8 *)(&D_00456020) + 0);
    *(s128 *)((u8 *)(&spD0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00456020) + 0x10);
    *(s64 *)((u8 *)(&spD0) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00456020) + 0x20);
    do {
        temp_a0 = *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1F8);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)(temp_a0), 1);
            *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1F8) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)(&gStrStatus[var_s0]) + 0xE4);
        if (temp_a0_2 != NULL) {
            amTask_Kill(temp_a0_2);
            *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0xE4) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0x18);
    var_s3 = 0x2B;
    spA0 = 0;
    var_s2 = 0x24;
    var_s1_2 = 0x2C;
    var_s5 = 0x25;
    var_s6 = 0x2E;
    var_s7 = 0x27;
    var_fp = 0x2D;
    var_s0_2 = &D_00456050;
    var_s4 = (unsigned char *)(gStrStatus + (spC0 * 0xC) + 0x424);
    spB0 = 0x26;
loop_7:
    if (spC0 < *(s32 *)((u8 *)gStrStatus + 0x41C)) {
        spD0 = var_s3;
        spD2 = var_s2;
        spD8 = var_s1_2;
        spDA = var_s5;
        spDC = (s16) *(s32 *)((u8 *)var_s4 + 0);
        spE0 = var_s6;
        spE2 = var_s7;
        if (*(s32 *)((u8 *)var_s4 + 4) >= 0) {
            spD4 = -0x7FFF;
            spE8 = var_fp;
            spEA = (s16) spB0;
        } else {
            spD4 = -0x7FFE;
            spE8 = -1;
        }
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        StrBg_SetFlags(*(s32 *)((u8 *)(gStrStatus + (spD0 * 4)) + 0x38), 1, var_s0_2);
        StrBg_SetFlags(*(s32 *)((u8 *)(gStrStatus + (spD8 * 4)) + 0x38), 0, var_s0_2 + 0x10);
        StrBg_SetFlags(*(s32 *)((u8 *)(gStrStatus + (spE0 * 4)) + 0x38), 1, var_s0_2);
        StrBg_SetPos((void *)(*(s32 *)((u8 *)(gStrStatus + (spE0 * 4)) + 0x38)), (f32) *(s32 *)((u8 *)var_s4 + 8), 0);
        if (*(s32 *)((u8 *)var_s4 + 4) >= 0) {
            StrBg_SetFlags(*(s32 *)((u8 *)(gStrStatus + (spE8 * 4)) + 0x38), 1, var_s0_2);
            StrBg_SetPos((void *)(*(s32 *)((u8 *)(gStrStatus + (spE8 * 4)) + 0x38)), (f32) *(s32 *)((u8 *)var_s4 + 4), 0);
        }
        var_s3 += 4;
        var_s2 += 4;
        var_s1_2 += 4;
        var_s5 += 4;
        var_s6 += 4;
        var_s7 += 4;
        var_fp += 4;
        var_s0_2 += 0x20;
        spB0 += 4;
        temp_v1 = spA0 + 1;
        spA0 = temp_v1;
        spC0 += 1;
        var_s4 += 0xC;
        if (temp_v1 >= 6) {

        } else {
            goto loop_7;
        }
    }
}
