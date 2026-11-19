/* Draft (not built): func_0028C4C0 at 0x0028C4C0, size 0xC0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xC0
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C4C0.s */

// src/sys/mc_opr.c func_0028C4C0 size diff=18/46
extern s32 D_00470894;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00470850;
extern u16 D_00493086;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028DDA0(void);
void func_0028C4C0(u8 *arg0) {
    s32 *var_v1;
    s32 temp_v1;

    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if ((temp_v1 == 0) || ((*D_00492FCE | D_00493086) & 0x4000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        func_00288870(-1);
        var_v1 = (int *)(&func_0028DDB0);
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470894 = (s32) func_0028DDA0;
    }
}

/* Similar function already in C: func_002D1F20 (src/unk/unk_2D1C20.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_002D1F20(SmsgTask *t) {
    SmsgWork *w = &t->w;

    if (t->w.state == 3) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        w->f20 = 0;
        SET_FUNC(t, func_002D1DB0);
    }
}
#endif
