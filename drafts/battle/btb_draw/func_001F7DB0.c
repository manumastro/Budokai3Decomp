/* Draft (not built): func_001F7DB0 at 0x001F7DB0, size 0x194, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x194
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7DB0.s */

// src/battle/btb_draw.c func_001F7DB0 size diff=64/99
void func_001F7DB0(void) {
    s32 temp_a2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 var_t0;
    s32 var_v1_2;
    s8 *var_a3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_v1;

    temp_s3 = (unsigned char *)(*D_0051CD14 + (*D_0051CD20 * 0x24));
    var_s2 = 0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x80) > 0) {
        var_s0 = 0;
        do {
            temp_s1 = (unsigned char *)(*(s32 *)((u8 *)(*D_0051CD14 + (*D_0051CD20 * 0x24)) + 0xC) + var_s0);
            temp_a0 = *(u8 **)((u8 *)temp_s1 + 4);
            var_a1 = 0;
            if (*(s32 *)((u8 *)temp_a0 + 4) > 0) {
                var_v1 = temp_a0;
                do {
                    *(s32 *)((u8 *)var_v1 + 8) = 0;
                    var_a1 += 1;
                    var_v1 += 8;
                } while (var_a1 < *(s32 *)((u8 *)temp_a0 + 4));
            }
            temp_v0 = func_001F5FD0(0x80000000U, D_004698D0, (s32) temp_s1, func_001F3A60, M2C_ERROR(/* Read from unset register $a4 */));
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x10);
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x10);
            temp_a0_2 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 4)) + 0)) + 0x1C);
            var_v1_2 = 0;
            if (temp_a0_2 != NULL) {
                temp_a2 = *(s32 *)((u8 *)temp_a0_2 + 0x10);
                var_t0 = 0;
                if (temp_a2 > 0) {
                    var_a3 = *(s8 **)((u8 *)temp_a0_2 + 0x1C);
                    do {
                        if (*var_a3 == 0x58) {
                            var_v1_2 |= 0x200;
                        }
                        var_t0 += 1;
                        var_a3 += 0x20;
                    } while (var_t0 < temp_a2);
                }
            }
            var_s2 += 1;
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~var_v1_2);
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | var_v1_2);
            var_s0 += 0x20;
        } while (var_s2 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x80));
    }
}

/* Similar function already in C: func_001F7820 (src/battle/btb_draw.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_001F7820(void) {
    char *v;
    s32 s3;
    char *s2;
    s32 s1;
    s32 s0;
    char *r;
    char *d;
    s32 fl;
    s32 i;
    char *a2;
    s32 n;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s3 = *(s32 *)(*(char **)(v + 4) + 0x80) + *(s32 *)(*(char **)(v + 4) + 0x84);
    s0 = *(s32 *)(*(char **)(v + 4) + 0x8C) + s3;
    if (s3 < s0) {
        s1 = s3 << 5;
        do {
            s2 = *(char **)(D_0051CD14[0] + D_0051CD20[0] * 36 + 0xC) + s1;
            r = func_001F5FD0(0x81000000, D_004698C0, (s32)s2, (void *)func_001F2FD0, (void *)func_001F3180);
            *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x41;
            *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x40;
            d = **(char ***)((char *)**(char ***)(s2 + 4) + 0x1C);
            fl = 0;
            if (d != NULL) {
                n = *(s32 *)(d + 0x10);
                i = 0;
                if (0 < n) {
                    a2 = *(char **)(d + 0x1C);
                    do {
                        if (*(s8 *)a2 == 0x58) {
                            fl |= 0x200;
                        }
                        i++;
                        a2 += 0x20;
                    } while (i < n);
                }
            }
            *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & ~fl;
            *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | fl;
            s3++;
            s1 += 0x20;
        } while (s3 < s0);
    }
}
#endif
