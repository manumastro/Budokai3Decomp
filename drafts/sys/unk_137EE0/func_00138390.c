/* Draft (not built): func_00138390 at 0x00138390, size 0xD00, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s2.exe Compiler: 482: void amDraw_PutTexRegs(u32 **pp, Tex *t, s32 flags) { @ 411: D_0047CAA4((s64) var_s2, spD8, spD4);
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00138390.s */

// src/sys/unk_137EE0.c func_00138390 cerr diff=-1/0
s32 func_00145D70(s32, s32, s32, s32);
s32 func_001461D0(void *, void *);
extern s32 D_003F01C0;
extern s32 D_003F01D0;
extern s32 D_003F01E0;
extern s32 D_00459EA0;
extern s32 D_0046FD18;
extern f32 D_0046FD28;
extern f32 D_0046FD2C;
extern f32 D_0046FD30;
extern s32 D_00470238;
extern s32 D_00470258;
extern s32 D_0047025C;
extern s32 D_00470260;
extern s32 D_00470264;
extern s32 D_00470268;
extern s32 D_004702A0;
extern s32 D_0047C8C0;
extern s32 D_0047C8C4;
extern s64 D_0047C8C8;
extern char D_0047E4C0[];
extern void *gModelUser;
extern s32 D_0047CAA4;
s32 func_00138390(u8 *arg0, s32 arg1, s32 arg2) {
    s32 saved_reg_fp;
    u8 *spAC;
    s32 spB0;
    s32 spC0;
    u8 *spD4;
    u8 *spD8;
    u8 *spDC;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 var_a2;
    u32 var_a2_2;
    u32 var_s0;
    u32 var_s1;
    u8 *temp_a1_3;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *var_fp;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s3_2;

    var_fp = (unsigned char *)(saved_reg_fp);
    spDC = (unsigned char *)(gPacketPtr);
    var_s5 = 0;
    var_s1 = arg2 | (*(s32 *)((u8 *)arg0 + 0) & arg1);
    var_s0 = arg2 | (*(s32 *)((u8 *)arg0 + 4) & arg1);
    var_v0 = 7;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v1) */);
    do {
        var_v0 -= 1;
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, 0x40($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x50($v1) */);
    } while (var_v0 != 0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a0) */);
    D_0047C8C0 = 0x3000001E;
    D_0047C8C4 = (s32) ((u64) ((s64) spDC << 0x24) >> 0x24);
    D_0047C8C8 = 0;
    if (D_00470268 == 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    } else if (D_00470268 == 1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    }
    spDC += 0x1E0;
    spB0 = 0;
    var_s6 = 0;
    spD8 = NULL;
    if ((*(s32 *)((u8 *)arg0 + 8) != -1) && !(var_s1 & 0x10000000)) {
        var_s6 = func_00145D70(D_00470238, *(s32 *)((u8 *)arg0 + 8), 0, 1);
    }
    var_s7 = 0;
    spD4 = NULL;
    if ((*(s32 *)((u8 *)arg0 + 0xC) != -1) && !(var_s0 & 0x10000000)) {
        var_s7 = func_00145D70(D_00470238, *(s32 *)((u8 *)arg0 + 0xC), 0, 1);
        if ((spD8 != NULL) && (func_001461D0((void *)(D_0047E4C0 + (D_00470238 << 6)), (void *)(((s32)(((u8 *)*(s32 *)((u8 *)arg0 + 8)))) + ((s32)(gModelUser)))) == 0)) {
            spB0 = 1;
            var_s6 = func_00145D70(D_00470238, *(s32 *)((u8 *)arg0 + 8), 0, 1);
        }
    }
    if (!(var_s1 & 0x2000)) {
        if ((var_s1 & 9) != 9) {
            goto block_17;
        }
    } else {
block_17:
        var_s1 &= ~0x4000;
    }
    var_a2 = var_s1;
    var_s3 = spD8;
