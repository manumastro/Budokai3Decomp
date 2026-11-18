/* Draft (not built): func_001F7210 at 0x001F7210, size 0x258, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); char *)func_001F5FD0(0x84000000, &D_004698B0, arg0, func_001F2570); @ 7263: if (*(s32 *)((u8 *)var_a1 + 0x10) != arg0) {
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7210.s */

// src/battle/btb_draw.c func_001F7210 cerr diff=-1/0
extern s32 D_0044AE80;
extern s32 D_004698B0;
void func_001F7210(u8 *arg0) {
    s32 *temp_s5;
    s32 *var_s2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_a3;
    s32 var_s4;
    s32 var_v1;
    s8 *var_a1;
    s8 *var_a2;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *temp_v0_2;

    var_a1 = (s8 *)(D_0051CB70[0]);
    temp_s3 = (s32)(gBtbBg);
    temp_s2 = (s32)(D_0051CD20);
    if (D_0051CB70 != D_0051CC20) {
loop_2:
        if (*(s32 *)((u8 *)var_a1 + 0x10) != arg0) {
            var_a1 = *(s8 **)((u8 *)var_a1 + 0x24);
            if (var_a1 == D_0051CC20) {
                goto block_4;
            }
            goto loop_2;
        }
        return;
    }
block_4:
    temp_v0 = (char *)func_001F5FD0(0x84000000, &D_004698B0, arg0, func_001F2570);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x100);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x100);
    temp_v0_2 = **(u8 ***)((u8 *)(**(u8 ***)((u8 *)arg0 + 4)) + 0x1C);
    var_v1 = 0;
    if (temp_v0_2 != NULL) {
        temp_a1 = *(s32 *)((u8 *)temp_v0_2 + 0x10);
        var_a3 = 0;
        if (temp_a1 > 0) {
            var_a2 = *(s8 **)((u8 *)temp_v0_2 + 0x1C);
            do {
                if (*var_a2 == 0x58) {
                    var_v1 |= 0x200;
                }
                var_a3 += 1;
                var_a2 += 0x20;
            } while (var_a3 < temp_a1);
        }
    }
    temp_a3 = ~var_v1;
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & temp_a3);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | var_v1);
    memset(temp_v0 + 0x30, 0, 0x80);
    temp_s5 = (s32 *)(*((temp_s2 << 5) + (&D_0044AE80 + (temp_s3 * 0x5C))));
    if (temp_s5 != NULL) {
        var_s4 = 0;
        if (*temp_s5 >= 0) {
            do {
                var_s2 = temp_s5 + (var_s4 * 0x10);
                temp_s3_2 = *var_s2 - 0x64;
                if (temp_s3_2 >= 0) {
                    temp_s6 = temp_v0 + 0x30;
                    if ((*D_0051CD1C + (temp_s3_2 << 5)) == arg0) {
                        memset(temp_s6, 0, 0x80);
                        *(s32 **)((u8 *)temp_v0 + 0x30) = var_s2;
                        memset(temp_s6 + 0x10, 0, 0x10);
                        memset(temp_s6 + 0x20, 0, 0x10);
                    }
loop_17:
                    if (temp_s3_2 == (*var_s2 - 0x64)) {
                        var_s2 += 0x10;
                        var_s4 += 1;
                        goto loop_17;
                    }
                } else {
                    var_s4 += 1;
                }
            } while (*(temp_s5 + (var_s4 * 0x10)) >= 0);
        }
    }
}
