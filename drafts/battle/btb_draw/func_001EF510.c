/* Draft (not built): func_001EF510 at 0x001EF510, size 0x220, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 79 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x204, original 0x220
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF510.s */

// src/battle/btb_draw.c func_001EF510 size diff=79/129
extern u8 D_004696F0[];
extern u32 func_0012EAE0(s32);
s32 amRand_SetSeed(s32, s32);
s32 func_00127E88(s32 *, s32);
s32 func_001EF510(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4_2;
    s32 temp_s6;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a2;
    u8 *var_s5;
    u8 temp_a0;
    u8 temp_s2;
    u8 temp_s4;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 *temp_a0_2;
    u8 *temp_a1;

    if (func_00127E88((s32 *)(&D_004696F0), 8) != 0) {
        return 1;
    }
    temp_t0 = arg1 - 0x20;
    var_a2 = arg0 + 0x20;
    var_a3 = 0;
    var_t0 = temp_t0 - 1;
    if (temp_t0 != 0) {
        do {
            temp_a1 = arg0 + var_a3;
            temp_v1 = *var_a2;
            temp_a0 = *(u8 *)((u8 *)temp_a1 + 0x10);
            temp_v0 = var_t0;
            var_a3 = (var_a3 + 1) & 0xF;
            var_t0 -= 1;
            var_a2 += 1;
            *(s8 *)((u8 *)temp_a1 + 0x10) = (s8) (temp_a0 - temp_v1);
        } while (temp_v0 != 0);
    }
    var_v1 = 0;
loop_7:
    if (*(u8 *)((u8 *)(arg0 + var_v1) + 0x10) != 0) {
        return 2;
    }
    var_v1 += 1;
    if (var_v1 >= 0x10) {
        temp_s0 = amRand_SetSeed(*(s32 *)((u8 *)arg0 + 0xC), 0);
        func_0012EAE0(0x20);
        var_s5 = arg0 + 0x20;
        var_a1 = 0;
        var_s2 = 0xF;
        if (0x10 != 0) {
            do {
                temp_s4 = *var_s5;
                temp_s3 = var_a1 & 0xFF;
                temp_v1_2 = ((temp_s4 & 0xFF) + temp_s3) - (func_0012EAE0((temp_s3 & 0xF) + 8) & 0xFF);
                temp_v0_2 = var_s2;
                *var_s5 = temp_v1_2;
                var_s2 -= 1;
                var_a1 = temp_v1_2 & 0xFF;
                var_s5 += 1;
            } while (temp_v0_2 != 0);
        }
        temp_s4_2 = arg1 - 0x30;
        var_s3 = 0;
        var_s4 = temp_s4_2 - 1;
        if (temp_s4_2 != 0) {
            do {
                temp_s2 = *var_s5;
                temp_s6 = var_a1 & 0xFF;
                temp_a0_2 = arg0 + var_s3;
                var_s3 = (var_s3 + 1) & 0xF;
                temp_v0_4 = ((temp_s2 & 0xFF) + temp_s6) - (func_0012EAE0((temp_s6 & 0xF) + 8) & 0xFF);
                *var_s5 = temp_v0_4;
                var_a1 = temp_v0_4 & 0xFF;
                temp_v0_3 = var_s4;
                var_s5 += 1;
                var_s4 -= 1;
                *(u8 *)((u8 *)temp_a0_2 + 0x20) = (u8) (*(u8 *)((u8 *)temp_a0_2 + 0x20) - var_a1);
            } while (temp_v0_3 != 0);
        }
        var_v1_2 = 0;
loop_19:
        if (*(u8 *)((u8 *)(arg0 + var_v1_2) + 0x20) != 0) {
            return 3;
        }
        var_v1_2 += 1;
        if (var_v1_2 >= 0x10) {
            amRand_SetSeed(temp_s0, var_a1);
            return 0;
        }
        goto loop_19;
    }
    goto loop_7;
}
