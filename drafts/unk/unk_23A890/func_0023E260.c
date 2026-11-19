/* Draft (not built): func_0023E260 at 0x0023E260, size 0x30C, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x310, original 0x30C
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023E260.s */

// src/unk/unk_23A890.c func_0023E260 size diff=62/196
void *BtlSys_GetSlot(s32);
s32 func_00228430(s32, s32);
s32 func_002284D0(s32);
s32 func_0022B900(s32, s32, f32);
extern f32 D_00470710;
extern s32 D_0058C1CC;
extern void func_00228410(void);
void func_0023E260(s32 arg0) {
    s32 saved_reg_f21;
    s32 saved_reg_f20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f20;
    f32 var_f21;
    f32 var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s5;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *temp_a0_4;
    u8 *var_s1;

    var_f20 = saved_reg_f20;
    var_f21 = saved_reg_f21;
    var_s4 = gBtlSys;
    var_s5 = arg0;
    var_s0 = func_0021C3D0(arg0);
    var_s3 = func_0021C660(var_s0);
    var_s2 = func_0021C430(var_s0);
    var_s1 = BtlSys_GetSlot(var_s0);
    func_0021C400(var_s0);
    temp_a0 = *(s32 *)((u8 *)var_s4 + 0xE84);
    var_s0 = -1;
    D_00470704 = temp_a0;
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x04010000);
    D_00470238 = 0;
    temp_a1 = *(s32 *)((u8 *)var_s3 + 0x18);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_f21 = 0.0f;
        break;
    case 1:                                         /* switch 1 */
        var_f21 = 50.0f;
        break;
    case 2:                                         /* switch 1 */
        var_f21 = 100.0f;
        break;
    }
    temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0);
    if (temp_a0_2 & 0x80) {
        *(f32 *)((u8 *)var_s1 + 0x2C) = var_f21;
        var_s0 = 1;
        var_f20 = var_f21;
    } else if (temp_a0_2 & 0x2000) {
        var_s0 = 3;
        var_f20 = *(f32 *)((u8 *)var_s1 + 0x2C) + D_00470710;
        *(f32 *)((u8 *)var_s1 + 0x2C) = var_f20;
    } else {
        temp_a0_3 = *(s32 *)((u8 *)var_s2 + 0x18);
        if (temp_a0_3 < temp_a1) {
            var_s0 = 1;
            switch (temp_a0_3) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                *(f32 *)((u8 *)var_s1 + 0x2C) = 0.0f;
                break;
            case 1:                                 /* switch 2 */
                var_v1 = 50.0f;
                goto block_33;
            case 2:                                 /* switch 2 */
                var_v1 = 100.0f;
                goto block_33;
            }
        } else if (temp_a1 < temp_a0_3) {
            var_s0 = 2;
            switch (temp_a0_3) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                *(f32 *)((u8 *)var_s1 + 0x2C) = 0.0f;
                break;
            case 1:                                 /* switch 3 */
                var_v1 = 50.0f;
block_33:
                *(f32 *)((u8 *)var_s1 + 0x2C) = var_v1;
                break;
            case 2:                                 /* switch 3 */
                var_v1 = 100.0f;
                goto block_33;
            }
        }
        temp_f1 = *(f32 *)((u8 *)var_s1 + 0x2C);
        if (temp_f1 < var_f21) {
            var_s0 = 1;
            temp_f0 = temp_f1 + D_00470710;
            *(f32 *)((u8 *)var_s1 + 0x2C) = temp_f0;
            if (!(temp_f0 <= var_f21)) {
                *(f32 *)((u8 *)var_s1 + 0x2C) = var_f21;
            }
            var_f20 = *(f32 *)((u8 *)var_s1 + 0x2C);
        } else if (!(temp_f1 <= var_f21)) {
            var_s0 = 2;
            temp_f0_2 = temp_f1 - D_00470710;
            *(f32 *)((u8 *)var_s1 + 0x2C) = temp_f0_2;
            if (temp_f0_2 < var_f21) {
                *(f32 *)((u8 *)var_s1 + 0x2C) = var_f21;
            }
            var_f20 = 100.0f - *(f32 *)((u8 *)var_s1 + 0x2C);
        }
    }
    if (var_s0 != -1) {
        func_00228430(0, temp_a1);
        func_002284D0(0);
        func_0022B900(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 0xE88)) + 0x1C) + ((var_s0 + 0x2C + (var_s5 * 4)) * 4)), *(&D_0058C1CC + (var_s5 * 0x64)), var_f20);
        func_00228410();
    }
    temp_a0_4 = (unsigned char *)(*(&D_0058C1CC + (var_s5 * 0x64)));
    *(s32 *)((u8 *)temp_a0_4 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_4 + 4) | 0x18);
}
