/* Draft (not built): func_001489F0 at 0x001489F0, size 0xFC4, segment sys/unk_147560 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tion call 'func_001489F0()' does not match 'func_001489F0(unsigned char *)' mwccps2.exe Compiler: @ 67: func_001489F0();
 * Original: asm/nonmatchings/sys/unk_147560/func_001489F0.s */

// src/sys/unk_147560.c func_001489F0 cerr diff=-1/0
s32 FlushCache(s32);
s32 amDisp_SetOffset(s32, s32);
s32 amDraw3d_SetScreen(s32);
s32 amVram_Init(s32, s16, s16, s32);
s32 func_00100250(s32, s8, s8, s64);
s32 func_001003F0();
s32 func_00101520(s32, s8, s16, s16);
s32 func_00124940(s32, s32);
extern s32 D_004593E0;
extern s32 D_00459C30;
extern s32 D_00459C50;
extern s32 D_0046FD10;
extern s3232 D_0046FD74;
extern s32 D_00470230;
extern s32 D_00470234;
extern f32 D_004703C0;
extern s32 D_004703C4;
extern s32 D_004703F0;
extern s8 D_004703F4;
extern s8 D_00470408;
extern u32 D_00470414;
extern u32 D_0047041C;
extern s32 D_00470420;
extern u32 D_00470428;
extern s8 D_0047044C;
extern s8 D_00470450;
extern s8 D_00470454;
extern s8 D_00470458;
extern s8 D_0047045C;
extern s32 D_00470474;
extern s32 D_00470478;
extern s32 D_0047047C;
extern s32 D_00470480;
extern s32 D_00470484;
extern s32 D_00470488;
extern s32 D_00470490;
extern s32 D_00470494;
extern s8 D_0047E870;
extern s8 D_0047E871;
extern s8 D_0047E872;
extern s8 D_0047E873;
extern s16 D_0047E874;
extern s16 D_0047E876;
extern s16 D_0047E878;
extern s16 D_0047E87A;
extern s32 D_0047E87C;
extern s32 D_0047E880;
extern f32 gFrameDelta;
void func_001489F0(u8 *arg0) {
    f32 var_f0;
    f32 var_f1;
    f32 var_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_v0_3;
    s64 var_v0_2;
    s8 var_v0;
    u32 var_s1_2;

    var_s1 = saved_reg_s1;
    D_0047E870 = *(s8 *)((u8 *)arg0 + 2);
    D_0047E871 = *(s8 *)((u8 *)arg0 + 3);
    D_0047E872 = *(s8 *)((u8 *)arg0 + 4);
    D_0047E873 = *(s8 *)((u8 *)arg0 + 5);
    D_0047E874 = *(s16 *)((u8 *)arg0 + 6);
    D_0047E876 = *(s16 *)((u8 *)arg0 + 8);
    D_0047E878 = *(s16 *)((u8 *)arg0 + 0xA);
    D_0047E87A = *(s16 *)((u8 *)arg0 + 0xC);
    if ((D_0046FD10 == -1) && (*(s16 *)((u8 *)arg0 + 0xE) > 0)) {
        D_0046FD10 = (s32) *(s16 *)((u8 *)arg0 + 0xE);
        D_00470230 = 0;
        D_00470234 = func_00124940(0x40, *(s16 *)((u8 *)arg0 + 0xE) * 8);
    }
    amDraw3d_SetScreen(0);
    D_004703F4 = *(s8 *)((u8 *)arg0 + 0);
    D_00470408 = *(s8 *)((u8 *)arg0 + 1);
    if (D_00470408 == 1) {
        *(s8 *)((u8 *)arg0 + 0x24) = (s8) *(s8 *)((u8 *)arg0 + 3);
        *(s16 *)((u8 *)arg0 + 0x26) = (s16) D_00470414;
        *(s16 *)((u8 *)arg0 + 0x28) = (s16) D_00470418;
        if (*(s8 *)((u8 *)arg0 + 0) != 2) {
            if (*(s8 *)((u8 *)arg0 + 0) == 3) {
                goto block_7;
            }
            *(s8 *)((u8 *)arg0 + 0x22) = 0;
            *(s8 *)((u8 *)arg0 + 0x23) = 0;
        } else {
block_7:
            if (*(s16 *)((u8 *)arg0 + 8) >= 0x1C0) {
                *(s8 *)((u8 *)arg0 + 0x22) = 1;
            } else {
                *(s8 *)((u8 *)arg0 + 0x22) = (s8) *(s8 *)((u8 *)arg0 + 2);
            }
            var_v1 = 0;
            if ((*(s8 *)((u8 *)arg0 + 2) == 0) && (*(s16 *)((u8 *)arg0 + 8) >= 0x1C0)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            *(s8 *)((u8 *)arg0 + 0x23) = var_v0;
        }
    }
    D_004703FC = *(s8 *)((u8 *)arg0 + 0x22);
    D_00470400 = *(s8 *)((u8 *)arg0 + 0x23);
    D_0047041C = (u32) *(s16 *)((u8 *)arg0 + 0x26);
    var_v1_2 = 0;
    if ((*(s8 *)((u8 *)arg0 + 0x22) != 0) && (*(s8 *)((u8 *)arg0 + 0x23) != 0)) {
        var_v1_2 = 1;
    }
    if (var_v1_2 != 0) {
        var_f1 = 2.0f * (f32) *(s16 *)((u8 *)arg0 + 0x28);
    } else {
        var_f1 = (f32) *(s16 *)((u8 *)arg0 + 0x28);
    }
    if (!(var_f1 >= 2.1474836e9f)) {
        var_v1_3 = var_f1;
    } else {
        var_v1_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (var_f1 - 2.1474836e9f)) | 0x80000000));
    }
    D_00470420 = M2C_BITWISE(s32, var_v1_3);
    D_00470424 = (*(s16 *)((u8 *)arg0 + 0x26) + 0x3F) & ~0x3F;
    D_00470428 = (u32) *(s16 *)((u8 *)arg0 + 0x28);
    D_00470484 = 0;
    D_00470488 = 0;
    D_00470454 = *(s8 *)((u8 *)arg0 + 0x24);
    D_0047047C = D_00470424 * D_00470428;
    D_00470480 = D_0047047C;
    switch (D_00470454) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        D_00470458 = 4;
        D_00470480 *= 4;
        var_s1 = (D_00470428 + 0x1F) & ~0x1F;
        break;
    case 10:                                        /* switch 1 */
    case 2:                                         /* switch 1 */
        D_00470458 = 2;
        D_00470480 *= 2;
        var_s1 = (D_00470428 + 0x3F) & ~0x3F;
        break;
    }
    var_s1_2 = D_00470458 * (D_00470424 * var_s1);
    temp_v0 = ((u32) ((var_s1_2 >> 2) + 0x7FF) >> 0xB) + D_00470484;
    D_00470474 = temp_v0;
    D_00470478 = temp_v0 << 0xD;
    D_0047E87C = D_00470474;
    switch (D_0047044C) {                           /* switch 2; irregular */
    case 1:                                         /* switch 2 */
    case 0:                                         /* switch 2 */
        var_s1_2 = (D_00470418 + 0x1F) & ~0x1F;
        break;
    case 10:                                        /* switch 2 */
    case 2:                                         /* switch 2 */
        var_s1_2 = (D_00470418 + 0x3F) & ~0x3F;
        break;
    }
    temp_v0_2 = ((u32) (((u32) (D_00470450 * (((D_00470414 + 0x3F) & ~0x3F) * var_s1_2)) >> 2) + 0x7FF) >> 0xB) + D_00470474;
    D_00470490 = temp_v0_2;
    D_00470494 = temp_v0_2 << 0xD;
    D_0047E880 = D_00470490;
    if (*(s8 *)((u8 *)arg0 + 0x23) != 0) {
        var_v0_2 = 1;
    } else {
        var_v0_2 = 0;
    }
    func_00100250(0, D_004703FC, D_004703F4, (s64) (var_v0_2 << 0x30) >> 0x30);
    func_001003F0();
    if (D_004703F4 != 3) {
        D_004703C4 = 0x3C;
    } else {
        D_004703C4 = 0x32;
    }
    FlushCache(0);
    temp_s1 = (s32) D_0047E540 | 0x20000000;
    func_00101520(temp_s1, D_00470454, (s16) D_00470424, (s16) D_00470428);
    *(s3232 *)((u8 *)temp_s1 + 0x180) = (s3232) D_0046FD74;
    if (D_0046FD70 != 0) {
        *(s64 *)((u8 *)temp_s1 + 0x198) = 5;
        *(s64 *)((u8 *)temp_s1 + 0x1A8) = 5;
    } else {
        *(s64 *)((u8 *)temp_s1 + 0x198) = 0xD;
        *(s64 *)((u8 *)temp_s1 + 0x1A8) = 0xD;
    }
    *(s64 *)((u8 *)temp_s1 + 0x2D0) = (s64) *(s64 *)((u8 *)temp_s1 + 0x160);
    *(s64 *)((u8 *)temp_s1 + 0x2D8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x168);
    *(s64 *)((u8 *)temp_s1 + 0x2E0) = (s64) *(s64 *)((u8 *)temp_s1 + 0x170);
    *(s64 *)((u8 *)temp_s1 + 0x2E8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x178);
    *(s3232 *)((u8 *)temp_s1 + 0x2F0) = (s3232) *(s3232 *)((u8 *)temp_s1 + 0x180);
    *(f32 *)((u8 *)temp_s1 + 0x2F4) = (f32) *(f32 *)((u8 *)temp_s1 + 0x184);
    *(s64 *)((u8 *)temp_s1 + 0x2F8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x188);
    *(s64 *)((u8 *)temp_s1 + 0x300) = (s64) *(s64 *)((u8 *)temp_s1 + 0x190);
    *(s64 *)((u8 *)temp_s1 + 0x308) = (s64) *(s64 *)((u8 *)temp_s1 + 0x198);
    *(s64 *)((u8 *)temp_s1 + 0x310) = (s64) *(s64 *)((u8 *)temp_s1 + 0x1A0);
    *(s64 *)((u8 *)temp_s1 + 0x318) = (s64) *(s64 *)((u8 *)temp_s1 + 0x1A8);
    *(s64 *)((u8 *)temp_s1 + 0x320) = (s64) *(s64 *)((u8 *)temp_s1 + 0x1B0);
    *(s64 *)((u8 *)temp_s1 + 0x328) = (s64) *(s64 *)((u8 *)temp_s1 + 0x1B8);
    if ((D_004703F4 != 0x50) && (D_004703F4 != 3) && (D_004703F4 != 2)) {
        *(u16 *)((u8 *)temp_s1 + 0x1C) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x1C) & ~0xFFF) | 0x4FF);
        *(u16 *)((u8 *)temp_s1 + 0x44) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x44) & ~0xFFF) | 0x4FF);
        *(u16 *)((u8 *)temp_s1 + 0x1A) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x1A) & ~0x780) | 0x80);
        *(u16 *)((u8 *)temp_s1 + 0x42) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x42) & ~0x780) | 0x80);
    }
    *(u16 *)((u8 *)temp_s1 + 0x1C) = (s32) (((s32) *(u16 *)((u8 *)temp_s1 + 0x1C) & 0xFF800FFF) | (((D_00470420 - 1) & 0x7FF) << 0xC));
    *(u16 *)((u8 *)temp_s1 + 0x44) = (s32) (((s32) *(u16 *)((u8 *)temp_s1 + 0x44) & 0xFF800FFF) | (((D_00470420 - 1) & 0x7FF) << 0xC));
    *(u16 *)((u8 *)temp_s1 + 0x10) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x10) & ~0x1FF) | (0 & 0x1FF));
    if (D_00470408 == 0) {
        *(u16 *)((u8 *)temp_s1 + 0x38) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x38) & ~0x1FF) | (0 & 0x1FF));
    } else {
        *(u16 *)((u8 *)temp_s1 + 0x38) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x38) & ~0x1FF) | (D_00470474 & 0x1FF));
    }
    *(u8 *)((u8 *)temp_s1 + 8) = (u8) ((*(u8 *)((u8 *)temp_s1 + 8) & ~1) | (D_004703FC & 1));
    *(u8 *)((u8 *)temp_s1 + 8) = (u8) ((*(u8 *)((u8 *)temp_s1 + 8) & ~2) | ((*(s8 *)((u8 *)arg0 + 0x23) & 1) * 2));
    *(u8 *)((u8 *)temp_s1 + 0x30) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0x30) & ~1) | (D_004703FC & 1));
    *(u8 *)((u8 *)temp_s1 + 0x30) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0x30) & ~2) | ((*(s8 *)((u8 *)arg0 + 0x23) & 1) * 2));
    temp_v0_3 = (s64) (((M2C_BITWISE(s32, (255.0f * D_0046FD78)) << 8) | 0xA1) << 0x20) >> 0x20;
    *(s64 *)((u8 *)temp_s1 + 0) = temp_v0_3;
    *(s64 *)((u8 *)temp_s1 + 0x28) = temp_v0_3;
    if (D_0047044C & 2) {
        var_v0_3 = 1;
    } else {
        var_v0_3 = 0;
    }
    *(u16 *)((u8 *)temp_s1 + 0x60) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x60) & ~0x1FF) | (D_00470474 & 0x1FF));
    *(u8 *)((u8 *)temp_s1 + 0x62) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0x62) & ~0x3F) | (((u32) (D_00470414 + 0x3F) >> 6) & 0x3F));
    *(u8 *)((u8 *)temp_s1 + 0x63) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0x63) & ~0x3F) | (D_0047044C & 0x3F));
    *(u16 *)((u8 *)temp_s1 + 0x70) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x70) & ~0x1FF) | (D_00470490 & 0x1FF));
    *(s16 *)((u8 *)temp_s1 + 0x80) = (s16) ((0x800 - ((u32) D_00470414 >> 1)) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x84) = (s16) ((0x800 - ((u32) D_00470418 >> 1)) * 0x10);
    *(u16 *)((u8 *)temp_s1 + 0x92) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x92) & ~0x7FF) | ((D_00470414 - 1) & 0x7FF));
    *(u16 *)((u8 *)temp_s1 + 0x96) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x96) & ~0x7FF) | ((D_00470418 - 1) & 0x7FF));
    *(u8 *)((u8 *)temp_s1 + 0xC0) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0xC0) & ~1) | (var_v0_3 & 1));
    *(u16 *)((u8 *)temp_s1 + 0xE0) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0xE0) & ~0x1FF) | (D_00470474 & 0x1FF));
    *(u8 *)((u8 *)temp_s1 + 0xE2) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0xE2) & ~0x3F) | (((u32) (D_00470414 + 0x3F) >> 6) & 0x3F));
    *(u8 *)((u8 *)temp_s1 + 0xE3) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0xE3) & ~0x3F) | (D_0047044C & 0x3F));
    *(u16 *)((u8 *)temp_s1 + 0xF0) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0xF0) & ~0x1FF) | (D_00470490 & 0x1FF));
    *(s16 *)((u8 *)temp_s1 + 0x100) = (s16) ((0x800 - ((u32) D_00470414 >> 1)) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x104) = (s16) ((0x800 - ((u32) D_00470418 >> 1)) * 0x10);
    *(u16 *)((u8 *)temp_s1 + 0x112) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x112) & ~0x7FF) | ((D_00470414 - 1) & 0x7FF));
    *(u16 *)((u8 *)temp_s1 + 0x116) = (u16) ((*(u16 *)((u8 *)temp_s1 + 0x116) & ~0x7FF) | ((D_00470418 - 1) & 0x7FF));
    *(u8 *)((u8 *)temp_s1 + 0x140) = (u8) ((*(u8 *)((u8 *)temp_s1 + 0x140) & ~1) | (var_v0_3 & 1));
    *(s64 *)((u8 *)temp_s1 + 0x1D0) = (s64) *(u16 *)((u8 *)temp_s1 + 0x60);
    *(s64 *)((u8 *)temp_s1 + 0x1D8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x68);
    *(s64 *)((u8 *)temp_s1 + 0x1E0) = (s64) *(u16 *)((u8 *)temp_s1 + 0x70);
    *(s64 *)((u8 *)temp_s1 + 0x1E8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x78);
    *(s64 *)((u8 *)temp_s1 + 0x1F0) = (s64) *(s16 *)((u8 *)temp_s1 + 0x80);
    *(s64 *)((u8 *)temp_s1 + 0x1F8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x88);
    *(s64 *)((u8 *)temp_s1 + 0x200) = (s64) *(s64 *)((u8 *)temp_s1 + 0x90);
    *(s64 *)((u8 *)temp_s1 + 0x208) = (s64) *(s64 *)((u8 *)temp_s1 + 0x98);
    *(s64 *)((u8 *)temp_s1 + 0x210) = (s64) *(s64 *)((u8 *)temp_s1 + 0xA0);
    *(s64 *)((u8 *)temp_s1 + 0x218) = (s64) *(s64 *)((u8 *)temp_s1 + 0xA8);
    *(s64 *)((u8 *)temp_s1 + 0x220) = (s64) *(s64 *)((u8 *)temp_s1 + 0xB0);
    *(s64 *)((u8 *)temp_s1 + 0x228) = (s64) *(s64 *)((u8 *)temp_s1 + 0xB8);
    *(s64 *)((u8 *)temp_s1 + 0x230) = (s64) *(u8 *)((u8 *)temp_s1 + 0xC0);
    *(s64 *)((u8 *)temp_s1 + 0x238) = (s64) *(s64 *)((u8 *)temp_s1 + 0xC8);
    *(s64 *)((u8 *)temp_s1 + 0x240) = (s64) *(s64 *)((u8 *)temp_s1 + 0xD0);
    *(s64 *)((u8 *)temp_s1 + 0x248) = (s64) *(s64 *)((u8 *)temp_s1 + 0xD8);
    *(s64 *)((u8 *)temp_s1 + 0x250) = (s64) *(u16 *)((u8 *)temp_s1 + 0xE0);
    *(s64 *)((u8 *)temp_s1 + 0x258) = (s64) *(s64 *)((u8 *)temp_s1 + 0xE8);
    *(s64 *)((u8 *)temp_s1 + 0x260) = (s64) *(u16 *)((u8 *)temp_s1 + 0xF0);
    *(s64 *)((u8 *)temp_s1 + 0x268) = (s64) *(s64 *)((u8 *)temp_s1 + 0xF8);
    *(s64 *)((u8 *)temp_s1 + 0x270) = (s64) *(s16 *)((u8 *)temp_s1 + 0x100);
    *(s64 *)((u8 *)temp_s1 + 0x278) = (s64) *(s64 *)((u8 *)temp_s1 + 0x108);
    *(s64 *)((u8 *)temp_s1 + 0x280) = (s64) *(s64 *)((u8 *)temp_s1 + 0x110);
    *(s64 *)((u8 *)temp_s1 + 0x288) = (s64) *(s64 *)((u8 *)temp_s1 + 0x118);
    *(s64 *)((u8 *)temp_s1 + 0x290) = (s64) *(s64 *)((u8 *)temp_s1 + 0x120);
    *(s64 *)((u8 *)temp_s1 + 0x298) = (s64) *(s64 *)((u8 *)temp_s1 + 0x128);
    *(s64 *)((u8 *)temp_s1 + 0x2A0) = (s64) *(s64 *)((u8 *)temp_s1 + 0x130);
    *(s64 *)((u8 *)temp_s1 + 0x2A8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x138);
    *(s64 *)((u8 *)temp_s1 + 0x2B0) = (s64) *(u8 *)((u8 *)temp_s1 + 0x140);
    *(s64 *)((u8 *)temp_s1 + 0x2B8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x148);
    *(s64 *)((u8 *)temp_s1 + 0x2C0) = (s64) *(s64 *)((u8 *)temp_s1 + 0x150);
    *(s64 *)((u8 *)temp_s1 + 0x2C8) = (s64) *(s64 *)((u8 *)temp_s1 + 0x158);
    if (D_00470408 == 1) {
        *(s64 *)((u8 *)temp_s1 + 0x1D0) = (s16) (((u16) *(s64 *)((u8 *)temp_s1 + 0x1D0) & ~0x1FF) | (D_00470484 & 0x1FF));
        *(s64 *)((u8 *)temp_s1 + 0x250) = (s16) (((u16) *(s64 *)((u8 *)temp_s1 + 0x250) & ~0x1FF) | (D_00470484 & 0x1FF));
    }
    *(s64 *)((u8 *)temp_s1 + 0x190) = (s16) ((0x800 - ((u32) D_00470414 >> 1)) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x192) = (s16) ((0x800 - ((u32) D_00470418 >> 1)) * 0x10);
    *(s64 *)((u8 *)temp_s1 + 0x1A0) = (s16) ((((u32) D_00470414 >> 1) + 0x800) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x1A2) = (s16) ((((u32) D_00470418 >> 1) + 0x800) * 0x10);
    *(s64 *)((u8 *)temp_s1 + 0x300) = (s16) ((0x800 - ((u32) D_00470414 >> 1)) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x302) = (s16) ((0x800 - ((u32) D_00470418 >> 1)) * 0x10);
    *(s64 *)((u8 *)temp_s1 + 0x310) = (s16) ((((u32) D_00470414 >> 1) + 0x800) * 0x10);
    *(s16 *)((u8 *)temp_s1 + 0x312) = (s16) ((((u32) D_00470418 >> 1) + 0x800) * 0x10);
    D_004703AC = (s32) ((s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20);
    D_004703B0 = 0;
    if (D_004703F8 != 0) {
        func_00101230(temp_s1 + 0x60, 0x800, 0x800, (s16) D_004703AC);
        func_00101498(temp_s1 + 0xE0, 0x800, 0x800, (s16) D_004703AC);
    } else {
        func_00101230((void *)(temp_s1 + 0x60), 0x800, 0x800, 0);
        func_00101498((void *)(temp_s1 + 0xE0), 0x800, 0x800, 0);
    }
    temp_a0 = (s32) &D_00459C50 | 0x20000000;
    *(s32 *)((u8 *)temp_a0 + 0x50) = (s32) (D_00470484 | ((D_00470454 << 0x18) | (((u32) (D_00470424 + 0x3F) >> 6) << 0x10)));
    *(s32 *)((u8 *)temp_a0 + 0x60) = (s32) (D_00470424 << 0x10);
    *(s32 *)((u8 *)temp_a0 + 0x64) = (s32) (D_00470428 << 0x10);
    *(s32 *)((u8 *)temp_a0 + 0x70) = (s32) (((0x800 - ((u32) D_00470428 >> 1)) << 0x14) | ((0x800 - ((u32) D_00470424 >> 1)) * 0x10));
    *(s32 *)((u8 *)temp_a0 + 0x80) = (s32) (((((u32) D_00470428 >> 1) + 0x800) << 0x14) | ((((u32) D_00470424 >> 1) + 0x800) * 0x10));
    temp_a2 = (((u32) D_00470418 >> 1) + 0x800) << 0x14;
    *(s32 *)((u8 *)temp_a0 + 0x90) = (s32) (D_00470474 | ((D_0047044C << 0x18) | (((u32) (D_00470414 + 0x3F) >> 6) << 0x10)));
    *(s32 *)((u8 *)temp_a0 + 0xA0) = (s32) (D_00470414 << 0x10);
    *(s32 *)((u8 *)temp_a0 + 0xA4) = (s32) (D_00470418 << 0x10);
    *(s32 *)((u8 *)temp_a0 + 0xB0) = (s32) (((0x800 - ((u32) D_00470418 >> 1)) << 0x14) | ((0x800 - ((u32) D_00470414 >> 1)) * 0x10));
    *(s32 *)((u8 *)temp_a0 + 0xC0) = (s32) (temp_a2 | ((((u32) D_00470414 >> 1) + 0x800) * 0x10));
    sceGsSyncPath(0, 0);
    *(s32 *)0x1000A010 = 0;
    *(s32 *)0x1000A020 = 0;
    *(s32 **)0x1000A030 = &D_00459C30;
    *(s32 *)0x1000E010 = 4;
    M2C_SYNC();
    *(s32 *)0x1000A000 = 0x145;
    M2C_SYNC();
    sceGsSyncPath(0, 0);
    amVram_Init(*(s32 *)((u8 *)arg0 + 0x10), *(s16 *)((u8 *)arg0 + 0x14), *(s16 *)((u8 *)arg0 + 0x16), *(s32 *)((u8 *)arg0 + 0x18));
    temp_a0_2 = (s32) &D_004593E0 | 0x20000000;
    *(s16 *)((u8 *)temp_a0_2 + 0) = (s16) ((((u32) D_0047041C >> 6) * 0xA) + 0xC);
    *(s16 *)((u8 *)temp_a0_2 + 0x10) = (s16) (((((u32) D_0047041C >> 6) * 0xA) + 0xB) | 0x8000);
    temp_a0_3 = (s32) D_00459400 | 0x20000000;
    *(s32 *)((u8 *)temp_a0_3 + 0) = (s32) (D_00470484 | ((D_00470454 << 0x18) | (((u32) (D_0047041C + 0x3F) >> 6) << 0x10)));
    *(s32 *)((u8 *)temp_a0_3 + 0x10) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s16 *)((u8 *)temp_a0_3 + 0x22) = (s16) (D_00470424 - 1);
    *(s16 *)((u8 *)temp_a0_3 + 0x26) = (s16) (D_00470428 - 1);
    *(s32 *)((u8 *)temp_a0_3 + 0x30) = (s32) ((0x800 - ((u32) D_00470424 >> 1)) * 0x10);
    *(s32 *)((u8 *)temp_a0_3 + 0x34) = (s32) ((0x800 - ((u32) D_00470428 >> 1)) * 0x10);
    *(s32 *)((u8 *)temp_a0_3 + 0x60) = (s32) ((D_0047044C << 0x14) | ((D_00470474 << 5) | (((u32) (D_00470414 + 0x3F) >> 6) << 0xE)) | 0xA8000000);
    *(s32 *)((u8 *)temp_a0_3 + 0x90) = (s32) (((D_00470414 - 1) << 0xE) | 0xA);
    *(s32 *)((u8 *)temp_a0_3 + 0x94) = (s32) ((D_00470418 - 1) * 4);
    if (D_00470454 & 2) {
        var_v0_4 = 1;
    } else {
        var_v0_4 = 0;
    }
    *(s32 *)((u8 *)temp_a0_3 + 0xA0) = var_v0_4;
    func_001499C0();
    func_00147650();
    M2C_SYNC();
    amDisp_SetOffset(0, 0);
    if (D_004703F4 != 3) {
        var_f0 = 1.0f;
    } else {
        var_f0 = 1.2f;
    }
    gFrameDelta = var_f0;
    D_004703C0 = var_f0;
    D_004703F0 = 0;
}
