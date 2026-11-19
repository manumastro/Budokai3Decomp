/* Draft (not built): func_002A0D50 at 0x002A0D50, size 0x20, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x30, original 0x20
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0D50.s */

// src/sys/cnv_sys.c func_002A0D50 size diff=6/12
void func_002A0D50(s32 arg0) {
    if (arg0 == 0) {
        *(s32 *)((u8 *)D_004708CC + 0x40) = arg0;
        return;
    }
    *(s32 *)((u8 *)D_004708CC + 0x40) = -1;
}
