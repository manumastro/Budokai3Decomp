/* Draft (not built): func_0028F090 at 0x0028F090, size 0x68C, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp1B0' mwccps2.exe Compiler: 280: sp154 = sp1B4; @ 279: sp150 = sp1B0;
 * Original: asm/nonmatchings/story/str_bg/func_0028F090.s */

// src/story/str_bg.c func_0028F090 cerr diff=-1/0
s32 func_00131F00(s32 *, s32, s32);
s32 func_00132D20(s32, f32 *, f32);
f32 func_00133FA0(s32, s32);
s32 func_0013B110(s32);
s32 func_0013E0A0(s32);
s32 func_0013E170(s32);
s32 func_002CFDE0(s32);
s32 func_002D04A0(s32);
extern f32 D_0049571C;
extern f32 D_00495720;
extern f32 D_00495724;
extern f32 D_0049575C;
extern f32 D_00495760;
extern f32 D_00495764;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern char D_00495718[];
extern char D_00495758[];
extern void func_0012F2C0(void);
extern char D_003F0800[];
extern void func_0013B060(void *);
extern void amObject_Draw(void *);
void func_0028F090(void) {
    s32 sp80;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s8 spA0;
    f32 spA8;
    f32 spB0;
    f32 spBC;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    s32 spF0;
    s32 sp114;
    f32 sp118;
    f32 sp150;
    f32 sp154;
    f32 sp158;
    f32 sp15C;
    f32 sp160;
    f32 sp164;
    f32 sp168;
    f32 sp16C;
    f32 sp170;
    f32 sp174;
    f32 sp178;
    f32 sp17C;
    s32 sp180;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_t0;
    s32 var_v0;
    s8 *var_v1;
    s8 temp_s1;
    u8 *temp_a0_2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s0_2;
    u8 *var_s4;
    u8 *var_s4_2;
    u8 *var_v0_2;

    var_s2 = 0;
    var_s0 = (u8 *)(D_004708A4 + 0x2CF0);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    sp150 = sp1B0;
    sp154 = sp1B4;
    sp158 = sp1B8;
    sp15C = sp1BC;
    func_00131B90(&spF0);
    sp118 = func_00133FA0(0, 0x457A0000);
    sp114 = 0x457A0000;
    func_00131F00(&spF0, 0, 0);
    func_00132DF0(D_003F0800);
    var_v1 = &spA0;
    var_v0 = 0x48;
    temp_s1 = *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f1 = 4000.0f * (f32) temp_s1;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_f0 = -temp_f1;
    spB0 = temp_f1;
    var_s5 = 0;
    spA8 = temp_f0;
    spBC = temp_f0;
    spC4 = temp_f1;
    spC8 = temp_f0;
    spCC = temp_f0;
    var_s4 = (u8 *)(D_004708A4 + 0x1AF0);
    spD0 = temp_f0;
    spDC = temp_f0;
    spD4 = temp_f1;
    spD8 = temp_f1;
    spE0 = temp_f1;
    spE4 = temp_f1;
loop_16:
    if (var_s5 < (temp_s1 * temp_s1)) {
        sp170 = *(f32 *)((u8 *)var_s4 + 0);
        sp174 = *(f32 *)((u8 *)var_s4 + 4);
        sp178 = *(f32 *)((u8 *)var_s4 + 8);
        sp17C = *(f32 *)((u8 *)var_s4 + 0xC);
        *(s32 *)((u8 *)var_s4 + 0x18) = 0;
        if (var_s2 < 0x80) {
            var_s3 = 0;
loop_11:
            if (var_s3 >= 9) {

            } else {
                sp170 += *(f32 *)((u8 *)((var_s3 * 8) + sp) + 0xA0);
                sp178 += *(f32 *)((u8 *)((var_s3 * 8) + sp) + 0xA4);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
                temp_f20 = *(f32 *)((u8 *)var_s0 + 8);
                sp160 = *(f32 *)((u8 *)var_s0 + 0);
                sp164 = *(f32 *)((u8 *)var_s0 + 4);
                sp168 = *(f32 *)((u8 *)var_s0 + 8);
                sp16C = *(f32 *)((u8 *)var_s0 + 0xC);
                sp168 = -temp_f20;
                if (!(temp_f20 < -9000.0f) && (func_00132D20(0, &sp160, *(f32 *)((u8 *)var_s4 + 0x10)) == 0)) {
                    var_s2 += 1;
                    *(f32 *)((u8 *)var_s0 + 0x10) = (f32) (100.0f * temp_f20);
                    *(u8 **)((u8 *)var_s0 + 0x14) = var_s4;
                    *(s32 *)((u8 *)var_s0 + 0x18) = (s32) *(s32 *)((u8 *)var_s4 + 0x14);
                    *(s32 *)((u8 *)var_s0 + 0x1C) = (s32) *(s32 *)((u8 *)var_s4 + 0x70);
                    var_s0 += 0x20;
                    if (var_s2 < 0x80) {
                        goto block_10;
                    }
                } else {
block_10:
                    temp_v0 = (var_s3 * 8) + sp;
                    var_s3 += 1;
                    sp170 -= *(f32 *)((u8 *)temp_v0 + 0xA0);
                    sp178 -= *(f32 *)((u8 *)temp_v0 + 0xA4);
                    goto loop_11;
                }
            }
            if ((temp_s1 - 1) == (var_s5 % temp_s1)) {
                var_s4 += (6 - temp_s1) << 7;
            }
            var_s5 += 1;
            var_s4 += 0x80;
            goto loop_16;
        }
    }
    var_s1 = var_s2 - 1;
    var_a1 = (u8 *)(D_004708A4 + 0x2CF0);
loop_24:
    if (var_s1 > 0) {
        var_a3 = *(s32 *)((u8 *)var_a1 + 0x10);
        var_t0 = var_s1;
        var_a0 = var_a1;
        var_v0_2 = var_a1 + 0x20;
        var_s1 -= 1;
        do {
            temp_a2 = *(s32 *)((u8 *)var_v0_2 + 0x10);
            var_t0 -= 1;
            if (var_a3 < temp_a2) {
                var_a3 = temp_a2;
                var_a0 = var_v0_2;
            }
            var_v0_2 += 0x20;
        } while (var_t0 != 0);
        *(f32 *)((u8 *)(&sp80) + 0) = (f32) *(f32 *)((u8 *)var_a1 + 0);
        *(f32 *)((u8 *)(&sp80) + 4) = (f32) *(f32 *)((u8 *)var_a1 + 4);
        *(f32 *)((u8 *)(&sp80) + 8) = (f32) *(f32 *)((u8 *)var_a1 + 8);
        *(f32 *)((u8 *)(&sp80) + 0xC) = (f32) *(f32 *)((u8 *)var_a1 + 0xC);
        temp_v0_2 = *(s32 *)((u8 *)var_a1 + 0x10);
        sp90 = temp_v0_2;
        temp_v0_3 = *(s32 *)((u8 *)var_a1 + 0x14);
        sp94 = temp_v0_3;
        temp_v0_4 = *(s32 *)((u8 *)var_a1 + 0x18);
        sp98 = temp_v0_4;
        temp_v0_5 = *(s32 *)((u8 *)var_a1 + 0x1C);
        sp9C = temp_v0_5;
        *(f32 *)((u8 *)var_a1 + 0) = (f32) *(f32 *)((u8 *)var_a0 + 0);
        *(f32 *)((u8 *)var_a1 + 4) = (f32) *(f32 *)((u8 *)var_a0 + 4);
        *(f32 *)((u8 *)var_a1 + 8) = (f32) *(f32 *)((u8 *)var_a0 + 8);
        *(f32 *)((u8 *)var_a1 + 0xC) = (f32) *(f32 *)((u8 *)var_a0 + 0xC);
        *(s32 *)((u8 *)var_a1 + 0x10) = (s32) *(s32 *)((u8 *)var_a0 + 0x10);
        *(s32 *)((u8 *)var_a1 + 0x14) = (s32) *(s32 *)((u8 *)var_a0 + 0x14);
        *(s32 *)((u8 *)var_a1 + 0x18) = (s32) *(s32 *)((u8 *)var_a0 + 0x18);
        *(s32 *)((u8 *)var_a1 + 0x1C) = (s32) *(s32 *)((u8 *)var_a0 + 0x1C);
        var_a1 += 0x20;
        *(f32 *)((u8 *)var_a0 + 0) = (f32) *(f32 *)((u8 *)(&sp80) + 0);
        *(f32 *)((u8 *)var_a0 + 4) = (f32) *(f32 *)((u8 *)(&sp80) + 4);
        *(f32 *)((u8 *)var_a0 + 8) = (f32) *(f32 *)((u8 *)(&sp80) + 8);
        *(f32 *)((u8 *)var_a0 + 0xC) = (f32) *(f32 *)((u8 *)(&sp80) + 0xC);
        *(s32 *)((u8 *)var_a0 + 0x10) = temp_v0_2;
        *(s32 *)((u8 *)var_a0 + 0x14) = temp_v0_3;
        *(s32 *)((u8 *)var_a0 + 0x18) = temp_v0_4;
        *(s32 *)((u8 *)var_a0 + 0x1C) = temp_v0_5;
        goto loop_24;
    }
    var_s1_2 = 0;
    temp_s3 = (u8 *)(D_004708A4 + 0x1AB8);
    var_s0_2 = (u8 *)(D_004708A4 + 0x2CF0);
loop_46:
    if (var_s1_2 < var_s2) {
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0_2 + 0x14)) + 0x18) == 0) {
            *D_00495718 = *(f32 *)((u8 *)temp_s3 + 0x20);
            *D_00495758 = *(f32 *)((u8 *)temp_s3 + 0x24);
            D_00495720 = *(f32 *)((u8 *)temp_s3 + 0x10);
            D_00495760 = *(f32 *)((u8 *)temp_s3 + 0x14);
            D_00495724 = *(f32 *)((u8 *)temp_s3 + 0x18);
            D_00495764 = *(f32 *)((u8 *)temp_s3 + 0x1C);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s0) */);
            amModel_SetCurrent(*(s32 *)((u8 *)D_004708A4 + 0x27C), 0x420000);
            amObject_Draw(*(u8 **)((u8 *)var_s0_2 + 0x18));
            var_s4_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0_2 + 0x14)) + 0x20);
            func_0013B0B0(NULL);