loop_19:
    temp_s2 = spDC;
    *(s32 *)((u8 *)temp_s2 + 0) = 0x60000013;
    *(s32 **)((u8 *)temp_s2 + 4) = NULL;
    *(s32 *)((u8 *)temp_s2 + 8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xC) = 0;
    *(s64 *)((u8 *)temp_s2 + 0x10) = (s64) (0x01000404 | (0x6C0B4030 << 0x20));
    var_a0 = 0;
    var_v1 = 0;
    if (var_a2 & 0x10) {
        var_v1 = 8;
    }
    if (var_a2 & 0x8080) {
        var_v1 |= 0x20;
    }
    if (var_a2 & 0x800) {
        var_v1 |= 0x40;
    }
    var_f1 = 255.0f;
    if (var_a2 & 0x20) {
        var_v1 |= 0x10;
        var_f1 = 128.0f;
    }
    if (var_a2 & 4) {
        if ((var_s3 != NULL) && (*(s32 *)((u8 *)var_s3 + 0x1C) < 0)) {
            var_v1 |= 0x200;
            var_a0 = 1;
        }
        *(s32 *)((u8 *)temp_s2 + 0x20) = 0x412;
        *(s32 *)((u8 *)temp_s2 + 0x30) = 0x412;
        *(s32 *)((u8 *)temp_s2 + 0x40) = 0x412;
        var_v0_2 = 0x30000000;
    } else {
        *(s32 *)((u8 *)temp_s2 + 0x20) = 0x41;
        *(s32 *)((u8 *)temp_s2 + 0x30) = 0x41;
        *(s32 *)((u8 *)temp_s2 + 0x40) = 0x41;
        var_v0_2 = 0x20000000;
    }
    *(s32 *)((u8 *)temp_s2 + 0x24) = 0x3F800000;
    *(s32 *)((u8 *)temp_s2 + 0x34) = 0x3EAAAAAB;
    *(s32 *)((u8 *)temp_s2 + 0x44) = 0x3F000000;
    temp_v1 = var_v1 | ((var_v1 << 0xF) | var_v0_2 | 0x4000);
    *(s32 *)((u8 *)temp_s2 + 0x18) = 0x8000;
    *(s32 *)((u8 *)temp_s2 + 0x1C) = (s32) (temp_v1 | 0x18000);
    *(s32 *)((u8 *)temp_s2 + 0x28) = 0x8000;
    *(s32 *)((u8 *)temp_s2 + 0x2C) = (s32) (temp_v1 | 0x20000);
    *(s32 *)((u8 *)temp_s2 + 0x38) = 0x8000;
    *(s32 *)((u8 *)temp_s2 + 0x3C) = (s32) (temp_v1 | 0x28000);
    temp_v0 = temp_s2 + 0x48;
    var_f0 = 128.0f;
    if (var_a2 & 0x4000) {
        *(s32 *)((u8 *)temp_s2 + 0x68) = (s32) ((var_a2 >> 0x10) & 7);
        *(s32 *)((u8 *)temp_s2 + 0x6C) = 0x437F0000;
        var_f0 = 255.0f;
    }
    if (var_a2 & 8) {
        temp_a1 = var_a2 & 0x700;
        if ((temp_a1 != 0x300) && (temp_a1 != 0x200)) {
            *(f32 *)((u8 *)temp_s2 + 0x48) = var_f1;
            *(f32 *)((u8 *)temp_v0 + 4) = var_f1;
            *(f32 *)((u8 *)temp_v0 + 8) = var_f1;
            *(f32 *)((u8 *)temp_v0 + 0xC) = var_f0;
        } else {
            *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 4) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 8) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 0xC) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0xC) * var_f0);
        }
    } else {
        temp_a1_2 = var_a2 & 0x700;
        switch (temp_a1_2) {                        /* irregular */
        case 0x200:
            *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 4) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 8) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 0xC) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0xC) * var_f0);
            break;
        case 0x300:
            *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) (var_f1 * (*(f32 *)((u8 *)arg0 + 0x30) * *(f32 *)((u8 *)(&D_003F01E0) + 0)));
            *(f32 *)((u8 *)temp_v0 + 4) = (f32) (var_f1 * (*(f32 *)((u8 *)arg0 + 0x34) * *(f32 *)((u8 *)(&D_003F01E0) + 4)));
            *(f32 *)((u8 *)temp_v0 + 8) = (f32) (var_f1 * (*(f32 *)((u8 *)arg0 + 0x38) * *(f32 *)((u8 *)(&D_003F01E0) + 8)));
            *(f32 *)((u8 *)temp_v0 + 0xC) = (f32) (var_f0 * (*(f32 *)((u8 *)arg0 + 0x3C) * *(f32 *)((u8 *)(&D_003F01E0) + 0xC)));
            break;
        default:
            *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 4) = (f32) (*(f32 *)((u8 *)arg0 + 0x34) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 8) = (f32) (*(f32 *)((u8 *)arg0 + 0x38) * var_f1);
            *(f32 *)((u8 *)temp_v0 + 0xC) = (f32) (*(f32 *)((u8 *)arg0 + 0x3C) * var_f0);
            break;
        }
    }
    *(f32 *)((u8 *)temp_s2 + 0x78) = var_f1;
    *(f32 *)((u8 *)temp_s2 + 0x7C) = var_f1;
    *(f32 *)((u8 *)temp_s2 + 0x80) = var_f1;
    *(f32 *)((u8 *)temp_s2 + 0x84) = var_f0;
    if (!(var_a2 & 0x8080)) {
        *(s32 *)((u8 *)temp_s2 + 0x58) = 0;
    } else if (var_a2 & 0x80) {
        *(s32 *)((u8 *)temp_s2 + 0x58) = (s32) D_00470258;
        *(f32 *)((u8 *)temp_s2 + 0x5C) = (f32) D_0046FD30;
        *(f32 *)((u8 *)temp_s2 + 0x60) = (f32) D_0046FD2C;
        *(f32 *)((u8 *)temp_s2 + 0x64) = (f32) D_0046FD28;
        *(s32 *)((u8 *)temp_s2 + 0x120) = (s32) D_0047025C;
    } else if (var_a2 & 0x8000) {
        *(s32 *)((u8 *)temp_s2 + 0x58) = (s32) D_00470260;
        *(s32 *)((u8 *)temp_s2 + 0x120) = (s32) D_00470264;
    }
    *(s32 *)((u8 *)temp_s2 + 0xC8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xCC) = 0x50000007;
    *(s64 *)((u8 *)temp_s2 + 0xD0) = (s64) (0x8006 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)temp_s2 + 0xD8) = 0xE;
    *(s128 *)((u8 *)temp_s2 + 0xE0) = (s128) *(s128 *)((u8 *)arg0 + 0x40);
    if (var_a2 & 0x1000) {
        *(s32 *)((u8 *)temp_s2 + 0xF0) = (s32) (*(&D_0046FD18 + (var_a0 * 4)) | 1);
    } else {
        *(s32 *)((u8 *)temp_s2 + 0xF0) = (s32) *(&D_0046FD18 + (var_a0 * 4));
    }
    *(s64 *)((u8 *)temp_s2 + 0xF8) = (s64) ((s64) ((var_a0 + 0x47) << 0x20) >> 0x20);
    *(s64 *)((u8 *)temp_s2 + 0x128) = 0x3D;
    if (var_s3 != NULL) {
        temp_a1_3 = *(u8 **)((u8 *)var_s3 + 8);
        if (!(var_a2 & 0x4000)) {
            *(s128 *)((u8 *)temp_s2 + 0x130) = (s128) *(s128 *)((u8 *)temp_a1_3 + 0x220);
        } else {
            *(s128 *)((u8 *)temp_s2 + 0x130) = (s64) ((s64) *(s128 *)((u8 *)temp_a1_3 + 0x220) | (0x18 << 0x20));
            *(s64 *)((u8 *)temp_s2 + 0x138) = (s64) *(s64 *)((u8 *)temp_a1_3 + 0x228);
        }
    } else {
        *(s128 *)((u8 *)temp_s2 + 0x130) = (s128) *(s128 *)((u8 *)arg0 + 0x40);
    }
    if (var_s5 == 0) {
        if (!(var_a2 & 0x20000000)) {
            *(s64 *)((u8 *)temp_s2 + 0x100) = (s64) *(s64 *)((u8 *)arg0 + 0x60);
        } else {
            *(s64 *)((u8 *)temp_s2 + 0x100) = (s64) *(&D_003F01C0 + (var_a0 * 8));
        }
        *(s64 *)((u8 *)temp_s2 + 0x108) = (s64) ((s64) ((var_a0 + 0x42) << 0x20) >> 0x20);
        if (!(var_a2 & 0x08000000)) {
            *(s64 *)((u8 *)temp_s2 + 0x110) = (s64) *(s64 *)((u8 *)arg0 + 0x50);
        } else {
            *(s64 *)((u8 *)temp_s2 + 0x110) = (s64) *(&D_003F01D0 + (var_a0 * 8));
        }
        *(s64 *)((u8 *)temp_s2 + 0x118) = (s64) ((s64) ((var_a0 + 8) << 0x20) >> 0x20);
        spDC = temp_s2 + 0x140;
        spAC = temp_s2;
        if (spD4 != NULL) {
            var_s5 = 1;
            if ((var_s0 & 0x2000) || ((var_s0 & 9) != 9)) {
                var_s0 &= ~0x4000;
            }
            var_a2 = var_s0;
            var_s3 = spD4;
            goto loop_19;
        }
    } else {
        if (!(var_a2 & 0x20000000)) {
            *(s64 *)((u8 *)temp_s2 + 0x100) = (s64) *(s64 *)((u8 *)arg0 + 0x80);
        } else {
            *(s64 *)((u8 *)temp_s2 + 0x100) = (s64) *(&D_003F01C0 + (var_a0 * 8));
        }
        *(s64 *)((u8 *)temp_s2 + 0x108) = (s64) ((s64) ((var_a0 + 0x42) << 0x20) >> 0x20);
        *(s128 *)((u8 *)temp_s2 + 0x110) = (s128) *(s128 *)((u8 *)arg0 + 0x70);
        if (!(var_a2 & 0x08000000)) {
            *(s128 *)((u8 *)temp_s2 + 0x110) = (s64) *(s128 *)((u8 *)arg0 + 0x70);
        } else {
            *(s128 *)((u8 *)temp_s2 + 0x110) = (s64) *(&D_003F01D0 + (var_a0 * 8));
        }
        *(s64 *)((u8 *)temp_s2 + 0x118) = (s64) ((s64) ((var_a0 + 8) << 0x20) >> 0x20);
        spDC = temp_s2 + 0x140;
        var_fp = temp_s2;
    }
    spC0 = (s32) ((u64) ((s64) spDC << 0x24) >> 0x24);
    var_s3_2 = spD8;
    var_s2 = spAC;
    var_a2_2 = var_s1;
    var_s5_2 = 0;
