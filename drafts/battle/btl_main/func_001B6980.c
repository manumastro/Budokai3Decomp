/* Draft (not built): func_001B6980 at 0x001B6980, size 0x2C8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 114 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x268, original 0x2C8
 * Original: asm/nonmatchings/battle/btl_main/func_001B6980.s */

// src/battle/btl_main.c func_001B6980 size diff=114/154
extern s32 func_0012EAE0(s32);
s32 func_001D9280(void *);
void func_001B6980(u8 *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_a0;

    Fighter_ResetMotion(0, 0);
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCB4);
    switch (temp_a0) {                              /* irregular */
    case 0:
        if ((*(f32 *)((u8 *)arg0 + 0xCB8) / 60.0f) < 1.0f) {

        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= 60.0f)) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            return;
        }
        return;
    case 1:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xCAC) << 0x30) >> 0x30) != 0x1D) {
            func_001D9280(arg0);
            *(s16 *)((u8 *)arg0 + 0xCB4) = 3;
            return;
        }
        break;
    case 2:
        temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xCAC);
        if ((temp_a0_2 != 0x1D) && (temp_a0_2 != 0x1E)) {
            func_001D9280(arg0);
            *(s16 *)((u8 *)arg0 + 0xCB4) = 3;
        }
        *(s16 *)((u8 *)arg0 + 0x1A34) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A34) + 1);
        temp_v1 = *(s16 *)((u8 *)arg0 + 0x1A34);
        var_a0 = temp_v1 & 7;
        if (temp_v1 < 0) {
            if (var_a0 != 0) {
                var_a0 -= 8;
            }
        }
        if (var_a0 == 7) {
            if (*(s16 *)((u8 *)arg0 + 0x1A34) < 0x12C) {
                *(s16 *)((u8 *)arg0 + 0x1A38) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A38) + *(s16 *)((u8 *)arg0 + 0x1A36));
                *(s16 *)((u8 *)arg0 + 0x1A36) = 0;
                return;
            }
            temp_a0_3 = *(s16 *)((u8 *)arg0 + 0x1A38);
            temp_v1_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A38);
            if (temp_v1_2 < temp_a0_3) {
                *(s16 *)((u8 *)arg0 + 0x1A38) = (s16) (temp_a0_3 + 0xA);
                return;
            }
            if (temp_a0_3 < temp_v1_2) {
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_004684D8(arg0);
                func_002CBFF0(1, arg0);
                return;
            }
            *(s16 *)((u8 *)arg0 + 0x1A38) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A38) + ((s64) (((func_0012EAE0(0x20) / 10) & 1) << 0x30) >> 0x30));
            return;
        }
        break;
    case 3:
        if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_00468460[0](arg0);
            func_002CBFF0(1, arg0);
            func_00237000(3, NULL);
            func_001D9900(arg0, 0xD, 1);
        }
        break;
    }
}
