/* Draft (not built): func_002477C0 at 0x002477C0, size 0x58, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); was declared as: 'void (unsigned char *)' now declared as: 'void (signed char *)' @ 2348: void func_002477C0(s8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_23A890/func_002477C0.s */

// src/unk/unk_23A890.c func_002477C0 cerr diff=-1/0
void func_002477C0(s8 *arg0) {
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0x34), 0x02003000);
    func_001F3DF0(arg0);
    func_00208D70(*(u8 **)((u8 *)(arg0 + 0x30) + 8));
    BtbObj_CheckDrawFlags(arg0);
}
