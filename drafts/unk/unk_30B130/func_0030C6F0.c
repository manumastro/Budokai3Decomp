/* Draft (not built): func_0030C6F0 at 0x0030C6F0, size 0x170, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x170
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C6F0.s */

// src/unk/unk_30B130.c func_0030C6F0 size diff=57/95
s32 func_002E8F90(void *, s8, s8, s8);
s32 memcpy(void *, void *, s32);
extern s32 D_00470838;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern char D_005C4140[];
void func_0030C6F0(u8 *arg0) {
    s32 *var_a2;
    s32 var_a0;
    s32 var_a3;
    s64 temp_v1;
    s64 var_a1;
    s64 var_t0;
    s8 temp_a0;
    s8 temp_a3;
    u8 *var_v1;

    var_t0 = 0;
    var_a3 = 0;
    var_a2 = &D_00470838;
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            var_t0 = (s64) ((var_t0 | ((s64) ((1 << var_a3) << 0x38) >> 0x38)) << 0x38) >> 0x38;
        }
        var_a3 += 1;
        var_a2 += 4;
    } while (var_a3 < 2);
    temp_a0 = *(s8 *)((u8 *)arg0 + 0xE);
    if (temp_a0 != -1) {
        if (temp_a0 != ((s64) (var_t0 << 0x38) >> 0x38)) {
            goto block_7;
        }
    } else {
block_7:
        *(s8 *)((u8 *)arg0 + 0xE) = (s8) var_t0;
        temp_a3 = *(s8 *)((u8 *)arg0 + 0xB);
        func_002E8F90(D_005C4140 + (temp_a3 * 0xB80) + 0x10, D_004B4B41, D_004B4B59, temp_a3);
        memcpy(arg0 + 0x208, D_005C4140 + (*(s8 *)((u8 *)arg0 + 0xB) * 0xB80) + 0x6B6, 0x4B0);
        var_a1 = 0;
        var_a0 = 0;
        var_v1 = arg0;
        do {
            if (*(s8 *)((u8 *)var_v1 + 0x208) != 0) {
                var_a1 = (s64) ((var_a1 + 1) << 0x30) >> 0x30;
            }
            var_a0 += 1;
            var_v1 += 0x28;
        } while (var_a0 < 0x1E);
        *(s16 *)((u8 *)arg0 + 0x10) = (s16) var_a1;
        temp_v1 = (s64) (var_a1 << 0x30) >> 0x30;
        if (*(s16 *)((u8 *)arg0 + 0x12) >= temp_v1) {
            *(s16 *)((u8 *)arg0 + 0x12) = (s16) (temp_v1 - 1);
        }
        if (temp_v1 == 0) {
            *(s16 *)((u8 *)arg0 + 0x12) = 0;
        }
        func_0030BD30(arg0, (s16) var_a1);
    }
}
