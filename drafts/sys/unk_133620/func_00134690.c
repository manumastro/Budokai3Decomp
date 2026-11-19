/* Draft (not built): func_00134690 at 0x00134690, size 0xB58, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 647: D_0047CAA4(temp_a0, spE8, 0);
 * Original: asm/nonmatchings/sys/unk_133620/func_00134690.s */

// src/sys/unk_133620.c func_00134690 cerr diff=-1/0
s32 func_00139330(void **, s32, s32);
s32 func_0013B110(s32);
s32 func_0013B190(s32);
s32 func_00145D70(s32, s32, s32, s32);
extern s32 D_00470238;
extern s32 D_00470270;
extern s32 D_00470274;
extern void *D_00470278;
extern void *D_0047027C;
extern void *D_00470280;
extern void *D_00470284;
extern s32 D_00470288;
extern void *D_0047028C;
extern void func_0013B0B0(void *);
extern void amDraw_FlushPacket(void);
extern void func_00146F30(void *);
extern s32 D_0047CAA4;
void func_00134690(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    s32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    s32 spA8;
    f32 spAC;
    s32 spC0;
    f32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    u8 *spE8;
    u8 *spEC;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 temp_s5;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_v1_3;

    temp_s5 = M2C_ERROR(/* Read from unset register $t1 */);
    var_s0 = 0;
    amDraw_FlushPacket();
    spEC = gPacketPtr;
    if (D_00470254 != 0) {
        var_a0 = D_0046FD20 | 0x80;
        var_v1 = ~D_0046FD20 & D_00470250;
    } else {
        var_a0 = D_0046FD20 & ~0x80;
        var_v1 = ~var_a0 & D_00470250 & ~0x80;
    }
    var_s3 = var_v1 | (arg1 & var_a0);
    if (arg2 == NULL) {
        temp_v1 = var_s3 & 0x700;
        if ((temp_v1 != 0x400) && (temp_v1 != 0x200)) {
            if (temp_v1 != 0x300) {
                var_s3 = (var_s3 & ~0x700) | 0x400;
            } else {
                var_s3 = (var_s3 & ~0x700) | 0x200;
            }
        }
    }
    if (!(var_s3 & 0x2000)) {
        if ((var_s3 & 9) != 9) {
            goto block_15;
        }
    } else {
block_15:
        var_s3 &= ~0x4000;
    }
    D_00470274 = var_s3;
    D_00470278 = spEC;
    func_00139330((void **)(&spEC), 7, (s32)(var_s3));
    if (var_s3 & 0x300000) {
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        if (var_s3 & 0x200000) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        } else {
            spD0 = 0.0f;
            spD4 = 0;
            spD8 = 0x3F800000;
            spDC = 0x3F800000;
        }
        func_0013B190(0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        spD4 = 0;
        func_00146F30(&spD0);
        if (M2C_ERROR(/* Read from unset register $f0 */) != 0.0f) {
            sp80 = spD8;
            sp84 = 0.0f;
            sp88 = -spD0;
            sp8C = 0.0f;
            sp90 = 0.0f;
            sp94 = 1.0f;
            sp98 = 0.0f;
            sp9C = 0.0f;
            spA0 = spD0;
            spA4 = 0.0f;
            spA8 = spD8;
            spAC = 0.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
            func_0013B110(1);
        } else {
            func_0013B110(1);
            M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        }
    } else {
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
    }
    D_00470284 = spEC;
    *(s32 *)((u8 *)spEC + 0) = 0x1000001E;
    *(u8 **)((u8 *)spEC + 4) = spEC;
    *(s32 *)((u8 *)spEC + 8) = 0;
    *(s32 *)((u8 *)spEC + 0xC) = 0;
    spEC += 0x10;
    var_v1_2 = 7;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a0) */);
    do {
        var_v1_2 -= 1;
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, 0x40($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x50($a0) */);
    } while (var_v1_2 != 0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
    spEC += 0x1E0;
    var_a1 = 0;
    spE8 = NULL;
    if (arg3 >= 0) {
        var_a1 = func_00145D70(D_00470238, arg3, 0, 1);
    }
    if (spE8 != NULL) {
        if (var_a1 & 2) {
            *(s32 *)((u8 *)spEC + 0) = 0x50000000;
            *(u8 **)((u8 *)spEC + 4) = (u8 *) *(u8 **)((u8 *)spE8 + 0x28);
            *(s32 *)((u8 *)spEC + 8) = 0;
            *(s32 *)((u8 *)spEC + 0xC) = 0;
            spEC += 0x10;
        }
        if (var_a1 & 1) {
            *(s32 *)((u8 *)spEC + 0) = 0x50000000;
            *(u8 **)((u8 *)spEC + 4) = (u8 *) *(u8 **)((u8 *)spE8 + 0x14);
            *(s32 *)((u8 *)spEC + 8) = 0;
            *(s32 *)((u8 *)spEC + 0xC) = 0;
        } else {
            *(s32 *)((u8 *)spEC + 0) = 0x50000000;
            *(u8 **)((u8 *)spEC + 4) = (u8 *) *(u8 **)((u8 *)spE8 + 0x18);
            *(s32 *)((u8 *)spEC + 8) = 0;
            *(s32 *)((u8 *)spEC + 0xC) = 0;
        }
        spEC += 0x10;
        if (*(s32 *)((u8 *)spE8 + 0x1C) & 0x80000000) {
            var_s0 = 1;
        }
    }
    temp_a0 = spEC;
    *(s32 *)((u8 *)temp_a0 + 0) = 0x10000013;
    *(u8 **)((u8 *)temp_a0 + 4) = NULL;
    *(s32 *)((u8 *)temp_a0 + 8) = 0;
    *(s32 *)((u8 *)temp_a0 + 0xC) = 0;
    *(s64 *)((u8 *)temp_a0 + 0x10) = (s64) (0x01000404 | (0x6C0B4030 << 0x20));
    var_v1_3 = 0;
    if (var_s3 & 0x10) {
        var_v1_3 = 8;
    }
    if (var_s3 & 0x8080) {
        var_v1_3 |= 0x20;
    }
    if (var_s3 & 0x800) {
        var_v1_3 |= 0x40;
    }
    if (var_s0 != 0) {
        var_v1_3 |= 0x200;
    }
    if (var_s3 & 0x20) {
        var_v1_3 |= 0x10;
        var_f1 = 128.0f;
    } else {
        var_f1 = 255.0f;
    }
    if (var_s3 & 4) {
        if ((spE8 != NULL) && (*(s32 *)((u8 *)spE8 + 0x1C) < 0)) {
            var_v1_3 |= 0x200;
            var_s0 = 1;
        }
        *(s32 *)((u8 *)temp_a0 + 0x20) = 0x412;
        *(s32 *)((u8 *)temp_a0 + 0x30) = 0x412;
        *(s32 *)((u8 *)temp_a0 + 0x40) = 0x412;
        var_a2 = 0x30000000;
    } else {
        *(s32 *)((u8 *)temp_a0 + 0x20) = 0x41;
        *(s32 *)((u8 *)temp_a0 + 0x30) = 0x41;
        *(s32 *)((u8 *)temp_a0 + 0x40) = 0x41;
        var_a2 = 0x20000000;
    }
    *(s32 *)((u8 *)temp_a0 + 0x24) = 0x3F800000;
    *(s32 *)((u8 *)temp_a0 + 0x34) = 0x3EAAAAAB;
    *(s32 *)((u8 *)temp_a0 + 0x44) = 0x3F000000;
    temp_v1_2 = var_v1_3 | ((var_v1_3 << 0xF) | var_a2 | 0x4000);
    *(s32 *)((u8 *)temp_a0 + 0x18) = 0x8000;
    *(s32 *)((u8 *)temp_a0 + 0x1C) = (s32) (temp_v1_2 | 0x18000);
    *(s32 *)((u8 *)temp_a0 + 0x28) = 0x8000;
    *(s32 *)((u8 *)temp_a0 + 0x2C) = (s32) (temp_v1_2 | 0x20000);
    *(s32 *)((u8 *)temp_a0 + 0x38) = 0x8000;
    *(s32 *)((u8 *)temp_a0 + 0x3C) = (s32) (temp_v1_2 | 0x28000);
    temp_a2 = temp_a0 + 0x48;
    var_f0 = 128.0f;
    if (var_s3 & 0x4000) {
        *(s32 *)((u8 *)temp_a0 + 0x68) = (s32) ((var_s3 >> 0x10) & 7);
        *(s32 *)((u8 *)temp_a0 + 0x6C) = 0x437F0000;
        var_f0 = 255.0f;
    }
    temp_a1 = var_s3 & 0x700;
    switch (temp_a1) {                              /* irregular */
    case 0x300:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 0) * *(f32 *)((u8 *)(&D_003F01E0) + 0)));
        *(f32 *)((u8 *)temp_a2 + 4) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 4) * *(f32 *)((u8 *)(&D_003F01E0) + 4)));
        *(f32 *)((u8 *)temp_a2 + 8) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 8) * *(f32 *)((u8 *)(&D_003F01E0) + 8)));
        *(f32 *)((u8 *)temp_a2 + 0xC) = (f32) (var_f0 * (*(f32 *)((u8 *)arg2 + 0xC) * *(f32 *)((u8 *)(&D_003F01E0) + 0xC)));
        break;
    case 0x200:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 4) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 8) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 0xC) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0xC) * var_f0);
        break;
    case 0x400:
        *(f32 *)((u8 *)temp_a0 + 0x48) = var_f1;
        *(f32 *)((u8 *)temp_a2 + 4) = var_f1;
        *(f32 *)((u8 *)temp_a2 + 8) = var_f1;
        *(f32 *)((u8 *)temp_a2 + 0xC) = var_f0;
        break;
    default:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (*(f32 *)((u8 *)arg2 + 0) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 4) = (f32) (*(f32 *)((u8 *)arg2 + 4) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 8) = (f32) (*(f32 *)((u8 *)arg2 + 8) * var_f1);
        *(f32 *)((u8 *)temp_a2 + 0xC) = (f32) (*(f32 *)((u8 *)arg2 + 0xC) * var_f0);
        break;
    }
    *(f32 *)((u8 *)temp_a0 + 0x78) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x7C) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x80) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x84) = var_f0;
    if (!(var_s3 & 0x8080)) {
        *(s32 *)((u8 *)temp_a0 + 0x58) = 0;
    } else if (var_s3 & 0x80) {
        *(s32 *)((u8 *)temp_a0 + 0x58) = (s32) D_00470258;
        *(f32 *)((u8 *)temp_a0 + 0x5C) = (f32) D_0046FD30;
        *(f32 *)((u8 *)temp_a0 + 0x60) = (f32) D_0046FD2C;
        *(f32 *)((u8 *)temp_a0 + 0x64) = (f32) D_0046FD28;
        *(s32 *)((u8 *)temp_a0 + 0x120) = (s32) D_0047025C;
    } else if (var_s3 & 0x8000) {
        *(s32 *)((u8 *)temp_a0 + 0x58) = (s32) D_00470260;
        *(s32 *)((u8 *)temp_a0 + 0x120) = (s32) D_00470264;
    }
    *(s32 *)((u8 *)temp_a0 + 0xC8) = 0;
    *(s32 *)((u8 *)temp_a0 + 0xCC) = 0x50000007;
    *(s64 *)((u8 *)temp_a0 + 0xD0) = (s64) (0x8006 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)temp_a0 + 0xD8) = 0xE;
    *(s64 *)((u8 *)temp_a0 + 0xE0) = 1;
    *(s64 *)((u8 *)temp_a0 + 0xE8) = 0x46;
    if (var_s3 & 0x1000) {
        *(s32 *)((u8 *)temp_a0 + 0xF0) = (s32) (((s32)(D_0046FD18)) | 1);
    } else {
        *(s32 *)((u8 *)temp_a0 + 0xF0) = (s32) D_0046FD18;
    }
    if (var_s3 & 0x20000000) {
        *(s64 *)((u8 *)temp_a0 + 0x100) = (s64) D_003F01C0;
    } else {
        *(s64 *)((u8 *)temp_a0 + 0x100) = (s64) M2C_ERROR(/* Read from unset register $t0 */);
    }
    *(s64 *)((u8 *)temp_a0 + 0x110) = temp_s5;
    *(s64 *)((u8 *)temp_a0 + 0x128) = 0x3D;
    if (var_s0 == 0) {
        *(s64 *)((u8 *)temp_a0 + 0xF8) = 0x47;
        *(s64 *)((u8 *)temp_a0 + 0x108) = 0x42;
        *(s64 *)((u8 *)temp_a0 + 0x118) = 8;
    } else {
        *(s64 *)((u8 *)temp_a0 + 0xF8) = 0x48;
        *(s64 *)((u8 *)temp_a0 + 0x108) = 0x43;
        *(s64 *)((u8 *)temp_a0 + 0x118) = 9;
    }
    if (spE8 != NULL) {
        temp_a2_2 = *(u8 **)((u8 *)spE8 + 8);
        if (!(var_s3 & 0x4000)) {
            *(s128 *)((u8 *)temp_a0 + 0x130) = (s128) *(s128 *)((u8 *)temp_a2_2 + 0x220);
        } else {
            *(s128 *)((u8 *)temp_a0 + 0x130) = (s64) ((s64) *(s128 *)((u8 *)temp_a2_2 + 0x220) | (0x18 << 0x20));
            *(s64 *)((u8 *)temp_a0 + 0x138) = (s64) *(s64 *)((u8 *)temp_a2_2 + 0x228);
        }
    } else {
        *(s128 *)((u8 *)temp_a0 + 0x130) = temp_s5;
        *(s64 *)((u8 *)temp_a0 + 0x138) = 8;
    }
    spEC = temp_a0 + 0x140;
    if ((s32)(D_0047CAA4) != 0) {
        D_0047CAA4(temp_a0, spE8, 0);
    }
    D_00470280 = spEC;
    D_0047027C = spEC + 0x10;
    if (D_00470288 != 0) {
        *(s32 *)((u8 *)spEC + 0) = 0x10000003;
        if (D_0047028C == NULL) {
            D_0047028C = D_00470278;
        }
    } else {
        *(s32 *)((u8 *)spEC + 0) = 0x60000003;
    }
    *(u8 **)((u8 *)spEC + 4) = NULL;
    *(s32 *)((u8 *)spEC + 8) = 0;
    *(s32 *)((u8 *)spEC + 0xC) = 0;
    *(s64 *)((u8 *)spEC + 0x10) = 0;
    *(s32 *)((u8 *)spEC + 0x14) = 0;
    *(s32 *)((u8 *)spEC + 0x18) = (s64) (0x01000404 | (0x6C01C000 << 0x20));
    if (arg0 != 0) {
        *(s32 *)((u8 *)spEC + 0x20) = 1;
    } else {
        *(s32 *)((u8 *)spEC + 0x20) = 0;
    }
    *(s32 *)((u8 *)spEC + 0x24) = 0;
    *(s32 *)((u8 *)spEC + 0x30) = 0x14000008;
    *(s32 *)((u8 *)spEC + 0x34) = 0;
    *(s32 *)((u8 *)spEC + 0x38) = 0;
    *(s32 *)((u8 *)spEC + 0x3C) = 0;
    temp_v1_3 = spEC + 0x40;
    spEC = temp_v1_3;
    D_00470270 = 7;
    gPacketQwc = 3;
    D_00470294 = 1;
    D_00470298 = 0;
    D_0047029C = arg0;
    gPacketPtr = temp_v1_3;
}
