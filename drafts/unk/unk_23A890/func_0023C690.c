/* Draft (not built): func_0023C690 at 0x0023C690, size 0x7EC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 311 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x594, original 0x7EC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023C690.s */

// src/unk/unk_23A890.c func_0023C690 size diff=311/357
s32 func_0021BEA0(void *, s32);
s32 func_00228430(s32);
s32 func_0022B900(s32, s32 *, f32);
s32 func_0022D0E0(void *, s32);
void *func_0022D860(s32, f32);
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
    f32 spF8;
    s32 spFC;
    s32 sp100;
    s32 sp104;
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
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_s2;
    u32 temp_a1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s7;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v1;
    u8 *var_s4;
    u8 *var_v1;

    spC8 = arg1;
    temp_s7 = gBtlSys;
    spCC = arg0;
    var_s4 = &D_0058BF70 + (arg0 * 0x64) + 0x210;
    temp_v0 = func_0021C3D0(arg0 * 5);
    temp_s3 = func_0021C400(temp_v0);
    temp_v0_2 = func_0021C430(temp_v0);
    if (*(s32 *)((u8 *)temp_v0_2 + 0xE8) == 0) {
        goto block_11;
    }
    temp_a0 = *(u8 **)((u8 *)temp_s7 + 0xE84);
    temp_f20 = *(f32 *)((u8 *)temp_v0_2 + 0xEC) / *(f32 *)((u8 *)temp_v0_2 + 0xF0);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04010000);
    D_00470238 = 0;
    if (!(*(s32 *)((u8 *)temp_s3 + 0) & 0x100000)) {
        goto block_10;
    }
    func_00228430(0);
    temp_s0 = spCC & 1;
    temp_s1 = func_0022D860(*(s32 *)((u8 *)((temp_s0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s7 + 0xE88)) + 0x14)) + 0xB0), *(f32 *)((u8 *)temp_s3 + 0x34));
    func_00228410();
    var_v1 = *(u8 **)((u8 *)temp_s1 + 0x2C);
    if (var_v1 == NULL) {
        goto block_9;
    }
loop_4:
    temp_v0_3 = *(u8 **)((u8 *)var_v1 + 0x30);
    temp_f0 = *(f32 *)((u8 *)temp_v0_3 + 0x48) - *(f32 *)((u8 *)temp_v0_3 + 0x40);
    if (temp_s0 == 0) {
        goto block_6;
    }
    *(f32 *)((u8 *)temp_v0_3 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x38) * temp_f20);
    temp_v0_4 = *(u8 **)((u8 *)var_v1 + 0x30);
    *(f32 *)((u8 *)temp_v0_4 + 0x40) = (f32) (*(f32 *)((u8 *)temp_v0_4 + 0x48) - (temp_f0 * temp_f20));
    goto block_7;
block_6:
    *(f32 *)((u8 *)temp_v0_3 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x38) * temp_f20);
    temp_v0_5 = *(u8 **)((u8 *)var_v1 + 0x30);
    *(f32 *)((u8 *)temp_v0_5 + 0x48) = (f32) (*(f32 *)((u8 *)temp_v0_5 + 0x40) + (temp_f0 * temp_f20));
block_7:
    var_v1 = *(u8 **)((u8 *)var_v1 + 0x28);
    if (var_v1 != NULL) {
        goto loop_4;
    }
block_9:
    func_0021BEA0(temp_s1, 0x18);
    func_0022C560((s32)(temp_s1));
    func_0022D0E0(temp_s1, 1);
    goto block_55;
block_10:
    func_00228430(0);
    temp_s0_2 = func_0022D860(*(s32 *)((u8 *)(((spCC & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s7 + 0xE88)) + 0x14)) + 0xA8), temp_f20 * 100.0f);
    func_00228410();
    func_0021BEA0(temp_s0_2, 0x18);
    func_0022C560((s32)(temp_s0_2));
    func_0022D0E0(temp_s0_2, 1);
    goto block_55;
block_11:
    if (!(*(s32 *)((u8 *)temp_s3 + 0) & 0x400)) {
        goto block_13;
    }
    temp_v1 = *(u8 **)((u8 *)var_s4 + 0x10);
    *(s32 *)((u8 *)temp_v1 + 4) = (s32) (*(s32 *)((u8 *)temp_v1 + 4) | 0x18);
    func_0022C6B0((s32)((void *)(*(u8 **)((u8 *)var_s4 + 0x10))));
    goto block_55;
block_13:
    temp_a0_2 = *(u8 **)((u8 *)temp_s7 + 0xE84);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x04010000);
    D_00470238 = 0;
    amModel_SetCurrent((s32)(*(u8 **)((u8 *)temp_s7 + 0xE84)), 0x04010000);
    var_s2 = 0;
    spB0 = spCC & 1;
loop_14:
    if (spB0 == 0) {
        goto block_20;
    }
    temp_f1 = 549.0f - (11.0f * (f32) var_s2);
    spD4 = temp_f1;
    spD0 = temp_f1 - 9.0f;
    spD8 = 1000.0f;
    if (*(s32 *)((u8 *)var_s4 + 0x30) == 0) {
        goto block_17;
    }
    var_f0 = -4.0f;
    goto block_18;
block_17:
    var_f0 = -6.0f;
block_18:
    spDC = var_f0;
    spE0 = *(s32 *)((u8 *)var_s4 + 0x30);
    goto block_24;
block_20:
    temp_f0_2 = 50.0f + (11.0f * (f32) var_s2);
    spD0 = temp_f0_2;
    spD4 = 9.0f + temp_f0_2;
    spD8 = 1000.0f;
    if (*(s32 *)((u8 *)var_s4 + 0x30) == 0) {
        goto block_22;
    }
    var_f0_2 = 4.0f;
    goto block_23;
