/* Draft (not built): func_002CD0C0 at 0x002CD0C0, size 0xF0, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xFC, original 0xF0
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CD0C0.s */

// src/unk/unk_2CC840.c func_002CD0C0 size diff=35/63
s32 func_0022D0E0(s32, s32);
extern s32 D_005C2050;
extern void amTask_Kill(void *);
void func_002CD0C0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    u8 *temp_a0_4;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s2;

    temp_s3 = arg0 + 0x30;
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s2 = NULL;
    if (temp_v0 != NULL) {
        var_s2 = temp_v0 + 0x30;
    }
    func_0021C660(*(s32 *)((u8 *)temp_s3 + 0xC));
    var_s1 = 0;
    if (var_s2 != NULL) {
        var_s0 = var_s2;
        do {
            temp_a0 = *(s32 *)((u8 *)var_s0 + 4);
            if (temp_a0 != 0) {
                func_0022D0E0(temp_a0, 1);
                *(s32 *)((u8 *)var_s0 + 4) = 0;
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 3);
        temp_a0_2 = *(s32 *)((u8 *)var_s2 + 0x10);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)var_s2 + 0x10) = 0;
        }
        temp_a0_3 = *(s32 *)((u8 *)var_s2 + 0x14);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
            *(s32 *)((u8 *)var_s2 + 0x14) = 0;
        }
    }
    temp_a0_4 = *(u8 **)((u8 *)arg0 + 0x30);
    if (temp_a0_4 != NULL) {
        amTask_Kill(temp_a0_4);
    }
    *(u8 **)((u8 *)arg0 + 0x30) = NULL;
    *(&D_005C2050 + (*(s32 *)((u8 *)temp_s3 + 0xC) * 4)) = 0;
}
