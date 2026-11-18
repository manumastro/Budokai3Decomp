/* Draft (not built): func_00139330 at 0x00139330, size 0x2D4, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 155: **arg0 = *(*(&D_003F0250 + (arg1 * 4)) + (var_a1 * 0x10));
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00139330.s */

// src/sys/unk_137EE0.c func_00139330 cerr diff=-1/0
extern s32 D_003F0250;
extern s32 D_00470244;
extern s32 D_004702A0;
extern s32 D_0047CAA4;
extern s32 D_0047CAA8;
extern s32 D_0047CAAC;
extern void *D_0047CAA0[];
s32 func_00139330(s128 **arg0, s32 arg1, s32 arg2) {
    s128 *sp4C;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;

    D_004702A0 = 0;
    D_0047CAA4 = 0;
    if ((arg2 & 0x03C00000) && (*D_0047CAA0 != NULL)) {
        temp_v0 = ((s32 (*)(s128 **, s32, s32)) *D_0047CAA0)(&sp4C, arg1, arg2);
        if (sp4C != NULL) {
            if (D_00470244 == temp_v0) {
                return 0;
            }
            **arg0 = *sp4C;
            D_00470244 = temp_v0;
            *arg0 += 0x10;
            return 1;
        }
        if (temp_v0 == -1) {
            return -1;
        }
        goto block_10;
    }
block_10:
    switch (arg1) {                                 /* switch 1; irregular */
    case 7:                                         /* switch 1 */
        var_a1 = arg2 & 7;
        if (arg2 & 0x4000) {
            var_a1 += 0x60;
        }
        if (arg2 & 0x80) {
            var_a1 += 0x30;
        }
        if (arg2 & 0x40) {
            var_a1 += 0x10;
        } else if (arg2 & 0x2000) {
            var_a1 += 0x20;
        }
        if (arg2 & 8) {
            var_a1 += 8;
        }
        var_v0 = var_a1 + 0x700;
block_41:
        if (D_00470244 == var_v0) {
            return 0;
        }
        **arg0 = *(*(&D_003F0250 + (arg1 * 4)) + (var_a1 * 0x10));
        D_00470244 = var_v0;
        *arg0 += 0x10;
        temp_v1 = arg2 & 0x2008;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0x2008:                                /* switch 2 */
            D_0047CAA4 = D_0047CAAC;
            break;
        case 0x2000:                                /* switch 2 */
            D_0047CAA4 = D_0047CAA8;
            break;
        }
        return 1;
    case 3:                                         /* switch 1 */
        var_a1 = (s32) (arg2 & 2) >> 1;
        if (arg2 & 0x80) {
            var_a1 += 2;
        }
        var_v0 = var_a1 + 0x300;
        goto block_41;
    case 5:                                         /* switch 1 */
        var_a1 = arg2 & 7;
        if (arg2 & 0x80) {
            var_a1 += 8;
        }
        var_v0 = var_a1 + 0x500;
        goto block_41;
    case 1:                                         /* switch 1 */
        var_a1 = (s32) (arg2 & 2) >> 1;
        if (arg2 & 0x80) {
            var_a1 += 2;
        }
        var_v0 = var_a1 + 0x100;
        goto block_41;
    }
}
