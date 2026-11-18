/* Draft (not built): func_00133FF0 at 0x00133FF0, size 0x694, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mwccps2.exe Compiler: 428: *(s3232 *)((u8 *)sp5C + 0x58) = (s3232) D_00470258; @ 426: *(s3232 *)((u8 *)sp5C + 0x58) = 0;
 * Original: asm/nonmatchings/sys/unk_133620/func_00133FF0.s */

// src/sys/unk_133620.c func_00133FF0 cerr diff=-1/0
s32 func_00139330(void **, s32, s32);
extern s32 D_00470270;
extern s32 D_00470274;
extern void *D_00470278;
extern void *D_0047027C;
extern void *D_00470280;
extern void *D_00470284;
extern s32 D_00470288;
extern void *D_0047028C;
extern void amDraw_FlushPacket(void);
void func_00133FF0(s32 arg0, s32 arg1, u8 *arg2, s64 arg3) {
    u8 *sp5C;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;

    amDraw_FlushPacket();
    if (D_00470254 != 0) {
        var_a0 = D_0046FD20 | 0x80;
        var_v1 = ~D_0046FD20 & D_00470250;
    } else {
        var_a0 = D_0046FD20 & ~0x80;
        var_v1 = ~var_a0 & D_00470250 & ~0x80;
    }
    var_s2 = var_v1 | (arg1 & var_a0);
    if (arg2 == NULL) {
        temp_v1 = var_s2 & 0x700;
        if ((temp_v1 != 0x400) && (temp_v1 != 0x200)) {
            if (temp_v1 != 0x300) {
                var_s2 = (var_s2 & ~0x700) | 0x400;
            } else {
                var_s2 = (var_s2 & ~0x700) | 0x200;
            }
        }
    }
    D_00470274 = var_s2;
    sp5C = gPacketPtr;
    D_00470278 = gPacketPtr;
    func_00139330(&sp5C, 3, var_s2);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
    D_00470284 = sp5C;
    *(s32 *)((u8 *)sp5C + 0) = 0x1000001E;
    *(s32 *)((u8 *)sp5C + 4) = 0;
    *(s32 *)((u8 *)sp5C + 8) = 0;
    *(s32 *)((u8 *)sp5C + 0xC) = 0;
    sp5C += 0x10;
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
    sp5C += 0x1E0;
    *(s32 *)((u8 *)sp5C + 0) = 0x1000000B;
    *(s32 *)((u8 *)sp5C + 4) = 0;
    *(s32 *)((u8 *)sp5C + 8) = 0;
    *(s32 *)((u8 *)sp5C + 0xC) = 0;
    *(s64 *)((u8 *)sp5C + 0x10) = (s64) (0x01000404 | (0x6C054030 << 0x20));
    var_a3 = 0;
    if (var_s2 & 0x10) {
        var_a3 = 8;
    }
    if (var_s2 & 0x8080) {
        var_a3 |= 0x20;
    }
    if (var_s2 & 0x800) {
        var_a3 |= 0x40;
    }
    temp_a3 = var_a3 | ((var_a3 << 0xF) | 0x20004000);
    *(s32 *)((u8 *)sp5C + 0x20) = 0x41;
    *(s32 *)((u8 *)sp5C + 0x30) = 0x41;
    *(s32 *)((u8 *)sp5C + 0x40) = 0x41;
    *(s32 *)((u8 *)sp5C + 0x44) = 0x3F000000;
    *(s32 *)((u8 *)sp5C + 0x18) = 0x8000;
    *(s32 *)((u8 *)sp5C + 0x1C) = (s32) (temp_a3 | 0x8000);
    *(s32 *)((u8 *)sp5C + 0x28) = 0x8000;
    *(s32 *)((u8 *)sp5C + 0x2C) = (s32) (temp_a3 | 0x10000);
    *(s32 *)((u8 *)sp5C + 0x38) = 0x8000;
    *(s32 *)((u8 *)sp5C + 0x3C) = (s32) (temp_a3 | 0x8000);
    temp_v1_2 = sp5C + 0x48;
    temp_a2 = var_s2 & 0x700;
    switch (temp_a2) {                              /* irregular */
    case 0x300:
        *(f32 *)((u8 *)sp5C + 0x48) = (f32) (255.0f * (*(f32 *)((u8 *)arg2 + 0) * *(f32 *)((u8 *)(&D_003F01E0) + 0)));
        *(f32 *)((u8 *)temp_v1_2 + 4) = (f32) (255.0f * (*(f32 *)((u8 *)arg2 + 4) * *(f32 *)((u8 *)(&D_003F01E0) + 4)));
        *(f32 *)((u8 *)temp_v1_2 + 8) = (f32) (255.0f * (*(f32 *)((u8 *)arg2 + 8) * *(f32 *)((u8 *)(&D_003F01E0) + 8)));
        *(f32 *)((u8 *)temp_v1_2 + 0xC) = (f32) (128.0f * (*(f32 *)((u8 *)arg2 + 0xC) * *(f32 *)((u8 *)(&D_003F01E0) + 0xC)));
        break;
    case 0x200:
        *(f32 *)((u8 *)sp5C + 0x48) = (f32) (255.0f * *(f32 *)((u8 *)(&D_003F01E0) + 0));
        *(f32 *)((u8 *)temp_v1_2 + 4) = (f32) (255.0f * *(f32 *)((u8 *)(&D_003F01E0) + 4));
        *(f32 *)((u8 *)temp_v1_2 + 8) = (f32) (255.0f * *(f32 *)((u8 *)(&D_003F01E0) + 8));
        *(f32 *)((u8 *)temp_v1_2 + 0xC) = (f32) (128.0f * *(f32 *)((u8 *)(&D_003F01E0) + 0xC));
        break;
    case 0x400:
        *(f32 *)((u8 *)sp5C + 0x48) = 255.0f;
        *(f32 *)((u8 *)temp_v1_2 + 4) = 255.0f;
        *(f32 *)((u8 *)temp_v1_2 + 8) = 255.0f;
        *(f32 *)((u8 *)temp_v1_2 + 0xC) = 128.0f;
        break;
    default:
        *(f32 *)((u8 *)sp5C + 0x48) = (f32) (255.0f * *(f32 *)((u8 *)arg2 + 0));
        *(f32 *)((u8 *)temp_v1_2 + 4) = (f32) (255.0f * *(f32 *)((u8 *)arg2 + 4));
        *(f32 *)((u8 *)temp_v1_2 + 8) = (f32) (255.0f * *(f32 *)((u8 *)arg2 + 8));
        *(f32 *)((u8 *)temp_v1_2 + 0xC) = (f32) (128.0f * *(f32 *)((u8 *)arg2 + 0xC));
        break;
    }
    if (!(var_s2 & 0x8080)) {
        *(s3232 *)((u8 *)sp5C + 0x58) = 0;
    } else if (var_s2 & 0x80) {
        *(s3232 *)((u8 *)sp5C + 0x58) = (s3232) D_00470258;
        *(f32 *)((u8 *)sp5C + 0x5C) = (f32) D_0046FD30;
        *(f32 *)((u8 *)sp5C + 0x60) = (f32) D_0046FD2C;
        *(f32 *)((u8 *)sp5C + 0x64) = (f32) D_0046FD28;
        *(s32 *)((u8 *)sp5C + 0xB0) = (s32) D_0047025C;
    } else if (var_s2 & 0x8000) {
        *(s3232 *)((u8 *)sp5C + 0x58) = (s3232) D_00470260;
        *(s32 *)((u8 *)sp5C + 0xB0) = (s32) D_00470264;
    }
    *(s32 *)((u8 *)sp5C + 0x68) = 0;
    *(s32 *)((u8 *)sp5C + 0x6C) = 0x50000005;
    *(s64 *)((u8 *)sp5C + 0x70) = (s64) (0x8004 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)sp5C + 0x78) = 0xE;
    *(s64 *)((u8 *)sp5C + 0x80) = 1;
    *(s64 *)((u8 *)sp5C + 0x88) = 0x46;
    if (var_s2 & 0x1000) {
        *(s32 *)((u8 *)sp5C + 0x90) = (s32) (D_0046FD18 | 1);
    } else {
        *(s32 *)((u8 *)sp5C + 0x90) = (s32) D_0046FD18;
    }
    *(s64 *)((u8 *)sp5C + 0x98) = 0x47;
    *(s64 *)((u8 *)sp5C + 0xA0) = arg3;
    *(s64 *)((u8 *)sp5C + 0xA8) = 0x42;
    *(s64 *)((u8 *)sp5C + 0xB8) = 0x3D;
    temp_v1_3 = sp5C + 0xC0;
    sp5C = temp_v1_3;
    D_00470280 = temp_v1_3;
    D_0047027C = temp_v1_3 + 0x10;
    if (D_00470288 != 0) {
        *(s32 *)((u8 *)sp5C + 0) = 0x10000003;
        if (D_0047028C == NULL) {
            D_0047028C = D_00470278;
        }
    } else {
        *(s32 *)((u8 *)sp5C + 0) = 0x60000003;
    }
    *(s32 *)((u8 *)sp5C + 4) = 0;
    *(s32 *)((u8 *)sp5C + 8) = 0;
    *(s32 *)((u8 *)sp5C + 0xC) = 0;
    *(s64 *)((u8 *)sp5C + 0x10) = 0;
    *(s32 *)((u8 *)sp5C + 0x14) = 0;
    *(s32 *)((u8 *)sp5C + 0x18) = (s64) (0x01000404 | (0x6C01C000 << 0x20));
    if (arg0 != 0) {
        *(s32 *)((u8 *)sp5C + 0x20) = 1;
    } else {
        *(s32 *)((u8 *)sp5C + 0x20) = 0;
    }
    *(s32 *)((u8 *)sp5C + 0x24) = 0;
    *(s32 *)((u8 *)sp5C + 0x30) = 0x14000008;
    *(s32 *)((u8 *)sp5C + 0x34) = 0;
    *(s32 *)((u8 *)sp5C + 0x38) = 0;
    *(s32 *)((u8 *)sp5C + 0x3C) = 0;
    temp_v1_4 = sp5C + 0x40;
    sp5C = temp_v1_4;
    D_00470270 = 3;
    gPacketQwc = 3;
    D_00470294 = 1;
    D_00470298 = 0;
    D_0047029C = arg0;
    gPacketPtr = temp_v1_4;
}
