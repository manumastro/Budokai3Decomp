/* Draft (not built): func_002BE0B0 at 0x002BE0B0, size 0x268, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'int *' @ 718: func_002BE0B0(*(s32 *)(*(u8 **)(a0 + 0x25C)));
 * Original: asm/nonmatchings/story/str_status/func_002BE0B0.s */

// src/story/str_status.c func_002BE0B0 cerr diff=-1/0
s32 func_001C95F0(s32, s32, s32 *, void *);
void *func_00240F40(s32, s32);
extern s32 D_00456110;
extern s32 D_00456114;
void func_002BE0B0(s32 *arg0) {
    s32 sp80;
    s32 spC0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_s6 = (u8 *)(D_0046FE44);
    temp_s3 = func_00240F40(0, 0);
    temp_s2 = func_00240F40(0, 1);
    temp_s1 = func_00240F40(0, 2);
    temp_v0 = func_00240F40(0, 3);
    temp_s5 = temp_v0;
    var_s0 = 0;
    *(u8 **)((u8 *)temp_s6 + 0x20) = (u8 *) D_0047011C;
    *(u8 **)((u8 *)temp_v0 + 0x6C) = (u8 *) D_0047011C;
    *(u8 **)((u8 *)temp_s1 + 0x6C) = (u8 *) D_0047011C;
    *(u8 **)((u8 *)temp_s2 + 0x6C) = (u8 *) D_0047011C;
    *(u8 **)((u8 *)temp_s3 + 0x6C) = (u8 *) D_0047011C;
    *(s32 *)((u8 *)temp_v0 + 0x70) = 5;
    *(s32 *)((u8 *)temp_s1 + 0x70) = 5;
    *(s32 *)((u8 *)temp_s2 + 0x70) = 5;
    *(s32 *)((u8 *)temp_s3 + 0x70) = 5;
loop_13:
    if (var_s0 < *(s32 *)((u8 *)temp_s3 + 0x70)) {
        var_a1 = *(&D_00456110 + (var_s0 * 8));
        if (*(s32 *)((u8 *)D_0047011C + 0x1BC) & 1) {
            if (var_s0 == 5) {
                var_a1 = 4;
            }
            if (var_s0 == 6) {
                var_a1 = 5;
            }
        }
        func_001C95F0(*arg0, var_a1, &spC0, 0);
        func_0013B160((s32)((void *)(&spC0)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($s6) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        temp_a3 = (var_s0 * 4) + temp_s5;
        temp_v1 = (u8 *)(D_0047011C + (var_s0 * 0x10) + 0x30);
        *(u8 **)((u8 *)temp_a3 + 0x74) = temp_v1;
        *(u8 **)((u8 *)((var_s0 * 4) + temp_s1) + 0x74) = temp_v1;
        *(u8 **)((u8 *)((var_s0 * 4) + temp_s2) + 0x74) = temp_v1;
        *(u8 **)((u8 *)((var_s0 * 4) + temp_s3) + 0x74) = temp_v1;
        var_a1_2 = *(&D_00456114 + (var_s0 * 8));
        if (*(s32 *)((u8 *)D_0047011C + 0x1BC) & 1) {
            if (var_s0 == 5) {
                var_a1_2 = 6;
            }
            if (var_s0 == 6) {
                var_a1_2 = 7;
            }
        }
        func_001C95F0(*arg0, var_a1_2, &sp80, temp_a3);
        func_0013B160((s32)((void *)(&sp80)));
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($s6) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        temp_a2 = (var_s0 * 4) + temp_s5;
        temp_a1 = (var_s0 * 4) + temp_s1;
        temp_a0 = (var_s0 * 4) + temp_s2;
        temp_v1_2 = (var_s0 * 4) + temp_s3;
        temp_a3_2 = (u8 *)(D_0047011C + (var_s0 * 0x10) + 0x80);
        var_s0 += 1;
        *(u8 **)((u8 *)temp_a2 + 0x94) = temp_a3_2;
        *(u8 **)((u8 *)temp_a1 + 0x94) = temp_a3_2;
        *(u8 **)((u8 *)temp_a0 + 0x94) = temp_a3_2;
        *(u8 **)((u8 *)temp_v1_2 + 0x94) = temp_a3_2;
        goto loop_13;
    }
}
