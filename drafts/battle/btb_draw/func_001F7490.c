/* Draft (not built): func_001F7490 at 0x001F7490, size 0x200, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rom 'unsigned char *' to 'int' @ 7267: temp_v0 = (char *)func_001F5FD0(0x82000000, &D_004698B8, temp_s1, func_001F2A90);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7490.s */

// src/battle/btb_draw.c func_001F7490 cerr diff=-1/0
extern s32 D_0044AE80;
extern s32 D_004698B8;
void func_001F7490(s32 arg0) {
    s32 **temp_a3;
    s32 *temp_s4_2;
    s32 *var_s1;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_s2;
    s32 var_t0;
    s32 var_v1;
    s8 *var_a3;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s4 = (s32)(gBtbBg);
    temp_s2 = (s32)(D_0051CD20);
    temp_s1 = (u8 *)(*(s32 *)((u8 *)(*D_0051CD14 + (temp_s2 * 0x24)) + 0xC) + (arg0 << 5));
    temp_v0 = (char *)func_001F5FD0(0x82000000, &D_004698B8, temp_s1, func_001F2A90);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x80);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x80);
    temp_a0 = **(u8 ***)((u8 *)(**(u8 ***)((u8 *)temp_s1 + 4)) + 0x1C);
    var_v1 = 0;
    if (temp_a0 != NULL) {
        temp_a2 = *(s32 *)((u8 *)temp_a0 + 0x10);
        var_t0 = 0;
        if (temp_a2 > 0) {
            var_a3 = *(s8 **)((u8 *)temp_a0 + 0x1C);
            do {
                if (*var_a3 == 0x58) {
                    var_v1 |= 0x200;
                }
                var_t0 += 1;
                var_a3 += 0x20;
            } while (var_t0 < temp_a2);
        }
    }
    temp_s3 = temp_v0 + 0x30;
    temp_a3 = (s32 **)((temp_s2 << 5) + (&D_0044AE80 + (temp_s4 * 0x5C)));
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~var_v1);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | var_v1);
    temp_s4_2 = *temp_a3;
    memset(temp_s3, 0, 0x80);
    if (temp_s4_2 != NULL) {
        var_s2 = 0;
        if (*temp_s4_2 >= 0) {
            do {
                var_s1 = temp_s4_2 + (var_s2 * 0x10);
                if (arg0 == *var_s1) {
                    *(s32 **)((u8 *)temp_v0 + 0x30) = var_s1;
                    memset(temp_s3 + 0x10, 0, 0x10);
                    memset(temp_s3 + 0x20, 0, 0x10);
                    if (arg0 == *var_s1) {
                        do {
                            var_s1 += 0x10;
                            var_s2 += 1;
                        } while (arg0 == *var_s1);
                    }
                } else {
                    var_s2 += 1;
                }
            } while (*(temp_s4_2 + (var_s2 * 0x10)) >= 0);
        }
    }
}
