/* Draft (not built): func_001AC240 at 0x001AC240, size 0xE4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xCC, original 0xE4
 * Original: asm/nonmatchings/battle/btl_main/func_001AC240.s */

// src/battle/btl_main.c func_001AC240 size diff=21/51
void func_001AC240(void) {
    s16 temp_a0;
    s32 var_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_s0;

    temp_s2 = (u8 *)(gBattle);
    var_s1 = 0;
    if (*(s32 *)((u8 *)temp_s2 + 0x88D8) > 0) {
        var_s0 = temp_s2;
        do {
            temp_a0 = *(s16 *)((u8 *)var_s0 + 0x1BD4);
            if (temp_a0 >= 0) {
                temp_s3 = &D_00492FC0 + (temp_a0 * 0xB8);
                *(s16 *)((u8 *)temp_s3 + 0xC) = 0;
                *(s16 *)((u8 *)temp_s3 + 0xE) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x10) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x12) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x6C) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x6E) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x70) = 0;
                *(s16 *)((u8 *)temp_s3 + 0x72) = 0;
                memset(temp_s3 + 0x28, 0, 0x40);
                memset(temp_s3 + 0x74, 0, 0x40);
            }
            var_s1 += 1;
            var_s0 += 0x2020;
        } while (var_s1 < *(s32 *)((u8 *)temp_s2 + 0x88D8));
    }
}
