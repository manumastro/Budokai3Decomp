/* Draft (not built): func_001BAFF0 at 0x00468D90, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 119 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x294, original 0x2C8
 * Original: asm/nonmatchings/battle/btl_main/func_001BAFF0.s */

// src/battle/btl_main.c func_001BAFF0 size diff=119/165
extern s32 D_00468710;
extern void func_0013B160(void *);
extern char D_003F0800[];
extern void func_0013B620(void *);
void func_001BAFF0(u8 *arg0) {
    s16 var_v0;
    u8 *temp_a0;

    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) *(&D_00468710 + (*(s16 *)((u8 *)arg0 + 0x181E) * 4));
    func_001E3460(arg0);
    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x10;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
        break;
    case 4:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
        break;
    case 5:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
        break;
    case 6:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
        break;
    case 7:
    case 8:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
        break;
    case 9:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
        break;
    case 11:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
        break;
    default:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        func_001C37F0((Fighter *)(arg0), (void *)(arg0 + 0xD0));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0xCAE) << 0x30) >> 0x30) == 0x10) {
            *(f32 *)((u8 *)arg0 + 0x1810) = (f32) (*(f32 *)((u8 *)arg0 + 0x1810) * 1.05f);
            *(f32 *)((u8 *)arg0 + 0x1814) = (f32) (*(f32 *)((u8 *)arg0 + 0x1814) * 0.95f);
        }
    } else {
        *(s32 *)((u8 *)arg0 + 0xD0) = 0;
        *(f32 *)((u8 *)arg0 + 0xD4) = 0.0f;
        *(s32 *)((u8 *)arg0 + 0xD8) = 0xBF800000;
        *(s32 *)((u8 *)arg0 + 0xDC) = 0x3F800000;
        func_0013B160(D_003F0800);
        func_0013B620(*(u8 **)((u8 *)arg0 + 0x17A4));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    }
    *(f32 *)((u8 *)arg0 + 0xD4) = 0.0f;
    temp_a0 = arg0 + 0xD0;
    func_00146ED0((f32 *)(temp_a0), (f32 *)(temp_a0), *(f32 *)((u8 *)arg0 + 0x1814));
    *(f32 *)((u8 *)arg0 + 0xD4) = (f32) *(f32 *)((u8 *)arg0 + 0x1810);
    if (*(s16 *)((u8 *)arg0 + 0x181C) == 0) {
        *(s16 *)((u8 *)arg0 + 0x181C) = 1;
        *(f32 *)((u8 *)arg0 + 0x1818) = (f32) *(f32 *)((u8 *)arg0 + 0x64);
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
        *(f32 *)((u8 *)arg0 + 0x1818) = (f32) *(f32 *)((u8 *)arg0 + 0x1844);
    }
    *(s32 *)((u8 *)arg0 + 0x1864) = 3;
    func_001E5040(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
    func_001E2070(arg0);
    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
}
