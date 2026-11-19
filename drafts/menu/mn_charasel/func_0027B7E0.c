/* Draft (not built): func_0027B7E0 at 0x0027B7E0, size 0x74, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027B7E0.s */

// src/menu/mn_charasel.c func_0027B7E0 diff diff=7/29
s32 func_0027A4C0(void *);
extern f32 gFrameDelta;
void func_0027B7E0(u8 *arg0) {
    f32 temp_f1;
    void (*var_v1)();
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_0027A4C0(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x54) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1 = func_0027B7D0;
        *(s8 *)((u8 *)temp_s0 + 0) = 7;
        if (func_0027B7D0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002F4460 (src/menu/mn_ipsyswnd.c), similarity 0.97.
 * It is the template below (not built). */
#if 0
void func_002F4460(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002F4330(s0);
    *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) - gFrameDelta;
    if (*(f32 *)(s0 + 0x14) <= 0.0f) {
        *(s16 *)(s0 + 0xE) = 4;
        *(void **)(a0 + 0x1C) = ((void *)IpSysWnd_Exit == 0) ? 0 : (void *)IpSysWnd_Exit;
    }
}
#endif
