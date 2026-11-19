/* Draft (not built): main at 0x0014E4B0, size 0xCC, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x80, original 0xCC
 * Original: asm/nonmatchings/sys/script/main.s */

// src/sys/script.c main size diff=24/32
s32 func_0012EAE0(s32);
extern s32 D_0047A5C0;
extern void amDraw_ResetPackets(void);
extern void amCdFs_Main(void);
extern void amDraw3d_SetDefaultRegs(void);
extern void amMc_Sync(void);
extern void amDbg_Draw(void);
extern void amTask_Run(void);
extern void func_001433F0(void);
extern void func_001470D0(void);
extern void func_001A3520(void);
void main(void) {
    Sys_Init();
loop_1:
    func_001470D0();
    memset(&D_0047A5C0, 0, 0x700);
    amCdFs_Main();
    amMc_Sync();
    func_001A3520();
    amDraw_ResetPackets();
    amDraw3d_SetDefaultRegs();
    amTask_Run();
    func_001433F0();
    func_0012EAE0(0x20);
    amDbg_Draw();
    goto loop_1;
}
