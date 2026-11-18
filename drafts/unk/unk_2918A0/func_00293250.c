/* Draft (not built): func_00293250 at 0x00293250, size 0x298, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mwccps2.exe Compiler: 332: *(s32 *)((u8 *)D_005AA604 + 0x1200) = sp5C; @ 324: *(s8 *)((u8 *)D_005AA604 + 0x11E7) = sp54;
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00293250.s */

// src/unk/unk_2918A0.c func_00293250 cerr diff=-1/0
s32 Fade_Request(s32, s32, s32);
s32 StrMap_Start(s32, s32, s32);
s32 StrStatus_Dispatch(s32 *);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_0028EB40(void *, s32, s32, s32);
s32 func_0029AAC0(s32, s32, s32);
extern s32 D_00453D20;
extern s32 D_0046FD80;
extern s32 D_004708AC;
extern f32 D_004E0610;
extern void *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern s32 D_005AA618;
extern s32 D_005AA61C;
extern s32 D_005AA628;
extern s32 D_005AA630;
extern s32 D_005AA63C;
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void amAdx_Pause();
extern char *gStrStatus;
extern void func_002BD400(void *);
extern void StrStatus_Free(void);
void func_00293250(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp50;
    s32 sp55;
    s32 temp_a0;
    void (*var_v0)();
    void (*var_v1)();

    temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x27C);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        func_00291BF0();
        /* fallthrough */
    case 2:                                         /* switch 1 */
        D_004708AC = 0;
        return;
    case 3:                                         /* switch 1 */
        if (D_004708AC == 0) {
            D_004708AC = 1;
            SoundRpc_SendWord2(-1);
            SoundRpc_SendWord(0);
            amAdx_Stop(-1);
            func_0028EB40(arg0, 0xA, 0, 0);
            return;
        }
        func_002BD400(&sp50);
        *(s8 *)((u8 *)D_005AA604 + 0x11E7) = sp54;
        *(s8 *)((u8 *)D_005AA604 + 0x11E8) = (s8) *(s8 *)((u8 *)(&sp55) + 0);
        *(s8 *)((u8 *)D_005AA604 + 0x11E9) = (s8) *(s8 *)((u8 *)(&sp55) + 1);
        *(s8 *)((u8 *)D_005AA604 + 0x11EA) = (s8) *(s8 *)((u8 *)(&sp55) + 2);
        *(s8 *)((u8 *)D_005AA604 + 0x11EB) = (s8) *(s8 *)((u8 *)(&sp55) + 3);
        *(s8 *)((u8 *)D_005AA604 + 0x11EC) = (s8) *(s8 *)((u8 *)(&sp55) + 4);
        *(s8 *)((u8 *)D_005AA604 + 0x11ED) = (s8) *(s8 *)((u8 *)(&sp55) + 5);
        *(s8 *)((u8 *)D_005AA604 + 0x11EE) = (s8) *(s8 *)((u8 *)(&sp55) + 6);
        *(s32 *)((u8 *)D_005AA604 + 0x1200) = sp5C;
        StrStatus_Free();
        sp34 = 1;
        sp30 = 2;
        StrStatus_Dispatch(&sp20);
        D_0046FD80 = 0x3E19999A;
        Fade_Request(-1, 0, 0);
        amAdx_SetVolume(0, D_004E0610);
        amAdx_Pause(0, 0);
        amAdx_PlayAfs(0, *(&D_00453D20 + (*(s32 *)((u8 *)D_005AA604 + 0x11DC) * 4)), 0);
        if (D_005AA63C != 0) {
            D_005AA618 = 0;
            D_005AA610 = 0x1000B;
            D_005AA628 = 8;
            D_005AA61C = 0;
            D_005AA614 = (f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_005AA60C + 0x46C)) + 0x14)) + 0xB8);
            switch (D_005AA630) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                StrMap_Start(0x9100, 0x20000, 0);
                func_0029AAC0(0x9110, 0x20000, -1);
                break;
            case 2:                                 /* switch 2 */
                StrMap_Start(0x9100, 0x20000, 1);
                func_0029AAC0(0x9110, 0x20000, -1);
                break;
            }
            var_v1 = func_00295300;
            if (func_00295300 == NULL) {
                var_v1 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        var_v0 = func_00294A10;
        if (func_00294A10 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_00294A10();
        return;
    }
}
