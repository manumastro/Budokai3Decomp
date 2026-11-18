/* Draft (not built): func_001AF9A0 at 0x001AF9A0, size 0x10C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d was declared as: 'int (...)' now declared as: 'void (unsigned char *, int)' @ 1503: void func_001AFAB0(u8 *p, s32 a) {
 * Original: asm/nonmatchings/battle/btl_main/func_001AF9A0.s */

// src/battle/btl_main.c func_001AF9A0 cerr diff=-1/0
s32 func_00219E70(s32 *, s16, s32);
s32 func_00219EA0(s32, s32, s32);
void func_001AF9A0(void) {
    s32 sp7C;
    u8 sp7E;
    u8 sp7F;
    s16 temp_a1;
    s16 temp_s5;
    s32 var_s0;
    s32 var_s5;
    u8 *temp_s1;
    u8 *var_s4;

    temp_s1 = (u8 *)(gBattle);
    var_s0 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
        var_s4 = temp_s1;
        do {
            temp_a1 = *(s16 *)((u8 *)var_s4 + 0x1BD4);
            if (temp_a1 >= 0) {
                func_00219E70(&sp7C, temp_a1, 0);
                temp_s5 = *(s16 *)((u8 *)(var_s4 + 0x830) + 0x13A4);
                if (temp_s5 == -1) {
                    var_s5 = 0;
                    do {
                        func_001AFAB0(&sp7C, var_s5);
                        var_s5 += 1;
                    } while (var_s5 < 2);
                } else {
                    func_001A37D0(temp_s5, sp7E);
                    func_001A36E0(temp_s5, sp7F);
                }
            }
            var_s0 += 1;
            var_s4 += 0x2020;
        } while (var_s0 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
    }
    func_00219EA0(0, -1, 0);
}
