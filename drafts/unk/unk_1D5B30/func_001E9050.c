/* Draft (not built): func_001E9050 at 0x001E9050, size 0x138, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E9050.s */

// src/unk/unk_1D5B30.c func_001E9050 diff diff=46/78
s32 func_002358A0(void *);
s32 func_001E9050(u8 *arg0) {
    s16 temp_a0;
    s32 temp_v0;
    s32 var_s0;
    s8 temp_v1;
    u8 *temp_s2;

    if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 2) {
        return 0;
    }
    temp_s2 = (unsigned char *)(gBattle);
    var_s0 = 0;
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43480000) != 0) {
        return 0;
    }
    temp_a0 = *(s16 *)((u8 *)temp_s2 + 0x7E2);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        if (*(s8 *)((u8 *)gBattle + 0x8977) != 3) {
            temp_v1 = *(s8 *)((u8 *)gBattle + 0x8979);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                var_s0 = 1;
                break;
            case 2:                                 /* switch 2 */
                var_s0 = 2;
                break;
            }
            return var_s0;
        }
block_23:
    default:                                        /* switch 1 */
        return func_002358A0(arg0);
    case 4:                                         /* switch 1 */
        temp_v0 = func_002CC450();
        if (temp_v0 & 0x10) {
            return 1;
        }
        if (temp_v0 & 0x200) {
            return 0;
        }
        goto block_23;
    }
}
