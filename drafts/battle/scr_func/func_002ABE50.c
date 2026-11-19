/* Draft (not built): func_002ABE50 at 0x002ABE50, size 0xC8, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x90, original 0xC8
 * Original: asm/nonmatchings/battle/scr_func/func_002ABE50.s */

// src/battle/scr_func.c func_002ABE50 size diff=30/36
extern void amSound_LoadStream();
s32 func_002ABE50(u8 *arg0, u8 *arg1) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 temp_a2;
    u8 *temp_a1;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_a2 = **(s32 **)((u8 *)arg1 + 0x2C);
    temp_v0 = (temp_a2 * 0x24) + (((u8 *)&D_005BC560) + (**(s32 **)((u8 *)arg0 + 0) * 0x240));
    temp_a1 = temp_v0 + 0xC;
    temp_v1 = temp_v0 + 0x18;
    if ((*(s32 *)((u8 *)temp_v0 + 0x10) != 0) && (*(s32 *)((u8 *)temp_v1 + 4) != 0)) {
        sp20 = temp_a2;
        sp24 = *(s32 *)((u8 *)temp_a1 + 8);
        sp28 = *(s32 *)((u8 *)temp_v1 + 8);
        sp2C = *(s32 *)((u8 *)temp_a1 + 4);
        sp30 = *(s32 *)((u8 *)temp_v1 + 4);
        amSound_LoadStream(&sp20, temp_a1, temp_a2);
        if (M2C_ERROR(/* Read from unset register $v0 */) != 0) {
            *(s32 (**)(u8 *, u8 *))((u8 *)arg0 + 0x10) = func_002ABE50;
            return 3;
        }
    }
    *(s32 (**)(u8 *, u8 *))((u8 *)arg0 + 0x10) = NULL;
    return 1;
}

/* Similar function already in C: func_002ABFC0 (src/battle/scr_func.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
s32 func_002ABFC0(s32 *a0, s32 *a1) {
    s32 loc[3];
    s32 *e;
    s32 j = *(s32 *)*(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 r;

    e = (s32 *)((u8 *)D_005BC560 + i * 576 + j * 36);
    loc[0] = j;
    loc[1] = e[2];
    loc[2] = e[1];
    r = amSound_LoadBank(loc, i * 576);
    if (r != 0) {
        a0[4] = (s32)func_002ABFC0;
        return 3;
    }
    a0[4] = 0;
    return 1;
}
#endif
