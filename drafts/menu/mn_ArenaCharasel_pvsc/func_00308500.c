/* Draft (not built): func_00308500 at 0x00308500, size 0x32C, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mplicit conversion from 'unsigned char[]' to 'short' mwccps2.exe Compiler: @ 322: func_002E87C0(D_005C4150, D_005C4126);
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00308500.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00308500 cerr diff=-1/0
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create();
s32 A2d_SetMode(s32);
s32 DataErase_IsReady(s16);
s32 Fade_Request(s32, s32, s32);
s32 func_0022D860(s32, s32);
s32 func_0027D820(s32);
s32 func_002E8540(s8 *, s32, s8);
s32 func_002E87C0(s8 *, s16);
s32 memset(void *, s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s8 D_004B4B59;
extern s16 D_004E05F8;
extern u8 D_005C4121;
extern s16 D_005C4122;
extern u8 D_005C4CB4;
extern void amFile_Load(void *);
extern void amAdx_Stop();
extern void ArenaList_Load(void);
extern void func_0022E0B0(void *);
extern char D_005C4150[];
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_002D09B0(void);
extern void func_00308070(void);
extern void func_00308450(void);
void func_00308500(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0_2;
    s32 temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = D_00470988;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_s1 = arg0 + 0x30;
    if (temp_a0 != 0) {
        if ((temp_a0 == 0xA) && (D_005C4121 != 0)) {
            amAdx_Stop(-1);
        }
        *(s32 *)((u8 *)temp_s1 + 4) = (s32) (*(s32 *)((u8 *)temp_s1 + 4) - 1);
        return;
    }
    temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 4);
    if ((temp_a0_2 == 3) && (DataErase_IsReady(temp_a0_2) == 1)) {
        Fade_Request(-1, 0, 0);
        if (D_005C4121 != 0) {
            func_002D09B0();
        }
        D_005C4121 = 1;
        *(u8 **)((u8 *)temp_s0 + 0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 0), 0);
        *(u8 **)((u8 *)temp_s2 + 0) = NULL;
        *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s2 + 4), 0);
        *(u8 **)((u8 *)temp_s2 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 0));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 4));
        *(u8 **)((u8 *)temp_s2 + 8) = amTask_Create(func_00307D40, 0, 0x1001, 8);
        *(u8 **)((u8 *)temp_s2 + 0x10) = amTask_Create(func_00307CF0, 0, 0x3000, 8);
        memset(*(u8 **)((u8 *)temp_s2 + 0x10) + 0x30, 0, 0x10);
        D_004B4B59 = 1;
        func_0027D820(0);
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        if (D_005C4122 != 0) {
            temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0_3;
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_3, 0x2000);
            D_00470238 = 0;
            *(s32 *)((u8 *)temp_s0 + 0x58) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x14), 0);
            ArenaList_Load();
            func_002E87C0(D_005C4150, D_005C4126);
            func_002E8540(D_005C4150, 0, D_004B4B63);
            var_v1 = (s32 *)(&func_00308070);
            D_005C4136 = (s16) D_005C4CB4;
            *(s8 *)((u8 *)temp_s0 + 0x1D) = (s8) ((s64) ((s64) D_005C4CB4 << 0x30) >> 0x30);
            *(s32 *)((u8 *)temp_s0 + 0x40) = 0x42700000;
            *(s32 *)((u8 *)temp_s0 + 0x44) = 0;
            if (&func_00308070 == NULL) {
                var_v1 = NULL;
            }
        } else {
            *(s32 *)((u8 *)temp_s0 + 8) = func_0027E2D0(5, (0 | (((D_004B4B63 == 0) ? 2 : 4) & 0xFF)) & 0xFF, 1, -1);
            *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
            temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0_4;
            D_0047070C = 0x2000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_4, 0x2000);
            D_00470238 = 0;
            *(s32 *)((u8 *)temp_s0 + 0x58) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x14), 0);
            *(s32 *)((u8 *)temp_s0 + 0x40) = 0x42700000;
            var_v1 = (s32 *)(&func_00308450);
            *(s32 *)((u8 *)temp_s0 + 0x44) = 0;
            if (&func_00308450 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
