/* Draft (not built): func_002A5870 at 0x002A5870, size 0x288, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x260, original 0x288
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5870.s */

// src/story/evt_scrp.c func_002A5870 size diff=64/152
extern s32 D_004700A8;
void func_002A7160(s32 a0);
s32 func_002A94B0(s32, s32, s32);
extern void func_002A5420(void);
void func_002A5870(void) {
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_a2;

    temp_a0 = D_004700A0;
    if (D_004708D8 > 0) {
        EvtScrp_Init();
        temp_s0 = gEvtWork;
        func_0029AC30();
        *(Task **)((u8 *)temp_s0 + 8) = amTask_Create((void (*)(struct Task *))func_002A5420, NULL, 0x3000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        return;
    }
    temp_a2 = D_004700A8;
    if (temp_a2 == -1) {
        if (temp_a0 != -1) {
            D_004700A0 = -1;
            func_002A94B0(temp_a0, -1, temp_a2);
            temp_s0_2 = gEvtWork;
            if (temp_s0_2 != NULL) {
                *(s32 *)((u8 *)temp_s0_2 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0xC) | 1);
                if (*(s32 *)((u8 *)temp_s0_2 + 0x124) >= 0) {
                    *(Task **)((u8 *)temp_s0_2 + 0x128) = amTask_Create((void (*)(Task *)) func_002A7160, NULL, 0x8000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
                    *(s32 *)((u8 *)temp_s0_2 + 0x12C) = 0;
                }
            }
        }
        return;
    }
    switch (temp_a2) {
    case -3221225469:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = gEvtWork;
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(Task **)((u8 *)var_s0 + 0x128) = amTask_Create((void (*)(Task *)) func_002A7160, NULL, 0x8000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
block_27:
                *(s32 *)((u8 *)var_s0 + 0x12C) = 0;
            }
        }
        break;
    case -3221225471:
    case -3221225467:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = gEvtWork;
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(Task **)((u8 *)var_s0 + 0x128) = amTask_Create((void (*)(Task *)) func_002A7160, NULL, 0x8000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
                goto block_27;
            }
        }
        break;
    case -3221225472:
    case -3221225468:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = gEvtWork;
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(Task **)((u8 *)var_s0 + 0x128) = amTask_Create((void (*)(Task *)) func_002A7160, NULL, 0x8000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
                goto block_27;
            }
        }
        break;
    case -3221225470:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = gEvtWork;
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(Task **)((u8 *)var_s0 + 0x128) = amTask_Create((void (*)(Task *)) func_002A7160, NULL, 0x8000, 0x4000, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
                goto block_27;
            }
        }
        break;
    }
}
