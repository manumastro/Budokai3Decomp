/* Draft (not built): func_002BF610 at 0x002BF610, size 0x234, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1FC, original 0x234
 * Original: asm/nonmatchings/story/str_status/func_002BF610.s */

// src/story/str_status.c func_002BF610 size diff=65/127
s32 func_0013BC00(f32, f32, f32);
s32 func_00209B50(void *, void *, s32);
void *func_00243DC0(s32);
extern void func_00208D60();
void func_002BF610(void) {
    s32 sp38;
    s32 sp34;
    f32 sp30;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_8;
    s32 temp_a2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_s1 = (unsigned char *)(D_0046FE44);
    temp_s0 = (unsigned char *)(D_0046FE48);
    if (!(*(s32 *)((u8 *)temp_s1 + 0x2C) & 1) && (*(s16 *)((u8 *)temp_s1 + 0x100) == 1)) {
        if (*(s16 *)((u8 *)temp_s1 + 0x36) != 0xE) {
            if (*(s8 *)((u8 *)temp_s1 + 0x39) != 0) {
                func_00209E50((s32)(NULL));
                func_0013B0B0(NULL);
                D_00470238 = 0;
                temp_a0 = *(s32 *)((u8 *)D_0047011C + 0xD0);
                if (temp_a0 != 0) {
                    amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)D_0047011C + 0xD8));
                }
                temp_a0_2 = *(s32 *)((u8 *)D_0047011C + 0xD4);
                if (temp_a0_2 != 0) {
                    func_00208D60(temp_a0_2);
                }
                temp_a0_3 = *(u8 **)((u8 *)D_0047011C + 0x1B0);
                if (temp_a0_3 != NULL) {
                    func_00209B50(temp_a0_3, D_0047011C, 1);
                    func_00208D70((s32)(*(u8 **)((u8 *)D_0047011C + 0x1B0)));
                }
                amModel_SetCurrent(*(s32 *)((u8 *)temp_s0 + 0x194), *(s32 *)((u8 *)temp_s0 + 0x19C));
                temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x198);
                if (temp_a0_4 != 0) {
                    func_00208D60(temp_a0_4);
                }
                if (*(s32 *)((u8 *)D_0047011C + 0x1BC) & 1) {
                    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                    func_0013BC00(sp30, sp34, sp38);
                } else {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
                }
                temp_a0_5 = *(u8 **)((u8 *)temp_s1 + 0x40);
                if (temp_a0_5 != NULL) {
                    func_00208D70((s32)(temp_a0_5));
                }
                temp_a0_6 = *(u8 **)((u8 *)temp_s1 + 0x44);
                if (temp_a0_6 != NULL) {
                    func_00208D70((s32)(temp_a0_6));
                }
                temp_a0_7 = *(u8 **)((u8 *)temp_s1 + 0x48);
                if (temp_a0_7 != NULL) {
                    func_00208D70((s32)(temp_a0_7));
                }
                func_0013B110(1);
                goto block_23;
            }
        } else {
            func_002BDC50();
block_23:
            if ((*(s32 *)((u8 *)D_0047011C + 0x1BC) & 2) && (*(u8 **)((u8 *)D_0047011C + 0x1A4) != NULL)) {
                temp_v0 = func_00243DC0(0);
                temp_a2 = *(s32 *)((u8 *)temp_v0 + 8);
                temp_a0_8 = *(s32 *)((u8 *)((temp_a2 * 4) + temp_v0) + 0x14);
                D_00470238 = 0;
                amModel_SetCurrent(temp_a0_8, ((0 * 2) << 9) + 0x03004000);
                func_00209E50((s32)(NULL));
                func_0013B0B0(NULL);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
                func_00208D70((s32)(*(u8 **)((u8 *)D_0047011C + 0x1A4)));
                func_0013B110(1);
            }
        }
    }
}
