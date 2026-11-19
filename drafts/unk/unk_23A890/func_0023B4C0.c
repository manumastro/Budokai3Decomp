/* Draft (not built): func_0023B4C0 at 0x0023B4C0, size 0x1EC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B8, original 0x1EC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023B4C0.s */

// src/unk/unk_23A890.c func_0023B4C0 size diff=58/110
s32 func_0022C430(s32, s32);
s8 func_002537E0(s16, s16);
f32 func_00253A50(s32, f32 *);
void func_0023B4C0(void) {
    f32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spB0;
    s8 spB8;
    f32 var_f20;
    f32 var_f21;
    s16 temp_a0;
    s32 var_s1;
    s32 var_s3;
    u8 *temp_a0_2;
    u8 *temp_v0;
    u8 *var_s2;
    u8 *var_s4;

    var_s4 = gBtlSys;
    if ((Input_IsHeld(0x80000000) != 0) && ((temp_a0 = *(s16 *)((u8 *)var_s4 + 0xE52), (temp_a0 == 0)) || (temp_a0 == 2))) {
        temp_a0_2 = *(u8 **)((u8 *)var_s4 + 0xE64);
        D_00470704 = (int)(temp_a0_2);
        D_0047070C = 0x04001000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x04001000);
        D_00470238 = 0;
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0xE6C)) + 0x1C)) + 0xB8), 0);
        memset(&sp80, 0, 0x40);
        sp84 = 0x43CA0000;
        sp80 = 0.0f;
        sp8C = 0x3F800000;
        sp90 = 0x3F800000;
        sp94 = 0x3F800000;
        sp98 = 0x3F800000;
        sp9C = 0x3F800000;
        sp88 = 0;
        var_s3 = 0;
        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
            do {
                var_s2 = func_0021C430(func_0021C3D0(var_s3));
                temp_v0 = func_0021C400(func_0021C3D0(var_s3));
                if (var_s3 & 1) {
                    var_f20 = 323.0f;
                } else {
                    var_f20 = 23.0f;
                }
                sp80 = var_f20;
                var_f21 = 0.0f;
                var_s1 = 0;
                if (*(s16 *)((u8 *)temp_v0 + 0x4E) == -2) {
                    do {
                        sp80 = var_f20 + var_f21;
                        spB8 = func_002537E0(*(s16 *)((u8 *)var_s2 + 0x46), *(s16 *)((u8 *)var_s2 + 0x86));
                        if (spB8 != -1) {
                            spB0 = 0x10000;
                            var_f21 += func_00253A50(*(s32 *)((u8 *)var_s4 + 0xEC0), &sp80);
                        }
                        var_s1 += 1;
                        var_s2 += 2;
                    } while (var_s1 < 0x20);
                } else {
                    func_0023B3C0(var_s3);
                }
                var_s3 += 1;
                var_s4 += 4;
            } while (var_s3 < *(s32 *)((u8 *)gBattle + 0x88D8));
        }
    }
}
