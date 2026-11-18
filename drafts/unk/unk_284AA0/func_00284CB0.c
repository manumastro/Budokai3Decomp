/* Draft (not built): func_00284CB0 at 0x00284CB0, size 0x254, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 102 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x254
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00284CB0.s */

// src/unk/unk_284AA0.c func_00284CB0 size diff=102/113
s32 amMotion_Apply(void *, s32, void *, void *, s32, s32);
s32 amMotion_BindAnim(void *, s32, s32);
void *amMotion_CreateFromObj(void *, s32, s32);
s32 func_00133420(s32);
s32 func_00133CE0(s32);
s32 func_00139A80(void *, void *, s32, void *);
extern s128 D_004535A0;
extern s128 D_004535B0;
extern s128 D_004535C0;
extern s32 D_0047CAD0;
extern void *amObject_Create(void *, void *);
extern void *amNode_Alloc(void);
void func_00284CB0(u8 *arg0) {
    s128 sp40;
    s128 sp50;
    s128 sp60;
    s32 temp_v1;
    s32 var_s1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_v1_2;
    u8 *var_a1;

    *(u8 **)((u8 *)arg0 + 0xE0) = amObject_Create(*(u8 **)((u8 *)arg0 + 8), NULL);
    *(u8 **)((u8 *)arg0 + 0xE4) = amMotion_CreateFromObj(*(u8 **)((u8 *)arg0 + 0xE0), 0, 0);
    amMotion_BindAnim(*(u8 **)((u8 *)arg0 + 0xE4), 0, *(s32 *)((u8 *)arg0 + 0x10));
    var_a1 = *(u8 **)((u8 *)arg0 + 0xE4);
    *(s32 *)((u8 *)arg0 + 0x234) = (s32) *(s32 *)((u8 *)((0 * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_a1) + 0x46C)) + 0x14)) + 8);
    temp_a3 = *(u8 **)((u8 *)arg0 + 0xE4);
    temp_a2 = temp_a3 + 0x41C;
    if (*(s32 *)((u8 *)temp_a3 + 0x41C) == 0x10000) {
        goto block_5;
    }
    var_a1 = NULL;
    goto loop_3;
block_2:
    temp_v1 = (s32) var_a1 << 6;
    var_a1 += 1;
    *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x30) = -1;
    *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x34) = -1;
    *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x38) = -1;
loop_3:
    if ((s32) var_a1 < *(s32 *)((u8 *)temp_a3 + 0x418)) {
        goto block_2;
    }
    *(s32 *)((u8 *)temp_a2 + 0xC) = 0xBF800000;
block_5:
    *(s32 *)((u8 *)temp_a3 + 0x41C) = 0x10000;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xE4)) + 0x424) = 0;
    amMotion_Apply(*(u8 **)((u8 *)arg0 + 0xE4), (s32) var_a1, temp_a2, temp_a3, 0, 0x3F800000);
    var_s1 = 0;
    sp60 = D_004535A0;
    sp50 = D_004535B0;
    sp40 = D_004535C0;
    goto loop_9;
block_6:
    temp_v1_2 = arg0 + (var_s1 * 0x30);
    *(s32 *)((u8 *)temp_v1_2 + 0x180) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 0x184) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 0x188) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 0x190) = 0x40A00000;
    *(u8 **)((u8 *)temp_v1_2 + 0x170) = amNode_Alloc();
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)(&D_0047CAD0) + 0xC) = 0.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 0x170)) + 0x30) = 0;
    temp_a3_2 = *(u8 **)((u8 *)temp_v1_2 + 0x170);
    if (!(((0x100 << var_s1) | 3) & 0xFFFF & 0xFFFF & 0x30)) {
        goto block_8;
    }
    *(u16 *)((u8 *)temp_a3_2 + 0x32) = (u16) (*(u16 *)((u8 *)temp_a3_2 + 0x32) & 0xFFCF);
block_8:
    *(u16 *)((u8 *)temp_a3_2 + 0x32) = (u16) (*(u16 *)((u8 *)temp_a3_2 + 0x32) | (((0x100 << var_s1) | 3) & 0xFFFF));
    func_00139A80(arg0 + 0xF0, temp_v1_2 + 0x170 + 0x10, 0, temp_a3_2);
    var_s1 += 1;
loop_9:
    if (var_s1 < 4) {
        goto block_6;
    }
    func_00133420(1);
    func_00133CE0(0);
    return;
}
