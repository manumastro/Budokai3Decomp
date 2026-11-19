/* Draft (not built): func_001D53D0 at 0x001D53D0, size 0xCC, segment battle/char_secp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA4, original 0xCC
 * Original: asm/nonmatchings/battle/char_secp/func_001D53D0.s */

// src/battle/char_secp.c func_001D53D0 size diff=22/41
s32 func_0013B110(s32);
extern void **D_004705C0;
extern s32 D_004705D0;
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
void func_001D53D0(u8 *arg0) {
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_s0;

    var_s0 = arg0;
    func_0013B0B0(NULL);
    do {
        temp_a0 = *D_004705C0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        if (temp_a0 != NULL) {
            func_0013B960(temp_a0);
        } else {
            func_00142100(var_s0, NULL);
        }
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
        D_004705C0 += 4;
        D_004705D0 += 0x40;
        temp_a0_2 = *(u8 **)((u8 *)var_s0 + 0x38);
        if (temp_a0_2 != NULL) {
            func_001D53D0(temp_a0_2);
        }
        var_s0 = *(u8 **)((u8 *)var_s0 + 0x3C);
        func_0013B060(NULL);
    } while (var_s0 != NULL);
    func_0013B110(1);
}

/* Similar function already in C: amMotion_WalkTreeRest (src/sys/amMotion.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
void amMotion_WalkTreeRest(Bone *b) {
    func_0013B0B0(0);
    while (b) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw $ACC, $vf28, $vf1x\n"
            "vmadday.xyzw $ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw $ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(b->pos));
        func_00142100(b, 0);
        __asm__ volatile (
            "sqc2 $vf28, 0(%0)\n"
            "sqc2 $vf29, 0x10(%0)\n"
            "sqc2 $vf30, 0x20(%0)\n"
            "sqc2 $vf31, 0x30(%0)\n"
            : : "r"(D_00470300));
        D_00470300 += 0x40;
        if (b->child) amMotion_WalkTreeRest(b->child);
        b = b->next;
        func_0013B060(0);
    }
    func_0013B110(1);
}
#endif
