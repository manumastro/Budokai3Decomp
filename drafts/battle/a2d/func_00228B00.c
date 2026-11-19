/* Draft (not built): func_00228B00 at 0x00228B00, size 0x498, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 209 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x504, original 0x498
 * Original: asm/nonmatchings/battle/a2d/func_00228B00.s */

// src/battle/a2d.c func_00228B00 size diff=209/321
s32 memcpy(f32 *, s32 *, s32);
void func_00228B00(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    s32 sp2F;
    s32 sp2E;
    s32 sp2D;
    f32 sp24;
    s32 sp28;
    u8 sp2C;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f12;
    s16 temp_a0_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 var_a2;
    u8 *temp_a1;
    u8 *temp_t1;
    u8 *temp_v1;

    var_a2 = arg2;
    var_f12 = fparg0;
    if (arg0 == NULL) {
        goto block_38;
    }
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0 == 0) {
        goto block_38;
    }
    if (arg0 == NULL) {
        goto block_5;
    }
    if (temp_a0 != 0) {
        goto block_7;
    }
block_5:
    var_f12 = 0.0f;
    goto block_12;
block_7:
    if (!(*(s32 *)((u8 *)arg0 + 0) & 4)) {
        goto block_9;
    }
    var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xE)) + (var_f12 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
    goto block_12;
block_9:
    temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 0xE);
    if (var_f12 < temp_f0) {
        goto block_12;
    }
    var_f12 = temp_f0;
block_12:
    if (var_a2 >= 0) {
        goto block_16;
    }
    if (var_f12 != (f32) *(s16 *)((u8 *)arg0 + 0xE)) {
        goto block_15;
    }
    var_a2 = *(s16 *)((u8 *)arg0 + 0xC) - 1;
    goto block_16;
block_15:
    var_a2 = func_002270B0(temp_a0, *(s16 *)((u8 *)arg0 + 0xC), -1, var_f12);
block_16:
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x2C);
    temp_t1 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x28) + (var_a2 * 4));
    temp_a3 = *(s16 *)((u8 *)temp_t1 + 2);
    temp_a1 = temp_v1 + (var_a2 << 5);
    if (temp_a3 == 3) {
        goto block_39;
    }
    if (temp_a3 == 2) {
        goto block_39;
    }
    if (temp_a3 == 1) {
        goto block_23;
    }
    if (temp_a3 == 0) {
        goto block_21;
    }
    return;
block_21:
    *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
    *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
    *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
    *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
    *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
    *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
    return;
block_23:
    temp_a3_2 = *(s16 *)((u8 *)temp_t1 + 0);
    temp_f2 = M2C_ERROR(/* Read from unset register $f12 */) - (f32) temp_a3_2;
    if (!(temp_f2 < 0.00001f)) {
        goto block_25;
    }
    *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
    *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
    *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
    *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
    *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
    *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
    return;
block_25:
    if (var_a2 != (*(s16 *)((u8 *)arg0 + 0xC) - 1)) {
        goto block_33;
    }
    if (!(*(s32 *)((u8 *)arg0 + 0) & 4)) {
        goto block_31;
    }
    temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xE);
    if (!(((f32) temp_a0_2 - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f)) {
        goto block_30;
    }
    *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_v1 + 0);
    *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_v1 + 4);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_v1 + 8);
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_v1 + 0xC);
    *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_v1 + 0x10);
    *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_v1 + 0x11);
    *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_v1 + 0x12);
    *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_v1 + 0x13);
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_v1 + 0x14);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1 + 0x18);
    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_v1 + 0x1C);
    return;
block_30:
    func_002273B0(arg1, temp_a1, temp_v1, temp_a3_2, temp_f2 / (f32) (((s64) ((s64) temp_a0_2 << 0x30) >> 0x30) - ((s64) ((s64) temp_a3_2 << 0x30) >> 0x30)));
    return;
block_31:
    *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
    *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
    *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
    *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
    *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
    *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
    return;
block_33:
    temp_v1_2 = *(s16 *)((u8 *)temp_t1 + 4);
    if (!(((f32) temp_v1_2 - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f)) {
        goto block_36;
    }
    *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0x20);
    *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 0x24);
    *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 0x28);
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0x2C);
    *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x30);
    *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x31);
    *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x32);
    *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x33);
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x34);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x38);
    *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x3C);
    return;
block_36:
    func_002273B0(arg1, temp_a1, temp_a1 + 0x20, temp_a3_2, temp_f2 / (f32) (((s64) ((s64) temp_v1_2 << 0x30) >> 0x30) - ((s64) ((s64) temp_a3_2 << 0x30) >> 0x30)));
    return;
block_38:
    *(s32 *)((u8 *)arg1 + 0xC) = 0x3F800000;
    *(s32 *)((u8 *)arg1 + 8) = 0x3F800000;
    *(s32 *)((u8 *)arg1 + 4) = 0x3F800000;
    *(s32 *)((u8 *)arg1 + 0) = 0x3F800000;
    sp28 = 0;
    memcpy(&sp24, &sp28, 4);
    sp2C = (f32) sp24;
    *(u8 *)((u8 *)arg1 + 0x10) = sp2C;
    *(u8 *)((u8 *)arg1 + 0x11) = sp2D;
    *(u8 *)((u8 *)arg1 + 0x12) = sp2E;
    *(u8 *)((u8 *)arg1 + 0x13) = sp2F;
    *(s32 *)((u8 *)arg1 + 0x14) = 1;
block_39:
    return;
}
