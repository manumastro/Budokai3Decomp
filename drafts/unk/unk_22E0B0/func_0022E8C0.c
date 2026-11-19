/* Draft (not built): func_0022E8C0 at 0x0022E8C0, size 0x10C, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xFC, original 0x10C
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022E8C0.s */

// src/unk/unk_22E0B0.c func_0022E8C0 size diff=38/63
s32 func_001DFA90(s16, s32 *, s32);
extern s32 D_004E0660;
extern s32 D_0058BBB0;
void func_0022E8C0(u8 *arg0, u8 *arg1) {
    s16 temp_s3;
    s32 temp_a3;
    s32 var_s3;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *var_s0;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x1350);
    *(s8 *)((u8 *)arg1 + 0x3B) = 0;
    temp_s0 = (unsigned char *)(&D_0058BBB0 + (temp_a3 * 0xC0));
    if (*(s32 *)((u8 *)arg1 + 0x20) & 0x1000) {
        temp_s3 = *(s16 *)((u8 *)arg1 + 0x10);
        if (temp_s3 > 0) {
            if (func_001DFA90(temp_s3, &D_0058BBB0, temp_a3 * 3) > 0) {
                *(s8 *)((u8 *)temp_s0 + 0xB7) = 1;
                temp_a1 = (unsigned char *)(&D_004E0660 + (temp_s3 * 0x28));
                *(s16 *)((u8 *)temp_s0 + 0xBA) = (s16) (*(u8 *)((u8 *)temp_a1 + 0xF) * 0x64);
                *(u8 *)((u8 *)temp_s0 + 0xB9) = (u8) *(u8 *)((u8 *)temp_a1 + 0xE);
            }
        } else {
            *(s8 *)((u8 *)temp_s0 + 0xB7) = 1;
        }
    }
    var_s3 = 0;
    if (*(s16 *)((u8 *)arg1 + 0xE) > 0) {
        var_s0 = arg1;
        do {
            func_0022E8C0(arg0, *(u8 **)((u8 *)var_s0 + 0x40));
            var_s3 += 1;
            var_s0 += 4;
        } while (var_s3 < *(s16 *)((u8 *)arg1 + 0xE));
    }
}
