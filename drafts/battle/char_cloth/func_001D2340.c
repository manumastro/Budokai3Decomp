/* Draft (not built): func_001D2340 at 0x001D2340, size 0x238, segment battle/char_cloth (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A4, original 0x238
 * Original: asm/nonmatchings/battle/char_cloth/func_001D2340.s */

// src/battle/char_cloth.c func_001D2340 size diff=116/105
s32 func_0013B110(s32, s32);
s32 func_0013B190(s32);
s32 func_001D18C0(void *);
s32 func_0029D260(void *, s32);
s32 func_0029D690();
f32 func_0029D6B0();
f32 func_0029D850();
s32 func_0029D8A0();
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_0013B060(void *);
void func_001D2340(u8 *arg0) {
    f32 temp_f0;
    s32 temp_s2_2;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    if ((arg0 != NULL) && (func_0029D8A0() == 0)) {
        temp_s4 = *(u8 **)((u8 *)arg0 + 0);
        temp_s2 = *(u8 **)((u8 *)arg0 + 0x6C);
        func_0013B0B0(NULL);
        var_s1 = 0;
loop_4:
        if (var_s1 < *(s32 *)((u8 *)arg0 + 0x48)) {
            func_0013B960((void *)(*(s32 *)((u8 *)temp_s2 + 0x408) + (*(s32 *)((u8 *)((var_s1 * 8) + arg0) + 8) << 6)));
            M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
            func_0013B060(NULL);
            var_s1 += 1;
            goto loop_4;
        }
        func_0013B110(1, 0);
        temp_s3 = *(u8 **)((u8 *)arg0 + 0x6C);
        temp_s2_2 = *(s32 *)((u8 *)arg0 + 0x68) + 0xC0;
        func_0013B0B0(NULL);
        var_s1_2 = 0;
loop_8:
        if (var_s1_2 < *(s32 *)((u8 *)arg0 + 0x64)) {
            func_0029D260(temp_s3, *(s32 *)((u8 *)((var_s1_2 << 6) + *(s32 *)((u8 *)arg0 + 4)) + 0x38));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_0013B060(NULL);
            var_s1_2 += 1;
            goto loop_8;
        }
        func_0013B110(1, 0);
        *(f32 *)((u8 *)temp_s4 + 0x74) = func_0029D6B0();
        func_0029D690();
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_f0 = func_0029D850();
        *(f32 *)((u8 *)temp_s4 + 0x70) = temp_f0;
        if (!(temp_f0 <= 0.0f)) {
            func_001D18C0(temp_s4);
            temp_s1 = *(u8 **)((u8 *)arg0 + 0x6C);
            func_0013B0B0(NULL);
            func_0013B960((void *)(*(s32 *)((u8 *)temp_s1 + 0x408) + (*(s32 *)((u8 *)arg0 + 0x4C) << 6)));
            func_0013B190(0);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            func_0013B110(1, *(s32 *)((u8 *)arg0 + 0x60));
        }
    }
}
