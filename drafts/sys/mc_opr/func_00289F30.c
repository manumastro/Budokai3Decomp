/* Draft (not built): func_00289F30 at 0x00289F30, size 0x170, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK amHeap_Free(s32);                           /* extern */
s32 func_001EF510(s32, s32);                        /* extern */
M2C_UNK func_001EF930(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00288870(M2C_UNK, s32);                /* extern */
extern s32 D_0047054C;
extern s32 D_00470558;
extern s32 D_0047084C;
extern s32 D_00470850;
extern M2C_UNK *D_00470894;
extern s32 D_004708A0;
extern M2C_UNK D_004B4B40;
extern s64 D_004B4B48;
extern s32 D_004B4B50;
extern s8 D_004B4B64;
extern s8 D_004B4B65;
extern M2C_UNK func_00289E80;
extern M2C_UNK func_0028A9E0;
extern M2C_UNK func_0028DDF0;
extern s32 gMcState;

void func_00289F30(void *arg0, s32 arg1) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    s32 var_a1;

    var_a1 = arg1;
    switch (gMcState) {                             /* irregular */
    case 2:
        var_a1 = 0xD680;
        if (D_00470558 != 0xD680) {
        case 3:
            func_00288870(9, var_a1);
            var_v1 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470894 = &func_00289E80;
            if (D_0047054C != 0) {
                amHeap_Free(D_0047054C);
                D_0047054C = 0;
            }
            return;
        }
        D_004708A0 = D_0047054C;
        D_0047054C = 0;
        if (func_001EF510(D_004708A0, 0xD680) != 0) {
            func_00288870(9);
            var_v0 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v0 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v0;
            D_00470894 = &func_00289E80;
            amHeap_Free(D_004708A0);
            D_004708A0 = 0;
            return;
        }
        D_004B4B48 = 1;
        D_004B4B50 = 1;
        func_001EF930(&D_004B4B40, D_004708A0);
        amHeap_Free(D_004708A0);
        D_004B4B65 = 0;
        D_004708A0 = 0;
        D_004B4B64 = (s8) D_0047084C;
        func_00288870(0xA);
        var_v1_2 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        D_00470894 = &func_0028A9E0;
        D_00470850 = 0x78;
        return;
    }
}
