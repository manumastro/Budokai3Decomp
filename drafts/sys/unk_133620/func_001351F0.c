/* Draft (not built): func_001351F0 at 0x001351F0, size 0xA64, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  *(s3232 *)((u8 *)sp9C + 0x58) = 0; @ 393: *(f32 *)((u8 *)sp9C + 0x50) = (f32) (D_0047CA58 + (D_0047CA40 * D_0047CA50));
 * Original: asm/nonmatchings/sys/unk_133620/func_001351F0.s */

// src/sys/unk_133620.c func_001351F0 cerr diff=-1/0
s32 func_00139330(void **, s32, s32);
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
extern s8 D_004703F8;
extern s32 D_0047C8D0;
extern f32 D_0047CA44;
extern f32 D_0047CA50;
extern f32 D_0047CA54;
extern f32 D_0047CA58;
extern f32 D_0047CA5C;
extern void amDraw_FlushPacket(void);
extern s32 D_0047CAA4;
void func_001351F0(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    u8 *sp98;
    u8 *sp9C;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a2;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_s6;
    u8 *temp_a0;
    u8 *temp_a2_2;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s6 = M2C_ERROR(/* Read from unset register $t2 */);
    var_s0 = 0;
    amDraw_FlushPacket();
    sp9C = gPacketPtr;
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
    D_00470274 = var_s3;
    D_00470278 = sp9C;
    func_00139330(&sp9C, 5, var_s3);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
    D_00470284 = sp9C;
    *(s32 *)((u8 *)sp9C + 0) = 0x1000001E;
    *(u8 **)((u8 *)sp9C + 4) = sp9C;
    *(s32 *)((u8 *)sp9C + 8) = 0;
    *(s32 *)((u8 *)sp9C + 0xC) = 0;
    sp9C += 0x10;
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
    *(f32 *)((u8 *)sp9C + 0x50) = (f32) (D_0047CA58 + (D_0047CA40 * D_0047CA50));
    if (D_004703F8 != 0) {
        *(f32 *)((u8 *)sp9C + 0x54) = (f32) (D_0047CA5C + (0.5f * (D_0047CA44 * D_0047CA54)));
    } else {
        *(f32 *)((u8 *)sp9C + 0x54) = (f32) (D_0047CA5C + (D_0047CA44 * D_0047CA54));
    }
    *(s3232 *)((u8 *)sp9C + 0x58) = 0;
    *(s3232 *)((u8 *)sp9C + 0x5C) = 0;
    *(f32 *)((u8 *)sp9C + 0x60) = (f32) (D_0047CA58 - (D_0047CA40 * D_0047CA50));
    if (D_004703F8 != 0) {
        *(f32 *)((u8 *)sp9C + 0x64) = (f32) (D_0047CA5C - (0.5f * (D_0047CA44 * D_0047CA54)));
    } else {
        *(f32 *)((u8 *)sp9C + 0x64) = (f32) (D_0047CA5C - (D_0047CA44 * D_0047CA54));
    }
    *(s32 *)((u8 *)sp9C + 0x68) = 0;
    *(s32 *)((u8 *)sp9C + 0x6C) = 0;
    *(s128 *)((u8 *)sp9C + 0x110) = (s128) *(s128 *)((u8 *)(&D_0047C8D0) + 0);
    *(s128 *)((u8 *)sp9C + 0x120) = (s128) *(s128 *)((u8 *)(&D_0047C8D0) + 0x10);
    *(s128 *)((u8 *)sp9C + 0x130) = (s128) *(s128 *)((u8 *)(&D_0047C8D0) + 0x20);
    *(s128 *)((u8 *)sp9C + 0x140) = (s128) *(s128 *)((u8 *)(&D_0047C8D0) + 0x30);
    sp9C += 0x1E0;
    var_a1 = 0;
    sp98 = NULL;
    if (temp_s5 >= 0) {
        var_a1 = func_00145D70(D_00470238, temp_s5, 0, 1);
    }
    if (sp98 != NULL) {
        if (var_a1 & 2) {
            *(s32 *)((u8 *)sp9C + 0) = 0x50000000;
            *(u8 **)((u8 *)sp9C + 4) = (u8 *) *(u8 **)((u8 *)sp98 + 0x28);
            *(s32 *)((u8 *)sp9C + 8) = 0;
            *(s32 *)((u8 *)sp9C + 0xC) = 0;
            sp9C += 0x10;
        }
        if (var_a1 & 1) {
            *(s32 *)((u8 *)sp9C + 0) = 0x50000000;
            *(u8 **)((u8 *)sp9C + 4) = (u8 *) *(u8 **)((u8 *)sp98 + 0x14);
            *(s32 *)((u8 *)sp9C + 8) = 0;
            *(s32 *)((u8 *)sp9C + 0xC) = 0;
        } else {
            *(s32 *)((u8 *)sp9C + 0) = 0x50000000;
            *(u8 **)((u8 *)sp9C + 4) = (u8 *) *(u8 **)((u8 *)sp98 + 0x18);
            *(s32 *)((u8 *)sp9C + 8) = 0;
            *(s32 *)((u8 *)sp9C + 0xC) = 0;
        }
        sp9C += 0x10;
        if (*(s32 *)((u8 *)sp98 + 0x1C) & 0x80000000) {
            var_s0 = 1;
        }
    }
    temp_a0 = sp9C;
    *(s32 *)((u8 *)temp_a0 + 0) = 0x10000013;
    *(u8 **)((u8 *)temp_a0 + 4) = NULL;
    *(s32 *)((u8 *)temp_a0 + 8) = 0;
    *(s32 *)((u8 *)temp_a0 + 0xC) = 0;
    *(s64 *)((u8 *)temp_a0 + 0x10) = (s64) (0x01000404 | (0x6C0B4030 << 0x20));
    var_a1_2 = 6;
    if (var_s3 & 0x10) {
        var_a1_2 = 6 | 8;
    }
    if (var_s3 & 0x20) {
        var_a1_2 |= 0x10;
    }
    if (var_s3 & 0x8080) {
        var_a1_2 |= 0x20;
    }
    if (var_s3 & 0x800) {
        var_a1_2 |= 0x40;
    }
    if (var_s0 != 0) {
        var_a1_2 |= 0x200;
    }
    *(s32 *)((u8 *)temp_a0 + 0x20) = 0x412412;
    *(s32 *)((u8 *)temp_a0 + 0x18) = 0x8000;
    *(s32 *)((u8 *)temp_a0 + 0x1C) = (s32) ((var_a1_2 << 0xF) | 0x60004000);
    temp_v1_2 = temp_a0 + 0x28;
    if (arg3 != NULL) {
        *(s3232 *)((u8 *)temp_a0 + 0x28) = (s3232) *(s3232 *)((u8 *)arg3 + 0);
        *(s3232 *)((u8 *)temp_v1_2 + 4) = (s3232) *(s3232 *)((u8 *)arg3 + 4);
        *(s32 *)((u8 *)temp_v1_2 + 8) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1_2 + 0xC) = 0;
        *(s3232 *)((u8 *)temp_v1_2 + 0x10) = (s3232) *(s3232 *)((u8 *)arg3 + 8);
        *(s3232 *)((u8 *)temp_v1_2 + 0x14) = (s3232) *(s3232 *)((u8 *)arg3 + 0xC);
        *(s32 *)((u8 *)temp_v1_2 + 0x18) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1_2 + 0x1C) = 0;
    } else {
        *(s3232 *)((u8 *)temp_a0 + 0x28) = 0;
        *(s3232 *)((u8 *)temp_v1_2 + 4) = 0;
        *(s32 *)((u8 *)temp_v1_2 + 8) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1_2 + 0xC) = 0;
        *(s3232 *)((u8 *)temp_v1_2 + 0x10) = 0x3F800000;
        *(s3232 *)((u8 *)temp_v1_2 + 0x14) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1_2 + 0x18) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1_2 + 0x1C) = 0;
    }
    temp_v1_3 = temp_a0 + 0x48;
    var_f1 = 255.0f;
    if (var_s3 & 0x20) {
        var_f1 = 128.0f;
    }
    var_f0 = 128.0f;
    if (var_s3 & 0x4000) {
        *(s32 *)((u8 *)temp_a0 + 0x68) = (s32) ((var_s3 >> 0x10) & 7);
        *(s32 *)((u8 *)temp_a0 + 0x6C) = 0x437F0000;
        var_f0 = 255.0f;
    }
    temp_a2 = var_s3 & 0x700;
    switch (temp_a2) {                              /* irregular */
    case 0x300:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 0) * *(f32 *)((u8 *)(&D_003F01E0) + 0)));
        *(f32 *)((u8 *)temp_v1_3 + 4) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 4) * *(f32 *)((u8 *)(&D_003F01E0) + 4)));
        *(f32 *)((u8 *)temp_v1_3 + 8) = (f32) (var_f1 * (*(f32 *)((u8 *)arg2 + 8) * *(f32 *)((u8 *)(&D_003F01E0) + 8)));
        *(f32 *)((u8 *)temp_v1_3 + 0xC) = (f32) (var_f0 * (*(f32 *)((u8 *)arg2 + 0xC) * *(f32 *)((u8 *)(&D_003F01E0) + 0xC)));
        break;
    case 0x200:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 4) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 8) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 0xC) = (f32) (*(f32 *)((u8 *)(&D_003F01E0) + 0xC) * var_f0);
        break;
    case 0x400:
        *(f32 *)((u8 *)temp_a0 + 0x48) = var_f1;
        *(f32 *)((u8 *)temp_v1_3 + 4) = var_f1;
        *(f32 *)((u8 *)temp_v1_3 + 8) = var_f1;
        *(f32 *)((u8 *)temp_v1_3 + 0xC) = var_f0;
        break;
    default:
        *(f32 *)((u8 *)temp_a0 + 0x48) = (f32) (*(f32 *)((u8 *)arg2 + 0) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 4) = (f32) (*(f32 *)((u8 *)arg2 + 4) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 8) = (f32) (*(f32 *)((u8 *)arg2 + 8) * var_f1);
        *(f32 *)((u8 *)temp_v1_3 + 0xC) = (f32) (*(f32 *)((u8 *)arg2 + 0xC) * var_f0);
        break;
    }
    *(f32 *)((u8 *)temp_a0 + 0x78) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x7C) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x80) = var_f1;
    *(f32 *)((u8 *)temp_a0 + 0x84) = var_f0;
    if (var_s3 & 0x80) {
        *(s3232 *)((u8 *)temp_a0 + 0x58) = (s3232) D_00470258;
        *(s3232 *)((u8 *)temp_a0 + 0x5C) = (s3232) D_0046FD30;
        *(f32 *)((u8 *)temp_a0 + 0x60) = (f32) D_0046FD2C;
        *(f32 *)((u8 *)temp_a0 + 0x64) = (f32) D_0046FD28;
        *(s128 *)((u8 *)temp_a0 + 0x120) = (s32) D_0047025C;
    } else {
        *(s3232 *)((u8 *)temp_a0 + 0x58) = (s3232) D_00470260;
        *(s128 *)((u8 *)temp_a0 + 0x120) = (s32) D_00470264;
    }
    *(s32 *)((u8 *)temp_a0 + 0xC8) = 0;
    *(s32 *)((u8 *)temp_a0 + 0xCC) = 0x50000007;
    *(s64 *)((u8 *)temp_a0 + 0xD0) = (s64) (0x8006 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)temp_a0 + 0xD8) = 0xE;
    *(s64 *)((u8 *)temp_a0 + 0xE0) = 1;
    *(s64 *)((u8 *)temp_a0 + 0xE8) = 0x46;
    if (var_s3 & 0x1000) {
        *(s32 *)((u8 *)temp_a0 + 0xF0) = (s32) (D_0046FD18 | 1);
    } else {
        *(s32 *)((u8 *)temp_a0 + 0xF0) = (s32) D_0046FD18;
    }
    if (var_s3 & 0x20000000) {
        *(s64 *)((u8 *)temp_a0 + 0x100) = (s64) D_003F01C0;
    } else {
        *(s64 *)((u8 *)temp_a0 + 0x100) = (s64) M2C_ERROR(/* Read from unset register $t1 */);
    }
    *(s128 *)((u8 *)temp_a0 + 0x110) = temp_s6;
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
    if (sp98 != NULL) {
        temp_a2_2 = *(u8 **)((u8 *)sp98 + 8);
        if (!(var_s3 & 0x4000)) {
            *(s128 *)((u8 *)temp_a0 + 0x130) = (s128) *(s128 *)((u8 *)temp_a2_2 + 0x220);
        } else {
            *(s128 *)((u8 *)temp_a0 + 0x130) = (s64) ((s64) *(s128 *)((u8 *)temp_a2_2 + 0x220) | (0x18 << 0x20));
            *(s64 *)((u8 *)temp_a0 + 0x138) = (s64) *(s64 *)((u8 *)temp_a2_2 + 0x228);
        }
    } else {
        *(s128 *)((u8 *)temp_a0 + 0x130) = temp_s6;
        *(s64 *)((u8 *)temp_a0 + 0x138) = 8;
    }
    sp9C = temp_a0 + 0x140;
    if (D_0047CAA4 != NULL) {
        D_0047CAA4(temp_a0, sp98, 0);
    }
    D_00470280 = sp9C;
    D_0047027C = sp9C + 0x10;
    if (D_00470288 != 0) {
        *(s32 *)((u8 *)sp9C + 0) = 0x10000003;
        if (D_0047028C == NULL) {
            D_0047028C = D_00470278;
        }
    } else {
        *(s32 *)((u8 *)sp9C + 0) = 0x60000003;
    }
    *(u8 **)((u8 *)sp9C + 4) = NULL;
    *(s32 *)((u8 *)sp9C + 8) = 0;
    *(s32 *)((u8 *)sp9C + 0xC) = 0;
    *(s64 *)((u8 *)sp9C + 0x10) = 0;
    *(s32 *)((u8 *)sp9C + 0x14) = 0;
    *(s32 *)((u8 *)sp9C + 0x18) = (s64) (0x01000404 | (0x6C01C000 << 0x20));
    if (arg0 != 0) {
        *(s32 *)((u8 *)sp9C + 0x20) = 1;
    } else {
        *(s32 *)((u8 *)sp9C + 0x20) = 0;
    }
    *(s32 *)((u8 *)sp9C + 0x24) = 0;
    *(s32 *)((u8 *)sp9C + 0x30) = 0x14000008;
    *(s32 *)((u8 *)sp9C + 0x34) = 0;
    *(s32 *)((u8 *)sp9C + 0x38) = 0;
    *(s32 *)((u8 *)sp9C + 0x3C) = 0;
    temp_v1_4 = sp9C + 0x40;
    sp9C = temp_v1_4;
    D_00470270 = 5;
    gPacketQwc = 3;
    D_00470294 = 1;
    D_00470298 = 0;
    D_0047029C = arg0;
    gPacketPtr = temp_v1_4;
}
