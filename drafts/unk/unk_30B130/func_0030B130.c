/* Draft (not built): func_0030B130 at 0x0030B130, size 0x1AC, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x1AC
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030B130.s */

// src/unk/unk_30B130.c func_0030B130 size diff=80/77
void *A2d_AllocObj(s32, s32, s16, s32, s32);
s32 memset(void *, s32, s32);
extern void *gArenaRegCharList;
void func_0030B130(u8 *arg1, u8 *arg2, s32 arg3) {
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_a2;
    s32 temp_hi;
    s32 var_a3;
    s32 var_s2;
    s64 temp_s6;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;

    var_a3 = arg3;
    var_s2 = 0;
    var_s1 = arg2;
    temp_s5 = gArenaRegCharList;
    var_s0 = arg1;
    do {
        temp_a2 = *(s16 *)((u8 *)var_s1 + 0x18);
        if ((temp_a2 >= 0x41) || (temp_a2 < 0)) {
            *(u8 **)((u8 *)var_s0 + 0x14) = NULL;
        } else {
            temp_hi = temp_a2 % 18;
            temp_s6 = (s64) ((((*(s16 *)((u8 *)var_s1 + 0x18) / 18) + ((u32) temp_a2 >> 0x1F)) * 0x18) << 0x30) >> 0x30;
            temp_v0 = A2d_AllocObj(0, temp_hi, temp_a2, var_a3, 0);
            *(u8 **)((u8 *)var_s0 + 0x14) = temp_v0;
            memset(temp_v0, 0, 0x60);
            *(s32 *)((u8 *)temp_v0 + 4) = 1;
            temp_f2 = (f32) ((s64) ((temp_hi * 0x18) << 0x30) >> 0x30);
            var_a3 = 0x12;
            temp_f4 = (f32) temp_s6;
            *(s32 *)((u8 *)temp_v0 + 0x10) = (s32) *(s32 *)((u8 *)temp_s5 + 0xC);
            *(s32 *)((u8 *)temp_v0 + 0x14) = 0x4000;
            *(s16 *)((u8 *)temp_v0 + 0x18) = 0x12;
            *(s16 *)((u8 *)temp_v0 + 0x1A) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x2C) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0 + 0x34) = 0xC1300000;
            *(s32 *)((u8 *)temp_v0 + 0x3C) = 0x41300000;
            *(s32 *)((u8 *)temp_v0 + 0x30) = 0xC1300000;
            *(s32 *)((u8 *)temp_v0 + 0x38) = 0x41300000;
            *(f32 *)((u8 *)temp_v0 + 0x44) = (f32) (1.0f + temp_f4);
            *(f32 *)((u8 *)temp_v0 + 0x40) = (f32) (1.0f + temp_f2);
            *(f32 *)((u8 *)temp_v0 + 0x48) = (f32) (22.0f + temp_f2);
            *(f32 *)((u8 *)temp_v0 + 0x4C) = (f32) (22.0f + temp_f4);
            *(s32 *)((u8 *)temp_v0 + 0x50) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0 + 0x54) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0 + 0x58) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0 + 0x5C) = 0x3F800000;
        }
        var_s2 += 1;
        var_s1 += 2;
        var_s0 += 4;
    } while (var_s2 < 8);
}
