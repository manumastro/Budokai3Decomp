/* Draft (not built): func_00309680 at 0x00309680, size 0x464, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 175 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3E0, original 0x464
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309680.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_00309680 size diff=175/248
s32 A2d_SetMode(s32);
s32 DataErase_IsReady(s16);
s32 Fade_Request(s32, s32, s32);
s32 amCdFs_Close(void *, s32);
s32 func_0022D860(s32, s32);
s32 func_0027D820(s32);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s8 D_004B4B59;
extern s16 D_004E05F8;
extern u8 D_005C4121;
extern s16 D_005C4124;
extern void amFile_Load(void *);
extern void amAdx_Stop();
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022E0B0(void *);
extern void func_0028DF20(void);
extern void func_002D09B0(void);
extern void func_003095A0(void);
void func_00309680(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0_2;
    s32 temp_a0;
    void (*var_v0)();
    void (*var_v0_2)();
    void (*var_v0_3)();
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s3 = D_0047098C;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_s2 = arg0 + 0x30;
    if (temp_a0 != 0) {
        if ((temp_a0 == 0xA) && (D_005C4121 != 0)) {
            amAdx_Stop(-1);
        }
        *(s32 *)((u8 *)temp_s2 + 4) = (s32) (*(s32 *)((u8 *)temp_s2 + 4) - 1);
        return;
    }
    temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 4);
    if ((temp_a0_2 == 3) && (DataErase_IsReady(temp_a0_2) == 1)) {
        Fade_Request(-1, 0, 0);
        if (D_005C4121 != 0) {
            func_002D09B0();
        }
        D_005C4121 = 1;
        *(u8 **)((u8 *)temp_s0 + 0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s3 + 0), 0);
        *(u8 **)((u8 *)temp_s3 + 0) = NULL;
        *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s3 + 4), 0);
        *(u8 **)((u8 *)temp_s3 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 0));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 4));
        func_0028DF20();
        func_0028DFC0(6, 0, 0, 0, 0x1F);
        *(u8 **)((u8 *)temp_s3 + 0xC) = amTask_Create(func_00308AE0, 0, 0x1001, 8);
        *(u8 **)((u8 *)temp_s3 + 0x10) = amTask_Create(func_00308A90, 0, 0x3000, 8);
        memset(*(u8 **)((u8 *)temp_s3 + 0x10) + 0x30, 0, 0x10);
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        D_004B4B59 = 0;
        func_0027D820(0);
        temp_v0 = amTask_Create(NULL, 0, 0x2100, 8);
        *(u8 **)((u8 *)temp_s0 + 8) = temp_v0;
        temp_s3_2 = temp_v0 + 0x30;
        memset(temp_s3_2, 0, 0x14);
        *(u8 *)((u8 *)temp_s3_2 + 0xD) = 0U;
        if (D_005C4122 == 0) {
            *(s32 *)((u8 *)temp_v0 + 0x30) = func_0027E2D0(5, 2, 1, -1, 0, 0, 0, 0);
            var_v0 = func_00309000;
            *(s32 *)((u8 *)temp_s3_2 + 4) = 0;
            if (func_00309000 == NULL) {
                var_v0 = NULL;
            }
        } else {
            *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
            *(s32 *)((u8 *)temp_s3_2 + 4) = ArenaRegCharList_Start(1, 0, 0);
            var_v0 = func_00308D50;
            if (func_00308D50 == NULL) {
                var_v0 = NULL;
            }
        }
        *(void (**)())((u8 *)temp_v0 + 0x1C) = var_v0;
        *(u8 **)((u8 *)temp_s3_2 + 8) = temp_s0;
        *(s8 *)((u8 *)temp_s3_2 + 0xF) = 2;
        *(s8 *)((u8 *)temp_s3_2 + 0x10) = 1;
        *(s8 *)((u8 *)temp_s3_2 + 0x11) = 0;
        *(s8 *)((u8 *)temp_s3_2 + 0x12) = 1;
        temp_v0_2 = amTask_Create(NULL, 0, 0x2100, 8);
        *(u8 **)((u8 *)temp_s0 + 0xC) = temp_v0_2;
        temp_s2_2 = temp_v0_2 + 0x30;
        memset(temp_s2_2, 0, 0x14);
        *(u8 *)((u8 *)temp_s2_2 + 0xD) = 1U;
        if (D_005C4124 == 0) {
            *(s32 *)((u8 *)temp_v0_2 + 0x30) = func_0027E2D0(5, 5, 2, -1, 0, 0, 0, 0);
            var_v0_2 = func_00309000;
            *(s32 *)((u8 *)temp_s2_2 + 4) = 0;
            if (func_00309000 == NULL) {
                var_v0_2 = NULL;
            }
            *(void (**)())((u8 *)temp_v0_2 + 0x1C) = var_v0_2;
        } else {
            *(s32 *)((u8 *)temp_v0_2 + 0x30) = 0;
            *(s32 *)((u8 *)temp_s2_2 + 4) = ArenaRegCharList_Start(4, 1, 1);
            var_v0_3 = func_00308D50;
            if (func_00308D50 == NULL) {
                var_v0_3 = NULL;
            }
            *(void (**)())((u8 *)temp_v0_2 + 0x1C) = var_v0_3;
        }
        *(u8 **)((u8 *)temp_s2_2 + 8) = temp_s0;
        *(s8 *)((u8 *)temp_s2_2 + 0xF) = 5;
        *(s8 *)((u8 *)temp_s2_2 + 0x10) = 2;
        *(s8 *)((u8 *)temp_s2_2 + 0x11) = 1;
        *(s8 *)((u8 *)temp_s2_2 + 0x12) = 4;
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 4);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x2000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s0 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x14)) + 4), 0);
        *(s32 *)((u8 *)temp_s0 + 0x18) = 0x41A00000;
        var_v1 = (int *)(&func_003095A0);
        if (&func_003095A0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
