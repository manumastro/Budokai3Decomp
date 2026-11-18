/* Draft (not built): func_001499C0 at 0x001499C0, size 0x490, segment sys/unk_147560 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 230 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x658, original 0x490
 * Original: asm/nonmatchings/sys/unk_147560/func_001499C0.s */

// src/sys/unk_147560.c func_001499C0 size diff=230/406
extern s32 D_004593E0;
extern s32 D_00470414;
extern u32 D_0047041C;
extern u32 D_00470428;
void func_001499C0(void) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s16 var_t2;
    s16 var_t6;
    s32 temp_t1;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_v1;
    u32 temp_t1_2;
    u32 temp_t7;
    u32 temp_v1_2;
    u32 var_t8;
    u32 var_t8_2;
    u8 *temp_t9_4;
    u8 *var_t9;
    u8 *var_t9_2;

    temp_t0 = M2C_BITWISE(s32, (8.0f * (1.0f - D_004703D0))) & 0xFFFF;
    temp_a2 = (0x10 - temp_t0) & 0xFFFF;
    temp_a3 = ((D_00470418 * 0x10) + temp_t0) & 0xFFFF;
    temp_t4 = (0x800 - ((u32) D_00470428 >> 1)) * 0x10;
    temp_t3 = (((u32) D_00470428 >> 1) + 0x800) * 0x10;
    var_t6 = (0x800 - ((u32) D_00470424 >> 1)) * 0x10;
    var_t2 = 8;
    temp_t7 = (u32) D_00470424 >> 6;
    if (D_004703D0 != 0.0f) {
        temp_t9 = (s32) &D_004593E0 | 0x20000000;
        *(s16 *)((u8 *)temp_t9 + 0) = (s16) ((((u32) D_0047041C >> 6) * 0xC) + 0xC);
        *(s16 *)((u8 *)temp_t9 + 0x10) = (s16) (((((u32) D_0047041C >> 6) * 0xC) + 0xB) | 0x8000);
        var_t9 = (u8 *)(((s32) D_00459400 | 0x20000000) + 0xB0);
        var_t8 = 0;
loop_10:
        if (var_t8 < temp_t7) {
            temp_t1 = D_00470414 * (var_t8 + 1);
            temp_t1_2 = temp_t1 * 0x10;
            if (!(temp_t1 & 0x08000000)) {
                var_f1 = (f32) temp_t1_2;
            } else {
                var_f1 = 2.0f * (f32) ((temp_t1_2 >> 1) | (temp_t1_2 & 1));
            }
            if ((s32) temp_t7 >= 0) {
                var_f0 = (f32) temp_t7;
            } else {
                var_f0 = 2.0f * (f32) ((temp_t7 >> 1) | (temp_t7 & 1));
            }
            temp_f0 = 8.0f + (var_f1 / var_f0);
            temp_t5 = var_t6 + 0x400;
            *(s32 *)((u8 *)var_t9 + 0) = 0x116;
            *(s64 *)((u8 *)var_t9 + 8) = 0;
            *(s16 *)((u8 *)var_t9 + 0x10) = var_t2;
            *(s16 *)((u8 *)var_t9 + 0x12) = temp_t0;
            *(s64 *)((u8 *)var_t9 + 0x18) = 3;
            *(s16 *)((u8 *)var_t9 + 0x20) = var_t6;
            *(s16 *)((u8 *)var_t9 + 0x22) = temp_t4;
            *(s32 *)((u8 *)var_t9 + 0x24) = 0;
            *(s64 *)((u8 *)var_t9 + 0x28) = 0xD;
            *(s16 *)((u8 *)var_t9 + 0x30) = M2C_BITWISE(s16, temp_f0);
            *(s16 *)((u8 *)var_t9 + 0x32) = temp_a3;
            *(s64 *)((u8 *)var_t9 + 0x38) = 3;
            *(s64 *)((u8 *)var_t9 + 0x40) = (s64) ((0x80FF << 0x10) | 0xFFFF | (0x3F800000 << 0x20));
            *(s64 *)((u8 *)var_t9 + 0x48) = 1;
            *(s16 *)((u8 *)var_t9 + 0x50) = temp_t5;
            *(s16 *)((u8 *)var_t9 + 0x52) = temp_t3;
            *(s32 *)((u8 *)var_t9 + 0x54) = 0;
            *(s64 *)((u8 *)var_t9 + 0x58) = 5;
            *(s32 *)((u8 *)var_t9 + 0x60) = 0x156;
            *(s64 *)((u8 *)var_t9 + 0x68) = 0;
            *(s16 *)((u8 *)var_t9 + 0x70) = var_t2;
            *(s16 *)((u8 *)var_t9 + 0x72) = temp_a2;
            *(s64 *)((u8 *)var_t9 + 0x78) = 3;
            *(s16 *)((u8 *)var_t9 + 0x80) = var_t6;
            *(s16 *)((u8 *)var_t9 + 0x82) = temp_t4;
            *(s32 *)((u8 *)var_t9 + 0x84) = 0;
            *(s64 *)((u8 *)var_t9 + 0x88) = 0xD;
            *(s16 *)((u8 *)var_t9 + 0x90) = M2C_BITWISE(s16, temp_f0);
            *(s16 *)((u8 *)var_t9 + 0x92) = (s16) (((D_00470418 * 0x10) + temp_a2) & 0xFFFF);
            *(s64 *)((u8 *)var_t9 + 0x98) = 3;
            *(s64 *)((u8 *)var_t9 + 0xA0) = (s64) (0x40FFFFFF | (0x3F800000 << 0x20));
            *(s64 *)((u8 *)var_t9 + 0xA8) = 1;
            *(s16 *)((u8 *)var_t9 + 0xB0) = temp_t5;
            *(s16 *)((u8 *)var_t9 + 0xB2) = temp_t3;
            *(s32 *)((u8 *)var_t9 + 0xB4) = 0;
            *(s64 *)((u8 *)var_t9 + 0xB8) = 5;
            var_t2 = M2C_BITWISE(s16, temp_f0);
            var_t6 = temp_t5;
            var_t8 += 1;
            var_t9 += 0xC0;
            goto loop_10;
        }
        return;
    }
    temp_t9_2 = (s32) &D_004593E0 | 0x20000000;
    *(s16 *)((u8 *)temp_t9_2 + 0) = (s16) ((((u32) D_0047041C >> 6) * 4) + 0xE);
    *(s16 *)((u8 *)temp_t9_2 + 0x10) = (s16) (((((u32) D_0047041C >> 6) * 4) + 0xD) | 0x8000);
    temp_t9_3 = (s32) D_00459400 | 0x20000000;
    temp_t9_4 = (u8 *)(temp_t9_3 + 0xB0);
    *(s32 *)((u8 *)temp_t9_3 + 0xB0) = 0x116;
    *(s64 *)((u8 *)temp_t9_4 + 8) = 0;
    *(s64 *)((u8 *)temp_t9_4 + 0x10) = (s64) ((0x80FF << 0x10) | 0xFFFF | (0x3F800000 << 0x20));
    *(s64 *)((u8 *)temp_t9_4 + 0x18) = 1;
    var_t9_2 = temp_t9_4 + 0x20;
    var_t8_2 = 0;
