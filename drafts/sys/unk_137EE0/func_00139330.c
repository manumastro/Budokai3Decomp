/* Draft (not built): func_00139330 at 0x00139330, size 0x2D4, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2AC, original 0x2D4
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00139330.s */

// src/sys/unk_137EE0.c func_00139330 size diff=67/171
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
    if (!(arg2 & 0x03C00000)) {
        goto block_10;
    }
    if (*D_0047CAA0 == NULL) {
        goto block_10;
    }
    temp_v0 = ((s32 (*)(s128 **, s32, s32)) *D_0047CAA0)(&sp4C, arg1, arg2);
    if (sp4C == NULL) {
        goto block_8;
    }
    if (D_00470244 != temp_v0) {
        goto block_6;
    }
    return 0;
block_6:
    **arg0 = *sp4C;
    D_00470244 = temp_v0;
    *arg0 += 0x10;
    return 1;
block_8:
    if (temp_v0 != -1) {
        goto block_10;
    }
    return -1;
block_10:
    if (arg1 == 1) {
        goto block_35;
    }
    if (arg1 == 5) {
        goto block_31;
    }
    if (arg1 == 3) {
        goto block_27;
    }
    if (arg1 == 7) {
        goto block_15;
    }
    goto loop_39;
block_15:
    var_a1 = arg2 & 7;
    if (!(arg2 & 0x4000)) {
        goto block_17;
    }
    var_a1 += 0x60;
block_17:
    if (!(arg2 & 0x80)) {
        goto block_19;
    }
    var_a1 += 0x30;
block_19:
    if (!(arg2 & 0x40)) {
        goto block_21;
    }
    var_a1 += 0x10;
    goto block_23;
block_21:
    if (!(arg2 & 0x2000)) {
        goto block_23;
    }
    var_a1 += 0x20;
block_23:
    if (!(arg2 & 8)) {
        goto block_25;
    }
    var_a1 += 8;
block_25:
    var_v0 = var_a1 + 0x700;
    goto block_41;
block_27:
    var_a1 = (s32) (arg2 & 2) >> 1;
    if (!(arg2 & 0x80)) {
        goto block_29;
    }
    var_a1 += 2;
block_29:
    var_v0 = var_a1 + 0x300;
    goto block_41;
block_31:
    var_a1 = arg2 & 7;
    if (!(arg2 & 0x80)) {
        goto block_33;
    }
    var_a1 += 8;
block_33:
    var_v0 = var_a1 + 0x500;
    goto block_41;
block_35:
    var_a1 = (s32) (arg2 & 2) >> 1;
    if (!(arg2 & 0x80)) {
        goto block_37;
    }
    var_a1 += 2;
block_37:
    var_v0 = var_a1 + 0x100;
    goto block_41;
loop_39:
    goto loop_39;
block_41:
    if (D_00470244 != var_v0) {
        goto block_43;
    }
    return 0;
block_43:
    **arg0 = *(s32 *)(*(&D_003F0250 + (arg1 * 4)) + (var_a1 * 0x10));
    D_00470244 = var_v0;
    *arg0 += 0x10;
    temp_v1 = arg2 & 0x2008;
    if (temp_v1 == 0x2000) {
        goto block_48;
    }
    if (temp_v1 == 0x2008) {
        goto block_47;
    }
    goto block_49;
block_47:
    D_0047CAA4 = D_0047CAAC;
    goto block_49;
block_48:
    D_0047CAA4 = D_0047CAA8;
block_49:
    return 1;
}
