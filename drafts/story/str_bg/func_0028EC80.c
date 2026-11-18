/* Draft (not built): func_0028EC80 at 0x0028EC80, size 0x210, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  temp_a0_2 = *(arg3 + (*(s16 *)((u8 *)var_s2 + 2) * 4)); @ 198: var_a0 = *M2C_ERROR(/* Read from unset register $t0 */);
 * Original: asm/nonmatchings/story/str_bg/func_0028EC80.s */

// src/story/str_bg.c func_0028EC80 cerr diff=-1/0
extern void *amTask_Create();
extern void func_0028E790(void);
void func_0028EC80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spAC;
    s16 temp_a0_4;
    s16 temp_v1;
    s32 *temp_v1_2;
    s32 *var_v1;
    s32 temp_a0_2;
    s32 temp_t2;
    s32 var_v0;
    s64 temp_a0;
    s8 *var_s2;
    s8 temp_a0_3;
    s8 var_a0;
    u8 **temp_s0;
    u8 *var_s1;

    spAC = arg0;
    var_a0 = *M2C_ERROR(/* Read from unset register $t0 */);
    var_s2 = M2C_ERROR(/* Read from unset register $t0 */);
    if (var_a0 != -1) {
        do {
            temp_a0 = (s64) ((s64) var_a0 << 0x38) >> 0x38;
            temp_s0 = (u8 **)(spAC + (temp_a0 * 4));
            var_s1 = *temp_s0;
            if (var_s1 == NULL) {
                var_s1 = amTask_Create(&func_0028E790, 0, M2C_ERROR(/* Read from unset register $t1 */) + temp_a0, 2);
                *temp_s0 = var_s1;
            }
            temp_a0_2 = *(arg3 + (*(s16 *)((u8 *)var_s2 + 2) * 4));
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            temp_v1 = *(s16 *)((u8 *)var_s2 + 4);
            if (temp_v1 & 0x8000) {
                var_v0 = func_0022D860(*(*(s32 *)((u8 *)(*(arg1 + (*(s8 *)((u8 *)var_s2 + 1) * 4))) + 0x14) + ((temp_v1 & 0x7FFF) * 4)), 0);
                var_v1 = (s32 *)(arg3 + (*(s16 *)((u8 *)var_s2 + 2) * 4));
            } else {
                var_v0 = func_0022D670(*(*(s32 *)((u8 *)(*(arg1 + (*(s8 *)((u8 *)var_s2 + 1) * 4))) + 0x1C) + (temp_v1 * 4)), 0);
                var_v1 = (s32 *)(arg3 + (*(s16 *)((u8 *)var_s2 + 2) * 4));
            }
            *var_v1 = var_v0;
            temp_a0_3 = *(s8 *)((u8 *)var_s2 + 1);
            temp_t2 = *(s32 *)((u8 *)var_s1 + 0x40);
            *(u16 *)((u8 *)var_s1 + 0x30) = (u16) *(u16 *)((u8 *)var_s1 + 0x30);
            *(s32 *)((u8 *)var_s1 + 0x34) = (s32) *(arg2 + (temp_a0_3 * 4));
            *(s32 *)((u8 *)var_s1 + 0x38) = (s32) (M2C_ERROR(/* Read from unset register $t3 */) + (temp_a0_3 << 0x10));
            *(s16 *)((u8 *)var_s1 + 0x32) = -1;
            *(s32 *)((u8 *)var_s1 + 0x3C) = (s32) (arg3 + (*(s16 *)((u8 *)var_s2 + 2) * 4));
            *(s32 *)((u8 *)var_s1 + 0x40) = 0;
            *(s32 *)((u8 *)var_s1 + 0x44) = (s32) *(s32 *)((u8 *)var_s1 + 0x44);
            *(s32 *)((u8 *)var_s1 + 0x4C) = 0x3F800000;
            *(s32 *)((u8 *)var_s1 + 0x50) = 0;
            *(s32 *)((u8 *)var_s1 + 0x40) = temp_t2;
            temp_a0_4 = *(s16 *)((u8 *)var_s2 + 6);
            temp_v1_2 = (s32 *)(arg1 + (*(s8 *)((u8 *)var_s2 + 1) * 4));
            var_s2 += 8;
            *(s32 *)((u8 *)var_s1 + 0x48) = (s32) *temp_v1_2;
            *(s16 *)((u8 *)var_s1 + 0x32) = temp_a0_4;
            var_a0 = *var_s2;
        } while (var_a0 != -1);
    }
}
