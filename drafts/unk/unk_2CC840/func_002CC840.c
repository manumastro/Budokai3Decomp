/* Draft (not built): func_002CC840 at 0x002CC840, size 0x328, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 91 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x370, original 0x328
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CC840.s */

// src/unk/unk_2CC840.c func_002CC840 size diff=91/220
s32 func_00228430(s32);
s32 func_0022ACF0(void *);
s32 func_0022C7D0(void *, s32, f32);
extern s32 D_0046EFF0;
extern s32 D_0046F0D0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gBtlSys;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002CC840(u8 **arg0, u8 *arg1, s32 arg2) {
    u8 **spAC;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    s32 temp_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u32 temp_s4;
    u8 **var_s5;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2_2;
    u8 *temp_s6;
    u8 *var_a0;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_s7;

    spAC = arg0;
    temp_s0 = *arg0;
    temp_s2 = *(s32 *)((u8 *)arg1 + 0xC8);
    temp_a0 = *(u8 **)((u8 *)gBtlSys + 0xE84);
    D_00470704 = temp_a0;
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x04010000);
    var_s5 = spAC;
    D_00470238 = 0;
    var_s3 = 0;
    var_s7 = (u8 *)(&D_0046EFF0 + (temp_s2 * 0x10));
    do {
        temp_s2_2 = *(u8 **)((u8 *)var_s5 + 4);
        if (temp_s2_2 != NULL) {
            temp_s4 = *(u32 *)((u8 *)var_s7 + 4);
            func_00228430(0);
            func_0022C7D0(temp_s2_2, 0, (f32) var_s3);
            var_s2 = *(u8 **)((u8 *)temp_s2_2 + 0x2C);
            if (arg2 != 2) {
                func_0022C7D0(var_s2, 0, *(f32 *)((u8 *)temp_s0 + 8));
                var_s2 = *(u8 **)((u8 *)var_s2 + 0x2C);
            }
            if (temp_s4 == 0xC) {
                func_0022C7D0(var_s2, 0, *(f32 *)((u8 *)temp_s0 + 8));
                func_0022C7D0(*(u8 **)((u8 *)var_s2 + 0x2C), 0, *(f32 *)((u8 *)temp_s0 + 8));
                var_s2 = *(u8 **)((u8 *)var_s2 + 0x2C);
            } else {
                func_0022C7D0(var_s2, 0, *(&D_0046F0D0 + (temp_s4 * 0xC)));
            }
            temp_s6 = (u8 *)(&D_0046F0D0 + (temp_s4 * 0xC));
            var_s2_2 = *(u8 **)((u8 *)var_s2 + 0x2C);
            if (*(s32 *)((u8 *)temp_s6 + 4) != -1) {
                if (arg2 == 2) {
                    var_f12 = *(f32 *)((u8 *)temp_s0 + 8);
                } else {
                    var_f12 = 0.0f;
                }
                func_0022C7D0(var_s2_2, 0, var_f12);
                var_s2_2 = *(u8 **)((u8 *)var_s2_2 + 0x2C);
            }
            if (*(s32 *)((u8 *)temp_s6 + 8) != -1) {
                switch (temp_s4) {
                case 0:
                case 1:
                    var_v0 = *(s32 *)((u8 *)arg1 + 0xD0);
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    var_f12_2 = (f32) var_v0;
                    break;
                case 2:
                case 3:
                case 4:
                    var_v0_2 = *(s32 *)((u8 *)arg1 + 0xD4);
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    var_f12_2 = (f32) var_v0_2;
                    break;
                case 6:
                case 7:
                    var_v0_3 = *(s32 *)((u8 *)arg1 + 0xD8);
                    if (var_v0_3 < 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    var_f12_2 = (f32) var_v0_3;
                    break;
                case 8:
                case 9:
                    var_v0_4 = *(s32 *)((u8 *)arg1 + 0xDC);
                    if (var_v0_4 < 0) {
                        var_v0_4 = -var_v0_4;
                    }
                    var_f12_2 = (f32) var_v0_4;
                    break;
                default:
                    var_f12_2 = 0.0f;
                    break;
                }
                func_0022C7D0(var_s2_2, 1, var_f12_2);
            }
            func_0022ACF0(*(u8 **)((u8 *)var_s5 + 4));
            func_00228410();
        }
        var_s3 += 1;
        var_s5 += 4;
        var_s7 += 4;
    } while (var_s3 < 3);
    var_a0 = *(u8 **)((u8 *)spAC + 0x10);
    if (var_a0 != NULL) {
        if (arg2 != 2) {
            func_0022C7D0(var_a0, 0, *(f32 *)((u8 *)temp_s0 + 8));
            var_a0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)spAC + 0x10)) + 0x2C);
        }
        temp_f2 = *(f32 *)((u8 *)arg1 + 0xE0);
        if (!(temp_f2 <= 0.0f)) {
            var_f12_3 = 100.0f * (*(f32 *)((u8 *)arg1 + 0xE4) / temp_f2);
        } else {
            var_f12_3 = 100.0f;
        }
        func_0022C7D0(var_a0, 1, var_f12_3);
        func_0022ACF0(*(u8 **)((u8 *)spAC + 0x10));
    }
}
