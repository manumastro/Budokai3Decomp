/* Draft (not built): func_002E8F90 at 0x002E8F90, size 0x344, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cit conversion from 'int *' to 'int' mwccps2.exe Compiler: @ 384: func_002E8C80(arg0, &D_0058F680 + (temp_t1 * 0xD680));
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E8F90.s */

// src/unk/unk_2E8540.c func_002E8F90 cerr diff=-1/0
extern s32 D_00470830;
extern s32 D_00470838;
extern s32 D_0058F680;
extern s32 D_0058F710;
extern s32 D_0058F724;
void func_002E8F90(u8 *arg0, s64 arg1, s64 arg2, s64 arg3) {
    s32 temp_a1;
    s32 var_a3_2;
    s32 var_s0;
    s64 temp_a0;
    s64 temp_t1;
    s64 temp_t2;
    s64 temp_v1;
    s64 var_a3;
    s64 var_v1;
    s64 var_v1_2;

    temp_a0 = (s64) (arg1 << 0x30) >> 0x30;
    var_s0 = 0;
    switch (temp_a0) {                              /* switch 1 */
    case 3:                                         /* switch 1 */
        var_s0 = 1;
        /* fallthrough */
    case 2:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        var_a3 = arg3 == 0;
        if (D_00470830 == 1) {
            temp_t1 = (s64) ((arg3 != 0) << 0x30) >> 0x30;
            if ((*(&D_00470838 + (temp_t1 * 4)) & 0x7FFF) == 4) {
                func_002E8C80(arg0, &D_0058F680 + (temp_t1 * 0xD680));
            } else {
                if (*(s16 *)((u8 *)arg0 + 0) == 0) {
                    var_v1 = (s64) (1 << 0x30) >> 0x30;
                } else if ((*(s8 *)((u8 *)arg0 + 2) == temp_a0) && (var_v1 = 0, (*(s8 *)((u8 *)arg0 + 3) == ((s64) (arg2 << 0x30) >> 0x30)))) {

                } else {
                    var_v1 = 1;
                }
                if (var_v1 != 0) {
                    var_a3 = (s64) (((s64) (var_a3 << 0x30) >> 0x30) << 0x30) >> 0x30;
                    if ((*(&D_00470838 + (var_a3 * 4)) & 0x7FFF) == 4) {
                        func_002E8C80(arg0, &D_0058F680 + (var_a3 * 0xD680));
                    } else {
                        goto block_19;
                    }
                }
            }
        } else {
block_19:
            func_002E8B40(arg0, var_a3, 0);
        }
        break;
    case 6:                                         /* switch 1 */
        temp_v1 = (s64) (arg2 << 0x30) >> 0x30;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            func_002E8980(arg0, 0, 0);
            break;
        case 3:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            var_a3_2 = D_00470830;
            if (var_a3_2 == 1) {
                temp_t2 = (s64) ((arg3 != 0) << 0x30) >> 0x30;
                if ((*(&D_00470838 + (temp_t2 * 4)) & 0x7FFF) == 4) {
                    func_002E8830(arg0, &D_0058F680 + (temp_t2 * 0xD680));
                } else {
                    if (*(s16 *)((u8 *)arg0 + 0) == 0) {
                        var_v1_2 = (s64) (1 << 0x30) >> 0x30;
                    } else if ((*(s8 *)((u8 *)arg0 + 2) == temp_a0) && (*(s8 *)((u8 *)arg0 + 3) == temp_v1)) {
                        var_v1_2 = 0;
                    } else {
                        var_v1_2 = 1;
                    }
                    if (var_v1_2 != 0) {
                        var_a3_2 = (s32) ((s64) (((s64) ((arg3 == 0) << 0x30) >> 0x30) << 0x30) >> 0x30);
                        if ((*(&D_00470838 + (var_a3_2 * 4)) & 0x7FFF) == 4) {
                            func_002E8830(arg0, &D_0058F680 + (var_a3_2 * 0xD680));
                        } else {
                            goto block_39;
                        }
                    }
                }
            } else {
block_39:
                func_002E8980(arg0, (s64) var_a3_2, 0);
            }
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_a1 = ((s64) (arg3 << 0x30) >> 0x30) * 0xD680;
        *(s16 *)((u8 *)arg0 + 0) = 0;
        *(s8 *)((u8 *)arg0 + 2) = 0;
        *(s8 *)((u8 *)arg0 + 3) = 0;
        *(s128 *)((u8 *)arg0 + 0x10) = 0;
        *(s128 *)((u8 *)arg0 + 0x20) = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        *(s64 *)((u8 *)arg0 + 0x38) = (s64) *(&D_0058F710 + temp_a1);
        *(u16 *)((u8 *)arg0 + 0x40) = (u16) *(&D_0058F724 + temp_a1);
        break;
    case 1:                                         /* switch 1 */
        var_s0 = 1;
        /* fallthrough */
    case 5:                                         /* switch 1 */
        func_002E8980(arg0, 0, 0);
        break;
    }
    if (var_s0 != 0) {
        memset(arg0 + 0x420, 0, 0x26);
    }
}
