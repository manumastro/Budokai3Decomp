/* Draft (not built): func_002CCB70 at 0x002CCB70, size 0x460, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 104: 32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x1C) + ((spA0 + temp_v1) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CCB70.s */

// src/unk/unk_2CC840.c func_002CCB70 cerr diff=-1/0
s32 func_00228430(s32);
s32 func_0022D0E0(void *, s32);
void *func_0022D670(s32, s32);
void *func_0022D860(s32, f32);
extern s32 D_0046EFF0;
extern s32 D_0046F0D0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gBtlSys;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002CCB70(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 spA0;
    u8 *spB0;
    u8 *spCC;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f12_2;
    s32 temp_a0_4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u32 temp_s4;
    u8 **var_s2_4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s7;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_s2_3;
    u8 *var_s3_2;

    var_s3 = 0;
    spCC = arg0;
    temp_s5 = *(s32 *)((u8 *)arg1 + 0xC8);
    temp_s0 = gBtlSys;
    var_s2 = spCC;
    do {
        temp_a0 = *(u8 **)((u8 *)var_s2 + 4);
        if (temp_a0 != NULL) {
            func_0022D0E0(temp_a0, 1);
            *(u8 **)((u8 *)var_s2 + 4) = NULL;
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 3);
    temp_a0_2 = *(u8 **)((u8 *)spCC + 0x10);
    if (temp_a0_2 != NULL) {
        func_0022D0E0(temp_a0_2, 1);
        *(u8 **)((u8 *)spCC + 0x10) = NULL;
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0xE84);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x04010000);
    temp_v0 = arg2 & 1;
    spA0 = temp_v0;
    var_s5 = 0;
    var_s3_2 = spCC;
    D_00470238 = 0;
    spB0 = (u8 *)(&D_0046EFF0 + (temp_s5 * 0x10));
    temp_s6 = temp_v0 * 4;
    do {
        temp_s4 = *(u32 *)((u8 *)spB0 + 4);
        if (temp_s4 != -1U) {
            func_00228430(0);
            *(u8 **)((u8 *)var_s3_2 + 4) = func_0022D860(*(s32 *)((u8 *)(temp_s6 + *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x28), (f32) var_s5);
            var_s2_2 = *(u8 **)((u8 *)var_s3_2 + 4);
            if (arg3 == 0) {
                *(u8 **)((u8 *)var_s2_2 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x30), 0.0f);
                goto block_13;
            }
            if (arg3 == 1) {
                *(u8 **)((u8 *)var_s2_2 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x34), 0.0f);
block_13:
                var_s2_2 = *(u8 **)((u8 *)var_s2_2 + 0x2C);
            }
            if (temp_s4 == 0xC) {
                *(u8 **)((u8 *)var_s2_2 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(temp_s6 + *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x58), 0.0f);
                var_s2_2 = *(u8 **)((u8 *)var_s2_2 + 0x2C);
            } else {
                *(u8 **)((u8 *)var_s2_2 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(temp_s6 + *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x38), *(&D_0046F0D0 + (temp_s4 * 0xC)));
            }
            temp_s7 = (u8 *)(&D_0046F0D0 + (temp_s4 * 0xC));
            temp_v1 = *(s32 *)((u8 *)temp_s7 + 4);
            var_s2_3 = *(u8 **)((u8 *)var_s2_2 + 0x2C);
            if (temp_v1 != -1) {
                *(u8 **)((u8 *)var_s2_3 + 0x2C) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x1C) + ((spA0 + temp_v1) * 4)), 0);
                var_s2_3 = *(u8 **)((u8 *)var_s2_3 + 0x2C);
            }
            temp_a0_4 = *(s32 *)((u8 *)temp_s7 + 8);
            if (temp_a0_4 != -1) {
                switch (temp_s4) {
                case 0:
                case 1:
                    var_v0 = *(s32 *)((u8 *)arg1 + 0xD0);
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    var_f12 = (f32) var_v0;
                    break;
                case 2:
                case 3:
                case 4:
                    var_v0_2 = *(s32 *)((u8 *)arg1 + 0xD4);
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    var_f12 = (f32) var_v0_2;
                    break;
                case 6:
                case 7:
                    var_v0_3 = *(s32 *)((u8 *)arg1 + 0xD8);
                    if (var_v0_3 < 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    var_f12 = (f32) var_v0_3;
                    break;
                case 8:
                case 9:
                    var_v0_4 = *(s32 *)((u8 *)arg1 + 0xDC);
                    if (var_v0_4 < 0) {
                        var_v0_4 = -var_v0_4;
                    }
                    var_f12 = (f32) var_v0_4;
                    break;
                default:
                    var_f12 = 0.0f;
                    break;
                }
                *(u8 **)((u8 *)var_s2_3 + 0x2C) = func_0022D860(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14) + ((spA0 + temp_a0_4) * 4)), var_f12);
            }
            func_00228410();
        }
        var_s5 += 1;
        spB0 += 4;
        var_s3_2 += 4;
    } while (var_s5 < 3);
    if (!(*(s32 *)((u8 *)arg1 + 0xCC) & 0x20040000)) {
        func_00228430(0);
        if (arg3 == 0) {
            *(u8 **)((u8 *)spCC + 0x10) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x30), 0.0f);
            var_s2_4 = (u8 **)(*(u8 **)((u8 *)spCC + 0x10) + 0x2C);
        } else if (arg3 == 1) {
            *(u8 **)((u8 *)spCC + 0x10) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x34), 0.0f);
            var_s2_4 = (u8 **)(*(u8 **)((u8 *)spCC + 0x10) + 0x2C);
        } else {
            var_s2_4 = (u8 **)(spCC + 0x10);
        }
        temp_f2 = *(f32 *)((u8 *)arg1 + 0xE0);
        if (!(temp_f2 <= 0.0f)) {
            var_f12_2 = 100.0f * (*(f32 *)((u8 *)arg1 + 0xE4) / temp_f2);
        } else {
            var_f12_2 = 100.0f;
        }
        *var_s2_4 = func_0022D860(*(s32 *)((u8 *)(temp_s6 + *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x14)) + 0x50), var_f12_2);
        func_00228410();
    }
    func_002CC840(spCC, arg1, arg3);
}
