/* Draft (not built): func_0030BD30 at 0x0030BD30, size 0x1D8, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x1D8
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030BD30.s */

// src/unk/unk_30B130.c func_0030BD30 size diff=76/94
void func_0030BF10(s32 *p);
s32 func_0022D670(s32, u32, s8, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gArenaRegCharList;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_0030BD30(u8 *arg0) {
    s32 var_s5;
    s64 var_s2;
    s64 var_s4;
    s8 temp_a2;
    u32 temp_a1;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s6;
    u8 *var_s7;

    var_s7 = arg0;
    var_s1 = gArenaRegCharList;
    temp_a0 = *(u8 **)((u8 *)var_s1 + 0xC);
    var_s0 = arg0 + (*(s16 *)((u8 *)arg0 + 0x14) * 0x28) + 0x208;
    D_00470704 = temp_a0;
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x4000);
    D_00470238 = 0;
    var_s5 = 0;
    var_s3 = var_s7;
    do {
        var_s6 = var_s3 + 0x68;
        if ((*(s16 *)((u8 *)var_s7 + 0x14) + var_s5) >= *(s16 *)((u8 *)var_s7 + 0x10)) {
            *(s8 *)((u8 *)var_s3 + 0x68) = -1;
        } else {
            *(s8 *)((u8 *)var_s3 + 0x68) = 0;
            func_0030BF10((s32 *)(var_s6));
            if (*(s8 *)((u8 *)var_s0 + 0) != 0) {
                temp_a2 = *(s8 *)((u8 *)var_s0 + 2);
                temp_a1 = (u32) temp_a2 >> 0x1F;
                var_s2 = ((*(s8 *)((u8 *)var_s0 + 2) / 10) + temp_a1) << 0x30;
                var_s2 = var_s2 >> 0x30;
                var_s4 = (temp_a2 - (var_s2 * 0xA)) << 0x30;
                var_s4 = var_s4 >> 0x30;
                *(s32 *)((u8 *)var_s6 + 4) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x1C) + ((*(s8 *)((u8 *)var_s0 + 1) + 0xF) * 4)), temp_a1, temp_a2, 0);
                *(s32 *)((u8 *)var_s6 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x1C)) + 0x1CC), 0U, 0, 0);
                if (var_s2 != 0) {
                    *(s32 *)((u8 *)var_s6 + 0xC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x1C) + (var_s2 * 4)) + 0x1E8), 0U, 0, 0);
                } else {
                    *(s32 *)((u8 *)var_s6 + 0xC) = 0;
                }
                *(s32 *)((u8 *)var_s6 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x1C) + (((s64) (var_s4 << 0x30) >> 0x30) * 4)) + 0x1E8), 0U, 0, 0);
                func_0030B130(var_s7, var_s6, var_s0);
            }
        }
        var_s5 += 1;
        var_s3 += 0x34;
        var_s0 += 0x28;
    } while (var_s5 < 8);
}
