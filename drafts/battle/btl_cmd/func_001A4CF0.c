/* Draft (not built): func_001A4CF0 at 0x001A4CF0, size 0x400, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 98 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3C8, original 0x400
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A4CF0.s */

// src/battle/btl_cmd.c func_001A4CF0 size diff=98/242
extern s32 D_00427340;
extern s32 D_00427380;
extern s32 D_004273A0;
extern s32 D_004273E0;
extern s32 D_00427410;
extern s32 D_00470268;
extern s32 D_004702A0;
extern s32 *D_0047CAA4;
s32 func_001A4CF0(u8 **arg0, s32 unused_arg1, s32 arg2) {
    s32 *var_t0;
    s32 *var_t0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 var_v1;

    D_0047CAA4 = NULL;
    temp_v0 = (s32) (arg2 & 0x03C00000) >> 0x16;
    D_004702A0 = 0;
    var_v1 = -1;
    *arg0 = NULL;
    switch (temp_v0) {
    case 1:
        temp_a2 = arg2 & 7;
        if ((temp_a2 == 5) && (D_00470268 == 1)) {
            var_v1 = 0;
        }
        if ((temp_a2 == 1) && (D_00470268 == 1)) {
            var_v1 = 1;
        }
        D_004702A0 = 1;
        if (var_v1 != -1) {
            *arg0 = (unsigned char *)(&D_00427380 + (var_v1 * 0x10));
            D_0047CAA4 = (int *)(&func_001A45E0);
            return var_v1 + 0x40000000;
        }
        return -1;
    case 2:
        temp_a1 = arg2 & 7;
        if (temp_a1 == 0) {
            var_v1 = 0;
        }
        if (temp_a1 == 1) {
            var_v1 = 1;
        }
        if (temp_a1 == 5) {
            var_v1 = 2;
        }
        if (temp_a1 == 4) {
            var_v1 = 3;
        }
        D_004702A0 = 1;
        if (var_v1 != -1) {
            *arg0 = (unsigned char *)(&D_004273A0 + (var_v1 * 0x10));
            D_0047CAA4 = NULL;
            return var_v1 + 0x40000020;
        }
        return -1;
    case 3:
        temp_a1_2 = arg2 & 7;
        if (!(arg2 & 0x80000000)) {
            if (temp_a1_2 == 5) {
                var_v1 = 0;
            }
            if (temp_a1_2 == 4) {
                var_v1 = 1;
            }
            if (temp_a1_2 == 6) {
                var_v1 = 2;
            }
        }
        D_004702A0 = 1;
        if (var_v1 != -1) {
            *arg0 = (unsigned char *)(&D_004273E0 + (var_v1 * 0x10));
            D_0047CAA4 = (int *)(&func_001A4570);
            return var_v1 + 0x40000030;
        }
        return -1;
    case 5:
        if ((arg2 & 0x2008) == 0x2008) {
            if ((arg2 & 7) == 5) {
                var_v1 = 0;
            }
            if (var_v1 != -1) {
                *arg0 = (unsigned char *)(&D_00427410 + (var_v1 * 0x10));
                D_0047CAA4 = (int *)(&func_001A4830);
                return var_v1 + 0x40000040;
            }
            return -1;
        }
    default:
block_76:
        *arg0 = NULL;
        return 0;
    case 6:
        var_t0 = (int *)(&func_001A4810);
block_47:
        temp_a3 = arg2 & 7;
        if ((temp_a3 == 5) && (arg2 & 0x20) && (D_00470268 == 1)) {
            var_v1 = !(arg2 & 0x80) ? 1 : 3;
        } else if ((temp_a3 == 6) && (arg2 & 0x20)) {
            var_v1 = !(arg2 & 0x80) ? 0 : 2;
        }
        if (var_v1 != -1) {
            *arg0 = (unsigned char *)(&D_00427340 + (var_v1 * 0x10));
            D_0047CAA4 = var_t0;
            return var_v1 + 0x40000010;
        }
        goto block_76;
    case 7:
        var_t0 = (int *)(&func_001A47F0);
        goto block_47;
    case 8:
        var_t0 = (int *)(&func_001A47D0);
        goto block_47;
    case 9:
        var_t0 = (int *)(&func_001A47B0);
        goto block_47;
    case 10:
        var_t0_2 = (int *)(&func_001A4740);
block_65:
        temp_a3_2 = arg2 & 7;
        if ((temp_a3_2 == 5) && (arg2 & 0x20) && (D_00470268 == 1)) {
            var_v1 = !(arg2 & 0x80) ? 1 : 3;
        } else if ((temp_a3_2 == 6) && (arg2 & 0x20)) {
            var_v1 = !(arg2 & 0x80) ? 0 : 2;
        }
        D_0047CAA4 = var_t0_2;
        if (var_v1 != -1) {
            *arg0 = (unsigned char *)(&D_00427340 + (var_v1 * 0x10));
            return var_v1 + 0x40000010;
        }
        goto block_76;
    case 11:
        var_t0_2 = (int *)(&func_001A46D0);
        goto block_65;
    case 12:
        var_t0_2 = (int *)(&func_001A4660);
        goto block_65;
    case 13:
        var_t0_2 = (int *)(&func_001A45F0);
        goto block_65;
    }
}
