/* Draft (not built): func_0028AAA0 at 0x0028AAA0, size 0x278, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x260, original 0x278
 * Original: asm/nonmatchings/sys/mc_opr/func_0028AAA0.s */

// src/sys/mc_opr.c func_0028AAA0 size diff=72/152
extern s32 D_00470894;
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s64 D_00470050;
extern s32 D_00470850;
extern s32 D_00470860;
extern s32 D_00470888;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028A9E0(void);
extern void func_0028DDF0(void);
void func_0028AAA0(u8 *arg0) {
    u8 sp[0x400];
    s64 sp28;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    void (*var_v1)(u8 *);
    void (*var_v1_2)(u8 *);
    void (*var_v1_3)(u8 *);
    u8 *temp_a0;

    sp28 = D_00470050;
    if (D_00470888 != 0x12) {
        goto block_5;
    }
    if (D_00470860 != 0) {
        goto block_5;
    }
    var_v1 = func_0028A9E0;
    if (func_0028A9E0 != NULL) {
        goto block_4;
    }
    var_v1 = NULL;
block_4:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
block_5:
    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if (temp_v1 == 0) {
        goto block_7;
    }
    if (!((*D_00492FCE | D_00493086) & 0x4000)) {
        goto block_45;
    }
block_7:
    D_00470850 = 0x78;
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_9;
    }
    SoundRpc_Send3(0, 0, 3, 0);
block_9:
    if (D_00470888 == 0x2A) {
        goto block_32;
    }
    if (D_00470888 == 0x29) {
        goto block_32;
    }
    if (D_00470888 == 0x28) {
        goto block_32;
    }
    if (D_00470888 == 0x27) {
        goto block_32;
    }
    if (D_00470888 == 0x26) {
        goto block_32;
    }
    if (D_00470888 == 0x25) {
        goto block_32;
    }
    if (D_00470888 == 0x12) {
        goto block_17;
    }
    goto block_42;
block_17:
    if (D_00470860 == 0) {
        goto block_28;
    }
    temp_a2 = ((s32) D_00470860 >> 1) & 1;
    if (temp_a2 == 0) {
        goto block_22;
    }
    if (!(((s32) D_00470860 >> 2) & 1)) {
        goto block_22;
    }
    func_00288870(0x27, D_00470860, temp_a2);
    D_00470860 = 7;
    return;
block_22:
    if (!(((s32) D_00470860 >> 2) & 1)) {
        goto block_25;
    }
    func_00288870(0x26, D_00470860, temp_a2);
    D_00470860 = 3;
    return;
block_25:
    if (temp_a2 == 0) {
        goto block_45;
    }
    func_00288870(0x25, D_00470860, temp_a2);
    D_00470860 = 1;
    return;
block_28:
    var_v1_2 = func_0028A9E0;
    if (func_0028A9E0 != NULL) {
        goto block_30;
    }
    var_v1_2 = NULL;
block_30:
    goto block_44;
block_32:
    temp_a1 = D_00470860;
    temp_a0 = temp_a1 + sp;
    if (*(s8 *)((u8 *)temp_a0 + 0x28) < 0) {
        goto block_38;
    }
    D_00470860 = temp_a1 - 1;
    func_00288870(*(s8 *)((u8 *)temp_a0 + 0x28), temp_a1);
    var_v1_3 = func_0028DDF0;
    if (func_0028DDF0 != NULL) {
        goto block_35;
    }
    var_v1_3 = NULL;
block_35:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_3;
    if (*(s8 *)((u8 *)(D_00470860 + sp) + 0x28) >= 0) {
        goto block_37;
    }
    D_00470894 = (int)(func_0028A9E0);
    return;
block_37:
    D_00470894 = (int)(func_0028AAA0);
    return;
block_38:
    var_v1_2 = func_0028A9E0;
    if (func_0028A9E0 != NULL) {
        goto block_40;
    }
    var_v1_2 = NULL;
block_40:
    goto block_44;
block_42:
    var_v1_2 = func_0028A9E0;
    if (func_0028A9E0 != NULL) {
        goto block_44;
    }
    var_v1_2 = NULL;
block_44:
    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
block_45:
    return;
}