loop_85:
    temp_v0_2 = func_00139330(&spDC, 7, var_a2_2);
    if (temp_v0_2 >= 0) {
        *(s32 *)((u8 *)spDC + 0) = (s128) D_0047C8C0;
        spDC += 0x10;
    } else {
        *(s32 *)((u8 *)spDC + 0) = 0x30000004;
        *(s32 **)((u8 *)spDC + 4) = &D_00459EA0;
        *(s32 *)((u8 *)spDC + 8) = 0;
        *(s32 *)((u8 *)spDC + 0xC) = 0;
        spDC += 0x10;
    }
    if ((s32)(D_0047CAA4) != 0) {
        D_0047CAA4((s64) var_s2, spD8, spD4);
    }
    if (var_s5_2 == 0) {
        if (spB0 == 0) {
            if (spD8 != NULL) {
                amDraw_PutTexRegs(&spDC, spD8, var_s6);
            }
            if (spD4 != NULL) {
                amDraw_PutTexRegs(&spDC, spD4, var_s7);
            }
        } else {
            amDraw_PutTexRegs(&spDC, spD4, var_s7);
            amDraw_PutTexRegs(&spDC, spD8, var_s6);
        }
    }
    if ((var_s5_2 == 0) && (spD4 != NULL)) {
        *(s32 *)((u8 *)spDC + 0) = 0x50000000;
        *(s32 **)((u8 *)spDC + 4) = (s32 *) *(s32 **)((u8 *)spD4 + 0x18);
        *(s32 *)((u8 *)spDC + 8) = 0;
        *(s32 *)((u8 *)spDC + 0xC) = 0;
        temp_v0_3 = spDC + 0x10;
        spDC = temp_v0_3;
        *(s64 *)((u8 *)spDC + 0x10) = 0x50000000;
        *(s32 *)((u8 *)temp_v0_3 + 4) = (s32) ((u64) ((s64) var_fp << 0x24) >> 0x24);
        *(s32 *)((u8 *)temp_v0_3 + 8) = 0;
        *(s32 *)((u8 *)temp_v0_3 + 0xC) = 0;
        spDC = temp_v0_3 + 0x10;
    }
    if (var_s3_2 != NULL) {
        *(s32 *)((u8 *)spDC + 0) = 0x50000000;
        *(s32 **)((u8 *)spDC + 4) = (s32 *) *(s32 **)((u8 *)var_s3_2 + 0x18);
        *(s32 *)((u8 *)spDC + 8) = 0;
        *(s32 *)((u8 *)spDC + 0xC) = 0;
        spDC += 0x10;
    }
    *(s32 *)((u8 *)spDC + 0) = 0x50000000;
    *(s32 **)((u8 *)spDC + 4) = (s32 *) ((u64) ((s64) var_s2 << 0x24) >> 0x24);
    *(s32 *)((u8 *)spDC + 8) = 0;
    *(s32 *)((u8 *)spDC + 0xC) = 0;
    spDC += 0x10;
    if ((var_s5_2 == 0) && (spD4 != NULL) && (D_004702A0 == 0)) {
        if (temp_v0_2 != -1) {
            *(s32 *)((u8 *)spDC + 0) = 0x50000000;
            *(s32 **)((u8 *)spDC + 4) = (s32 *) (arg0 + 0x90);
            *(s32 *)((u8 *)spDC + 8) = 0;
            *(s32 *)((u8 *)spDC + 0xC) = 0;
            spDC += 0x10;
        }
        var_s3_2 = spD4;
        var_s2 = var_fp;
        var_a2_2 = var_s0;
        var_s5_2 = 1;
        goto loop_85;
    }
    if (temp_v0_2 != -1) {
        *(s32 *)((u8 *)spDC + 0) = 0x50000000;
        *(s32 **)((u8 *)spDC + 4) = (s32 *) (arg0 + 0x90);
        *(s32 *)((u8 *)spDC + 8) = 0;
        *(s32 *)((u8 *)spDC + 0xC) = 0;
        spDC += 0x10;
    }
    *(s32 *)((u8 *)spDC + 0) = 0x20000000;
    *(s32 **)((u8 *)spDC + 4) = NULL;
    *(s32 *)((u8 *)spDC + 8) = 0;
    *(s32 *)((u8 *)spDC + 0xC) = 0;
    temp_v0_4 = spDC + 0x10;
    spDC = temp_v0_4;
    gPacketPtr = (unsigned int *)(temp_v0_4);
    return spC0;
}
