/* Draft (not built): func_002E6DC0 at 0x002E6DC0, size 0x1D4, segment menu/mn_Logomark (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal explicit conversion from 'float' to 'int *' mwccps2.exe Compiler: @ 34: amModel_SetCurrent(*(s32 *)arg0, 0x1000);
 * Original: asm/nonmatchings/menu/mn_Logomark/func_002E6DC0.s */

// src/menu/mn_Logomark.c func_002E6DC0 cerr diff=-1/0
s32 func_00136E80(s32, s128 *, s32, s32);
s32 func_0013B110(s32);
extern s128 D_00456F70;
extern s128 D_00456F80;
extern s128 D_00456F90;
extern void func_0013B0B0(void *);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void amModel_SetCurrent();
extern char D_003F0800[];
void func_002E6DC0(f32 arg0, void *fparg0) {
    s128 sp40;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    u8 *temp_s2;
    u8 *temp_t1;

    sp60 = (s128) D_00456F70;
    sp50 = (s128) D_00456F80;
    sp40 = D_00456F90;
    sp4C = (f32)(s32)(fparg0);
    func_0013B0B0(D_003F0800);
    amModel_SetCurrent(*(s32 *)arg0, 0x1000);
    temp_t1 = *(s32 *)arg0;
    temp_s2 = temp_t1 + *(*(s32 *)((u8 *)temp_t1 + 0x14) + temp_t1 + ((3 - *(s32 *)((u8 *)temp_t1 + 0x18)) * 4));
    func_00136E80(0x40000E24, &sp40, 3, 0x44);
    sp60 = 300.0f - ((f32) *(s16 *)((u8 *)temp_s2 + 0x10) / 2.0f);
    sp64 = 225.0f - ((f32) *(s16 *)((u8 *)temp_s2 + 0x12) / 2.0f);
    sp50 = 0.5f;
    sp54 = 0.5f;
    func_00137560(&sp60, &sp50);
    sp60 = 300.0f + ((f32) *(s16 *)((u8 *)temp_s2 + 0x10) / 2.0f);
    sp64 = 225.0f + ((f32) *(s16 *)((u8 *)temp_s2 + 0x12) / 2.0f);
    sp50 = (f32) *(s16 *)((u8 *)temp_s2 + 0x10) - 0.5f;
    sp54 = (f32) *(s16 *)((u8 *)temp_s2 + 0x12) - 0.5f;
    func_00137560(&sp60, &sp50);
    amDraw_FlushPacket();
    func_0013B110(1);
}
