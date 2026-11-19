/* Draft (not built): func_00307E40 at 0x00307E40, size 0xCC, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307E40.s */

void func_00307E40(u8 *arg0) {
    void (*var_v1)();
    u8 *temp_s0;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(temp_s0);
    if (ArenaList_GetFirst(*(s32 *)((u8 *)temp_s0 + 0x10)) << 0x30 >> 0x30 >= 6) {
        ArenaList_Free();
        *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
        *(s32 *)((u8 *)temp_s0 + 8) = func_0027E2D0(5, (0 | (((s8)*D_004B4B63 == 0) ? (2) : (4)) & 0xFF) & 0xFF, 1, -1);
        *(s32 *)((u8 *)temp_s0 + 0x40) = 0x42200000;
        var_v1 = func_003083E0;
        if (func_003083E0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: ArenaCharasel_TaskOpenList (src/menu/mn_ArenaCharasel_pvsc.c), similarity 0.62.
 * It is the template below (not built). */
#if 0
void ArenaCharasel_TaskOpenList(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s8 r;
    void *f;
    s1 = a0;
    s0 = *(u8 **)(a0 + 0x30);
    func_003077E0(s0);
    r = func_0027DAB0(*(void **)(s0 + 8));
    if (r >= 7) {
        func_0027E120(*(void **)(s0 + 8));
        *(s32 *)(s0 + 8) = 0;
        D_005C4132[0] = 0;
        D_005C412E[0] = 0;
        D_005C4134[0] = 0;
        D_005C4130[0] = 0;
        D_005C4136[0] = s0[0x1D];
        *(s32 *)(s0 + 0x10) = ArenaList_Create(s0[0x1D]);
        f = (void *)func_00307F10;
        *(void **)(s1 + 0x1C) = (f == 0) ? 0 : f;
    }
}
#endif
