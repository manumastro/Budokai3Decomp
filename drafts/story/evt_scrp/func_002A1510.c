/* Draft (not built): func_002A1510 at 0x002A1510, size 0x12C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' to 'int' mwccps2.exe Compiler: @ 35: 022C7D0(*(u8 **)((u8 *)temp_s0 + 0x54), 1, (f32) *(s32 *)((u8 *)temp_s0 + 0xF4));
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1510.s */

// src/story/evt_scrp.c func_002A1510 cerr diff=-1/0
extern s32 *gEvtWork;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00228410();
extern void func_0022CD00(s32);
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);
extern void func_0022C7D0(s32, f32, s32);
extern char D_004E05DC[];
void func_002A1510(s32 arg0) {
    u8 *temp_a0;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gEvtWork);
    A2d_SetMode(*(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x50);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x860000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x860000);
    D_00470238 = 0;
    func_00228430(0);
    func_0022C7D0(*(u8 **)((u8 *)temp_s0 + 0x54), 1, (f32) *(s32 *)((u8 *)temp_s0 + 0xF4));
    if (arg0 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0x54))));
    func_00228410();
    if (*(s32 *)((u8 *)temp_s0 + 0xF4) >= 0x2710) {
        func_00228430(0);
        func_0022C7D0(*(u8 **)((u8 *)temp_s0 + 0x58), 1, (f32) ((*(s32 *)((u8 *)temp_s0 + 0xF4) / 10000) + ((u32) *(s32 *)((u8 *)temp_s0 + 0xF4) >> 0x1F)));
        if (arg0 != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0x58))));
        func_00228410();
    }
    A2d_FlushList();
}
