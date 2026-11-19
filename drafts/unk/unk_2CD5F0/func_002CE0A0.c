/* Draft (not built): func_002CE0A0 at 0x002CE0A0, size 0x1F4, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x1F4
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE0A0.s */

// src/unk/unk_2CD5F0.c func_002CE0A0 size diff=90/72
extern void func_001F5AB0(s32);
s32 memcpy(s8 *, void *, s32);
extern s128 D_00456740;
void func_002CE0A0(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s128 sp50;
    s128 *var_a0;
    s128 *var_a1;
    s32 temp_a0;
    s32 var_s0;
    s32 var_v1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    if (*(s32 *)((u8 *)arg0 + 0x30) == 0) {
        goto block_2;
    }
    memcpy((s8 *)(D_00495718), (void *)(temp_s0 + 0x10), 0x10);
    memcpy((s8 *)(D_00495758), (void *)(temp_s0 + 0x20), 0x10);
block_2:
    func_001F5AB0((s32)(*(u8 **)((u8 *)arg0 + 0x10)));
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((((s32)(D_0051CD20)) * 0x24) + *(s32 *)((u8 *)(&gBtbBg) + 0x34)) + 4)) + 0xA4);
    if (temp_a0 == 0) {
        goto block_4;
    }
    D_00470238 = 1;
    amModel_SetCurrent(temp_a0, 0x02002000);
block_4:
    var_a1 = &D_00456740;
    var_a0 = &sp50;
    var_v1 = 0x2F;
loop_5:
    var_v1 -= 1;
    *var_a0 = *var_a1;
    var_a1 += 0x10;
    var_a0 += 0x10;
    if (var_v1 > 0) {
        goto loop_5;
    }
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp44 = 0.0f;
    sp40 = 450.0f * (f32) sp48;
    sp48 = 450.0f * (f32) (sp48 / 450.0f);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    var_s0 = 0;
    goto loop_8;
block_7:
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013E0A0(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 4));
    func_0013B110(1);
    var_s0 += 1;
loop_8:
    if (var_s0 < 0x2F) {
        goto block_7;
    }
    func_0013B110(1);
    return;
}
