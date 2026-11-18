/* Draft (not built): func_002EE7A0 at 0x002EE7A0, size 0x250, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 7A0(unsigned char *, int, short)' does not match 'func_002EE7A0(unsigned char *, int)' @ 400: func_002EE7A0(s0, 0, a2v);
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EE7A0.s */

// src/menu/mn_ArenaList.c func_002EE7A0 cerr diff=-1/0
s32 memcpy(s8 *, s8 *, s32);
extern s16 D_004E0114;
extern s8 D_004E0116;
s32 func_002EE7A0(u8 *arg0, s32 arg1) {
    s8 sp80;
    s16 temp_v1_2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    s64 temp_v1_3;
    s64 var_a0;
    s64 var_a1;
    s8 *temp_s0;
    s8 *temp_s5;
    s8 *var_s0;
    s8 *var_s2;
    s8 *var_v1_2;
    s8 temp_v0;
    s8 temp_v1;
    u8 *var_s1;

    var_a0 = 0;
    if (arg1 != 0) {
        var_v1 = 0;
        var_s0 = &D_004E0116;
loop_2:
        if (*var_s0 == 0) {
            memcpy(var_s0, (s8 *)0x28, 0);
            var_a0 = 1;
            *var_s0 = 1;
        } else {
            var_v1 += 1;
            var_s0 += 0x28;
            if (var_v1 < 0x1E) {
                goto loop_2;
            }
        }
        if (((s64) (var_a0 << 0x30) >> 0x30) == 0) {
            return -1;
        }
        goto block_8;
    }
block_8:
    var_s4 = 0;
    var_s2 = (s8 *)(D_004B4B40[0]);
    do {
        var_s3 = var_s4 + 1;
        temp_s0 = var_s2 + 0x2B5D6;
        if (var_s3 < 0x1E) {
            var_s1 = D_004B4B40 + (var_s3 * 0x28);
            do {
                temp_v1 = *(s8 *)((u8 *)var_s2 + 0x2B5D6);
                var_a0_2 = 0;
                temp_s5 = (s8 *)(var_s1 + 0x2B5D6);
                if (temp_v1 == 0) {
                    var_a0_2 = 1;
                }
                temp_v0 = *(s8 *)((u8 *)var_s1 + 0x2B5D6);
                if (temp_v0 == 0) {
                    var_a0_2 = 0;
                }
                if ((temp_v1 != 0) && (temp_v0 != 0) && (*(s8 *)((u8 *)temp_s5 + 2) < *(s8 *)((u8 *)temp_s0 + 2))) {
                    var_a0_2 = 1;
                }
                if (var_a0_2 != 0) {
                    memcpy(&sp80, temp_s0, 0x28);
                    memcpy(temp_s0, temp_s5, 0x28);
                    memcpy(temp_s5, &sp80, 0x28);
                }
                var_s3 += 1;
                var_s1 += 0x28;
            } while (var_s3 < 0x1E);
        }
        var_s4 += 1;
        var_s2 += 0x28;
    } while (var_s4 < 0x1D);
    var_a1 = 0;
    var_a0_3 = 0;
    var_v1_2 = (s8 *)(D_004B4B40[0]);
    do {
        if (*(s8 *)((u8 *)var_v1_2 + 0x2B5D6) != 0) {
            var_a1 = (s64) ((var_a1 + 1) << 0x30) >> 0x30;
        }
        var_a0_3 += 1;
        var_v1_2 += 0x28;
    } while (var_a0_3 < 0x1E);
    *(s16 *)((u8 *)arg0 + 0xE) = (s16) var_a1;
    D_004E0114 = (s16) var_a1;
    temp_v1_2 = *(s16 *)((u8 *)arg0 + 0xE);
    if ((temp_v1_2 - *(s16 *)((u8 *)arg0 + 0x16)) < 8) {
        *(s16 *)((u8 *)arg0 + 0x16) = (s16) (temp_v1_2 - 8);
        if (*(s16 *)((u8 *)arg0 + 0x16) < 0) {
            *(s16 *)((u8 *)arg0 + 0x16) = 0;
        }
    }
    temp_v1_3 = (s64) (var_a1 << 0x30) >> 0x30;
    if (*(s16 *)((u8 *)arg0 + 0x14) >= temp_v1_3) {
        *(s16 *)((u8 *)arg0 + 0x14) = (s16) (temp_v1_3 - 1);
        if (temp_v1_3 == 0) {
            *(s16 *)((u8 *)arg0 + 0x14) = 0;
        }
    }
    return 0;
}
