/* Draft (not built): func_001CB540 at 0x001CB540, size 0x120, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x104, original 0x120
 * Original: asm/nonmatchings/battle/character/func_001CB540.s */

// src/battle/character.c func_001CB540 size diff=50/65
extern void func_001B0B10(void);
extern void func_001B0810(void);
s32 func_001CB540(s32 *arg1) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    void (*sp60)();
    void (*sp64)();
    s16 *var_s1;
    s16 var_v1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (u8 *)(gBattle);
    var_s1 = (s16 *)(&D_00469290);
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x8934);
    D_00470578 = -1;
    D_0047057C = 0;
    *arg1 = 0;
    var_v1 = (s16)(D_00469290);
    if (var_v1 != -1) {
loop_2:
        if ((*(s32 *)((u8 *)temp_s2 + 0x1CFC) == var_v1) && (func_001DF420(temp_s2, *(s16 *)((u8 *)var_s1 + 2), 2) != 0)) {
            sp50 = *(s32 *)((u8 *)temp_s0 + 0x8934);
            sp54 = *(s32 *)((u8 *)temp_s0 + 0x8938);
            sp58 = *(s32 *)((u8 *)temp_s2 + 0x1EE8);
            sp5C = 0xA;
            sp60 = func_001B0B10;
            sp64 = func_001B0810;
            *(s16 *)((u8 *)temp_s0 + 0x8944) = 0;
            func_00237000(4, &sp50);
            D_00470578 = 0;
            D_0047057C = (s32) *(s16 *)((u8 *)var_s1 + 2);
            *arg1 = 1;
        } else {
            var_s1 += 4;
            var_v1 = *var_s1;
            if (var_v1 == -1) {

            } else {
                goto loop_2;
            }
        }
    }
    return 1;
}
