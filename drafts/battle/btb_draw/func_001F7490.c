/* Draft (not built): func_001F7490 at 0x001F7490, size 0x200, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x204, original 0x200
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7490.s */

// src/battle/btb_draw.c func_001F7490 size diff=71/129
extern s32 D_0044AE80;
extern s32 D_004698B8;
void func_001F7490(s32 arg0) {
    s32 *temp_a3;
    s32 *var_s1;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;
    s32 var_t0;
    s32 var_v1;
    s8 *var_a3;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *var_s3;

    var_s4 = (*(int *)(gBtbBg));
    var_s0 = arg0;
    var_s2 = (*(int *)(D_0051CD20));
    var_s1 = (int *)(*(s32 *)((u8 *)(*D_0051CD14 + (var_s2 * 0x24)) + 0xC) + (arg0 << 5));
    temp_v0 = func_001F5FD0(0x82000000, (char *)(&D_004698B8), (s32)(var_s1), (void *)(func_001F2A90), 0);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x80);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x80);
    temp_a0 = **(u8 ***)((u8 *)(**(u8 ***)((u8 *)var_s1 + 4)) + 0x1C);
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
    var_s3 = temp_v0 + 0x30;
    temp_a3 = (var_s2 << 5) + (&D_0044AE80 + (var_s4 * 0x5C));
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~var_v1);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | var_v1);
    var_s4 = *temp_a3;
    memset(var_s3, 0, 0x80);
    if (var_s4 != 0) {
        var_s2 = 0;
        if (*(s32 *)var_s4 >= 0) {
            do {
                var_s1 = (int *)(var_s4 + (var_s2 * 0x10));
                if (var_s0 == *var_s1) {
                    *(s32 **)((u8 *)temp_v0 + 0x30) = var_s1;
                    memset(var_s3 + 0x10, 0, 0x10);
                    memset(var_s3 + 0x20, 0, 0x10);
                    if (var_s0 == *var_s1) {
                        do {
                            var_s1 += 0x10;
                            var_s2 += 1;
                        } while (var_s0 == *var_s1);
                    }
                } else {
                    var_s2 += 1;
                }
            } while (*(s32 *)(var_s4 + (var_s2 * 0x10)) >= 0);
        }
    }
}
