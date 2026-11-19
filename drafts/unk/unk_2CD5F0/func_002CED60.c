/* Draft (not built): func_002CED60 at 0x002CED60, size 0x2B0, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 92 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x2B0
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CED60.s */

// src/unk/unk_2CD5F0.c func_002CED60 size diff=92/144
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 amGs_SetReg64(s32, s32);
s32 func_00133420(s32);
s32 func_00133620(s32, s32, void *, void *);
s32 func_00133720(s32 *, s32 *, s32 *);
s32 func_00133980(s32, s32, s32, s32);
s32 func_00133CE0(s32);
s32 func_00139A80(s32 *, s32 *, s32);
f32 func_0029D550(s32 *, void *, f32);
extern f32 D_0046FD80;
extern void func_001F9DF0(void);
extern void func_001FB760(void *, void *);
extern void *func_001FB7E0(void *);
extern void func_0013B160(void *);
void func_002CED60(u8 *arg0) {
    u8 sp[0x400];
    s32 sp40;
    u8 *sp8C;
    s32 sp98;
    s32 spD0;
    s32 spE0;
    s32 sp120;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    f32 sp174;
    f32 var_f0;
    s32 temp_a0;
    s32 var_s0;
    u8 **temp_s1;
    u8 *temp_a1;
    u8 *temp_v0;

    temp_a0 = *(s32 *)((u8 *)(*D_0051CD00) + 0x1C);
    if (temp_a0 == 0) {
        goto block_2;
    }
    D_00470238 = 0;
    amModel_SetCurrent(temp_a0, 0x02001000);
block_2:
    temp_s1 = *(u8 ***)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 8);
    func_00133CE0(0);
    sp170 = 0x40000000;
    sp174 = 2.0f * 2.0f;
    func_0013B160(*(u8 **)((u8 *)(*temp_s1) + 0x408));
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00139A80(&spE0, &sp160, 0x100);
    func_00133420(1);
    func_00133720(&spE0, &sp120, &sp150);
    var_s0 = 0;
    goto loop_4;
block_3:
    temp_v0 = (var_s0 * 0x10) + sp;
    func_00133620(var_s0, 1, temp_v0 + 0xE0, temp_v0 + 0x120);
    var_s0 += 1;
loop_4:
    if (var_s0 < 4) {
        goto block_3;
    }
    temp_a1 = *(u8 **)((u8 *)gBattle + 0x264);
    if (temp_a1 != NULL) {
        goto block_8;
    }
    var_f0 = D_0046FD80;
    goto block_9;
block_8:
    var_f0 = func_0029D550(&spD0, temp_a1, *(f32 *)((u8 *)temp_a1 + 0x34));
block_9:
    D_0046FD80 = var_f0;
    func_001F3DF0(arg0);
    func_0013E2A0((s32)(*temp_s1));
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    DrawFlags_Apply(0x20000000, 0, 0, 0x20000000);
    amGs_SetReg64(1, 0x42);
    func_0013E170((s32)(*temp_s1));
    amGs_SetReg64(1, 0x44);
    DrawFlags_Apply(0, 0x20000000, 0, 0);
    BtbObj_CheckDrawFlags(arg0);
    func_00133980(0, 0, 0, 0x3F800000);
    DrawFlags_Apply(0x03C00000, 0, 0, 0x400000);
    DrawFlags_Apply(0x700, 0, 0, 0x200);
    DrawFlags_Apply(0x10000000, 0, 0, 0x10000000);
    func_0013E170((s32)(*temp_s1));
    DrawFlags_Apply(0, 0x03C00000, 0, 0);
    DrawFlags_Apply(0, 0x700, 0, 0);
    DrawFlags_Apply(0, 0x10000000, 0, 0);
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    sp8C = *temp_s1;
    sp98 = 0;
    func_001FB760(func_001FB7E0(&sp40), func_001F9DF0);
    func_00133CE0(1);
    return;
}
