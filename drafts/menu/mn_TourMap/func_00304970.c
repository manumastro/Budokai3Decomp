/* Draft (not built): func_00304970 at 0x00304970, size 0x37C, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 128 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x314, original 0x37C
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00304970.s */

// src/menu/mn_TourMap.c func_00304970 size diff=128/197
extern u8 D_005D0082[];
extern void *amTask_Create();
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_00143B50(s32, s32);
s32 func_00264140(s32, s32);
extern f32 D_004E0614;
extern s32 func_00302450;
extern s32 func_00303A30;
extern s32 gSoundState;
extern void SoundRpc_Send3();
extern void amSound_LoadBank();
extern void amSound_LoadStream();
extern void func_00300D20(void);
extern void func_00301530(void);
void func_00304970(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 *var_v0_2;
    s32 *var_v1_2;
    s32 temp_a1;
    s32 temp_v1;
    void (*var_v0)();
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x30);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        sp40 = 1;
        sp48 = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x18)) + 0x48);
        sp50 = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x18)) + 0x54);
        sp44 = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x1C)) + 0x48);
        sp4C = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x1C)) + 0x54);
        amSound_LoadStream(&sp40, temp_a1);
        *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
        return;
    case 1:                                         /* switch 1 */
        if (gSoundState == 0) {
            sp30 = 1;
            sp34 = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x20)) + 0x48);
            sp38 = *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x20)) + 0x54);
            amSound_LoadBank(&sp30, temp_a1);
            *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        return;
    case 2:                                         /* switch 1 */
        if (gSoundState == 0) {
            func_00143B50(0xA, 1);
            amCdFs_Close(*(u8 **)((u8 *)gTourMap + 0x18), 0);
            amCdFs_Close(*(u8 **)((u8 *)gTourMap + 0x1C), 0);
            amCdFs_Close(*(u8 **)((u8 *)gTourMap + 0x20), 0);
            *(u8 **)((u8 *)gTourMap + 0x18) = NULL;
            *(u8 **)((u8 *)gTourMap + 0x1C) = NULL;
            *(u8 **)((u8 *)gTourMap + 0x20) = NULL;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
        default:                                    /* switch 1 */
            *(u8 **)((u8 *)gTourMap + 0x44) = amTask_Create(0, 0, 0x3010, 0x200);
            temp_s0 = *(u8 **)((u8 *)gTourMap + 0x44) + 0x30;
            memset(temp_s0, 0, 0x1C);
            *(f32 *)((u8 *)temp_s0 + 0x18) = (f32) ((f32) (s8) *D_005D0082 / 3.0f);
            *(u8 **)((u8 *)gTourMap + 0x40) = amTask_Create(0, 0, 0x3020, 0x200);
            temp_s0_2 = *(u8 **)((u8 *)gTourMap + 0x40) + 0x30;
            memset(temp_s0_2, 0, 0x20);
            func_00264140(-1, 0);
            temp_v1 = *(s32 *)((u8 *)gTourMap + 0x48);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                *(s32 *)((u8 *)gTourMap + 0x7C) = 0;
                var_v0 = func_00301530;
                *(s32 *)((u8 *)gTourMap + 0xDC) = 3;
                temp_a0 = *(u8 **)((u8 *)gTourMap + 0x44);
                *(s32 *)((u8 *)temp_a0 + 0x30) = 0;
                *(s32 *)((u8 *)temp_a0 + 0x34) = 0;
                *(s32 *)((u8 *)temp_a0 + 0x38) = 0x42C80000;
                if (func_00301530 == NULL) {
                    var_v0 = NULL;
                }
                *(void (**)())((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x1C) = var_v0;
                var_v0_2 = &func_00303A30;
                if (&func_00303A30 == NULL) {
                    var_v0_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
                SoundRpc_SetVolume(1, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 6, 0);
                }
                *(s32 *)((u8 *)gTourMap + 0x68) = 1;
                return;
            case 3:                                 /* switch 2 */
                *(s32 *)((u8 *)gTourMap + 0x7C) = 1;
                var_v1 = func_00300D20;
                *(s32 *)((u8 *)gTourMap + 0xDC) = 4;
                *(s32 *)((u8 *)gTourMap + 0xE4) = 0x3E8;
                *(s32 *)((u8 *)gTourMap + 0xB4) = 0x3E8;
                *(s32 *)((u8 *)gTourMap + 0x114) = 0x3E8;
                *(s32 *)((u8 *)gTourMap + 0x144) = 0x3E8;
                temp_a0_2 = *(u8 **)((u8 *)gTourMap + 0x44);
                temp_a1_2 = (unsigned char *)(gTourMap + (*(s16 *)((u8 *)gTourMap + 0x66) * 0x14));
                *(f32 *)((u8 *)temp_a0_2 + 0x30) = (f32) *(f32 *)((u8 *)temp_a1_2 + 0x2F8);
                *(f32 *)((u8 *)temp_a0_2 + 0x34) = (f32) *(f32 *)((u8 *)temp_a1_2 + 0x2FC);
                *(s32 *)((u8 *)temp_a0_2 + 0x38) = 0;
                if (func_00300D20 == NULL) {
                    var_v1 = NULL;
                }
                *(void (**)())((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x1C) = var_v1;
                var_v1_2 = &func_00302450;
                if (&func_00302450 == NULL) {
                    var_v1_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
                *(s32 *)((u8 *)temp_s0_2 + 4) = 0x3F800000;
                break;
            }
        }
        break;
    }
}
