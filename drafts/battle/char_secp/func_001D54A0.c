/* Draft (not built): func_001D54A0 at 0x001D54A0, size 0x458, segment battle/char_secp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'spDC' @ 251: if ((spDC < 0.999998f) && !(spDC < 0.6f)) {
 * Original: asm/nonmatchings/battle/char_secp/func_001D54A0.s */

// src/battle/char_secp.c func_001D54A0 cerr diff=-1/0
s32 func_0013B190(s32);
s32 func_001415F0(s32 *, s32, s32, s32);
s32 func_00141920(s32 *, s32 *, s32 *, s32 *);
s32 func_00142080(s32 *, s32 *, s32 *);
s32 func_0029D270(void *, s16, s32);
s32 memcpy(s32 *, s32 *, s32);
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_0013B160(void *);
extern void func_00142100(void *, void *);
void func_001D54A0(u8 *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 spAC;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    s32 sp130;
    s32 sp1B0;
    s32 sp234;
    s32 sp238;
    s32 sp23C;
    s32 *temp_a0;
    s32 *temp_a0_2;
    s32 *temp_a0_3;
    s32 *temp_s0;
    s32 *temp_s3_2;
    s16 temp_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s6;
    s32 var_s7;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_s1;

    spAC = arg3;
    temp_s2 = (u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 0x14) + (arg1 * 0x50));
    temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x40);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a0) */);
    memcpy(&sp130, *(s32 **)((u8 *)((((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x48) << 0x30) >> 0x30) * 4) + arg0) + 8), 0x80);
    memcpy(&sp1B0, *(s32 **)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x40)) + 0x48) * 4) + arg0) + 8), 0x80);
    var_s0 = 1;
    var_s6 = -1;
    var_s7 = 0;
    var_s3 = 0;
    var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x40);
loop_1:
    temp_a1 = *(s16 *)((u8 *)var_s1 + 0x48);
    func_0029D270(arg0, temp_a1, *(s32 *)((u8 *)arg0 + 0x408) + (temp_a1 << 6));
    func_0029D270(arg0, arg1, *(s32 *)((u8 *)arg0 + 0x408) + (arg1 << 6));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp110);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($fp) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp100);
    func_0013B160((void *)(*(s32 *)((u8 *)arg0 + 0x408) + (*(s16 *)((u8 *)var_s1 + 0x48) << 6)));
    func_0013B190(0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00141C30(&spD0, &sp110, &sp100);
    if ((spDC < 0.999998f) && !(spDC < 0.6f)) {
        temp_s3 = *(u8 **)((u8 *)((*(s16 *)((u8 *)var_s1 + 0x48) * 4) + arg0) + 8);
        if (var_s0 == 1) {
            func_00142080(&sp120, &sp120, &spD0);
        }
        temp_a0 = (s32 *)(temp_s3 + 0x40);
        func_00142080(temp_a0, temp_a0, &spD0);
        func_0013B160(temp_s3);
        func_00142100(&spD0, NULL);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s3) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        var_s3 = 1;
    }
    var_s0 += 1;
    var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x40)) + 0x40);
    if (var_s0 >= 2) {
        if (var_s3 != 0) {
            var_s6 = 0;
        } else {
            var_s6 += 1;
        }
        if (var_s6 < 2) {
            var_s0 = 0;
            var_s3 = 0;
            var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x40);
            goto block_13;
        }
    } else {
block_13:
        var_s7 += 1;
        if (var_s7 < 0x11) {
            goto loop_1;
        }
    }
    if (spAC == 0) {
        temp_s1_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x40)) + 0x40);
        temp_s3_2 = *(s32 **)((u8 *)((*(s16 *)((u8 *)temp_s1_2 + 0x48) * 4) + arg0) + 8);
        temp_s0 = *(s32 **)((u8 *)((*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s1_2 + 0x40)) + 0x48) * 4) + arg0) + 8);
        memcpy(temp_s3_2, &sp130, 0x80);
        memcpy(temp_s0, &sp1B0, 0x80);
        func_00141920(&sp23C, &sp238, &sp234, &sp120);
        func_001415F0(&spC0, -sp23C, 0, 0);
        func_001415F0(&spB0, 0, sp238, sp234);
        temp_a0_2 = temp_s3_2 + 0x40;
        func_00142080(temp_a0_2, temp_a0_2, &spC0);
        temp_a0_3 = temp_s0 + 0x40;
        func_00142080(temp_a0_3, temp_a0_3, &spB0);
        func_0013B160(temp_s3_2);
        func_00142100(&spC0, NULL);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s3) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_0013B160(temp_s0);
        func_00142100(&spB0, NULL);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    }
}
