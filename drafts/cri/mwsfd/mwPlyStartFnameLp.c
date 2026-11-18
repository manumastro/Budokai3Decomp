/* Draft (not built): mwPlyStartFnameLp at 0x00185FE0, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyStartFnameLp.s */

s32 func_00169C40();
s32 func_00183020();
s32 func_00183B38();
s32 func_001870E8();
s32 mwPlyEntryFname();
s32 mwPlySetLpFlg();
s32 mwPlyStartSeamless();
extern s32 D_00466E30;
extern s32 D_00466E60;

void mwPlyStartFnameLp(u8 *arg0, s32 arg1) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466E30);
        return;
    }
    if (arg1 == 0) {
        func_001870E8(&D_00466E60, arg1);
        return;
    }
    func_00183020(arg0, arg1);
    func_00169C40(*(s32 *)((u8 *)arg0 + 0x4C));
    mwPlyEntryFname(arg0, *(s32 *)((u8 *)arg0 + 0x1B8));
    mwPlySetLpFlg(arg0, 1);
    mwPlyStartSeamless(arg0);
}
