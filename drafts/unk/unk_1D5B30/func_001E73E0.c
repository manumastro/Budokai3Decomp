/* Draft (not built): func_001E73E0 at 0x001E73E0, size 0x10C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF4, original 0x10C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E73E0.s */

// src/unk/unk_1D5B30.c func_001E73E0 size diff=38/61
s32 func_001C9DB0(s32, s32, s32, s32);
void func_001E73E0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_v1;
    u8 *temp_a1_2;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x530);
    temp_t0 = *(s32 *)((u8 *)arg0 + 0x540);
    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
        *(s32 *)((u8 *)arg0 + 0x640) = (s32) (arg1 | 0x10000);
        *(s32 *)((u8 *)arg0 + 0x644) = 0;
        *(s32 *)((u8 *)arg0 + 0x648) = arg2;
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x640);
        temp_a2 = temp_v1 & 0xFFFF;
        temp_a1 = (temp_v1 >> 0x10) - 1;
        var_v1 = 0;
        if (temp_a1 < 0) {

        } else {
            var_v1 = 0;
            if (temp_a1 >= 0x10) {

            } else {
                temp_a1_2 = *(u8 **)((u8 *)((temp_a1 * 4) + temp_t0) + 0x2C);
                var_v1 = 0;
                if (temp_a1_2 == NULL) {

                } else if ((temp_a2 >= 0) && (temp_a2 < *(s32 *)((u8 *)temp_a1_2 + 0x14)) && (var_v1 = 1, (*(s32 *)((u8 *)((temp_a2 * 0x10) + *(s32 *)((u8 *)temp_a1_2 + 0x18)) + 4) > 0))) {

                } else {
                    var_v1 = 0;
                }
            }
        }
        if (var_v1 == 0) {
            if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
                *(s32 *)((u8 *)arg0 + 0x640) = -1;
                *(s32 *)((u8 *)arg0 + 0x644) = 0;
                *(s32 *)((u8 *)arg0 + 0x648) = 0;
            }
            return;
        }
        func_001C9DB0(temp_t0, temp_a3, 1, temp_a3);
    }
}
