/* Draft (not built): func_001B3FE0 at 0x001B3FE0, size 0x294, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x294
 * Original: asm/nonmatchings/battle/btl_main/func_001B3FE0.s */

// src/battle/btl_main.c func_001B3FE0 size diff=96/156
extern s32 func_0012EAE0(s32);
s32 func_001E3100(void *);
void func_001B3FE0(u8 *arg0) {
    s32 sp20;
    s32 sp2C;
    s32 sp30;
    s16 temp_v1;
    s16 var_v0;
    s16 var_v0_2;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x28;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {                               /* switch 1 */
    case 0:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        break;
    case 1:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
        break;
    case 4:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
        break;
    case 5:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
        break;
    case 6:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
        break;
    case 7:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
        break;
    case 9:                                         /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
        break;
    case 11:                                        /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
        break;
    default:                                        /* switch 1 */
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    sp30 = *(s32 *)((u8 *)arg0 + 0x1350);
    sp2C = 0;
    func_00218440(0xD, &sp20);
    *(s32 *)((u8 *)arg0 + 0xB70) = 0x100;
    temp_v1 = *(s16 *)((u8 *)arg0 + 0xCB4);
    switch (temp_v1) {                              /* switch 2; irregular */
    case 2:                                         /* switch 2 */
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0xF4;
        break;
    case 3:                                         /* switch 2 */
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0xF6;
        break;
    default:                                        /* switch 2 */
        var_v0_2 = 0xF8;
        if (!((*(f32 *)((u8 *)arg0 + 0x1390) - *(f32 *)((u8 *)arg0 + 0x1398)) <= 0.0f)) {

        } else {
            var_v0_2 = 0xFA;
        }
        *(s16 *)((u8 *)arg0 + 0xCB4) = var_v0_2;
        break;
    }
    *(s16 *)((u8 *)arg0 + 0xCB4) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB4) + ((s64) (((func_0012EAE0(0x20) / 10) & 1) << 0x30) >> 0x30));
    func_001E3460(arg0);
    *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)arg0 + 0xCA4) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0xCA8) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0xCBD) = 1;
    *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    func_001E3100(arg0);
    func_001D9C00(arg0);
    func_001ABD30((void *)(arg0 + 0x1360));
    func_001D9900(arg0, 0xC, 1);
}
