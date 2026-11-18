/* Draft (not built): func_001363D0 at 0x001363D0, size 0x494, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'unsigned int *' | 'int' @ 500: *(s32 *)((u8 *)gPacketPtr + 0x40) = (s32) (D_0046FD18 | 1);
 * Original: asm/nonmatchings/sys/unk_133620/func_001363D0.s */

// src/sys/unk_133620.c func_001363D0 cerr diff=-1/0
extern s32 D_00470270;
extern s32 D_00470274;
extern void *D_00470278;
extern void *D_0047027C;
extern void *D_00470280;
extern s32 D_00470288;
extern void *D_0047028C;
extern s64 D_0047CA10;
extern s64 D_0047CA18;
extern s8 D_0047CA20;
extern s8 D_0047CA21;
extern s8 D_0047CA22;
extern s8 D_0047CA23;
extern s32 D_0047CA24;
extern s64 D_0047CA28;
extern f32 D_0047CA30;
extern f32 D_0047CA34;
extern f32 D_0047CA38;
extern f32 D_0047CA3C;
extern void amDraw_FlushPacket(void);
void func_001363D0(s32 arg0, s32 arg1, u8 *arg2, s64 arg3) {
    f32 var_f1;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s2;
    s64 var_a1;
    u8 *temp_v1_2;

    var_s2 = arg1;
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
    amDraw_FlushPacket();
    D_00470278 = gPacketPtr;
    D_00470280 = gPacketPtr;
    D_0047027C = gPacketPtr + 0x10;
    if (D_00470288 != 0) {
        *(s32 *)((u8 *)gPacketPtr + 0) = 0x10000007;
        if (D_0047028C == NULL) {
            D_0047028C = D_00470278;
        }
    } else {
        *(s32 *)((u8 *)gPacketPtr + 0) = 0x60000007;
    }
    *(s32 *)((u8 *)gPacketPtr + 4) = 0;
    *(s32 *)((u8 *)gPacketPtr + 8) = 0x11000000;
    *(s32 *)((u8 *)gPacketPtr + 0xC) = 0x13000000;
    *(s32 *)((u8 *)gPacketPtr + 0x10) = 0;
    *(s32 *)((u8 *)gPacketPtr + 0x14) = 0;
    *(s32 *)((u8 *)gPacketPtr + 0x18) = 0;
    *(s32 *)((u8 *)gPacketPtr + 0x1C) = 0x50000006;
    *(s64 *)((u8 *)gPacketPtr + 0x20) = (s64) (0x8005 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)gPacketPtr + 0x28) = 0xE;
    *(s64 *)((u8 *)gPacketPtr + 0x30) = 1;
    *(s64 *)((u8 *)gPacketPtr + 0x38) = 0x46;
    if (var_s2 & 0x1000) {
        *(s32 *)((u8 *)gPacketPtr + 0x40) = (s32) (D_0046FD18 | 1);
    } else {
        *(s32 *)((u8 *)gPacketPtr + 0x40) = (s32) D_0046FD18;
    }
    *(s64 *)((u8 *)gPacketPtr + 0x48) = 0x47;
    *(s64 *)((u8 *)gPacketPtr + 0x50) = arg3;
    *(s64 *)((u8 *)gPacketPtr + 0x58) = 0x42;
    temp_v1_2 = gPacketPtr + 0x60;
    if (arg0 != 0) {
        var_a1 = 2;
    } else {
        var_a1 = 1;
    }
    if (var_s2 & 0x20) {
        var_a1 |= 0x10;
    }
    if (var_s2 & 0x10) {
        var_a1 |= 8;
    }
    if (var_s2 & 0x800) {
        var_a1 |= 0x40;
    }
    if (var_s2 & 0x8000) {
        var_a1 |= 0x20;
    }
    D_0047CA10 = var_a1;
    D_0047CA18 = 0;
    *(s128 *)((u8 *)gPacketPtr + 0x60) = (s128) D_0047CA10;
    var_f1 = 255.0f;
    if (var_s2 & 0x20) {
        var_f1 = 128.0f;
    }
    temp_a1 = var_s2 & 0x700;
    switch (temp_a1) {                              /* irregular */
    case 0x300:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        D_0047CA30 *= var_f1;
        D_0047CA34 *= var_f1;
        D_0047CA38 *= var_f1;
        D_0047CA3C *= 128.0f;
        break;
    case 0x200:
        D_0047CA30 = *(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1;
        D_0047CA34 = *(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1;
        D_0047CA38 = *(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1;
        D_0047CA3C = 128.0f * *(f32 *)((u8 *)(&D_003F01E0) + 0xC);
        break;
    case 0x400:
    case 0x0:
        D_0047CA30 = var_f1;
        D_0047CA34 = var_f1;
        D_0047CA38 = var_f1;
        D_0047CA3C = 128.0f;
        break;
    default:
        D_0047CA30 = *(f32 *)((u8 *)arg2 + 0) * var_f1;
        D_0047CA34 = *(f32 *)((u8 *)arg2 + 4) * var_f1;
        D_0047CA38 = *(f32 *)((u8 *)arg2 + 8) * var_f1;
        D_0047CA3C = 128.0f * *(f32 *)((u8 *)arg2 + 0xC);
        break;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf22, ($a0) */);
    D_0047CA20 = M2C_BITWISE(s8, D_0047CA30);
    D_0047CA21 = M2C_BITWISE(s8, D_0047CA34);
    D_0047CA22 = M2C_BITWISE(s8, D_0047CA38);
    D_0047CA23 = M2C_BITWISE(s8, D_0047CA3C);
    D_0047CA24 = 1;
    D_0047CA28 = 1;
    *(s128 *)((u8 *)temp_v1_2 + 0x10) = (s128) D_0047CA20;
    D_00470270 = 2;
    gPacketQwc = 7;
    D_00470294 = 6;
    D_00470298 = 5;
    D_0047029C = arg0;
    gPacketPtr = temp_v1_2 + 0x20;
}
