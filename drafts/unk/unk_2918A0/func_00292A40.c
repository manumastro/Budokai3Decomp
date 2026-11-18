/* Draft (not built): func_00292A40 at 0x00292A40, size 0x5A8, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand 'int *' @ 353: switch (D_005AA640) {                           /* switch 1; irregular */
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00292A40.s */

// src/unk/unk_2918A0.c func_00292A40 cerr diff=-1/0
s32 Fade_Request(s32, s32, s32);
s32 Flight_MapIndex(s8);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 StrMap_Load(s8);
s32 StrMap_Start(s32, s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, void *, f32);
void *amCdFs_ReadFileId(s32, s32, s32, s8);
void *func_001CAAB0(s32, s8, s8, s32);
s32 func_0028EB40(void *, s32, s32, s32);
s32 func_00290330(s32, s32);
s32 func_00291390(s8);
void func_00297C60();
s32 func_0029AAC0(s32, s32, s32);
s32 func_002BFEE0(s8, s8, s32);
extern s32 D_00453980;
extern s32 D_00453C80;
extern s32 D_00453D20;
extern s128 D_00453DF0;
extern s32 D_0046FD80;
extern s32 D_004708B0;
extern f32 D_004E0610;
extern f32 D_004E0614;
extern s8 D_00511450;
extern void *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern s32 D_005AA618;
extern s32 D_005AA61C;
extern s32 D_005AA628;
extern s32 D_005AA630;
extern s32 D_005AA63C;
extern s32 D_005AA644;
extern void Scene_MarkDone();
extern void func_0029D6C0(void *);
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void func_002BD6B0(void *);
extern void StrBg_Stop(void);
extern void StrMap_Free(void);
extern void func_002BFD90(void);
extern void *D_005AA608[];
extern void *D_005AA558[];
extern void *D_005AA55C[];
extern void *D_005AA560[];
extern void *D_005AA564[];
extern void *D_005AA568[];
extern void Character_Release(void *);
void func_00292A40(u8 *arg0) {
    s128 sp40;
    s8 sp50;
    s8 sp51;
    s8 sp52;
    s8 sp53;
    s8 sp54;
    s32 sp55;
    s32 sp5C;
    s32 sp60;
    s32 var_s0;
    s32 var_s1;
    s8 temp_a3;
    s8 var_s0_2;
    void (*var_v1)();
    u8 *temp_s0;

    if (func_002A8F90() != 0) {
        D_004708B0 = 0;
        return;
    }
    if (D_004708B0 == 0) {
        D_004708B0 = 1;
        SoundRpc_SendWord2(-1);
        SoundRpc_SendWord(0);
        amAdx_Stop(-1);
        func_0028EB40(arg0, 0xA, 0, 0);
        return;
    }
    var_s1 = 0;
    var_s0 = 0;
    do {
        func_00290330(*(s32 *)((u8 *)(D_005AA604 + var_s0) + 0x80), func_002920E0(D_005AA604 + var_s0 + 0x80));
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x40);
    switch (D_005AA640) {                           /* switch 1; irregular */
    case 9:                                         /* switch 1 */
        Scene_MarkDone();
        *(void (**)())((u8 *)arg0 + 0x1C) = NULL;
        return;
    case 11:                                        /* switch 1 */
        Scene_MarkDone();
        *(void (**)())((u8 *)arg0 + 0x1C) = NULL;
        return;
    case 12:                                        /* switch 1 */
        Scene_MarkDone();
        *(void (**)())((u8 *)arg0 + 0x1C) = NULL;
        return;
    case 6:                                         /* switch 1 */
        Scene_MarkDone();
        *(void (**)())((u8 *)arg0 + 0x1C) = NULL;
        return;
    default:                                        /* switch 1 */
        if (D_005AA63C != 0) {
            sp50 = D_00511450;
            sp51 = *(s8 *)((u8 *)D_005AA604 + 0x11E1);
            sp52 = *(s8 *)((u8 *)D_005AA604 + 0x11E3);
            sp53 = *(s8 *)((u8 *)D_005AA604 + 0x11E2);
            sp54 = *(s8 *)((u8 *)D_005AA604 + 0x11E7);
            *(s8 *)((u8 *)(&sp55) + 0) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E8);
            *(s8 *)((u8 *)(&sp55) + 1) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E9);
            *(s8 *)((u8 *)(&sp55) + 2) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EA);
            *(s8 *)((u8 *)(&sp55) + 3) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EB);
            *(s8 *)((u8 *)(&sp55) + 4) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EC);
            *(s8 *)((u8 *)(&sp55) + 5) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11ED);
            *(s8 *)((u8 *)(&sp55) + 6) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EE);
            sp5C = *(s32 *)((u8 *)D_005AA604 + 0x1200);
            sp60 = D_005AA63C;
            func_002BD6B0(&sp50);
            StrStatus_Start(0xB000, 0x80000);
            var_v1 = func_00293250;
            if (func_00293250 == NULL) {
                var_v1 = NULL;
            }
        } else {
            sp40 = D_00453DF0;
            func_0029D6C0(&sp40);
            D_0046FD80 = 0x3E19999A;
            if (D_005AA644 & 1) {
                StrMap_Free();
                StrMap_Load(*(s8 *)((u8 *)D_005AA604 + 0x11E0));
                StrBg_Stop();
                func_00291390(*(s8 *)((u8 *)D_005AA604 + 0x11E0));
            }
            if (D_005AA644 & 2) {
                temp_s0 = (u8 *)(D_005AA604);
                Character_Release(*D_005AA608);
                *D_005AA608 = func_001CAAB0(Flight_MapIndex(*(s8 *)((u8 *)temp_s0 + 0x11E1)), *(s8 *)((u8 *)temp_s0 + 0x11E2), *(s8 *)((u8 *)temp_s0 + 0x11E3), 0);
                *D_005AA568 = amCdFs_ReadFileId(*(&D_00453C80 + (*(s8 *)((u8 *)temp_s0 + 0x11E1) * 4)), 0, 1, 0);
                func_002BFD90();
                func_002BFEE0(*(s8 *)((u8 *)temp_s0 + 0x11E1), *(s8 *)((u8 *)temp_s0 + 0x11E2), 1);
                var_s0_2 = *(s8 *)((u8 *)D_005AA604 + 0x11E3);
                if (*(s8 *)((u8 *)D_005AA604 + 0x11E2) >= 3) {
                    var_s0_2 = 4;
                }
                *D_005AA560 = amCdFs_ReadFileId(0xEDE, 0, 1, 0);
                temp_a3 = *(s8 *)((u8 *)D_005AA604 + 0x11E1);
                *D_005AA564 = amCdFs_ReadFileId(*((var_s0_2 * 4) + (&D_00453980 + (temp_a3 * 0x14))), 0, 1, temp_a3);
                *D_005AA558 = amCdFs_ReadFileId((*(s8 *)((u8 *)D_005AA604 + 0x11E6) * 2) + 0xEE0, 0, 1, 0);
                *D_005AA55C = amCdFs_ReadFileId((*(s8 *)((u8 *)D_005AA604 + 0x11E6) * 2) + 0xEE1, 0, 1, 0);
            }
            if (D_005AA644 != 0) {
                var_v1 = func_00297C60;
                if (func_00297C60 == NULL) {
                    var_v1 = NULL;
                }
            } else {
                D_005AA618 = 0;
                D_005AA610 = 0x1000B;
                D_005AA628 = 8;
                D_005AA61C = 0;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_005AA60C + 0x46C)) + 0x14)) + 0xB8);
                amAdx_SetVolume(0, D_005AA60C, D_004E0610);
                amAdx_PlayAfs(0, *(&D_00453D20 + (*(s32 *)((u8 *)D_005AA604 + 0x11DC) * 4)), 0);
                switch (D_005AA630) {               /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    break;
                case 1:                             /* switch 2 */
                    SoundRpc_SetVolume(1, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(1, 0, 0xB, 0);
                    }
                    StrMap_Start(0x9100, 0x20000, 0);
                    func_0029AAC0(0x9110, 0x20000, -1);
                    break;
                case 2:                             /* switch 2 */
                    SoundRpc_SetVolume(1, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(1, 0, 0xB, 0);
                    }
                    StrMap_Start(0x9100, 0x20000, 1);
                    func_0029AAC0(0x9110, 0x20000, -1);
                    break;
                }
                Fade_Request(-1, 0, 0);
                var_v1 = func_00295300;
                if (func_00295300 == NULL) {
                    var_v1 = NULL;
                }
            }
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
}
