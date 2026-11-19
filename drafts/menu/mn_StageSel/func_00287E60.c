/* Draft (not built): func_00287E60 at 0x00287E60, size 0x19C, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x19C
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00287E60.s */

// src/menu/mn_StageSel.c func_00287E60 size diff=42/109
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0012EAE0(s32);
s32 memset(void *, s32, s32);
extern s32 D_0046B8D8;
extern void *D_0047082C;
extern u16 D_004B4B50;
extern void *amTask_Create();
extern void Help_Load();
extern void func_00287A70(void);
u8 *func_00287E60(s32 arg0, s32 arg1) {
    f32 var_f1;
    s32 temp_v0_3;
    s32 var_s3;
    u16 temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;

    temp_s0 = D_004B4B50;
    temp_s1 = D_0047082C;
    var_s3 = arg1;
    if ((arg1 & 0xFF) >= 0xD) {
        var_s3 = 0;
    }
    temp_v0 = amTask_Create(&func_00287A70, 0, 0x2600, 8);
    *(u8 **)((u8 *)temp_s1 + 0x14) = temp_v0;
    temp_v0_2 = amHeap_Alloc(0x290, 0, &D_0046B8D8, 0x127);
    *(u8 **)((u8 *)temp_v0 + 0x30) = temp_v0_2;
    memset(temp_v0_2, 0, 0x290);
    *(s16 *)((u8 *)temp_v0_2 + 0x23C) = (s16) (arg0 & 0xFF);
    *(s16 *)((u8 *)temp_v0_2 + 0x25E) = (s16) (var_s3 & 0xFF);
    *(s16 *)((u8 *)temp_v0_2 + 0x25C) = -1;
    *(s32 *)((u8 *)temp_v0_2 + 0x270) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x274) = 0;
    *(s8 *)((u8 *)temp_v0_2 + 0x262) = 1;
    *(s8 *)((u8 *)temp_v0_2 + 0x264) = 1;
    *(s8 *)((u8 *)temp_v0_2 + 0x267) = -1;
    temp_v0_3 = (func_0012EAE0(0x20) + 1) & 7;
    if (temp_v0_3 >= 0) {
        var_f1 = (f32) temp_v0_3;
    } else {
        var_f1 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
    }
    *(f32 *)((u8 *)temp_v0_2 + 0x280) = (f32) (60.0f * var_f1);
    *(s8 *)((u8 *)temp_v0_2 + 0x266) = 1;
    *(s32 *)((u8 *)temp_v0_2 + 0x284) = 0;
    *(u8 **)((u8 *)temp_v0_2 + 0x230) = amTask_Create(&func_00286FD0, 0, 0x2680, 8);
    temp_v1 = *(u8 **)((u8 *)temp_v0_2 + 0x230);
    *(s16 *)((u8 *)temp_v1 + 0x34) = -1;
    *(s16 *)((u8 *)temp_v1 + 0x36) = -1;
    func_00286DA0(temp_v0_2, ((temp_s0 & 0xFFFF) | 0x1000) & 0xFFFF);
    Help_Load();
    return temp_v0;
}
