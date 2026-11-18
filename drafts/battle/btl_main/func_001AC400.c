/* Draft (not built): func_001AC400 at 0x001AC400, size 0x88, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); eclared was declared as: 'void (void *)' now declared as: 'void (unsigned char *)' @ 534: void func_001AC400(u8 *arg0) {
 * Original: asm/nonmatchings/battle/btl_main/func_001AC400.s */

// src/battle/btl_main.c func_001AC400 cerr diff=-1/0
void func_001AC400(u8 *arg0) {
    s32 var_a3;
    s32 var_t0;
    u8 *var_a2;
    u8 *var_t1;

    *(u8 **)((u8 *)arg0 + 8) = (u8 *) (*(u8 **)((u8 *)arg0 + 8) + arg0);
    var_t1 = *(u8 **)((u8 *)arg0 + 8);
    var_t0 = 0;
    if (*(s32 *)((u8 *)arg0 + 4) > 0) {
        do {
            var_a3 = 0;
            if (*(s16 *)((u8 *)var_t1 + 0xE) > 0) {
                var_a2 = var_t1;
                do {
                    var_a3 += 1;
                    *(u8 **)((u8 *)var_a2 + 0x40) = (u8 *) (*(u8 **)((u8 *)var_a2 + 0x40) + arg0);
                    var_a2 += 4;
                } while (var_a3 < *(s16 *)((u8 *)var_t1 + 0xE));
            }
            var_t1 = var_t1 + 0x44 + ((*(s16 *)((u8 *)var_t1 + 0xE) - 1) * 4);
            var_t0 += 1;
        } while (var_t0 < *(s32 *)((u8 *)arg0 + 4));
    }
}
