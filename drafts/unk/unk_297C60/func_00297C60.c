/* Draft (not built): func_00297C60 at 0x00297C60, size 0x490, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'void' to 'unsigned char *' @ 255: temp_a0_2 = *(u8 **)((u8 *)(**D_005AA608) + 0x4C);
 * Original: asm/nonmatchings/unk/unk_297C60/func_00297C60.s */

// src/unk/unk_297C60.c func_00297C60 cerr diff=-1/0
s32 Fade_Request(s32, s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 StrMap_Start(s32, s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, void *, f32);
s32 amMotion_BindAnim(void *, s32, s32);
s32 func_001CA8F0(void *, s32, s32, s32);
s32 func_00290C90(s32, void **, s32);
void func_00292A40();
s32 func_0029AAC0(s32, s32, s32);
s32 func_0029AEF0();
s32 func_002A94B0(s32, void *);
s32 func_002BFE60(void *);
extern s32 D_00453D20;
extern s32 D_0046FD80;
extern f32 D_004E0610;
extern f32 D_004E0614;
extern s32 D_00511768;
extern void *D_005AA580;
extern void *D_005AA584;
extern void *D_005AA588;
extern void *D_005AA58C;
extern void *D_005AA590;
extern s32 D_005AA5D0;
extern s32 D_005AA5D4;
extern s32 D_005AA5DC;
extern s32 D_005AA5E0;
extern s32 D_005AA600;
extern void *D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern s32 D_005AA618;
extern s32 D_005AA61C;
extern s32 D_005AA620;
extern s32 D_005AA628;
extern s32 D_005AA630;
extern void *D_005AA638;
extern s32 D_005AA63C;
extern s32 D_005AA66C;
extern void amFile_Load(void *);
extern void SoundRpc_Send3();
extern void Ball_Start(void);
extern void func_002BFC50(void);
extern void func_00295300(void);
void func_00297C60(u8 *arg0) {
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a2;
    s32 var_s0;
    void (*var_v1)();
    void (*var_v1_2)();
    u8 **var_a1;
    u8 **var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v1;

    if ((func_00290C90(0, 0, 0) == 0) && (func_0029AEF0() == 0)) {
        var_a2 = 0;
        var_a1 = (unsigned char **)(D_005AA550);
loop_3:
        temp_v1 = *var_a1;
        if ((temp_v1 == NULL) || (*(s16 *)((u8 *)temp_v1 + 4) == 3)) {
            var_a2 += 1;
            var_a1 += 4;
            if (var_a2 >= 0xA) {
                if (((s32)(D_005AA644)) & 1) {
                    if (func_00290C90(3, (void **)(var_a1), (s32)(var_a2)) == 0) {
                        goto block_9;
                    }
                } else {
block_9:
                    var_s0 = 0;
                    var_s1 = (unsigned char **)(D_005AA550);
                    do {
                        if (*(u8 **)((u8 *)var_s1 + 0) != NULL) {
                            temp_a0 = *(u8 **)((u8 *)var_s1 + 0x28);
                            if (temp_a0 != NULL) {
                                amCdFs_ReleaseCache(temp_a0);
                            }
                            *(u8 **)((u8 *)var_s1 + 0x28) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 0x40);
                            *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 0x40) = NULL;
                            amCdFs_Close(*(u8 **)((u8 *)var_s1 + 0), 0);
                            *(u8 **)((u8 *)var_s1 + 0) = NULL;
                            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x28)) + 0x50));
                        }
                        var_s0 += 1;
                        var_s1 += 4;
                    } while (var_s0 < 0xA);
                    if (((s32)(D_005AA644)) & 2) {
                        temp_a3 = *(s32 *)((u8 *)D_005AA580 + 0x50);
                        D_005AA5D0 = temp_a3;
                        temp_a2 = *(s32 *)((u8 *)D_005AA584 + 0x50);
                        D_005AA5DC = temp_a2;
                        temp_a1 = *(s32 *)((u8 *)D_005AA588 + 0x50);
                        D_005AA5D4 = temp_a1;
                        D_005AA5E0 = *(s32 *)((u8 *)D_005AA58C + 0x50);
                        D_005AA600 = *(s32 *)((u8 *)D_005AA590 + 0x50);
                        func_001CA8F0(*D_005AA608, temp_a1, temp_a2, temp_a3);
                        func_002BFE60(*D_005AA608);
                        D_0046FD80 = 0x3E19999A;
                        temp_a0_2 = *(u8 **)((u8 *)(**D_005AA608) + 0x4C);
                        D_005AA60C = temp_a0_2;
                        *(s32 *)((u8 *)temp_a0_2 + 0x46C) = 0;
                        amMotion_BindAnim(temp_a0_2, 0, D_005AA600);
                    }
                    D_005AA618 = 0;
                    D_005AA610 = 0x10000;
                    D_005AA61C = 0;
                    D_005AA628 = 0;
                    D_005AA614 = (f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_005AA60C + 0x46C)) + 0x14)) + 8);
                    temp_a0_3 = *(s32 *)((u8 *)D_005AA604 + 0x11D4);
                    if (temp_a0_3 > 0) {
                        if (D_00511768 > 0) {
                            func_002A94B0(*(s32 *)((u8 *)D_005AA604 + 0x11D8), D_005AA604);
                        } else {
                            func_002A94B0(temp_a0_3, D_005AA604);
                        }
                        D_00511768 = 0;
                        D_005AA620 = 0;
                        D_005AA664[0] = 0;
                        D_005AA66C = 0;
                        D_005AA640[0] = 0;
                        D_005AA63C = 0;
                        *(s32 *)((u8 *)D_005AA604 + 0x11D4) = -1;
                        *(s32 *)((u8 *)D_005AA604 + 0x11D8) = -1;
                        D_005AA644[0] = 0;
                        if (D_005AA638 != NULL) {
                            *(f32 *)((u8 *)D_005AA604 + 0x11C0) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x10);
                            *(f32 *)((u8 *)D_005AA604 + 0x11C8) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x18);
                        }
                        func_002BFC50();
                        Ball_Start();
                        var_v1 = func_00292A40;
                        if (func_00292A40 == NULL) {
                            var_v1 = NULL;
                        }
                        *(void (**)())((u8 *)(*D_005AA5A0) + 0x1C) = var_v1;
                        var_v1_2 = func_00292A40;
                        if (func_00292A40 == NULL) {
                            var_v1_2 = NULL;
                        }
                    } else {
                        amAdx_SetVolume(0, D_005AA604, D_004E0610);
                        amAdx_PlayAfs(0, *(&D_00453D20 + (*(s32 *)((u8 *)D_005AA604 + 0x11DC) * 4)), 0);
                        switch (D_005AA630) {       /* irregular */
                        case 0:
                            break;
                        case 1:
                            SoundRpc_SetVolume(1, 0, D_004E0614);
                            if (!(D_004E0614 <= 0.0f)) {
                                SoundRpc_Send3(1, 0, 0xB, 0);
                            }
                            StrMap_Start(0x9100, 0x20000, 0);
                            func_0029AAC0(0x9110, 0x20000, -1);
                            break;
                        case 2:
                            SoundRpc_SetVolume(1, 0, D_004E0614);
                            if (!(D_004E0614 <= 0.0f)) {
                                SoundRpc_Send3(1, 0, 0xB, 0);
                            }
                            StrMap_Start(0x9100, 0x20000, 1);
                            func_0029AAC0(0x9110, 0x20000, -1);
                            break;
                        }
                        Fade_Request(-1, 0, 0);
                        var_v1_2 = func_00295300;
                        if (func_00295300 == NULL) {
                            var_v1_2 = NULL;
                        }
                    }
                    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
                }
            } else {
                goto loop_3;
            }
        }
    }
}
