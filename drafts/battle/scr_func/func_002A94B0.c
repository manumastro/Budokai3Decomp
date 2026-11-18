/* Draft (not built): func_002A94B0 at 0x002A94B0, size 0x2A8, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); al operands 'int[]' = 'int' mwccps2.exe Compiler: 219: Scr_SetCallback44(temp_a0, D_00454680[0]); @ 195: D_00511768 = 0;
 * Original: asm/nonmatchings/battle/scr_func/func_002A94B0.s */

// src/battle/scr_func.c func_002A94B0 cerr diff=-1/0
s32 Scr_Alloc(s32, s32, s32);
s32 Scr_SetCallback44(s32, s8 *);
s32 Scr_SetEndCallback(s32, void *(*)());
s32 Scr_SetStartCallback(s32, void *(*)());
s32 Scr_SetTaskEndCallback(s32, s32);
s32 Scr_SetTaskStartCallback(s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32);
s32 func_00298B70(s32, s32);
s32 func_002A81B0(s32);
s32 func_002A8330(s32);
extern s32 D_005AB390;
extern s32 func_002A6E40;
extern s32 func_002A7F70;
extern s32 *gEvtWork;
extern void *amTask_Create();
extern void Save_Load();
extern void func_0029AC30(void);
extern void * func_002A2310(void);
extern void * func_002A2340(void);
extern void EvtScrp_Init(void);
extern char D_00454680[];
void func_002A94B0(s32 arg0) {
    s32 *temp_s0_2;
    s32 *temp_s0_3;
    s32 *temp_s0_4;
    s32 *temp_s0_5;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v1;
    u16 temp_a0_2;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_v1 = (arg0 >> 0x10) & 0xFFFF;
    D_005AB390 = *(s32 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80) + 0x11D0);
    D_00511768 = 0;
    if (temp_v1 != 0x4000) {
        if (temp_v1 < 0x7D0) {
            func_0029AC30();
            func_002A81B0(arg0);
            if (arg0 == 0x660007) {
                *(s8 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210)) + 0x1266) = 0;
            }
        }
        temp_s2 = (arg0 >> 0x10) & 0xFFFF;
        temp_s0 = func_002A8330(temp_s2);
        if (temp_s2 != 0xBB8) {
            func_00298B70(arg0, arg0 | 0x8000);
        }
        EvtScrp_Init();
        temp_s0_2 = gEvtWork;
        *(s32 *)((u8 *)temp_s0_2 + 0x18) = amCdFs_ReadFileId(temp_s0, 0, 1);
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = arg0;
        *(s32 *)((u8 *)temp_s0_2 + 0xC) = 0;
        *(u8 **)((u8 *)temp_s0_2 + 8) = amTask_Create(&func_002A6E40, 0, 0x2000, 0x4000);
        temp_s0_3 = gEvtWork;
        *(s32 *)((u8 *)temp_s0_3 + 0) = Scr_Alloc(0x1500, 1, 1);
        temp_a0 = *(s32 *)((u8 *)temp_s0_3 + 0);
        if (temp_a0 != -1) {
            Scr_SetCallback44(temp_a0, D_00454680[0]);
            Scr_SetStartCallback(*(s32 *)((u8 *)temp_s0_3 + 0), func_002A2340);
            Scr_SetEndCallback(*(s32 *)((u8 *)temp_s0_3 + 0), func_002A2310);
            Scr_SetTaskStartCallback(*(s32 *)((u8 *)temp_s0_3 + 0), 0);
            Scr_SetTaskEndCallback(*(s32 *)((u8 *)temp_s0_3 + 0), 0);
        }
        temp_s0_4 = gEvtWork;
        func_002A92B0(*(s32 *)((u8 *)temp_s0_4 + 0));
        *(s32 *)((u8 *)temp_s0_4 + 0x10) = 0;
        return;
    }
    EvtScrp_Init();
    temp_s0_5 = gEvtWork;
    *(s32 *)((u8 *)temp_s0_5 + 0x14) = arg0;
    temp_a0_2 = (u16) *(s32 *)((u8 *)temp_s0_5 + 0x14);
    switch (temp_a0_2) {                            /* irregular */
    case 4:
    case 2:
    case 0:
        Save_Load(0x3000, 0);
        /* fallthrough */
    case 5:
    case 1:
        *(s32 *)((u8 *)temp_s0_5 + 0x6C) = amCdFs_ReadFileId(0x107D5, 0, 0);
        *(s32 *)((u8 *)temp_s0_5 + 0x70) = amCdFs_ReadFileId(0x107D6, 0, 0);
        *(u8 **)((u8 *)temp_s0_5 + 8) = amTask_Create(&func_002A7F70, 0, 0xB000, 0x4000);
        break;
    }
    *(s32 *)((u8 *)temp_s0_5 + 0x98) = 0;
}
