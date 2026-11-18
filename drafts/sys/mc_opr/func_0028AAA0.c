/* Draft (not built): func_0028AAA0 at 0x0028AAA0, size 0x278, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_00288870(s8, s32, s32);                /* extern */
void func_0028A9E0(void *arg0);                     /* extern */
void func_0028DDF0(void *arg0);                     /* extern */
extern s64 D_00470050;
extern s32 D_00470850;
extern s32 D_00470860;
extern s32 D_00470888;
extern void (*D_00470894)(void *);
extern u16 D_00492FCE;
extern u16 D_00493086;
extern f32 D_004E0614;

void func_0028AAA0(void *arg0) {
    s64 sp28;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    void (*var_v1)(void *);
    void (*var_v1_2)(void *);
    void (*var_v1_3)(void *);
    void *temp_a0;

    sp28 = D_00470050;
    if ((D_00470888 == 0x12) && (D_00470860 == 0)) {
        var_v1 = func_0028A9E0;
        if (func_0028A9E0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1;
    }
    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if ((temp_v1 == 0) || ((D_00492FCE | D_00493086) & 0x4000)) {
        D_00470850 = 0x78;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        switch (D_00470888) {                       /* irregular */
        case 18:
            if (D_00470860 != 0) {
                temp_a2 = ((s32) D_00470860 >> 1) & 1;
                if ((temp_a2 != 0) && (((s32) D_00470860 >> 2) & 1)) {
                    func_00288870(0x27, D_00470860, temp_a2);
                    D_00470860 = 7;
                    return;
                }
                if (((s32) D_00470860 >> 2) & 1) {
                    func_00288870(0x26, D_00470860, temp_a2);
                    D_00470860 = 3;
                    return;
                }
                if (temp_a2 != 0) {
                    func_00288870(0x25, D_00470860, temp_a2);
                    D_00470860 = 1;
                    return;
                }
            } else {
                var_v1_2 = func_0028A9E0;
                if (func_0028A9E0 == NULL) {
                    var_v1_2 = NULL;
                }
block_44:
                M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1_2;
            }
            break;
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
            temp_a1 = D_00470860;
            temp_a0 = temp_a1 + sp;
            if (M2C_FIELD(temp_a0, s8 *, 0x28) >= 0) {
                D_00470860 = temp_a1 - 1;
                func_00288870(M2C_FIELD(temp_a0, s8 *, 0x28), temp_a1);
                var_v1_3 = func_0028DDF0;
                if (func_0028DDF0 == NULL) {
                    var_v1_3 = NULL;
                }
                M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1_3;
                if (M2C_FIELD((D_00470860 + sp), s8 *, 0x28) < 0) {
                    D_00470894 = func_0028A9E0;
                    return;
                }
                D_00470894 = func_0028AAA0;
                return;
            }
            var_v1_2 = func_0028A9E0;
            if (func_0028A9E0 == NULL) {
                var_v1_2 = NULL;
            }
            goto block_44;
        default:
            var_v1_2 = func_0028A9E0;
            if (func_0028A9E0 == NULL) {
                var_v1_2 = NULL;
            }
            goto block_44;
        }
    }
}
