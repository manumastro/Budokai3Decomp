/* Draft (not built): func_0030AA40 at 0x0030AA40, size 0x414, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 154 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3F0, original 0x414
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030AA40.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030AA40 size diff=154/252
extern u8 *D_00470990;
extern void *amTask_Create();
s32 A2d_SetMode(s32);
s32 ArenaList_SetF0(s32, s32);
s32 ArenaList_SetF2(s32, s32);
s32 ArenaRegCharList_Start(s32, s32, s32);
s32 DataErase_IsReady(s16);
s32 Fade_Request(s32, s32, s32);
s32 amCdFs_Close(void *, s32);
s32 func_0022D860(s32, s32);
s32 func_0027D820(s32);
s32 func_0027DA00(void *, s32, s32);
s32 func_0027DAC0(void *, s32, void *);
void *func_0027E2D0(s32, s32, s32, s32);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
s32 memset(void *, s32, s32);
extern s8 D_004B4B59;
extern s16 D_004E05F8;
extern u8 D_005C4121;
extern s16 D_005C4122;
extern s16 D_005C4124;
extern s16 D_005C4138;
extern void amFile_Load(void *);
extern void amAdx_Stop();
extern void func_0022E0B0(void *);
extern void func_0028DF20(void);
extern void func_002D09B0(void);
extern void func_0030A120(void);
extern void func_0030A950(void);
void func_0030AA40(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0_2;
    s32 temp_a0;
    u8 temp_a0_4;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s2 = D_00470990;
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
        func_0028DF20();
        func_0028DFC0(6, 0, 0, 0, 0x1F);
        *(u8 **)((u8 *)temp_s2 + 8) = amTask_Create(func_00309E30, 0, 0x1001, 8);
        *(u8 **)((u8 *)temp_s2 + 0x10) = amTask_Create(func_00309DE0, 0, 0x3000, 8);
        memset(*(u8 **)((u8 *)temp_s2 + 0x10) + 0x30, 0, 0x10);
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        D_004B4B59 = 3;
        func_0027D820(0);
        *(u8 *)((u8 *)temp_s0 + 0x19) = (u8) D_005C4122;
        if (*(u8 *)((u8 *)temp_s0 + 0x19) == 0) {
            *(u8 **)((u8 *)temp_s0 + 8) = func_0027E2D0(5, 6, 0, -1);
            *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
        } else {
            *(u8 **)((u8 *)temp_s0 + 8) = NULL;
            *(s32 *)((u8 *)temp_s0 + 0x10) = ArenaRegCharList_Start(5, 0, 0xFF);
        }
        *(u8 *)((u8 *)temp_s0 + 0x1A) = (u8) D_005C4124;
        if (*(u8 *)((u8 *)temp_s0 + 0x1A) == 0) {
            *(u8 **)((u8 *)temp_s0 + 0xC) = func_0027E2D0(5, 0xF, 0, -1);
            *(s32 *)((u8 *)temp_s0 + 0x14) = 0;
        } else {
            *(u8 **)((u8 *)temp_s0 + 0xC) = NULL;
            *(s32 *)((u8 *)temp_s0 + 0x14) = ArenaRegCharList_Start(5, 1, 0xFF);
            ArenaList_SetF2(*(s32 *)((u8 *)temp_s0 + 0x14), 0);
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 4);
        D_00470704 = (int)(temp_a0_3);
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x2000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x14)) + 4), 0);
        if (D_005C4138 != 0) {
            D_005C4138 = 0;
            if (*(u8 *)((u8 *)temp_s0 + 0x19) != 0) {
                ArenaList_SetF2(*(s32 *)((u8 *)temp_s0 + 0x10), 1);
            } else {
                temp_v1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x30);
                *(u8 *)((u8 *)temp_v1 + 6) = (u8) (*(u8 *)((u8 *)temp_v1 + 6) | 8);
                func_0027DA00(*(u8 **)((u8 *)temp_s0 + 8), 0x3F000000, 0x3F800000);
            }
            if (*(u8 *)((u8 *)temp_s0 + 0x1A) == 0) {
                temp_a2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x30);
                temp_a0_4 = *(u8 *)((u8 *)temp_a2 + 6);
                if (temp_a0_4 & 8) {
                    *(u8 *)((u8 *)temp_a2 + 6) = (u8) (temp_a0_4 & 0xF7);
                    func_0027DAC0(*(u8 **)((u8 *)temp_s0 + 0xC), 4, temp_a2);
                }
            } else {
                ArenaList_SetF0(*(s32 *)((u8 *)temp_s0 + 0x14), 4);
                ArenaList_SetF2(*(s32 *)((u8 *)temp_s0 + 0x14), -1);
            }
            var_v1 = (int *)(&func_0030A120);
            if (&func_0030A120 == NULL) {
                var_v1 = NULL;
            }
        } else {
            *(s32 *)((u8 *)temp_s0 + 0x24) = 0x41A00000;
            var_v1 = (int *)(&func_0030A950);
            if (&func_0030A950 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
