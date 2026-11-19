/* Draft (not built): func_0014E580 at 0x0014E580, size 0x4C, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x40, original 0x4C
 * Original: asm/nonmatchings/sys/script/func_0014E580.s */

// src/sys/script.c func_0014E580 size diff=12/16
extern s32 D_00400B58;
extern s32 D_00400B60;
void func_0014E580(void) {
    s32 temp_v0;

    temp_v0 = D_00400B58 - 1;
    D_00400B58 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_00400B60, 0, 0x300);
    }
}
