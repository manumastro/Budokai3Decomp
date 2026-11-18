/* Draft (not built): func_001AF010 at 0x001AF010, size 0xEC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); fier 'func_001B0700()' redeclared was declared as: 'void ()' now declared as: 'int ()' @ 1855: s32 func_001B0700(void) {
 * Original: asm/nonmatchings/battle/btl_main/func_001AF010.s */

// src/battle/btl_main.c func_001AF010 cerr diff=-1/0
extern void func_001B07C0(void);
extern void func_001B0700(void);
void func_001AF010(void) {
    u8 *sp20;
    u8 *sp24;
    s32 sp28;
    s32 sp2C;
    s32 *sp30;
    s32 *sp34;
    s32 sp40;
    s32 *var_a1;
    s32 temp_v1;
    s32 var_a2;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    *(s32 *)((u8 *)temp_s0 + 0x88F8) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x890C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8910) = 0;
    sp40 = 0;
    var_a2 = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0x88D8) > 0) {
        var_a1 = &sp40;
        do {
            temp_v1 = 1 << var_a2;
            var_a2 += 1;
            sp40 |= temp_v1;
            *(s16 *)((u8 *)var_a1 + 8) = 0;
            var_a1 += 2;
        } while (var_a2 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
    }
    sp20 = temp_s0 + 0x830;
    sp24 = temp_s0 + 0x2850;
    sp28 = *(s32 *)((u8 *)temp_s0 + 0x8AA0);
    sp2C = *(s32 *)((u8 *)temp_s0 + 0x7F4);
    sp30 = (s32 *)(&func_001B07C0);
    sp34 = (s32 *)(&func_001B0700);
    func_00237000(4, &sp20);
    func_00219270((s8) *(s16 *)((u8 *)temp_s0 + 0x7E6));
}
