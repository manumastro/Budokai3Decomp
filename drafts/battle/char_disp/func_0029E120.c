/* Draft (not built): func_0029E120 at 0x0029E120, size 0x330, segment battle/char_disp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 191 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_disp/func_0029E120.s */

// src/battle/char_disp.c func_0029E120 diff diff=191/204
extern void memset(void *, s32, s32);
void func_0029E120(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 fparg0, f32 fparg1) {
    f32 var_f20;
    f32 var_f22;
    f32 var_f23;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a1;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_a2;
    u8 *var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_s3 = var_a2;
    var_f23 = fparg0;
    var_f22 = fparg1;
    if (arg0 == NULL) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)arg0 + 0x260) != 0) {
        goto block_4;
    }
block_3:
    return;
block_4:
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x290);
    if (temp_s0 == NULL) {
        goto block_8;
    }
    temp_s2 = arg0 + 0x10;
    temp_a3 = temp_s2 + 0xF0;
    temp_s1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)temp_s0 + 0x14) + (var_a1 * 4)));
    var_f20 = 1.0f;
    *(s16 *)((u8 *)arg0 + 0x1D4) = 0;
    *(s32 *)((u8 *)arg0 + 0x1CC) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0x1C4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x1C8) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BE) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BF) = 0;
    *(s8 *)((u8 *)arg0 + 0x1C0) = 0;
    *(s8 *)((u8 *)arg0 + 0x1B8) = 0;
    *(s32 *)((u8 *)arg0 + 0x1B0) = 0;
    *(u8 **)((u8 *)arg0 + 0x190) = temp_s2;
    *(u8 **)((u8 *)arg0 + 0x194) = (u8 *) (temp_s2 + 0x30);
    *(u8 **)((u8 *)arg0 + 0x198) = (u8 *) (temp_s2 + 0x60);
    *(u8 **)((u8 *)arg0 + 0x19C) = (u8 *) (temp_s2 + 0x90);
    *(u8 **)((u8 *)arg0 + 0x1A0) = (u8 *) (temp_s2 + 0xC0);
    *(u8 **)((u8 *)arg0 + 0x1A4) = temp_a3;
    *(u8 **)((u8 *)arg0 + 0x1A8) = (u8 *) (temp_s2 + 0x120);
    *(u8 **)((u8 *)arg0 + 0x1AC) = (u8 *) (temp_s2 + 0x150);
    *(s8 *)((u8 *)arg0 + 0x1B9) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BA) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BB) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BC) = 0;
    *(s8 *)((u8 *)arg0 + 0x1BD) = 0;
    *(s32 *)((u8 *)arg0 + 0x254) = 0;
    memset(temp_s2, 0, 0x250);
    *(s16 *)((u8 *)temp_s2 + 0x1C4) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x1BC) = 0xBF800000;
    var_a3 = temp_s2 + 0x90;
    *(s32 *)((u8 *)temp_s2 + 0x1B4) = 0x3F800000;
    var_a2 = temp_s2 + 0xC0;
    *(s32 *)((u8 *)temp_s2 + 0x1B8) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1AE) = 0;
    var_a1 = (s32) (temp_s2 + 0xF0);
    *(s8 *)((u8 *)temp_s2 + 0x1AF) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1B0) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1A8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x1A0) = 0;
    *(u8 **)((u8 *)temp_s2 + 0x180) = temp_s2;
    *(u8 **)((u8 *)temp_s2 + 0x184) = (u8 *) (temp_s2 + 0x30);
    *(u8 **)((u8 *)temp_s2 + 0x188) = (u8 *) (temp_s2 + 0x60);
    *(u8 **)((u8 *)temp_s2 + 0x18C) = var_a3;
    *(u8 **)((u8 *)temp_s2 + 0x190) = var_a2;
    *(s32 *)((u8 *)temp_s2 + 0x194) = var_a1;
    *(u8 **)((u8 *)temp_s2 + 0x198) = (u8 *) (temp_s2 + 0x120);
    *(u8 **)((u8 *)temp_s2 + 0x19C) = (u8 *) (temp_s2 + 0x150);
    *(s8 *)((u8 *)temp_s2 + 0x1A9) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1AA) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1AB) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1AC) = 0;
    *(s8 *)((u8 *)temp_s2 + 0x1AD) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x244) = 0;
    *(u8 **)((u8 *)temp_s2 + 0x1A4) = temp_s0;
    *(s32 *)((u8 *)temp_s2 + 0x1C0) = 0;
    *(u8 **)((u8 *)arg0 + 0x264) = temp_s1;
    *(s32 *)((u8 *)arg0 + 0x268) = (s32) (*(s16 *)((u8 *)temp_s1 + 0) | 0xC0000);
    *(s32 *)((u8 *)arg0 + 0x270) = 0;
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x268);
    *(s32 *)((u8 *)arg0 + 0x278) = (s32) *(s32 *)((u8 *)(((temp_v0 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)arg0 + 0x260)) + 0x46C)) + 0x14)) + 8);
    *(s32 *)((u8 *)arg0 + 0x26C) = 0;
    temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x1C);
    if (temp_v1 < 0) {
        goto block_9;
    }
    *(s32 *)((u8 *)arg0 + 0x26C) = (s32) (temp_v1 | 0xD0000);
    *(f32 *)((u8 *)arg0 + 0x274) = 0.0f;
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x26C);
    *(s32 *)((u8 *)arg0 + 0x27C) = (s32) *(s32 *)((u8 *)(((temp_v0_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0_2 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)arg0 + 0x260)) + 0x46C)) + 0x14)) + 8);
    goto block_9;
block_8:
    var_f20 = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x280) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x284) = 0.0f;
    *(s32 *)((u8 *)arg0 + 0x268) = 0xC0000;
    *(s32 *)((u8 *)arg0 + 0x270) = 0;
    temp_v0_3 = *(s32 *)((u8 *)arg0 + 0x268);
    *(s32 *)((u8 *)arg0 + 0x278) = (s32) *(s32 *)((u8 *)(((temp_v0_3 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0_3 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)arg0 + 0x260)) + 0x46C)) + 0x14)) + 8);
block_9:
    if (var_f23 <= 1.0f) {
        goto block_11;
    }
    var_f23 = 1.0f;
    goto block_13;
block_11:
    if (!(var_f23 < 0.0f)) {
        goto block_13;
    }
    var_f23 = 0.0f;
block_13:
    *(f32 *)((u8 *)arg0 + 0x280) = var_f23;
    if (var_f22 <= 1.0f) {
        goto block_15;
    }
    goto block_18;
block_15:
    if (!(var_f22 < 0.0f)) {
        goto block_17;
    }
    var_f22 = 0.0f;
block_17:
    var_f20 = var_f22;
block_18:
    *(f32 *)((u8 *)arg0 + 0x284) = var_f20;
    *(s8 *)((u8 *)arg0 + 0x2BA) = (s8) temp_s3;
    func_0029DD30(arg0, (u8 *) var_a1, var_a2, var_a3, 0.0f);
    return;
}
