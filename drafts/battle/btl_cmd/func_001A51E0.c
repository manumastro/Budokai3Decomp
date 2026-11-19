/* Draft (not built): func_001A51E0 at 0x001A51E0, size 0x170, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); u8 *)arg0 + 0xC) + (var_a1 * 4)) <= fparg0) { @ 418: if ((f32) *(*(s32 *)((u8 *)arg0 + 0xC) + (var_a1 * 4)) <= fparg0) {
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A51E0.s */

// src/battle/btl_cmd.c func_001A51E0 cerr diff=-1/0
s32 func_001A51E0(MotTrack *arg0, s32 arg1, f32 fparg0) {
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    u8 *temp_v1;

    var_a1 = arg1;
    if (fparg0 < 1.0f) {
        return 0;
    }
    if (var_a1 == -1) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 4);
        var_a1 = temp_v0 >> 1;
        var_a2 = (s32) (temp_v0 + 1) >> 1;
        if (var_a2 >= 2) {
            do {
                if ((f32) *(*(s32 *)((u8 *)arg0 + 0xC) + (var_a1 * 4)) <= fparg0) {
                    var_a1 += var_a2 >> 1;
                } else {
                    var_a1 -= var_a2 >> 1;
                }
                var_a2 = (s32) (var_a2 + 1) >> 1;
            } while (var_a2 >= 2);
        }
        if ((f32) *(*(s32 *)((u8 *)arg0 + 0xC) + (var_a1 * 4)) <= fparg0) {

        } else {
            var_a1 -= 1;
        }
    } else {
loop_15:
        temp_v1 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0xC) + (var_a1 * 4));
        if ((f32) *(s16 *)((u8 *)temp_v1 + 0) <= fparg0) {
            if (!((f32) *(s16 *)((u8 *)temp_v1 + 4) <= fparg0)) {

            } else {
                var_a1 += 1;
                goto block_20;
            }
        } else {
            var_a1 -= 1;
block_20:
            if (var_a1 <= 0) {
                var_a1 = 0;
            } else {
                temp_v1_2 = *(s32 *)((u8 *)arg0 + 4) - 1;
                if (var_a1 >= temp_v1_2) {
                    var_a1 = temp_v1_2;
                } else {
                    goto loop_15;
                }
            }
        }
    }
    return var_a1;
}
