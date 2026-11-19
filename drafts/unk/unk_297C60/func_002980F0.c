/* Draft (not built): func_002980F0 at 0x002980F0, size 0x330, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2D4, original 0x330
 * Original: asm/nonmatchings/unk/unk_297C60/func_002980F0.s */

// src/unk/unk_297C60.c func_002980F0 size diff=115/181
s32 Fade_Request(s32, s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 StrMap_Start(s32, s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
void func_00292A40();
s32 func_0029AAC0(s32, s32, s32);
s32 func_002A94B0(s32);
extern s32 D_00453D20;
extern f32 D_004E0610;
extern f32 D_004E0614;
extern s32 D_00511768;
extern void *D_005AA5A8;
extern void *D_005AA5C8;
extern s32 D_005AA620;
extern s32 D_005AA630;
extern void *D_005AA638;
extern s32 D_005AA63C;
extern s32 D_005AA66C;
extern void SoundRpc_Send3();
extern void StrBg_FlushDraw(void);
extern void func_0028EB30(void);
extern void Ball_Start(void);
extern void func_002BFC50(void);
extern void func_00295300(void);
void func_002980F0(Proc *arg0) {
    s32 temp_a0;
    s32 var_s2;
    void (*var_v0)();
    void (*var_v1)();
    void (*var_v1_2)();
    u8 **var_s1;

    if (gSoundState == 0) {
        var_s2 = 7;
        var_s1 = (unsigned char **)(D_005AA56C);
        do {
            amCdFs_ReleaseCache(*(u8 **)((u8 *)var_s1 + 0x28));
            var_s2 += 1;
            *(u8 **)((u8 *)var_s1 + 0x28) = NULL;
            var_s1 += 4;
        } while (var_s2 < 0xA);
        D_005AA5A8 = amTask_Create((void (*)(struct Proc *))func_0028EB30, 0, 0x9202, 2, 0, 0);
        D_005AA5C8 = amTask_Create((void (*)(struct Proc *))StrBg_FlushDraw, 0, 0x920A, 2, 0, 0);
        temp_a0 = *(s32 *)((u8 *)D_005AA604 + 0x11D4);
        if (temp_a0 > 0) {
            if (D_00511768 > 0) {
                func_002A94B0(*(s32 *)((u8 *)D_005AA604 + 0x11D8));
            } else {
                func_002A94B0(temp_a0);
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
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        }
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, *(&D_00453D20 + (*(s32 *)((u8 *)D_005AA604 + 0x11DC) * 4)), 0);
        switch (D_005AA630) {                       /* irregular */
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
        var_v0 = func_00295300;
        if (func_00295300 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_00295300();
    }
}
