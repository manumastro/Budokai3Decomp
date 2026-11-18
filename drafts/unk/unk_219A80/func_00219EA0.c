/* Draft (not built): func_00219EA0 at 0x00219EA0, size 0x184, segment unk/unk_219A80 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x184
 * Original: asm/nonmatchings/unk/unk_219A80/func_00219EA0.s */

// src/unk/unk_219A80.c func_00219EA0 size diff=71/77
void func_00219EA0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_t0;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t1_3;
    u8 *temp_t1_4;
    u8 *var_a0;

    var_t0 = arg0;
    var_a0 = (u8 *)(D_0058A8FC);
    if (var_a0 == &D_0058A900) {
        goto block_31;
    }
    if (var_t0 != 0) {
        goto block_3;
    }
    var_t0 = -1;
block_3:
    if (arg2 == 3) {
        goto loop_30;
    }
    if (arg2 == 2) {
        goto loop_24;
    }
    if (arg2 == 1) {
        goto loop_18;
    }
    if (arg2 == 0) {
        goto loop_12;
    }
    return;
block_8:
    temp_t1 = *(u8 **)((u8 *)var_a0 + 0x1C);
    if (!(*(s32 *)((u8 *)var_a0 + 8) & var_t0)) {
        goto block_11;
    }
    if (!(*(s32 *)((u8 *)var_a0 + 0xC) & M2C_ERROR(/* Read from unset register $a3 */))) {
        goto block_11;
    }
    func_00219D80((struct Node *)(var_a0));
block_11:
    var_a0 = temp_t1;
loop_12:
    if (var_a0 != &D_0058A900) {
        goto block_8;
    }
    return;
block_14:
    temp_t1_2 = *(u8 **)((u8 *)var_a0 + 0x1C);
    if (!(*(s32 *)((u8 *)var_a0 + 8) & var_t0)) {
        goto block_17;
    }
    if (M2C_ERROR(/* Read from unset register $a3 */) != (M2C_ERROR(/* Read from unset register $a3 */) & *(s32 *)((u8 *)var_a0 + 0xC))) {
        goto block_17;
    }
    func_00219D80((struct Node *)(var_a0));
block_17:
    var_a0 = temp_t1_2;
loop_18:
    if (var_a0 != &D_0058A900) {
        goto block_14;
    }
    return;
block_20:
    temp_t1_3 = *(u8 **)((u8 *)var_a0 + 0x1C);
    if (!(*(s32 *)((u8 *)var_a0 + 8) & var_t0)) {
        goto block_23;
    }
    if (*(s32 *)((u8 *)var_a0 + 0xC) & M2C_ERROR(/* Read from unset register $a3 */)) {
        goto block_23;
    }
    func_00219D80((struct Node *)(var_a0));
block_23:
    var_a0 = temp_t1_3;
loop_24:
    if (var_a0 != &D_0058A900) {
        goto block_20;
    }
    return;
block_26:
    temp_t1_4 = *(u8 **)((u8 *)var_a0 + 0x1C);
    if (!(*(s32 *)((u8 *)var_a0 + 8) & var_t0)) {
        goto block_29;
    }
    if (M2C_ERROR(/* Read from unset register $a3 */) == (M2C_ERROR(/* Read from unset register $a3 */) & *(s32 *)((u8 *)var_a0 + 0xC))) {
        goto block_29;
    }
    func_00219D80((struct Node *)(var_a0));
block_29:
    var_a0 = temp_t1_4;
loop_30:
    if (var_a0 != &D_0058A900) {
        goto block_26;
    }
block_31:
    return;
}
