/* Draft (not built): func_0028B9B0 at 0x0028B9B0, size 0x3F4, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK BtbEntry_DecodeColors(s32, M2C_UNK *);      /* extern */
s32 amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK amHeap_Free(s32);                           /* extern */
s32 amMc_Save(s32, M2C_UNK, M2C_UNK *, s32);        /* extern */
s32 func_001EF510(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001EF730(s32);                         /* extern */
M2C_UNK func_001EFDB0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
s32 memcmp(s32, s32, M2C_UNK);                      /* extern */
extern M2C_UNK D_0046B8F0;
extern M2C_UNK D_0046B9F8;
extern s32 D_00470048;
extern s32 D_0047054C;
extern s32 D_00470558;
extern M2C_UNK D_00470840;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470868;
extern s32 D_00470870;
extern s32 D_00470874;
extern M2C_UNK *D_00470894;
extern s32 D_004708A0;
extern M2C_UNK D_004B4B40;
extern M2C_UNK func_0028BEB0;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028D1E0;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDF0;
extern s32 gMcState;

void func_0028B9B0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_6;
    M2C_UNK *var_v1_7;
    s32 var_s0;

    switch (gMcState) {                             /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if (D_00470558 == 0xD680) {
            D_004708A0 = D_0047054C;
            D_0047054C = 0;
            if (func_001EF510(D_004708A0, 0xD680) != 0) {
                amHeap_Free(D_004708A0);
                D_004708A0 = 0;
                goto block_53;
            }
            if ((D_00470874 != 0) && (var_s0 = 0, (memcmp(D_004708A0 + 0x30, D_00470874, 0x24) != 0))) {

            } else {
                var_s0 = 1;
            }
            amHeap_Free(D_004708A0);
            D_004708A0 = 0;
            switch (D_00470048) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                if (D_00470868 == 0) {
                    if (var_s0 != 0) {
                        func_00288870(0x15);
                    } else {
                        func_00288870(0x17);
                    }
                    var_v1 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                    D_00470894 = &func_0028D1E0;
                    D_00470854 = 1;
                    return;
                }
                goto block_42;
            case 4:                                 /* switch 2 */
            case 5:                                 /* switch 2 */
                if ((D_00470868 == 0) && (var_s0 == 0)) {
                    func_00288870(0x17);
                    var_v1_2 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1_2 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                    D_00470894 = &func_0028D1E0;
                    D_00470854 = 1;
                } else {
                    goto block_42;
                }
                break;
            case 10:                                /* switch 2 */
            case 9:                                 /* switch 2 */
            case 8:                                 /* switch 2 */
                if (var_s0 == 0) {
                    func_00288870(0x2B);
                    var_v1_3 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1_3 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
                    D_00470894 = &func_0028C580;
                    D_00470854 = 1;
                } else {
                    goto block_42;
                }
                break;
            }
        } else {
        case 3:                                     /* switch 1 */
block_53:
            switch (D_00470048) {                   /* switch 3; irregular */
            case 5:                                 /* switch 3 */
            case 4:                                 /* switch 3 */
            case 2:                                 /* switch 3 */
                if (D_00470868 == 0) {
                    func_00288870(0x17);
                    var_v1_4 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1_4 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
                    D_00470894 = &func_0028D1E0;
                    D_00470854 = 1;
                    return;
                }
block_42:
                if (D_00470048 != 4) {
                    if (D_00470048 == 2) {
                        goto block_45;
                    }
                } else {
block_45:
                    D_004708A0 = amHeap_Alloc(0xD680, 0, &D_0046B9F8, 0x815);
                    func_001EFDB0(D_004708A0, &D_004B4B40);
                    BtbEntry_DecodeColors(D_004708A0, &D_00470840);
                    func_001EF730(D_004708A0);
                    D_00470870 = D_004708A0;
                }
                if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) != 0) {
                    func_00288870(0x1C);
                    var_v1_5 = &func_0028C580;
                    if (&func_0028C580 == NULL) {
                        var_v1_5 = NULL;
                    }
                } else {
                    func_00288870(0x1A);
                    var_v1_5 = &func_0028BEB0;
                    if (&func_0028BEB0 == NULL) {
                        var_v1_5 = NULL;
                    }
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_5;
                return;
            case 10:                                /* switch 3 */
            case 9:                                 /* switch 3 */
            case 8:                                 /* switch 3 */
                func_00288870(0x2B);
                var_v1_6 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1_6 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_6;
                D_00470894 = &func_0028C580;
                D_00470854 = 1;
                return;
            default:                                /* switch 3 */
                func_00288870(0x18);
                var_v1_7 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1_7 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_7;
                D_00470894 = &func_0028DDA0;
                D_00470854 = 1;
                return;
            }
        }
        break;
    }
}