loop_21:
    if (var_t8_2 < temp_t7) {
        *(s16 *)((u8 *)var_t9_2 + 0) = var_t2;
        *(s16 *)((u8 *)var_t9_2 + 2) = temp_t0;
        *(s64 *)((u8 *)var_t9_2 + 8) = 3;
        *(s16 *)((u8 *)var_t9_2 + 0x10) = var_t6;
        *(s16 *)((u8 *)var_t9_2 + 0x12) = temp_t4;
        *(s32 *)((u8 *)var_t9_2 + 0x14) = 0;
        *(s64 *)((u8 *)var_t9_2 + 0x18) = 0xD;
        temp_v1 = D_00470414 * (var_t8_2 + 1);
        temp_v1_2 = temp_v1 * 0x10;
        if (!(temp_v1 & 0x08000000)) {
            var_f1_2 = (f32) temp_v1_2;
        } else {
            var_f1_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
        }
        if ((s32) temp_t7 >= 0) {
            var_f0_2 = (f32) temp_t7;
        } else {
            var_f0_2 = 2.0f * (f32) ((temp_t7 >> 1) | (temp_t7 & 1));
        }
        var_t2 = M2C_BITWISE(s16, (8.0f + (var_f1_2 / var_f0_2)));
        var_t6 += 0x400;
        *(s16 *)((u8 *)var_t9_2 + 0x20) = var_t2;
        *(s16 *)((u8 *)var_t9_2 + 0x22) = temp_a3;
        *(s64 *)((u8 *)var_t9_2 + 0x28) = 3;
        *(s16 *)((u8 *)var_t9_2 + 0x30) = var_t6;
        *(s16 *)((u8 *)var_t9_2 + 0x32) = temp_t3;
        *(s32 *)((u8 *)var_t9_2 + 0x34) = 0;
        *(s64 *)((u8 *)var_t9_2 + 0x38) = 5;
        var_t8_2 += 1;
        var_t9_2 += 0x40;
        goto loop_21;
    }
}
