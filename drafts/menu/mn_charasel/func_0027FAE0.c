/* Draft (not built): func_0027FAE0 at 0x0027FAE0, size 0x1C0, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x1C0
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027FAE0.s */

// src/menu/mn_charasel.c func_0027FAE0 size diff=56/109
s32 func_00287C30(void *, s32, s32 *, s32);
s32 func_00287C60(u8);
extern s32 D_00470838;
extern s32 D_004B4B50;
extern s32 D_0058F680;
extern void func_0027F9F0(void);
extern void func_0027FEB0(void);
void func_0027FAE0(u8 *arg0) {
    s32 *var_a1;
    s32 *var_v1_2;
    s32 *var_a2;
    s32 var_a3;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 var_v1;
    u8 *temp_s0;
    u8 *temp_s1;

    var_a3 = 0;
    var_a2 = &D_00470838;
    var_a1 = &D_0058F680;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x38);
    temp_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x30);
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            D_004B4B50 |= *(u16 *)((u8 *)var_a1 + 0xA4);
        }
        var_a3 += 1;
        var_a1 = var_a1 + 0x7FFF + 0x5681;
        var_a2 += 4;
    } while (var_a3 < 2);
    func_00287C30(*(u8 **)((u8 *)temp_s1 + 8), D_004B4B50, var_a2, var_a3);
    func_0027EA60(temp_s1);
    temp_a0 = *(u8 *)((u8 *)temp_s0 + 0x262);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_v1 = 7;
block_17:
        *(u8 *)((u8 *)temp_s1 + 0x3D) = var_v1;
        break;
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
        var_v1 = 8;
        goto block_17;
    case 4:                                         /* switch 1 */
        var_v1 = 9;
        goto block_17;
    case 5:                                         /* switch 1 */
        var_v1 = 0xA;
        goto block_17;
    }
    temp_a0_2 = *(u8 *)((u8 *)temp_s1 + 0x3D);
    switch (temp_a0_2) {                            /* switch 2; irregular */
    case 8:                                         /* switch 2 */
    case 7:                                         /* switch 2 */
        return;
    case 9:                                         /* switch 2 */
        func_0027E9C0(temp_s1);
        var_v1_2 = (int *)(&func_0027F9F0);
        if (&func_0027F9F0 == NULL) {
            var_v1_2 = NULL;
        }
block_33:
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    case 10:                                        /* switch 2 */
        if (*(u8 **)((u8 *)temp_s1 + 8) != NULL) {
            func_00287C60(temp_a0_2);
            *(u8 **)((u8 *)temp_s1 + 8) = NULL;
        }
        func_002800F0(arg0);
        var_v1_2 = (int *)(&func_0027FEB0);
        if (&func_0027FEB0 == NULL) {
            var_v1_2 = NULL;
        }
        goto block_33;
    }
}
