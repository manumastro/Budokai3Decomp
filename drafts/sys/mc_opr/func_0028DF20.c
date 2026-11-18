/* Draft (not built): func_0028DF20 at 0x0028DF20, size 0x9C, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK amHeap_Free(s32);                           /* extern */
M2C_UNK amTask_Kill(s32);                           /* extern */
extern s32 D_00470048;
extern s32 D_00470838;
extern s32 D_0047083C;
extern s32 D_00470848;
extern s32 D_00470884;
extern s32 D_0047088C;
extern s32 D_00470890;
extern s32 D_0047089C;
extern s32 D_004708A0;

void func_0028DF20(void) {
    if (D_0047088C != 0) {
        amTask_Kill(D_0047088C);
    }
    if (D_00470890 != 0) {
        amTask_Kill(D_00470890);
    }
    if (D_0047089C != 0) {
        amHeap_Free(D_0047089C);
    }
    if (D_004708A0 != 0) {
        amHeap_Free(D_004708A0);
    }
    D_00470848 = 0;
    D_0047088C = 0;
    D_00470048 = -1;
    D_00470890 = 0;
    D_00470884 = 0;
    D_0047089C = 0;
    D_004708A0 = 0;
    D_00470838 = 0;
    D_0047083C = 0;
}
