/* Draft (not built): func_002238B0 at 0x002238B0, size 0x4E4, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);                   /* switch 4 */ @ 325: (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4));
 * Original: asm/nonmatchings/unk/unk_21D260/func_002238B0.s */

// src/unk/unk_21D260.c func_002238B0 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_0044F810;
extern s32 D_0046FE18;
extern f32 D_004E0614;
extern s8 D_0058BB32;
extern s8 D_0058BB33;
extern void SoundRpc_Send3();
extern void func_00223DA0(void);
extern void func_002214B0(void);
void func_002238B0(u8 *arg0) {
    s32 *var_s1;
    s32 *var_v0_2;
    s32 *var_v1_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_a1;
    void (*var_v0)(u8 *);
    void (*var_v1)(u8 *);
    void (*var_v1_2)(u8 *);
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (u8 *)(gBtlSys);
    temp_s2 = arg0 + 0x30;
    if ((*(s16 *)((u8 *)temp_s0 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s0 + 0xE46) == 0)) {
        var_s1 = &D_0044F810;
    } else {
        var_s1 = *(*(&D_0046FE18 + (*(s16 *)((u8 *)temp_s0 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s0 + 0xDF0) * 4));
    }
    func_00224680(temp_s2);
    if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
        temp_a1 = *(s32 *)((u8 *)temp_s2 + 0x28);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            break;
        case 0:                                     /* switch 1 */
            temp_f1 = *(f32 *)((u8 *)temp_s2 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)temp_s2 + 0x2C) = temp_f1;
            if (!(temp_f1 < 8.0f)) {
                *(s32 *)((u8 *)temp_s2 + 0x28) = 1;
            }
            break;
        case 2:                                     /* switch 1 */
            temp_f1_2 = *(f32 *)((u8 *)temp_s2 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)temp_s2 + 0x2C) = temp_f1_2;
            if (!(temp_f1_2 < 8.0f)) {
                *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
            }
            break;
        }
        *(f32 *)((u8 *)temp_s2 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x20) + D_00470710);
        goto block_20;
    }
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB36 != 0) {
        *(f32 *)((u8 *)temp_s2 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x20) + D_00470710);
    } else {
        *(f32 *)((u8 *)temp_s2 + 0x20) = 0.0f;
    }
    if (D_0058BB38 != 0) {
block_20:
        temp_a1_2 = *(s32 *)((u8 *)temp_s2 + 4);
        switch (temp_a1_2) {                        /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            temp_f1_3 = *(f32 *)((u8 *)temp_s2 + 0x1C) + D_00470710;
            *(f32 *)((u8 *)temp_s2 + 0x1C) = temp_f1_3;
            if (!(temp_f1_3 < 8.0f)) {
                *(s32 *)((u8 *)temp_s2 + 4) = 4;
                var_v1 = func_002238B0;
                *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
                if (func_002238B0 == NULL) {
                    var_v1 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
                return;
            }
            break;
        case 4:                                     /* switch 2 */
            var_a1 = 1;
            temp_v1 = *(s32 *)((u8 *)((*(s16 *)((u8 *)temp_s2 + 8) * 0xC) + var_s1) + 4);
            switch (temp_v1) {                      /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                if (D_0058BB32 != 0) {
                    if (*(s16 *)((u8 *)temp_s2 + 0xA) == 0) {
                        var_a1 = 0;
                    }
                } else {
                    if (*D_0058BB30 != 0) {
                        *(s16 *)((u8 *)temp_s2 + 0xA) = (s16) (*(s16 *)((u8 *)temp_s2 + 0xA) ^ 1);
                        SoundRpc_SetVolume(0, 0, D_004E0614);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(0, 0, 2, 0);
                        }
                    }
                    if (D_0058BB33 != 0) {
                        var_a1 = 1;
                    } else {
                        var_a1 = -1;
                    }
                }
                switch (var_a1) {                   /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    *(s32 *)((u8 *)temp_s2 + 4) = 5;
                    *(s16 *)((u8 *)temp_s0 + 0xE44) = -1;
                    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 5, 0);
                        return;
                    }
                    break;
                case 0:                             /* switch 4 */
                    *(s32 *)((u8 *)temp_s2 + 4) = 2;
                    var_v0 = func_00223DA0;
                    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
                    if (func_00223DA0 == NULL) {
                        var_v0 = NULL;
                    }
                    *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v0;
                    var_v0_2 = (s32 *)(&func_002214B0);
                    if (&func_002214B0 == NULL) {
                        var_v0_2 = NULL;
                    }
                    *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 3, 0);
                        return;
                    }
                    break;
                }
                break;
            case 1:                                 /* switch 3 */
                if (func_00221E10(temp_s2, 1) != -2) {
                    *(s32 *)((u8 *)temp_s2 + 4) = 5;
                    *(s16 *)((u8 *)temp_s0 + 0xE44) = -1;
                    *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 5, 0);
                        return;
                    }
                }
                break;
            }
            break;
        case 5:                                     /* switch 2 */
            temp_f1_4 = *(f32 *)((u8 *)temp_s2 + 0x1C) + D_00470710;
            *(f32 *)((u8 *)temp_s2 + 0x1C) = temp_f1_4;
            if (!(temp_f1_4 < 8.0f)) {
                *(s32 *)((u8 *)temp_s2 + 4) = 1;
                var_v1_2 = func_00223DA0;
                *(f32 *)((u8 *)temp_s2 + 0x1C) = 0.0f;
                *(s16 *)((u8 *)temp_s2 + 0xA) = 0;
                if (func_00223DA0 == NULL) {
                    var_v1_2 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
                var_v1_3 = (s32 *)(&func_002214B0);
                if (&func_002214B0 == NULL) {
                    var_v1_3 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v1_3;
            }
            break;
        }
    } else {
    case -1:                                        /* switch 4 */
    }
}
