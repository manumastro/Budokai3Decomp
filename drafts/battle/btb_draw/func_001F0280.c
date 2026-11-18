/* Draft (not built): func_001F0280 at 0x001F0280, size 0x23C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x23C
 * Original: asm/nonmatchings/battle/btb_draw/func_001F0280.s */

// src/battle/btb_draw.c func_001F0280 size diff=42/145
s32 func_0026DC80(void *, void *);
s32 func_002E1BD0(void *);
extern s32 D_0044A1F0;
extern s32 D_004E0660;
void func_001F0280(u8 *arg0) {
    s16 sp40;
    s16 *var_a1;
    s16 *var_t3_2;
    s16 temp_a0;
    s16 temp_a3;
    s16 var_a0;
    s32 var_a3;
    s32 var_s2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_t4;
    u64 var_t2;
    u8 *temp_t4;
    u8 *var_s1;

    *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_0044A1F0) + 0);
    *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)(&D_0044A1F0) + 0x10);
    *(s16 *)((u8 *)(&sp40) + 0x20) = (s16) *(s16 *)((u8 *)(&D_0044A1F0) + 0x20);
    memset(NULL, 0x2BAE0, *(s128 *)((u8 *)(&D_0044A1F0) + 0x10));
    memset(arg0 + 0x2B242, 0xFF, 0x214);
    func_002E1BD0(arg0);
    memset(arg0 + 0xC0, 0, 0x2B180);
    var_s2 = 0;
    var_s1 = arg0;
    do {
        *(s32 *)((u8 *)var_s1 + 0x12E0) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12E4) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12E8) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12EC) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12F0) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12F4) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12F8) = 0x10000;
        *(s32 *)((u8 *)var_s1 + 0x12FC) = 0x10000;
        memset(var_s1 + 0x1330, 0xFF, 0xE);
        var_s2 += 1;
        var_s1 += 0x1210;
    } while (var_s2 < 0x26);
    memset(arg0 + 0x2AFD9, 0, 0x253);
    var_a0 = sp40;
    var_a1 = &sp40;
    if (var_a0 != -1) {
        do {
            var_t3 = -1;
            *(s8 *)((u8 *)(arg0 + var_a0) + 0x2AFD9) = 1;
            temp_a0 = *var_a1;
            temp_t4 = (u8 *)(&D_004E0660 + (temp_a0 * 0x28));
            var_t2 = *(u64 *)((u8 *)temp_t4 + 0);
            var_a3 = 0;
            if (var_t2 != 0) {
loop_6:
                if (var_t2 & 1) {
                    if (var_t3 == -1) {
                        var_t3 = var_a3;
                        goto block_11;
                    }
                    var_t3 = -1;
                } else {
block_11:
                    var_t2 = var_t2 >> 1;
                    var_a3 += 1;
                    if (var_t2 == 0) {

                    } else {
                        goto loop_6;
                    }
                }
            }
            if (var_t3 != -1) {
                var_t2_2 = 0;
                var_t3_2 = (s16 *)(arg0 + (var_t3 * 0xE) + 0x2B242);
                var_t4 = 7 - (*(u8 *)((u8 *)temp_t4 + 8) & 7);
loop_15:
                temp_a3 = *var_t3_2;
                if (temp_a3 == -1) {
                    *var_t3_2 = temp_a0;
                } else {
                    var_t4 -= *(u8 *)((u8 *)(&D_004E0660 + (temp_a3 * 0x28)) + 8) & 7;
                    if (var_t4 >= 0) {
                        var_t2_2 += 1;
                        var_t3_2 += 2;
                        if (var_t2_2 >= 7) {

                        } else {
                            goto loop_15;
                        }
                    }
                }
            }
            var_a1 += 2;
            var_a0 = *var_a1;
        } while (var_a0 != -1);
    }
    func_0026DC80(arg0, arg0 + 0x2AFD9);
}
