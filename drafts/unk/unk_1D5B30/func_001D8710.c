/* Draft (not built): func_001D8710 at 0x001D8710, size 0x2CC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 122 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x224, original 0x2CC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D8710.s */

// src/unk/unk_1D5B30.c func_001D8710 size diff=122/137
extern void func_0013B160(void *);
extern void func_001E8640(Fighter *c, s32 mask);
extern void func_001E8630();
extern void func_0013B620(void *);
extern char D_003F0800[];
s32 func_001D41F0(s32);
extern s32 D_00492FCC;
void func_001D8710(u8 *arg0) {
    u8 *sp40;
    s32 sp44;
    s16 sp48;
    s16 temp_a0_2;
    s16 var_a1_2;
    s32 var_a1;
    s32 var_a1_3;
    s8 temp_a0;
    u16 temp_v1;
    u8 *temp_v0;
    u8 *var_a2;

    var_a1 = 0;
    goto loop_5;
block_1:
    temp_v0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + (var_a1 * 4));
    temp_a0 = *(s8 *)((u8 *)temp_v0 + 0x64);
    var_a2 = temp_v0 + 0x64;
    if (temp_a0 == -1) {
        goto block_7;
    }
    if (temp_a0 != *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xB9C)) {
        goto block_4;
    }
    goto block_8;
block_4:
    var_a1 += 1;
loop_5:
    if (var_a1 < 0xC) {
        goto block_1;
    }
block_7:
    var_a2 = NULL;
block_8:
    if (var_a2 == NULL) {
        goto block_11;
    }
    *(s16 *)((u8 *)arg0 + 0x1ABA) = (s16) *(s8 *)((u8 *)var_a2 + 2);
    *(s16 *)((u8 *)arg0 + 0x1ABC) = (s16) *(s8 *)((u8 *)var_a2 + 3);
    goto block_12;
block_11:
    *(s16 *)((u8 *)arg0 + 0x1ABA) = -1;
    *(s16 *)((u8 *)arg0 + 0x1ABC) = -1;
block_12:
    var_a1_2 = *(s16 *)((u8 *)arg0 + 0x1ABA);
    if (var_a1_2 >= 0) {
        goto block_19;
    }
    temp_a0_2 = *(s16 *)((u8 *)arg0 + 0x13A4);
    var_a1_3 = (func_0012EAE0(0x20) / 10) & 1;
    if (temp_a0_2 < 0) {
        goto block_18;
    }
    temp_v1 = *(&D_00492FCC + (temp_a0_2 * 0xB8));
    if (!(temp_v1 & 0x4000)) {
        goto block_16;
    }
    var_a1_3 = 1;
    goto block_18;
block_16:
    if (!(temp_v1 & 0x1000)) {
        goto block_18;
    }
    var_a1_3 = 0;
block_18:
    var_a1_2 = var_a1_3 + (*(s32 *)((u8 *)arg0 + 0xBA4) * 2);
block_19:
    *(s32 *)((u8 *)arg0 + 0x19F4) = 0x3F000000;
    *(s32 *)((u8 *)arg0 + 0x19F8) = 0x3F000000;
    *(s32 *)((u8 *)arg0 + 0x19FC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A00) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A04) = 0;
    *(s32 *)((u8 *)arg0 + 0x18C0) = 0;
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (var_a1_2 + 0x280);
    *(s16 *)((u8 *)arg0 + 0xCB6) = 2;
    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
    func_001C75D0((void *)(arg0), 0xF);
    sp40 = arg0;
    sp48 = -1;
    sp44 = 0;
    *(f32 *)((u8 *)arg0 + 0x1844) = func_00200270(0, *(f32 *)((u8 *)arg0 + 0x650), *(f32 *)((u8 *)arg0 + 0x658));
    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xCBD) = 1;
    if (0 != 0) {
        goto block_21;
    }
block_21:
    func_0013B160(D_003F0800);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013B620(*(u8 **)((u8 *)arg0 + 0x17A4));
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_001E8640((struct Fighter *)(arg0 + 0x650), -1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)arg0 + 0x84) = (f32) (*(f32 *)((u8 *)arg0 + 0x84) + **(f32 **)((u8 *)arg0 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        goto block_24;
    }
    goto block_25;
block_24:
block_25:
    *(f32 *)((u8 *)arg0 + 0x64) = *(f32 *)((u8 *)arg0 + 0x44);
    func_001E8630(arg0 + 0x650);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001D41F0(*(s32 *)((u8 *)arg0 + 0xB84));
    return;
}
