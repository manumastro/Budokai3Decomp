/* Draft (not built): func_002A1F30 at 0x002A1F30, size 0xF0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'signed char[]' = 'int' @ 377: D_004B4BE9 = 1;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1F30.s */

// src/story/evt_scrp.c func_002A1F30 cerr diff=-1/0
void func_002A1F30(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;

    var_t1 = 0;
    var_t2 = 0;
    do {
        var_a0 = var_t2 & 0xF;
        if (var_t2 < 0) {
            var_t0 = var_a0 * 2;
            if (var_a0 != 0) {
                var_a0 -= 0x10;
                goto block_4;
            }
        } else {
block_4:
            var_t0 = var_a0 * 2;
        }
        var_a0_2 = var_t2 >> 4;
        if (var_t2 < 0) {
            var_a0_2 = (s32) (var_t2 + 0xF) >> 4;
        }
        if ((s32) ((u32) ((3 << var_t0) & *(D_004E6560 + (var_a0_2 * 4))) >> var_t0) > 0) {
            var_t1 |= 1 << var_t2;
        }
        var_t2 += 1;
    } while (var_t2 < 0x26);
    if (((var_t1 & 0x23C9D) == 0x23C9D) && ((s32) *(u8 *)((u8 *)D_004E6560 + 0x2B11D) < (s32) D_004E570D)) {
        *(u8 *)((u8 *)D_004E6560 + 0x2B11D) = (u8) (*(u8 *)((u8 *)D_004E6560 + 0x2B11D) + 1);
        *(s32 *)((u8 *)((*(s32 *)((u8 *)gEvtWork + 0xF8) * 4) + gEvtWork) + 0x100) = 0x204;
        *(s32 *)((u8 *)gEvtWork + 0xF8) = (s32) (*(s32 *)((u8 *)gEvtWork + 0xF8) + 1);
        D_004B4BE9 = 1;
    }
}
