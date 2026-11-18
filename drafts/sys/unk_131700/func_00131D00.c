/* Draft (not built): func_00131D00 at 0x00131D00, size 0x1F8, segment sys/unk_131700 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x260, original 0x1F8
 * Original: asm/nonmatchings/sys/unk_131700/func_00131D00.s */

// src/sys/unk_131700.c func_00131D00 size diff=60/152
void func_00131D00(u8 *arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    f32 var_f12;
    f32 var_f13;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;

    var_f12 = fparg0;
    var_f13 = fparg1;
    if (arg1 == 0) {
        if (D_00470404 != 0) {
            if (D_00470414 >= 0) {
                var_f1 = (f32) D_00470414;
            } else {
                var_f1 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            var_f12 *= var_f1 / D_0047042C;
            if (D_00470418 >= 0) {
                var_f1_2 = (f32) D_00470418;
            } else {
                var_f1_2 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
            }
            var_f13 *= var_f1_2 / D_00470430;
        } else {
            if (D_00470414 >= 0) {
                var_f1_3 = (f32) D_00470414;
            } else {
                var_f1_3 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            var_f12 *= var_f1_3 / D_0047040C;
            if (D_00470418 >= 0) {
                var_f1_4 = (f32) D_00470418;
            } else {
                var_f1_4 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
            }
            var_f13 *= var_f1_4 / D_00470410;
        }
        if (D_004703DC & 2) {
            var_f12 *= 0.75f;
        }
    }
    *(f32 *)((u8 *)arg0 + 0x18) = (f32) (2048.0f + var_f12);
    *(f32 *)((u8 *)arg0 + 0x1C) = (f32) (2048.0f + var_f13);
    *(f32 *)((u8 *)arg0 + 0) = (f32) ((2047.0f - fabsf(var_f12)) / *(f32 *)((u8 *)arg0 + 0x10));
    *(f32 *)((u8 *)arg0 + 4) = (f32) ((2047.0f - fabsf(var_f13)) / *(f32 *)((u8 *)arg0 + 0x14));
}
