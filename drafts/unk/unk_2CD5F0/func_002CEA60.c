/* Draft (not built): func_002CEA60 at 0x002CEA60, size 0x1F0, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D4, original 0x1F0
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CEA60.s */

// src/unk/unk_2CD5F0.c func_002CEA60 size diff=59/117
extern s32 D_0044AE80;
extern s32 D_0046F250;
void func_002CEA60(void) {
    s32 *var_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    u8 *temp_v0_2;
    u8 *var_s4;
    u8 *var_s6;

    var_s0 = *D_0051CD0C;
    temp_v0 = func_001F5EF0(0, 1);
    var_s5 = temp_v0;
    *(s16 *)((u8 *)(*(s32 **)((u8 *)temp_v0 + 0x10)) + 0xE) = 2;
    **(s32 **)((u8 *)var_s5 + 0x10) = func_001A50F0(var_s0, 0x27F);
    func_001F5B70((u8 *) var_s5);
    temp_v0_2 = func_001F5FD0(0x84000000, &D_0046F250, var_s5, &func_002CE980, M2C_ERROR(/* Read from unset register $a4 */));
    var_s4 = temp_v0_2;
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~0x100);
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x100);
    memset(var_s4 + 0x30, 0, 0x80);
    var_s3 = (int *)(*((*D_0051CD20 << 5) + (&D_0044AE80 + (*gBtbBg * 0x5C))));
    if (var_s3 != NULL) {
        var_s2 = 0;
        if (*var_s3 >= 0) {
            do {
                var_s0 = (s32) (var_s3 + (var_s2 * 0x10));
                var_s1 = *(s32 *)var_s0 - 0x64;
                if (var_s1 >= 0) {
                    var_s6 = var_s4 + 0x30;
                    if (func_001F5EF0(0, var_s1) == var_s5) {
                        memset(var_s6, 0, 0x80);
                        *(s32 *)((u8 *)var_s4 + 0x30) = var_s0;
                        memset(var_s6 + 0x10, 0, 0x10);
                        memset(var_s6 + 0x20, 0, 0x10);
                    }
loop_7:
                    if (var_s1 == (*(s32 *)var_s0 - 0x64)) {
                        var_s0 += 0x10;
                        var_s2 += 1;
                        goto loop_7;
                    }
                } else {
                    var_s2 += 1;
                }
            } while (*(var_s3 + (var_s2 * 0x10)) >= 0);
        }
    }
}
