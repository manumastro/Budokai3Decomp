/* Draft (not built): func_001C80E0 at 0x001C80E0, size 0xEC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0xEC
 * Original: asm/nonmatchings/battle/btl_main/func_001C80E0.s */

// src/battle/btl_main.c func_001C80E0 size diff=25/72
void func_001C80E0(Fighter *arg0, s32 arg1) {
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s3;

    var_s3 = (unsigned char *)(arg0);
    var_s2 = arg1;
    if (*(s32 *)((u8 *)arg0 + 0x1CFC) != 0x2A) {
        var_s1 = 0;
        var_s0 = var_s3;
        do {
            if (var_s1 != *(s32 *)((u8 *)var_s3 + 0xBA4)) {
                temp_a0 = *(u8 **)((u8 *)var_s3 + 0x1CF4);
                if ((var_s1 != *(s16 *)((u8 *)temp_a0 + 0x14)) && (var_s1 != *(s16 *)((u8 *)temp_a0 + 0x16)) && (var_s1 != var_s2)) {
                    temp_v1 = *(u8 **)((u8 *)var_s0 + 0x1DB8);
                    if (temp_v1 != NULL) {
                        if ((s32)(*(s32 *)((u8 *)var_s3 + 0xB7C)) == (s32)(temp_v1)) {
                            func_001E7070(var_s3 + 0x650, -1);
                            func_001E8290(var_s3 + 0x650);
                        }
                        if ((s32)(*(s32 *)((u8 *)var_s3 + 0x11FC)) == (s32)(*(u8 **)((u8 *)var_s0 + 0x1DB8))) {
                            func_001E7070(var_s3 + 0xCD0, -1);
                            func_001E8290(var_s3 + 0xCD0);
                        }
                        Character_Release(*(u8 **)((u8 *)var_s0 + 0x1DB8));
                        *(u8 **)((u8 *)var_s0 + 0x1DB8) = NULL;
                    }
                }
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 8);
    }
}
