/* Draft (not built): func_002A0CE0 at 0x002A0CE0, size 0x34, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x8, original 0x34
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0CE0.s */

// src/sys/cnv_sys.c func_002A0CE0 size diff=12/2
void func_002A0CE0(s32 arg0, s32 arg1) {
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
}

/* Similar function already in C: func_002A0D20 (src/sys/cnv_sys.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
void func_002A0D20(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + (arg0 * 4)) + (arg1 * 0xE0)) = arg2;
}
#endif
