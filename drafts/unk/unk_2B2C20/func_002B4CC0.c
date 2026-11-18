/* Draft (not built): func_002B4CC0 at 0x002B4CC0, size 0xCC, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'memcpy(int *, int *, int)' does not match 'memcpy(int *, int *, int, int)' @ 447: memcpy(&sp30, temp_s0 + 0xB8, 0x20);
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B4CC0.s */

// src/unk/unk_2B2C20.c func_002B4CC0 cerr diff=-1/0
s32 memcpy(s32 *, s32 *, s32, s32);
void func_002B4CC0(s32 arg0, s32 *arg1) {
    s32 sp30;
    s32 *var_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    u8 *temp_s0;
    u8 *var_a0;

    temp_s0 = (u8 *)(gSklEdit + ((arg0 >> 1) * 0x1C8) + 0x48);
    memcpy(&sp30, temp_s0 + 0xB8, 0x20);
    var_a3 = 0;
    if (sp30 > 0) {
        var_a1 = &sp30;
        do {
            var_a2 = 0;
            var_a0 = temp_s0;
loop_3:
            temp_v0 = *(s32 *)((u8 *)var_a1 + 4);
            if (*(s32 *)((u8 *)var_a0 + 0x2C) == temp_v0) {
                *(s32 *)((u8 *)var_a1 + 4) = (s32) (temp_v0 + 0x1000);
            }
            var_a2 += 1;
            var_a0 += 4;
            if (var_a2 < 7) {
                goto loop_3;
            }
            var_a3 += 1;
            var_a1 += 4;
        } while (var_a3 < sp30);
    }
    memcpy(arg1, &sp30, 0x20, var_a3);
}
