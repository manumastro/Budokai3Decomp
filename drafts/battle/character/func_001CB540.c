/* Draft (not built): func_001CB540 at 0x001CB540, size 0x120, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF0, original 0x120
 * Original: asm/nonmatchings/battle/character/func_001CB540.s */

// src/battle/character.c func_001CB540 size diff=43/60
extern void func_001B0B10(void);
extern void func_001B0810(void);
s32 func_001CB540(s32 unused_arg0, s32 *arg1) {
    Fighter *sp50;
    Fighter *sp54;
    s32 sp58;
    s32 sp5C;
    void (*sp60)();
    void (*sp64)();
    BattleWork *temp_s0;
    CharPair *var_s1;
    Fighter *temp_s2;
    s16 var_v1;

    temp_s0 = gBattle;
    var_s1 = D_00469290;
    temp_s2 = temp_s0->fighter[0];
    D_00470578 = -1;
    D_0047057C = 0;
    *arg1 = 0;
    var_v1 = D_00469290->chara;
    if (var_v1 != -1) {
loop_2:
        if ((temp_s2->unk1CFC == var_v1) && (func_001DF420(temp_s2, (s32) var_s1->value, 2) != 0)) {
            sp50 = temp_s0->fighter[0];
            sp54 = temp_s0->fighter[1];
            sp58 = temp_s2->unk1EE8;
            sp5C = 0xA;
            sp60 = func_001B0B10;
            sp64 = func_001B0810;
            temp_s0->unk8944 = 0;
            func_00237000(4, &sp50);
            D_00470578 = 0;
            D_0047057C = (s32) var_s1->value;
            *arg1 = 1;
        } else {
            var_s1 += 4;
            var_v1 = var_s1->chara;
            if (var_v1 == -1) {

            } else {
                goto loop_2;
            }
        }
    }
    return 1;
}
