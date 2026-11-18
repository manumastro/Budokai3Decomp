/* Draft (not built): func_001D3E10 at 0x001D3E10, size 0x1A4, segment battle/char_parts (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 81 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA4, original 0x1A4
 * Original: asm/nonmatchings/battle/char_parts/func_001D3E10.s */

// src/battle/char_parts.c func_001D3E10 size diff=81/41
s32 func_0013B110(s32);
s32 func_001416A0(void *, void *, void *, void *);
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_0013B060(void *);
void func_001D3E10(u8 *arg0) {
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *var_s3;

    if ((arg0 == NULL) || (*(u8 **)((u8 *)arg0 + 0) == NULL)) {
        return;
    }
    func_0013B0B0(NULL);
    var_s3 = *(u8 **)((u8 *)arg0 + 4);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s1 = *(u8 **)((u8 *)arg0 + 0);
    do {
        func_0013B960((void *)(*(s32 *)((u8 *)temp_s1 + 0x408) + (*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x128)) + 0x48) << 6)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        if (*(s32 *)((u8 *)temp_s2 + 0x18) & 0x10) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($s3) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_001416A0(var_s3 + 0x90, var_s3 + 0x94, var_s3 + 0x98, var_s3 + 0xA0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B060(NULL);
        var_s3 = *(u8 **)((u8 *)var_s3 + 0x124);
    } while (var_s3 != NULL);
    func_0013B110(1);
}
