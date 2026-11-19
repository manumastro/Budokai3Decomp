/* Draft (not built): func_00298B70 at 0x00298B70, size 0xC4, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9C, original 0xC4
 * Original: asm/nonmatchings/unk/unk_297C60/func_00298B70.s */

// src/unk/unk_297C60.c func_00298B70 size diff=27/39
void func_00298B70(s32 arg0, s32 arg1) {
    Slot *var_a2;
    Slot *var_s1;
    s32 var_a1;
    s32 var_a1_2;

    var_a1 = 0;
    var_a2 = (*D_005AA604)->slot;
loop_1:
    if (var_a2->id == arg1) {

    } else {
        var_a1 += 1;
        var_a2 += 0x40;
        if (var_a1 >= 0x40) {
            var_a2 = NULL;
        } else {
            goto loop_1;
        }
    }
    var_s1 = (*D_005AA604)->slot;
    if (var_a2 == NULL) {
        var_a1_2 = 0;
loop_8:
        if (var_s1->id == arg0) {

        } else {
            var_a1_2 += 1;
            var_s1 += 0x40;
            if (var_a1_2 >= 0x40) {
                var_s1 = NULL;
            } else {
                goto loop_8;
            }
        }
        if (var_s1 != NULL) {
            func_00290390(arg0, arg1);
            var_s1->id = arg1;
        }
    }
}
