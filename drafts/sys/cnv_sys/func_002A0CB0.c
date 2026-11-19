/* Draft (not built): func_002A0CB0 at 0x002A0CB0, size 0x2C, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0CB0.s */

void func_002A0CB0(s32 arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) ((*((s32 *) ((*((s32 *) (((u8 *) D_004708CC) + 0x44))) + (arg0 * 4)))) + (arg1 * 0xE0))) + 0x30)) = arg2;
}
