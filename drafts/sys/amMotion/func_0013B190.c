/* Draft (not built): func_0013B190 at 0x0013B190, size 0x11C, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x78, original 0x11C
 * Original: asm/nonmatchings/sys/amMotion/func_0013B190.s */

// src/sys/amMotion.c func_0013B190 size diff=68/30
extern s32 D_0047E000;
extern s32 D_0047E010;
extern s32 D_0047E018;
extern s32 D_0047E020;
extern s32 D_0047E024;
void func_0013B190(u8 *arg0) {
    s32 temp_t5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;

    if (arg0 == NULL) {
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, %lo(D_0047E000)($at) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, %lo(D_0047E010)($at) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, %lo(D_0047E020)($at) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, %lo(D_0047E030)($at) */);
        temp_v1 = D_0047E010;
        temp_t5 = D_0047E020;
        D_0047E010 = *(s32 *)((u8 *)(&D_0047E000) + 4);
        *(s32 *)((u8 *)(&D_0047E000) + 4) = temp_v1;
        D_0047E020 = *(s32 *)((u8 *)(&D_0047E000) + 8);
        *(s32 *)((u8 *)(&D_0047E000) + 8) = temp_t5;
        temp_v1_2 = D_0047E024;
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf31, $vf0, $vf31 */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, %lo(D_0047E000)($at) */);
        D_0047E024 = D_0047E018;
        D_0047E018 = temp_v1_2;
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, %lo(D_0047E020)($at) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, %lo(D_0047E010)($at) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf31x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf31y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf31z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf0, $vf31w */);
        return;
    }
    temp_v1_3 = *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 4);
    *(s32 *)((u8 *)arg0 + 4) = temp_v1_3;
    temp_v1_4 = *(s32 *)((u8 *)arg0 + 0x20);
    *(s32 *)((u8 *)arg0 + 0x20) = (s32) *(s32 *)((u8 *)arg0 + 8);
    *(s32 *)((u8 *)arg0 + 8) = temp_v1_4;
    temp_v1_5 = *(s32 *)((u8 *)arg0 + 0x24);
    *(s32 *)((u8 *)arg0 + 0x24) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
    *(s32 *)((u8 *)arg0 + 0x18) = temp_v1_5;
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf4, $vf0, $vf4 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf1, $vf4x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf2, $vf4y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf3, $vf4z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf4, $vf0, $vf4w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a0) */);
}
