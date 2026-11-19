/* Draft (not built): func_001E11E0 at 0x001E11E0, size 0x118, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x118
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E11E0.s */

// src/unk/unk_1D5B30.c func_001E11E0 size diff=20/68
s32 memcpy(void *, void *, s32);
void func_001E11E0(u8 *arg0, u8 *arg1) {
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 *var_a1;
    u8 *var_s0;

    if (!(*(f32 *)((u8 *)arg1 + 0) <= 0.0f)) {
        var_s2 = 0;
        var_a1 = arg0;
loop_2:
        if ((u32) *(u32 *)((u8 *)arg1 + 4) >= (u32) *(u32 *)((u8 *)var_a1 + 0x1874)) {
            var_s2 += 1;
            var_a1 += 0x10;
            if (var_s2 < 2) {
                goto loop_2;
            }
        }
        var_s1 = var_s2 + 1;
        if (var_s2 != 2) {
            if (var_s1 < 2) {
                var_s0 = arg0 + (var_s1 * 0x10);
                do {
                    memcpy(var_s0 + 0x1870, arg0 + ((var_s1 - 1) * 0x10) + 0x1870, 0x10);
                    var_s1 += 1;
                    var_s0 += 0x10;
                } while (var_s1 < 2);
            }
            memcpy(arg0 + (var_s2 * 0x10) + 0x1870, arg1, 0x10);
            *(s32 *)((u8 *)arg0 + 0x186C) = (s32) (*(s32 *)((u8 *)arg0 + 0x186C) + 1);
            var_v1 = *(s32 *)((u8 *)arg0 + 0x186C);
            if (var_v1 < 2) {

            } else {
                var_v1 = 2;
            }
            *(s32 *)((u8 *)arg0 + 0x186C) = var_v1;
        }
    }
}