loop_43:
            if (var_s4_2 != NULL) {
                if (*(s32 *)((u8 *)var_s4_2 + 0xC) & 1) {
                    temp_v1 = *(s32 *)((u8 *)var_s4_2 + 0x10);
                    amModel_SetCurrent(*(s32 *)((u8 *)((temp_v1 * 4) + D_004708A4) + 0x274), (temp_v1 << 0x10) + 0x400000);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
                    temp_a0 = *(s32 *)((u8 *)var_s4_2 + 0x14);
                    if (temp_a0 != -1) {
                        func_002D04A0(temp_a0);
                        func_002CFDE0(0);
                    }
                    temp_a0_2 = *(u8 **)((u8 *)var_s4_2 + 0x18);
                    if (temp_a0_2 != NULL) {
                        amObject_Draw(temp_a0_2);
                    }
                    temp_a0_3 = *(s32 *)((u8 *)var_s4_2 + 0x1C);
                    if (temp_a0_3 != 0) {
                        func_0013E0A0(temp_a0_3);
                    }
                    temp_a0_4 = *(s32 *)((u8 *)var_s4_2 + 0x20);
                    if (temp_a0_4 != 0) {
                        func_0013E170(temp_a0_4);
                    }
                    if (*(s32 *)((u8 *)var_s4_2 + 0x14) != -1) {
                        *D_00495718 = *(f32 *)((u8 *)temp_s3 + 0x20);
                        *D_00495758 = *(f32 *)((u8 *)temp_s3 + 0x24);
                        D_00495720 = *(f32 *)((u8 *)temp_s3 + 0x10);
                        D_00495760 = *(f32 *)((u8 *)temp_s3 + 0x14);
                        D_00495724 = *(f32 *)((u8 *)temp_s3 + 0x18);
                        D_00495764 = *(f32 *)((u8 *)temp_s3 + 0x1C);
                    }
                    func_0013B060(NULL);
                }
                var_s4_2 = *(u8 **)((u8 *)var_s4_2 + 0);
                goto loop_43;
            }
            func_0013B110(1);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0_2 + 0x14)) + 0x18) = 1;
        }
        var_s1_2 += 1;
        var_s0_2 += 0x20;
        goto loop_46;
    }
    func_0012F2C0();
    func_0013B110(1);
    *D_00495718 = *(f32 *)((u8 *)temp_s3 + 0);
    *D_00495758 = *(f32 *)((u8 *)temp_s3 + 4);
    D_0049571C = *(f32 *)((u8 *)temp_s3 + 8);
    D_0049575C = *(f32 *)((u8 *)temp_s3 + 0xC);
    D_00495720 = *(f32 *)((u8 *)temp_s3 + 0x10);
    D_00495760 = *(f32 *)((u8 *)temp_s3 + 0x14);
    D_00495724 = *(f32 *)((u8 *)temp_s3 + 0x18);
    D_00495764 = *(f32 *)((u8 *)temp_s3 + 0x1C);
}
