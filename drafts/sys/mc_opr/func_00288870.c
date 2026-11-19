/* Draft (not built): func_00288870 at 0x00288870, size 0x148, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x114, original 0x148
 * Original: asm/nonmatchings/sys/mc_opr/func_00288870.s */

// src/sys/mc_opr.c func_00288870 size diff=52/69
extern f32 D_00470884;
extern void *D_00470890;
extern s32 D_00470888;
extern s32 D_005AA540;
extern void func_0028DE30(void);
extern void func_0028D810(void);
extern void func_0028DEA0(void);
void func_00288870(s32 arg0) {
    s32 *var_v1;

    D_00470888 = arg0;
    if (arg0 == -1) {
        goto block_13;
    }
    if (arg0 == 0x18) {
        goto block_11;
    }
    if (arg0 == 0x17) {
        goto block_11;
    }
    if (arg0 == 0x16) {
        goto block_11;
    }
    if (arg0 == 0x14) {
        goto block_11;
    }
    if (arg0 == 0x1C) {
        goto block_11;
    }
    if (arg0 == 0x13) {
        goto block_11;
    }
    if (arg0 == 0xE) {
        goto block_11;
    }
    if (arg0 == 9) {
        goto block_11;
    }
    goto block_12;
block_11:
    *(s32 *)((u8 *)(&D_005AA540) + 0) = 0x3F400000;
    *(s32 *)((u8 *)(&D_005AA540) + 4) = 0x3E800000;
    *(s32 *)((u8 *)(&D_005AA540) + 8) = 0x3E800000;
    *(s32 *)((u8 *)(&D_005AA540) + 0xC) = 0x3F000000;
    goto block_13;
block_12:
    *(s32 *)((u8 *)(&D_005AA540) + 0) = 0;
    *(s32 *)((u8 *)(&D_005AA540) + 4) = 0x3F400000;
    *(s32 *)((u8 *)(&D_005AA540) + 8) = 0x3E800000;
    *(s32 *)((u8 *)(&D_005AA540) + 0xC) = 0x3F000000;
block_13:
    if (arg0 >= 0) {
        goto block_18;
    }
    var_v1 = (int *)(&func_0028DE30);
    if (&func_0028DE30 != NULL) {
        goto block_16;
    }
    var_v1 = NULL;
block_16:
    goto block_24;
block_18:
    if (D_00470884 != 1.0f) {
        goto block_22;
    }
    var_v1 = (int *)(&func_0028D810);
    if (&func_0028D810 != NULL) {
        goto block_21;
    }
    var_v1 = NULL;
block_21:
    goto block_24;
block_22:
    var_v1 = (int *)(&func_0028DEA0);
    if (&func_0028DEA0 != NULL) {
        goto block_24;
    }
    var_v1 = NULL;
block_24:
    *(s32 **)((u8 *)D_00470890 + 0x1C) = var_v1;
    return;
}
