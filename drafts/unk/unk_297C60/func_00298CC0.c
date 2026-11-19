/* Draft (not built): func_00298CC0 at 0x00298CC0, size 0xDC, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4, original 0xDC
 * Original: asm/nonmatchings/unk/unk_297C60/func_00298CC0.s */

// src/unk/unk_297C60.c func_00298CC0 size diff=28/45
void func_00298CC0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, f32 fparg0) {
    s32 *var_t1;
    s32 var_t0;
    s32 var_v1;

    var_v1 = 0;
    var_t1 = (int *)(D_005AA604 + 0x80);
loop_1:
    if (*var_t1 == arg0) {

    } else {
        var_v1 += 1;
        var_t1 += 0x40;
        if (var_v1 >= 0x40) {
            var_t1 = NULL;
        } else {
            goto loop_1;
        }
    }
    if (var_t1 == NULL) {
        var_t1 = (int *)(D_005AA604 + 0x80);
        var_t0 = 0;
loop_8:
        if (*var_t1 == -1) {

        } else {
            var_t0 += 1;
            var_t1 += 0x40;
            if (var_t0 >= 0x40) {
                var_t1 = NULL;
            } else {
                goto loop_8;
            }
        }
    }
    *(s32 *)((u8 *)var_t1 + 0) = arg0;
    *(s32 *)((u8 *)var_t1 + 4) = arg1;
    *(s32 *)((u8 *)var_t1 + 8) = arg2;
    *(f32 *)((u8 *)var_t1 + 0xC) = fparg0;
    *(f32 *)((u8 *)var_t1 + 0x10) = (f32) *(f32 *)((u8 *)arg3 + 0);
    *(f32 *)((u8 *)var_t1 + 0x14) = (f32) *(f32 *)((u8 *)arg3 + 4);
    *(f32 *)((u8 *)var_t1 + 0x18) = (f32) *(f32 *)((u8 *)arg3 + 8);
    *(f32 *)((u8 *)var_t1 + 0x1C) = (f32) *(f32 *)((u8 *)arg3 + 0xC);
    *(s32 *)((u8 *)var_t1 + 0x20) = -1;
    *(s32 *)((u8 *)var_t1 + 0x2C) = -1;
    *(s32 *)((u8 *)var_t1 + 0x30) = -1;
    *(s32 *)((u8 *)var_t1 + 0x34) = -1;
    func_002904C0((Slot *)(var_t1));
}
