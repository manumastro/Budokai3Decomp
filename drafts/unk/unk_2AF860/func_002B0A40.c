/* Draft (not built): func_002B0A40 at 0x002B0A40, size 0x1A8, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B0A40.s */

// src/unk/unk_2AF860.c func_002B0A40 size diff=29/100
s32 amDraw_SetScissor(s32, s32);
s32 amVram_Apply(s32);
s32 func_00131F00(s32 *, s32, s32);
s32 memset(s32 *, s32, s32);
extern s8 D_004703F4;
extern s32 D_005BC440;
extern s32 D_005BC560;
extern s32 D_005BC9E0;
extern s32 D_005BCF20;
extern s32 gScrTimers;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void amDraw3d_Sync(void);
extern void func_0013AFA0(void *);
void func_002B0A40(s32 arg0) {
    f32 var_f0;

    gScrTimers = 0;
    memset(&D_005ABA80 + (arg0 * 0x8380), 0, 0x8380);
    memset(&D_005BC9E0 + (arg0 * 0x1A0), 0, 0x1A0);
    memset(&D_005BC180 + (arg0 * 0x160), 0, 0x160);
    memset(&D_005BC440 + (arg0 * 0x90), 0, 0x90);
    memset(&D_005BC560 + (arg0 * 0x240), 0, 0x240);
    memset(&D_005BCD20 + (arg0 * 0xA0), 0, 0xA0);
    func_0013AFA0(NULL);
    memset(&D_005BCF20, 0, 0x60);
    func_00131B90(&D_005BCF20);
    func_00131F00(&D_005BCF20, 0, 0);
    func_00132DF0(NULL);
    amDraw_SetScissor(0, 0);
    if (D_004703F4 != 3) {
        var_f0 = 1.0f;
    } else {
        var_f0 = 1.2f;
    }
    D_004708F8 = var_f0;
    amDraw3d_Sync();
    amVram_Apply(2);
    amCdFs_SetHeap(0);
}
