/* Draft (not built): func_0027DAF0 at 0x0027DAF0, size 0x2C, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 1 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x30, original 0x2C
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027DAF0.s */

// src/menu/mn_charasel.c func_0027DAF0 size diff=1/12
s32 memcpy(s32, s32, s32);
s32 func_0027DAF0(u8 *arg0, s32 arg1) {
    memcpy(arg1, *(s32 *)((u8 *)arg0 + 0x30) + 0x6C, 0xC);
    return 1;
}

/* Similar function already in C: InputPass_CopyBuf (src/menu/mn_InputPass.c), similarity 0.82.
 * It is the template below (not built). */
#if 0
void InputPass_CopyBuf(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0x50, 0x10);
    }
}
#endif
