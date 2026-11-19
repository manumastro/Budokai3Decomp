/* Draft (not built): func_00218C40 at 0x00218C40, size 0x90, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218C40.s */

void func_00218C40(u8 *arg0, f32 fparg0, f32 fparg1) {
    u8 *var_v1;
    var_v1 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (var_v1 != NULL) {
    } else {
        var_v1 = amTask_Create(&func_002186D0, 0, 0x4080, 0x20, 0, 0);
    }
    *(u8 **)((u8 *)var_v1 + 0x30) = arg0;
    *(f32 *)((u8 *)var_v1 + 0x38) = fparg0;
    *(f32 *)((u8 *)var_v1 + 0x34) = (f32)*(f32 *)((u8 *)arg0 + 0);
    *(f32 *)((u8 *)var_v1 + 0x40) = fparg1;
    *(s32 *)((u8 *)var_v1 + 0x3C) = 0;
    *(u8 **)((u8 *)arg0 + 0x1C) = var_v1;
}
