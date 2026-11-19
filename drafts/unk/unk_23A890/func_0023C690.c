/* Draft (not built): func_0023C690 at 0x0023C690, size 0x7EC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 242 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x7FC, original 0x7EC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023C690.s */

// src/unk/unk_23A890.c func_0023C690 size diff=242/511
s32 func_0021BEA0(f32 *, s32);
s32 func_00228430(s32);
s32 func_0022B900(s32, s32 *, f32);
s32 func_0022D0E0(f32 *, s32);
f32 *func_0022D860(s32, f32);
extern void func_00228410(void);
void func_0023C690(s32 arg0, s32 arg1) {
    s32 spB0;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    s32 spE0;
    s32 spF0;
    f32 spF4;
    s32 spF8;
    s32 spFC;
    s32 sp100;
    s32 sp104;
    f32 *var_fp;
    f32 *var_s1;
    f32 *var_s6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f3;
    s32 *var_s5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s2;
    u32 temp_a1;
    u8 *temp_v0;
    u8 *var_s3;
    u8 *var_s7;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v1;
    u8 *var_s4;
    u8 *var_v1;

    spC8 = arg1;
    var_s7 = gBtlSys;
    spCC = arg0;
    var_s4 = D_0058BF70 + (arg0 * 0x64) + 0x210;
    var_s0 = func_0021C3D0(arg0);
    var_s3 = func_0021C400(var_s0);
    temp_v0 = func_0021C430(var_s0);
    if (*(s32 *)((u8 *)temp_v0 + 0xE8) != 0) {
        temp_a0 = *(s32 *)((u8 *)var_s7 + 0xE84);
        temp_f20 = *(f32 *)((u8 *)temp_v0 + 0xEC) / *(f32 *)((u8 *)temp_v0 + 0xF0);
        D_00470704 = temp_a0;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04010000);
        D_00470238 = 0;
        if (*(s32 *)((u8 *)var_s3 + 0) & 0x100000) {
            func_00228430(0);
            var_s0 = spCC & 1;
            var_s1 = func_0022D860(*(s32 *)((u8 *)((var_s0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s7 + 0xE88)) + 0x14)) + 0xB0), *(f32 *)((u8 *)var_s3 + 0x34));
            func_00228410();
            var_v1 = *(u8 **)((u8 *)var_s1 + 0x2C);
            if (var_v1 != NULL) {
                do {
                    temp_v0_2 = *(u8 **)((u8 *)var_v1 + 0x30);
                    temp_f0 = *(f32 *)((u8 *)temp_v0_2 + 0x48) - *(f32 *)((u8 *)temp_v0_2 + 0x40);
                    if (var_s0 != 0) {
                        *(f32 *)((u8 *)temp_v0_2 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x38) * temp_f20);
                        temp_v0_3 = *(u8 **)((u8 *)var_v1 + 0x30);
                        *(f32 *)((u8 *)temp_v0_3 + 0x40) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x48) - (temp_f0 * temp_f20));
                    } else {
                        *(f32 *)((u8 *)temp_v0_2 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x38) * temp_f20);
                        temp_v0_4 = *(u8 **)((u8 *)var_v1 + 0x30);
                        *(f32 *)((u8 *)temp_v0_4 + 0x48) = (f32) (*(f32 *)((u8 *)temp_v0_4 + 0x40) + (temp_f0 * temp_f20));
                    }
                    var_v1 = *(u8 **)((u8 *)var_v1 + 0x28);
                } while (var_v1 != NULL);
            }
            func_0021BEA0(var_s1, 0x18);
            func_0022C560((s32) var_s1);
            func_0022D0E0(var_s1, 1);
        } else {
            func_00228430(0);
            var_s0 = (int)(func_0022D860(*(s32 *)((u8 *)(((spCC & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s7 + 0xE88)) + 0x14)) + 0xA8), temp_f20 * 100.0f));
            func_00228410();
            func_0021BEA0((f32 *) var_s0, 0x18);
            func_0022C560(var_s0);
            func_0022D0E0((f32 *) var_s0, 1);
        }
    } else if (*(s32 *)((u8 *)var_s3 + 0) & 0x400) {
        temp_v1 = *(u8 **)((u8 *)var_s4 + 0x10);
        *(s32 *)((u8 *)temp_v1 + 4) = (s32) (*(s32 *)((u8 *)temp_v1 + 4) | 0x18);
        func_0022C6B0((s32) *(u8 **)((u8 *)var_s4 + 0x10));
    } else {
        temp_a0_2 = *(s32 *)((u8 *)var_s7 + 0xE84);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x04010000);
        D_00470238 = 0;
        amModel_SetCurrent(*(s32 *)((u8 *)var_s7 + 0xE84), 0x04010000);
        var_s2 = 0;
        var_fp = &spD4;
        var_s6 = &spD8;
        var_s1 = &spF4;
        var_s0 = (s32) &spF8;
        var_s5 = &spFC;
        spB0 = spCC & 1;
        do {
            if (spB0 != 0) {
                temp_f1 = 549.0f - (11.0f * (f32) var_s2);
                *var_fp = temp_f1;
                spD0 = temp_f1 - 9.0f;
                *var_s6 = 1000.0f;
                if (*(s32 *)((u8 *)var_s4 + 0x30) != 0) {
                    var_f0 = -4.0f;
                } else {
                    var_f0 = -6.0f;
                }
                spDC = var_f0;
                spE0 = *(s32 *)((u8 *)var_s4 + 0x30);
            } else {
                temp_f0_2 = 50.0f + (11.0f * (f32) var_s2);
                spD0 = temp_f0_2;
                *var_fp = 9.0f + temp_f0_2;
                *var_s6 = 1000.0f;
                if (*(s32 *)((u8 *)var_s4 + 0x30) != 0) {
                    var_f0_2 = 4.0f;
                } else {
                    var_f0_2 = 6.0f;
                }
                spDC = var_f0_2;
                spE0 = *(s32 *)((u8 *)var_s4 + 0x30);
            }
            amDraw_SetPacketMode(1);
            spF0 = 0x3F800000;
            *var_s1 = 1.0f;
            *(s32 *)var_s0 = 1.0f;
            *var_s5 = 0x3F4CCCCD;
            func_0023BBE0(0, &spD0, &spF0, 0.0f);
            *var_s6 = *(f32 *)((u8 *)var_s4 + 0x14);
            if (*(s32 *)((u8 *)var_s3 + 0) & 0x100000) {
                spF0 = 0x3F800000;
                *var_s1 = 0.0f;
                *(s32 *)var_s0 = 0.0f;
                *var_s5 = 0x3F800000;
                temp_a1 = *(u32 *)((u8 *)var_s3 + 0x20);
                temp_v0_5 = (*(u32 *)((u8 *)var_s3 + 0x20) / 1000) + (temp_a1 >> 0x1F);
                if (temp_v0_5 == var_s2) {
                    *var_s6 = (f32) ((s32) temp_a1 % 1000);
                } else if (var_s2 < temp_v0_5) {
                    *var_s6 = 1000.0f;
                } else {
                    *var_s6 = 0.0f;
                }
                func_0023BBE0(2, &spD0, &spF0, 0.0f);
                if (*(f32 *)((u8 *)var_s3 + 0x34) < 15.0f) {
                    spF0 = 0x3F800000;
                    var_f3 = *(f32 *)((u8 *)var_s3 + 0x34) / 15.0f;
                    if (var_f3 > 0.5f) {
                        var_f3 = 0.5f;
                    }
                    *var_s1 = 1.0f - var_f3;
                    var_f1 = *(f32 *)((u8 *)var_s3 + 0x34) / 15.0f;
                    if (var_f1 > 1.0f) {
                        var_f1 = 1.0f;
                    }
                    *(s32 *)var_s0 = (f32) (1.0f - var_f1);
                    *var_s5 = 0x3F800000;
                    func_0023BBE0(4, &spD0, &spF0, 0.0f);
                } else {
                    spF0 = 0x3F800000;
                    *var_s1 = 1.0f;
                    *(s32 *)var_s0 = 1.0f;
                    *var_s5 = 0x3F800000;
                    *var_s6 = *(f32 *)((u8 *)var_s4 + 0x14);
                    func_0023BBE0(3, &spD0, &spF0, *(f32 *)((u8 *)var_s3 + 0x34) + (10.0f * (f32) var_s2));
                }
            } else {
                temp_f0_3 = *(f32 *)((u8 *)var_s4 + 0x14);
                if (!(temp_f0_3 <= 1000.0f)) {
                    spF0 = 0x3F800000;
                    *var_s1 = 1.0f;
                    var_f1_2 = (temp_f0_3 - 1000.0f) / 10.0f;
                    if (var_f1_2 > 1.0f) {
                        var_f1_2 = 1.0f;
                    }
                    *(s32 *)var_s0 = (f32) (1.0f - var_f1_2);
                    *var_s5 = 0x3F800000;
                    func_0023BBE0(4, &spD0, &spF0, 0.0f);
                } else {
                    if (temp_f0_3 == 1000.0f) {
                        spF0 = 0x3F800000;
                        *var_s1 = 1.0f;
                        *(s32 *)var_s0 = 0.0f;
                        *var_s5 = 0x3F800000;
                    } else if (var_s2 == 0) {
                        spF0 = 0x3F800000;
                        *var_s1 = 0.0f;
                        *(s32 *)var_s0 = 0.0f;
                        *var_s5 = 0x3F800000;
                    } else {
                        spF0 = 0x3F800000;
                        *var_s1 = 0.6f;
                        *(s32 *)var_s0 = 0.0f;
                        *var_s5 = 0x3F800000;
                    }
                    func_0023BBE0(1, &spD0, &spF0, 0.0f);
                }
            }
            amDraw_SetPacketMode(0);
            var_s2 += 1;
            var_s4 += 4;
        } while (var_s2 < 7);
        if ((spC8 < 0x3E8) && !(*(s32 *)((u8 *)var_s3 + 0) & 0x100000)) {
            temp_a0_3 = *(s32 *)((u8 *)var_s7 + 0xE84);
            D_00470704 = temp_a0_3;
            D_0047070C = 0x04010000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_3, 0x04010000);
            D_00470238 = 0;
            func_00228430(0);
            func_0022B900(*(s32 *)((u8 *)((spB0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s7 + 0xE88)) + 0x1C)) + 0xA0), &sp100, *(f32 *)((u8 *)var_s3 + 0x38));
            func_00228410();
            sp104 |= 0x18;
            func_0022C6B0((s32) &sp100);
        }
    }
    if ((*(s32 *)((u8 *)var_s3 + 0) & 0x100000) && (*(f32 *)((u8 *)var_s3 + 0x34) <= 15.0f)) {
        temp_a0_4 = *(s32 *)((u8 *)var_s7 + 0xE84);
        D_00470704 = temp_a0_4;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_4, 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        var_s0 = (int)(func_0022D860(*(s32 *)((u8 *)(((spCC & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s7 + 0xE88)) + 0x14)) + 0x9C), *(f32 *)((u8 *)var_s3 + 0x34)));
        func_00228410();
        func_0021BEA0((f32 *) var_s0, 0x18);
        func_0022C560(var_s0);
        func_0022D0E0((f32 *) var_s0, 1);
    }
}
