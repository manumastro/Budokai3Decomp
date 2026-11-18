/* Draft (not built): func_002995F0 at 0x002995F0, size 0x6A8, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 255 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x508, original 0x6A8
 * Original: asm/nonmatchings/unk/unk_297C60/func_002995F0.s */

// src/unk/unk_297C60.c func_002995F0 size diff=255/322
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 amMath_SinCosI(s32, f32 *, f32 *);
s32 func_00133780(s32, s32);
s32 func_00136870(s32, s32, s32 *, s32);
s32 func_00136E80(s32, s32 *, s32, s32);
s32 func_00137B60(f32 *);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
s32 func_0022C060(void *, s32);
s32 func_0022C560(void *);
extern f32 D_00470070;
extern f32 D_00470074;
extern s32 D_00470078;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_004708A4;
extern f32 D_004708B8;
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void *gStrMap;
extern void func_00228410(void);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void SoundRpc_Send3();
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002995F0(void) {
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    f32 spC8;
    f32 spCC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    s32 *var_v1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *var_s4;

    var_v0 = 0x10;
    var_v1 = &spB0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s5 = amGs_SetReg32(2, 0x30402);
    func_00133780(2, 1);
    amDraw_SetPacketMode(1);
    spBC = 0x3E4CCCCD;
    func_00136E80(0x900, &spB0, -1, 0x48);
    spA0 = 384.0f;
    spA4 = 234.0f;
    spA8 = 0;
    spAC = 0x3F800000;
    func_00137B60(&spA0);
    spA0 = 584.0f;
    spA4 = 434.0f;
    func_00137B60(&spA0);
    amDraw_FlushPacket();
    spBC = 0x3F800000;
    func_00136870(2, 0x900, &spB0, -1);
    spA0 = 484.0f;
    spA4 = 334.0f;
    spA8 = 0;
    func_00137B60(&spA0);
    temp_v0 = D_00470078;
    var_s3 = 0;
    if (temp_v0 >= 0) {
        var_s1 = 0;
        do {
            amMath_SinCosI((var_s1 / temp_v0) & 0xFFFF, &spCC, &spC8);
            spA0 = 484.0f + (spCC * D_00470070);
            spA4 = 334.0f + (spC8 * D_00470070);
            func_00137B60(&spA0);
            var_s3 += 1;
            var_s1 += 0x10000;
        } while (D_00470078 >= var_s3);
    }
    amDraw_FlushPacket();
    amGs_SetReg32(2, 0x3C402);
    temp_f23 = 4000.0f * (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f20 = 256.0f / temp_f23;
    amModel_SetCurrent(*(u8 **)((u8 *)gStrMap + 0x60), 0x500000);
    spB0 = 0;
    spB4 = 0x3F48C8C9;
    spB8 = 0x3DC8C8C9;
    spBC = 0x3F800000;
    func_00136E80(0x40000924, &spB0, 0, 0x44);
    spA0 = 384.0f;
    spA4 = 234.0f;
    spA8 = 0x41200000;
    sp90 = (192.0f + (*(f32 *)((u8 *)D_005AA604 + 0x11C0) * temp_f20)) - 32.0f;
    sp94 = (192.0f + (*(f32 *)((u8 *)D_005AA604 + 0x11C8) * temp_f20)) - 32.0f;
    sp98 = 0x3F800000;
    sp9C = 0x3F800000;
    func_00137560(&spA0, &sp90);
    spA0 += 200.0f;
    spA4 += 200.0f;
    sp90 += 64.0f;
    sp94 += 64.0f;
    func_00137560(&spA0, &sp90);
    amDraw_FlushPacket();
    amGs_SetReg32(2, 0x30402);
    temp_s1 = *(u8 **)((u8 *)gStrMap + 0x90);
    temp_a0 = *(u8 **)((u8 *)gStrMap + 0x64);
    D_00470704 = temp_a0;
    D_0047070C = 0x510000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x510000);
    D_00470238 = 0;
    spA0 = 484.0f;
    spA4 = 334.0f;
    spA8 = 0;
    spAC = 0x3F800000;
    func_00228430(0);
    func_00227A30(&spA0);
    func_0022C060(temp_s1, 0x3F800000);
    **(f32 **)((u8 *)temp_s1 + 0x30) = -((180.0f * (f32) *(s16 *)((u8 *)D_005AA604 + 0x11D0)) / 32768.0f);
    func_0022C560(temp_s1);
    func_00228410();
    var_s1_2 = 0;
    var_s3_2 = 0;
    temp_f20_2 = 800.0f / temp_f23;
    var_s4 = (u8 *)(D_005AA604 + 0x80);
    temp_f22 = 0.5f * -temp_f23;
    temp_f21 = 0.5f * temp_f23;
    do {
        if (*(s32 *)((u8 *)var_s4 + 0) != -1) {
            temp_v1 = *(s32 *)((u8 *)var_s4 + 4);
            if (!(temp_v1 & 0x40) && (temp_v1 & 0x10)) {
                temp_f0 = *(f32 *)((u8 *)var_s4 + 0x10) - *(f32 *)((u8 *)D_005AA604 + 0x11C0);
                spA0 = temp_f0;
                spA4 = *(f32 *)((u8 *)var_s4 + 0x18) - *(f32 *)((u8 *)D_005AA604 + 0x11C8);
                if (temp_f0 <= temp_f22) {
                    spA0 = temp_f0 + temp_f23;
                } else if (!(temp_f0 < temp_f21)) {
                    spA0 = temp_f0 - temp_f23;
                }
                temp_f0_2 = spA4;
                if (temp_f0_2 <= temp_f22) {
                    spA4 = temp_f0_2 + temp_f23;
                } else if (!(temp_f0_2 < temp_f21)) {
                    spA4 = temp_f0_2 - temp_f23;
                }
                spA0 *= temp_f20_2;
                spA4 *= temp_f20_2;
                if (M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f1 */) <= D_00470074) {
                    temp_s0 = *(u8 **)((u8 *)(((u8 *)gStrMap) + var_s3_2) + 0x9C);
                    spA0 = M2C_ERROR(/* unknown instruction: mula.s $f2, $f2 */) + 484.0f;
                    spA4 += 334.0f;
                    func_00228430(0);
                    func_00227A30(&spA0);
                    func_0022C060(temp_s0, 0x3F800000);
                    func_0022C560(temp_s0);
                    func_00228410();
                }
            }
        }
        var_s1_2 += 1;
        var_s3_2 += 4;
        var_s4 += 0x40;
    } while (var_s1_2 < 0x40);
    temp_s0_2 = *(u8 **)((u8 *)gStrMap + 0x8C);
    temp_a0_2 = *(u8 **)((u8 *)gStrMap + 0x64);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x510000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x510000);
    D_00470238 = 0;
    if (*(f32 *)((u8 *)temp_s0_2 + 0x10) == 0.0f) {
        D_004708B8 = 0.0f;
    }
    if (D_004708B8 <= 0.0f) {
        D_004708B8 = 150.0f;
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 0xA, 0);
        }
    }
    D_004708B8 -= gFrameDelta;
    func_0022C060(temp_s0_2, 0x3F800000);
    func_0022C560(temp_s0_2);
    amDraw_SetPacketMode(0);
    func_00133780(2, 0);
    amGs_SetReg32(2, temp_s5);
}
