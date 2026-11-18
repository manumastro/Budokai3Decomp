/* Draft (not built): func_00136870 at 0x00136870, size 0x610, segment sys/unk_133620 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'unsigned int *' | 'int' @ 537: *(s32 *)((u8 *)var_s1 + 0x30) = (s32) (D_0046FD18 | 1);
 * Original: asm/nonmatchings/sys/unk_133620/func_00136870.s */

// src/sys/unk_133620.c func_00136870 cerr diff=-1/0
s32 func_00145D70(s32, s32, s32, s32);
extern s32 D_00470238;
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
extern f32 D_0047CA24;
extern s64 D_0047CA28;
extern f32 D_0047CA30;
extern f32 D_0047CA34;
extern f32 D_0047CA38;
extern f32 D_0047CA3C;
extern void amDraw_FlushPacket(void);
void func_00136870(s32 arg0, s32 arg1, f32 *arg2, s32 arg3) {
    u8 *sp9C;
    f32 *var_s2;
    f32 var_f1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s3;
    s64 var_a0;
    u8 *temp_s1;
    u8 *var_s1;

    var_s3 = arg1;
    var_s2 = arg2;
    var_s0 = 0;
    if (var_s2 == NULL) {
        var_s2 = &D_0047CA30;
        temp_v1 = var_s3 & 0x700;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0x400:                                 /* switch 1 */
        case 0x200:                                 /* switch 1 */
            break;
        case 0x300:                                 /* switch 1 */
            var_s3 = (var_s3 & ~0x700) | 0x200;
            break;
        default:                                    /* switch 1 */
            var_s3 = (var_s3 & ~0x700) | 0x400;
            break;
        }
    }
    D_00470274 = var_s3;
    amDraw_FlushPacket();
    var_s1 = gPacketPtr;
    D_00470278 = var_s1;
    if (arg3 >= 0) {
        temp_v0 = func_00145D70(D_00470238, arg3, 0, 1);
        if (temp_v0 & 2) {
            *(s32 *)((u8 *)var_s1 + 0) = 0x50000000;
            *(s32 *)((u8 *)var_s1 + 4) = (s32) *(s32 *)((u8 *)sp9C + 0x28);
            *(s32 *)((u8 *)var_s1 + 8) = 0;
            *(s32 *)((u8 *)var_s1 + 0xC) = 0;
            var_s1 += 0x10;
        }
        if (temp_v0 & 1) {
            *(s32 *)((u8 *)var_s1 + 0) = 0x50000000;
            *(s32 *)((u8 *)var_s1 + 4) = (s32) *(s32 *)((u8 *)sp9C + 0x14);
            *(s32 *)((u8 *)var_s1 + 8) = 0;
            *(s32 *)((u8 *)var_s1 + 0xC) = 0;
        } else {
            *(s32 *)((u8 *)var_s1 + 0) = 0x50000000;
            *(s32 *)((u8 *)var_s1 + 4) = (s32) *(s32 *)((u8 *)sp9C + 0x18);
            *(s32 *)((u8 *)var_s1 + 8) = 0;
            *(s32 *)((u8 *)var_s1 + 0xC) = 0;
        }
        var_s1 += 0x10;
        if (*(s32 *)((u8 *)sp9C + 0x1C) & 0x80000000) {
            var_s0 = 1;
        }
    }
    D_00470280 = var_s1;
    D_0047027C = var_s1;
    if (D_00470288 != 0) {
        *(s32 *)((u8 *)var_s1 + 0) = 0x10000007;
        if (D_0047028C == NULL) {
            D_0047028C = D_00470278;
        }
    } else {
        *(s32 *)((u8 *)var_s1 + 0) = 0x60000007;
    }
    *(s32 *)((u8 *)var_s1 + 4) = 0;
    *(s32 *)((u8 *)var_s1 + 8) = 0;
    *(s32 *)((u8 *)var_s1 + 0xC) = 0x50000007;
    *(s64 *)((u8 *)var_s1 + 0x10) = (s64) (0x8006 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_s1 + 0x18) = 0xE;
    *(s64 *)((u8 *)var_s1 + 0x20) = 1;
    *(s64 *)((u8 *)var_s1 + 0x28) = 0x46;
    if (var_s3 & 0x1000) {
        *(s32 *)((u8 *)var_s1 + 0x30) = (s32) (D_0046FD18 | 1);
    } else {
        *(s32 *)((u8 *)var_s1 + 0x30) = (s32) D_0046FD18;
    }
    *(s64 *)((u8 *)var_s1 + 0x40) = (s64) M2C_ERROR(/* Read from unset register $t0 */);
    *(s64 *)((u8 *)var_s1 + 0x50) = (s64) M2C_ERROR(/* Read from unset register $t1 */);
    if (var_s0 == 0) {
        *(s64 *)((u8 *)var_s1 + 0x38) = 0x47;
        *(s64 *)((u8 *)var_s1 + 0x48) = 0x42;
        *(s64 *)((u8 *)var_s1 + 0x58) = 8;
    } else {
        *(s64 *)((u8 *)var_s1 + 0x38) = 0x48;
        *(s64 *)((u8 *)var_s1 + 0x48) = 0x43;
        *(s64 *)((u8 *)var_s1 + 0x58) = 9;
    }
    temp_s1 = var_s1 + 0x60;
    switch (arg0) {                                 /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        var_a0 = 4;
        break;
    case 2:                                         /* switch 2 */
        var_a0 = 5;
        break;
    default:                                        /* switch 2 */
    case 0:                                         /* switch 2 */
        var_a0 = 3;
        break;
    }
    if (var_s3 & 0x10) {
        var_a0 |= 8;
    }
    if (var_s3 & 0x20) {
        var_a0 |= 0x10;
    }
    if (var_s3 & 0x800) {
        var_a0 |= 0x40;
    }
    if (var_s3 & 0x40000000) {
        var_a0 |= 0x100;
    }
    if (var_s3 & 0x8000) {
        var_a0 |= 0x20;
    }
    if (var_s0 != 0) {
        var_a0 |= 0x200;
    }
    D_0047CA10 = var_a0;
    D_0047CA18 = 0;
    *(s128 *)((u8 *)var_s1 + 0x60) = (s128) D_0047CA10;
    if (var_s3 & 0x20) {
        var_f1 = 128.0f;
    } else {
        var_f1 = 255.0f;
    }
    temp_a0 = var_s3 & 0x700;
    switch (temp_a0) {                              /* switch 3; irregular */
    case 0x300:                                     /* switch 3 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        D_0047CA30 *= var_f1;
        D_0047CA34 *= var_f1;
        D_0047CA38 *= var_f1;
        D_0047CA3C *= 128.0f;
        break;
    case 0x200:                                     /* switch 3 */
        D_0047CA30 = *(f32 *)((u8 *)(&D_003F01E0) + 0) * var_f1;
        D_0047CA34 = *(f32 *)((u8 *)(&D_003F01E0) + 4) * var_f1;
        D_0047CA38 = *(f32 *)((u8 *)(&D_003F01E0) + 8) * var_f1;
        D_0047CA3C = 128.0f * *(f32 *)((u8 *)(&D_003F01E0) + 0xC);
        break;
    case 0x400:                                     /* switch 3 */
    case 0x0:                                       /* switch 3 */
        D_0047CA30 = var_f1;
        D_0047CA34 = var_f1;
        D_0047CA38 = var_f1;
        D_0047CA3C = 128.0f;
        break;
    default:                                        /* switch 3 */
        D_0047CA30 = *(f32 *)((u8 *)var_s2 + 0) * var_f1;
        D_0047CA34 = *(f32 *)((u8 *)var_s2 + 4) * var_f1;
        D_0047CA38 = *(f32 *)((u8 *)var_s2 + 8) * var_f1;
        D_0047CA3C = 128.0f * *(f32 *)((u8 *)var_s2 + 0xC);
        break;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf22, ($v1) */);
    D_0047CA20 = M2C_BITWISE(s8, D_0047CA30);
    D_0047CA21 = M2C_BITWISE(s8, D_0047CA34);
    D_0047CA22 = M2C_BITWISE(s8, D_0047CA38);
    D_0047CA23 = M2C_BITWISE(s8, D_0047CA3C);
    D_0047CA24 = 1.0f;
    D_0047CA28 = 1;
    *(s128 *)((u8 *)temp_s1 + 0x10) = (s128) D_0047CA20;
    D_00470270 = 6;
    gPacketQwc = 7;
    D_00470294 = 7;
    D_00470298 = 6;
    D_0047029C = arg0;
    gPacketPtr = temp_s1 + 0x20;
}
