/* Draft (not built): func_0028F720 at 0x0028F720, size 0x108, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xFC, original 0x108
 * Original: asm/nonmatchings/story/str_bg/func_0028F720.s */

// src/story/str_bg.c func_0028F720 size diff=47/63
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_0013BBD0(s32, s32, s32);
s32 func_0013E0A0(s32);
extern f32 D_0049571C;
extern f32 D_00495720;
extern f32 D_00495724;
extern f32 D_0049575C;
extern f32 D_00495760;
extern f32 D_00495764;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern char D_00495718[];
extern char D_00495758[];
extern void func_0012F2C0(void);
extern char D_003F0800[];
void func_0028F720(void) {
    s32 sp10;
    s32 sp70;

    *D_00495718 = *(f32 *)((u8 *)D_004708A4 + 0x1AB8);
    *D_00495758 = *(f32 *)((u8 *)D_004708A4 + 0x1ABC);
    D_0049571C = *(f32 *)((u8 *)D_004708A4 + 0x1AC0);
    D_0049575C = *(f32 *)((u8 *)D_004708A4 + 0x1AC4);
    D_00495720 = *(f32 *)((u8 *)D_004708A4 + 0x1AC8);
    D_00495760 = *(f32 *)((u8 *)D_004708A4 + 0x1ACC);
    D_00495724 = *(f32 *)((u8 *)D_004708A4 + 0x1AD0);
    D_00495764 = *(f32 *)((u8 *)D_004708A4 + 0x1AD4);
    func_0013B0B0(NULL);
    func_00131B90(&sp10);
    func_00131F00(&sp10, 0, 0);
    func_00132DF0(D_003F0800);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    func_0013BBD0(0, 0, 0);
    amModel_SetCurrent(*(s32 *)((u8 *)D_004708A4 + 0x274), 0x400000);
    func_0013E0A0(*(s32 *)((u8 *)D_004708A4 + 0x230));
    amModel_SetCurrent(*(s32 *)((u8 *)D_004708A4 + 0x278), 0x410000);
    func_0013E0A0(*(s32 *)((u8 *)D_004708A4 + 0x234));
    func_0012F2C0();
    func_0013B110(1);
}
