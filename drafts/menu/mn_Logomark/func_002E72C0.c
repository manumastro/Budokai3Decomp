/* Draft (not built): func_002E72C0 at 0x002E72C0, size 0x140, segment menu/mn_Logomark (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); legal explicit conversion from 'float' to 'int *' mwccps2.exe Compiler: @ 137: amModel_SetCurrent(*(s32 *)arg0, 0x1000);
 * Original: asm/nonmatchings/menu/mn_Logomark/func_002E72C0.s */

// src/menu/mn_Logomark.c func_002E72C0 cerr diff=-1/0
s32 func_00136E80(s32, s128 *, s32, s32);
s32 func_0013B110(s32);
extern s128 D_00456EE0;
extern s128 D_00456EF0;
extern s128 D_00456F00;
extern void func_0013B0B0(void *);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void amModel_SetCurrent();
extern char D_003F0800[];
void func_002E72C0(f32 arg0, void *fparg0) {
    s128 sp40;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    s32 sp60;
    s32 sp64;
    u8 *temp_s2;
    u8 *temp_t1;

    sp60 = (s128) D_00456EE0;
    sp50 = (s128) D_00456EF0;
    sp40 = D_00456F00;
    sp4C = (f32)(s32)(fparg0);
    func_0013B0B0(D_003F0800);
    amModel_SetCurrent(*(s32 *)arg0, 0x1000);
    temp_t1 = *(s32 *)arg0;
    temp_s2 = temp_t1 + *(*(s32 *)((u8 *)temp_t1 + 0x14) + temp_t1 + ((1 - *(s32 *)((u8 *)temp_t1 + 0x18)) * 4));
    func_00136E80(0x40000E24, &sp40, 1, 0x44);
    sp60 = 0;
    sp64 = 0;
    sp50 = 0.0f;
    sp54 = 0.0f;
    func_00137560(&sp60, &sp50);
    sp60 = 0x44160000;
    sp64 = 0x43E10000;
    sp50 = (f32) *(s16 *)((u8 *)temp_s2 + 0x10);
    sp54 = (f32) *(s16 *)((u8 *)temp_s2 + 0x12);
    func_00137560(&sp60, &sp50);
    amDraw_FlushPacket();
    func_0013B110(1);
}
