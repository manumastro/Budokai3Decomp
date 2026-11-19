/* Draft (not built): func_0023D360 at 0x0023D360, size 0x320, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x308, original 0x320
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023D360.s */

// src/unk/unk_23A890.c func_0023D360 size diff=108/194
s32 func_00228430(s32);
s32 func_0022B900(s32, s32 *, s32);
extern void func_00228410(void);
void func_0023D360(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 saved_reg_s4;
    s32 saved_reg_s3;
    s32 spA0;
    s32 spB0;
    u32 spCC;
    s32 spD0;
    s32 spD4;
    s32 temp_v0;
    s32 var_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s6;
    s32 var_s7;
    u8 *temp_a0;
    u8 *var_s5;
    s32 phi_s4;
    s32 phi_s3;

    var_s3 = saved_reg_s3;
    var_s4 = saved_reg_s4;
    var_fp = arg2;
    var_s6 = arg0;
    var_s5 = gBtlSys;
    spCC = arg3;
    phi_s4 = saved_reg_s4;
    phi_s3 = saved_reg_s3;
    if (arg1 != 0) {
        var_s7 = (s32) arg1 % 1000;
        var_s2 = (arg1 / 1000) + (arg1 >> 0x1F);
        if (var_s7 != 0) {
            var_s2 += 1;
        }
        temp_v0 = 0x3E8 - var_s7;
        var_s1 = var_fp - temp_v0;
        spB0 = var_s1 > 0;
        if (var_s7 == 0) {
            var_s7 = 0x3E8;
        }
        amDraw_SetPacketMode(1);
        var_s0 = 0;
        spA0 = var_s7 + var_fp;
        do {
            switch (var_s0) {                       /* irregular */
            case 0:
                var_s4_2 = 0;
                phi_s4 = 0;
                phi_s4 = 0;
                if (var_s2 == 1) {

                } else {
                    var_s3_2 = var_s2 - 1;
                    var_s4_2 = 0x3DE;
                    var_s3_2 += 7;
                    phi_s4 = 0x3DE;
                    phi_s4 = 0x3DE;
                    phi_s3 = var_s3_2;
                    phi_s3 = var_s3_2;
                }
                break;
            case 1:
                var_s4_2 = 0;
                phi_s4 = 0;
                phi_s4 = 0;
                if (var_fp == 0) {

                } else {
                    var_s4_2 = 0x3E8;
                    phi_s4 = 0x3E8;
                    phi_s4 = 0x3E8;
                    if (spB0 != 0) {

                    } else {
                        var_s4_2 = spA0;
                        phi_s4 = var_s4_2;
                        phi_s4 = var_s4_2;
                    }
                    var_s3_2 = 0;
                    phi_s3 = 0;
                    phi_s3 = 0;
                }
                break;
            case 2:
                var_s4_2 = var_s7;
                var_s3_2 = var_s2;
                phi_s4 = var_s4_2;
                phi_s4 = var_s4_2;
                phi_s3 = var_s3_2;
                phi_s3 = var_s3_2;
                break;
            }
            func_0023CE80(var_s6, phi_s4, phi_s3);
            var_s0 += 1;
        } while (var_s0 < 3);
        if (var_s1 > 0) {
            var_s0 = ((var_fp - temp_v0) / 1000) + ((u32) var_s1 >> 0x1F);
            do {
                var_a1 = var_s1;
                if (var_s0 > 0) {
                    var_a1 = 0x3E8;
                }
                func_0023CE80(var_s6, var_a1, 0);
                var_s1 -= 0x3E8;
                var_s0 -= 1;
            } while (var_s1 > 0);
        }
        temp_a0 = *(u8 **)((u8 *)var_s5 + 0xE84);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04010000);
        var_s7 = (spCC / 1000) + (spCC >> 0x1F);
        D_00470238 = 0;
        if (((s32) spCC % 1000) != 0) {
            var_s7 += 1;
        }
        var_s0 = 0;
        if (var_s7 > 0) {
            var_s3_2 = (var_s6 * 7) + 0x14;
            var_s4_2 = ((var_s6 & 1) * 7) + 6;
            var_s1 = (s32) &spD4;
            do {
                func_00228430(0);
                func_0022B900(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0xE88)) + 0x1C) + (var_s4_2 * 4)), &spD0, 0);
                func_00228410();
                *(s32 *)var_s1 = (s32) (*(s32 *)var_s1 | 0x18);
                func_0022C6B0((s32)(&spD0));
                if (var_s0 < var_s2) {
                    func_00228430(0);
                    func_0022B900(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0xE88)) + 0x1C) + (var_s3_2 * 4)), &spD0, 0);
                    func_00228410();
                    *(s32 *)var_s1 = (s32) (*(s32 *)var_s1 | 0x18);
                    func_0022C6B0((s32)(&spD0));
                }
                var_s0 += 1;
                var_s4_2 += 1;
                var_s3_2 += 1;
            } while (var_s0 < var_s7);
        }
        amDraw_SetPacketMode(0);
    }
}