block_22:
    var_f0_2 = 6.0f;
block_23:
    spDC = var_f0_2;
    spE0 = *(s32 *)((u8 *)var_s4 + 0x30);
block_24:
    amDraw_SetPacketMode(1);
    spF0 = 0x3F800000;
    spF4 = 1.0f;
    spF8 = 1.0f;
    spFC = 0x3F4CCCCD;
    func_0023BBE0(0, &spD0, &spF0, 0.0f);
    spD8 = *(f32 *)((u8 *)var_s4 + 0x14);
    if (!(*(s32 *)((u8 *)temp_s3 + 0) & 0x100000)) {
        goto block_39;
    }
    spF0 = 0x3F800000;
    spF4 = 0.0f;
    spF8 = 0.0f;
    spFC = 0x3F800000;
    temp_a1 = *(u32 *)((u8 *)temp_s3 + 0x20);
    temp_v0_6 = (*(u32 *)((u8 *)temp_s3 + 0x20) / 1000) + (temp_a1 >> 0x1F);
    if (temp_v0_6 != var_s2) {
        goto block_27;
    }
    spD8 = (f32) ((s32) temp_a1 % 1000);
    goto block_31;
block_27:
    if (var_s2 >= temp_v0_6) {
        goto block_30;
    }
    spD8 = 1000.0f;
    goto block_31;
block_30:
    spD8 = 0.0f;
block_31:
    func_0023BBE0(2, &spD0, &spF0, 0.0f);
    if (!(*(f32 *)((u8 *)temp_s3 + 0x34) < 15.0f)) {
        goto block_38;
    }
    spF0 = 0x3F800000;
    var_f3 = *(f32 *)((u8 *)temp_s3 + 0x34) / 15.0f;
    if (!(var_f3 > 0.5f)) {
        goto block_34;
    }
    var_f3 = 0.5f;
block_34:
    spF4 = 1.0f - var_f3;
    var_f1 = *(f32 *)((u8 *)temp_s3 + 0x34) / 15.0f;
    if (!(var_f1 > 1.0f)) {
        goto block_36;
    }
    var_f1 = 1.0f;
block_36:
    spF8 = 1.0f - var_f1;
    spFC = 0x3F800000;
    func_0023BBE0(4, &spD0, &spF0, 0.0f);
    goto block_51;
block_38:
    spF0 = 0x3F800000;
    spF4 = 1.0f;
    spF8 = 1.0f;
    spFC = 0x3F800000;
    spD8 = *(f32 *)((u8 *)var_s4 + 0x14);
    func_0023BBE0(3, &spD0, &spF0, *(f32 *)((u8 *)temp_s3 + 0x34) + (10.0f * (f32) var_s2));
    goto block_51;
block_39:
    temp_f0_3 = *(f32 *)((u8 *)var_s4 + 0x14);
    if (temp_f0_3 <= 1000.0f) {
        goto block_44;
    }
    spF0 = 0x3F800000;
    spF4 = 1.0f;
    var_f1_2 = (temp_f0_3 - 1000.0f) / 10.0f;
    if (!(var_f1_2 > 1.0f)) {
        goto block_42;
    }
    var_f1_2 = 1.0f;
block_42:
    spF8 = 1.0f - var_f1_2;
    spFC = 0x3F800000;
    func_0023BBE0(4, &spD0, &spF0, 0.0f);
    goto block_51;
block_44:
    if (temp_f0_3 != 1000.0f) {
        goto block_46;
    }
    spF0 = 0x3F800000;
    spF4 = 1.0f;
    spF8 = 0.0f;
    spFC = 0x3F800000;
    goto block_50;
block_46:
    if (var_s2 != 0) {
        goto block_49;
    }
    spF0 = 0x3F800000;
    spF4 = 0.0f;
    spF8 = 0.0f;
    spFC = 0x3F800000;
    goto block_50;
block_49:
    spF0 = 0x3F800000;
    spF4 = 0.6f;
    spF8 = 0.0f;
    spFC = 0x3F800000;
block_50:
    func_0023BBE0(1, &spD0, &spF0, 0.0f);
block_51:
    amDraw_SetPacketMode(0);
    var_s2 += 1;
    var_s4 += 4;
    if (var_s2 < 7) {
        goto loop_14;
    }
    if (spC8 >= 0x3E8) {
        goto block_55;
    }
    if (*(s32 *)((u8 *)temp_s3 + 0) & 0x100000) {
        goto block_55;
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s7 + 0xE84);
    D_00470704 = (s32)(temp_a0_3);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0x04010000);
    D_00470238 = 0;
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)((spB0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s7 + 0xE88)) + 0x1C)) + 0xA0), &sp100, *(f32 *)((u8 *)temp_s3 + 0x38));
    func_00228410();
    sp104 |= 0x18;
    func_0022C6B0((s32)((void *)(&sp100)));
block_55:
    if (!(*(s32 *)((u8 *)temp_s3 + 0) & 0x100000)) {
        goto block_58;
    }
    if (!(*(f32 *)((u8 *)temp_s3 + 0x34) <= 15.0f)) {
        goto block_58;
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s7 + 0xE84);
    D_00470704 = (s32)(temp_a0_4);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_4), 0x04010000);
    D_00470238 = 0;
    func_00228430(0);
    temp_s0_3 = func_0022D860(*(s32 *)((u8 *)(((spCC & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s7 + 0xE88)) + 0x14)) + 0x9C), *(f32 *)((u8 *)temp_s3 + 0x34));
    func_00228410();
    func_0021BEA0(temp_s0_3, 0x18);
    func_0022C560((s32)(temp_s0_3));
    func_0022D0E0(temp_s0_3, 1);
block_58:
    return;
}
