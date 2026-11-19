/* Draft (not built): func_002661D0 at 0x002661D0, size 0x1C0, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x1C0
 * Original: asm/nonmatchings/menu/mn_dataload/func_002661D0.s */

// src/menu/mn_dataload.c func_002661D0 size diff=66/109
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0022D670(s32, s32);
s32 func_002C0630(s32, s32, s32);
extern s32 D_0046B3C0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0610;
extern void *amTask_Create();
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Help_Load();
extern char D_004B4BC0[];
void func_002661D0(s32 arg0, u8 *arg1) {
    s32 var_f12;
    f32 var_f0;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v0 = amTask_Create(&func_00266150, 0, 0x2000, 8);
    *(u8 **)((u8 *)temp_v0 + 0x30) = arg1;
    temp_v0_2 = amHeap_Alloc(0x58, 0, &D_0046B3C0, 0x7E);
    *(u8 **)((u8 *)(temp_v0 + 0x30) + 4) = temp_v0_2;
    *(u8 **)((u8 *)temp_v0_2 + 0) = (u8 *) *(u8 **)((u8 *)arg1 + 0);
    *(u8 **)((u8 *)temp_v0_2 + 4) = (u8 *) *(u8 **)((u8 *)arg1 + 4);
    *(u8 *)((u8 *)temp_v0_2 + 0x31) = (u8) ((*D_004B4BC0 == 0) ? 2U : 3U);
    *(s8 *)((u8 *)temp_v0_2 + 0x30) = 0;
    *(s16 *)((u8 *)temp_v0_2 + 0x32) = 0;
    if (arg0 & 1) {
        var_f0 = 0.0f;
    } else {
        var_f0 = 30.0f;
    }
    *(f32 *)((u8 *)temp_v0_2 + 0x34) = var_f0;
    *(s32 *)((u8 *)temp_v0_2 + 0x38) = 0x43340000;
    *(s32 *)((u8 *)temp_v0_2 + 0x3C) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x40) = 0x3F800000;
    *(s32 *)((u8 *)temp_v0_2 + 0x44) = 0;
    if (*(u8 *)((u8 *)temp_v0_2 + 0x31) == 3) {
        *(s8 *)((u8 *)temp_v0_2 + 0x30) = 2;
    }
    temp_a0 = *(u8 **)((u8 *)temp_v0_2 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000, *D_004B4BC0);
    D_00470238 = 0;
    var_f12 = 0;
    if (!(*(f32 *)((u8 *)temp_v0_2 + 0x34) <= 0.0f)) {

    } else {
        var_f12 = 0x42700000;
    }
    *(s32 *)((u8 *)temp_v0_2 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0)) + 0x1C)) + 0x10C), var_f12);
    *(s32 *)((u8 *)temp_v0_2 + 0xC) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x10) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x14) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x18) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x1C) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x24) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x28) = 0;
    amAdx_SetVolume(0, D_004E0610);
    amAdx_PlayAfs(0, 0x210A4, 0);
    amAdx_Pause(0, 0);
    *(s32 *)((u8 *)temp_v0_2 + 0x4C) = func_002C0630(0x10812, 0x3000, 0);
    Help_Load();
}
