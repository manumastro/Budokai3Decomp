/* Draft (not built): func_00141CF0 at 0x00141CF0, size 0x178, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x118, original 0x178
 * Original: asm/nonmatchings/sys/amSofdec/func_00141CF0.s */

// src/sys/amSofdec.c func_00141CF0 size diff=90/70
void func_00141CF0(u8 *arg0, u8 *arg1, s128 *arg2) {
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f0 = *(f32 *)((u8 *)arg1 + 0);
    temp_f1 = *(f32 *)((u8 *)arg1 + 4);
    temp_f2 = *(f32 *)((u8 *)arg1 + 8);
    temp_f3 = *(f32 *)((u8 *)arg1 + 0xC);
    temp_f4 = 2.0f * temp_f0;
    temp_f5 = 2.0f * temp_f1;
    temp_f6 = 2.0f * temp_f2;
    temp_f7 = temp_f0 * temp_f4;
    temp_f8 = temp_f0 * temp_f5;
    temp_f9 = temp_f0 * temp_f6;
    temp_f10 = temp_f1 * temp_f5;
    temp_f11 = temp_f1 * temp_f6;
    temp_f12 = temp_f2 * temp_f6;
    temp_f13 = temp_f3 * temp_f4;
    temp_f14 = temp_f3 * temp_f5;
    temp_f15 = temp_f3 * temp_f6;
    if (arg0 != NULL) {
        *(f32 *)((u8 *)arg0 + 0) = (f32) (1.0f - (temp_f10 + temp_f12));
        *(f32 *)((u8 *)arg0 + 4) = (f32) (temp_f8 + temp_f15);
        *(f32 *)((u8 *)arg0 + 8) = (f32) (temp_f9 - temp_f14);
        *(s32 *)((u8 *)arg0 + 0xC) = 0;
        *(f32 *)((u8 *)arg0 + 0x10) = (f32) (temp_f8 - temp_f15);
        *(f32 *)((u8 *)arg0 + 0x14) = (f32) (1.0f - (temp_f7 + temp_f12));
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) (temp_f11 + temp_f13);
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
        *(f32 *)((u8 *)arg0 + 0x20) = (f32) (temp_f9 + temp_f14);
        *(f32 *)((u8 *)arg0 + 0x24) = (f32) (temp_f11 - temp_f13);
        *(f32 *)((u8 *)arg0 + 0x28) = (f32) (1.0f - (temp_f7 + temp_f10));
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        if (arg2 != NULL) {
            *(s128 *)((u8 *)arg0 + 0x30) = (s128) *arg2;
            return;
        }
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, 0x30($a0) */);
        return;
    }
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf28 */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf28, $vf0, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf28, $vf0, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf28, $vf0, $vf0x */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf29 */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf29, $vf0, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf29, $vf0, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf29, $vf0, $vf0x */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf30 */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf30, $vf0, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf30, $vf0, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf30, $vf0, $vf0x */);
    if (arg2 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($a2) */);
        return;
    }
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf0 */);
}
