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
    temp_v0 = (temp_a2 * 0x24) + (&D_005BC560 + (**(s32 **)((u8 *)arg0 + 0) * 0x240));
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
