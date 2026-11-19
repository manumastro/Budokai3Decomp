/* Draft (not built): func_00131700 at 0x00131700, size 0x488, segment sys/unk_131700 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 158 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x51C, original 0x488
 * Original: asm/nonmatchings/sys/unk_131700/func_00131700.s */

// src/sys/unk_131700.c func_00131700 size diff=158/327
void *amPkt_Alloc(s32, s32, s32, s32);
extern s32 D_004703B0;
extern s8 D_00470408;
extern s32 D_0047041C;
extern u32 D_00470424;
extern s32 D_00470428;
extern s8 D_00470454;
extern s8 D_0047045C;
extern s32 D_00470484;
extern s32 D_00470490;
extern s8 D_004704A8;
extern u16 D_0047E5A0;
extern u16 D_0047E710;
void func_00131700(void) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    f32 sp20;
    f32 var_a0;
    f32 var_a0_2;
    f32 var_a0_3;
    f32 var_a1;
    s32 var_s0;
    u8 *temp_v0;

    if (D_004704A8 != 0) {
        if (D_00470408 == 1) {
            if (D_004703B0 != 0) {
                var_s0 = (D_0047E5A0 & 0x1FF & 0x1FF) << 5;
            } else {
                var_s0 = (D_0047E710 & 0x1FF & 0x1FF) << 5;
            }
        } else {
            var_s0 = D_00470484 << 5;
        }
    } else {
        var_s0 = D_00470484 << 5;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf4 */);
    M2C_ERROR(/* unknown instruction: vmulx.x $vf5, $vf5, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmulx.y $vf5, $vf5, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.z $vf5, $vf5, $vf3x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf5, $vf5, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf2 */);
    M2C_ERROR(/* unknown instruction: vminix.xyzw $vf1, $vf1, $vf2x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf2 */);
    M2C_ERROR(/* unknown instruction: vmaxx.xyzw $vf1, $vf1, $vf2x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v0 = amPkt_Alloc(0x100, M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf3 */), M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf2 */), M2C_ERROR(/* unknown instruction: qmtc2.ni $a3, $vf1 */));
    *(s128 *)((u8 *)temp_v0 + 0) = (s128) M2C_ERROR(/* unknown instruction: pcpyld $v1, $a0, $v1 */);
    *(s128 *)((u8 *)temp_v0 + 0x10) = (s128) M2C_ERROR(/* unknown instruction: pcpyld $v1, $a1, $v1 */);
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x24) = 1;
    *(s64 *)((u8 *)temp_v0 + 0x28) = 0x4E;
    *(s32 *)((u8 *)temp_v0 + 0x30) = 0x80;
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0x80;
    *(s64 *)((u8 *)temp_v0 + 0x38) = 0x3B;
    *(s32 *)((u8 *)temp_v0 + 0x40) = 1;
    *(s32 *)((u8 *)temp_v0 + 0x44) = 0;
    *(s64 *)((u8 *)temp_v0 + 0x48) = 0x14;
    *(s32 *)((u8 *)temp_v0 + 0x50) = (s32) ((D_00470454 << 0x14) | (var_s0 | (((u32) D_00470424 >> 6) << 0xE)) | 0xA8000000);
    *(s32 *)((u8 *)temp_v0 + 0x54) = 2;
    *(s64 *)((u8 *)temp_v0 + 0x58) = 6;
    *(s32 *)((u8 *)temp_v0 + 0x60) = (s32) (((D_0047041C - 1) << 0xE) | 0xA);
    *(s32 *)((u8 *)temp_v0 + 0x64) = (s32) ((D_00470428 - 1) * 4);
    *(s64 *)((u8 *)temp_v0 + 0x68) = 8;
    *(s32 *)((u8 *)temp_v0 + 0x70) = 0x30002;
    *(s64 *)((u8 *)temp_v0 + 0x78) = 0x47;
    *(s64 *)((u8 *)temp_v0 + 0x80) = 0x44;
    *(s64 *)((u8 *)temp_v0 + 0x88) = 0x42;
    if (!(sp20 >= 2.1474836e9f)) {
        var_a1 = sp20;
    } else {
        var_a1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (sp20 - 2.1474836e9f)) | 0x80000000));
    }
    if (!(sp24 >= 2.1474836e9f)) {
        var_a0 = sp24;
    } else {
        var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (sp24 - 2.1474836e9f)) | 0x80000000));
    }
    if (!(sp28 >= 2.1474836e9f)) {
        var_a0_2 = sp28;
    } else {
        var_a0_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (sp28 - 2.1474836e9f)) | 0x80000000));
    }
    if (!(sp2C >= 2.1474836e9f)) {
        var_a0_3 = sp2C;
    } else {
        var_a0_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (sp2C - 2.1474836e9f)) | 0x80000000));
    }
    *(s32 *)((u8 *)temp_v0 + 0x90) = (s32) ((M2C_BITWISE(s32, var_a0_3) << 0x18) | ((M2C_BITWISE(s32, var_a0_2) << 0x10) | (M2C_BITWISE(s32, var_a1) | (M2C_BITWISE(s32, var_a0) << 8))));
    *(s32 *)((u8 *)temp_v0 + 0x94) = 0x3F800000;
    *(s64 *)((u8 *)temp_v0 + 0x98) = 1;
    *(s32 *)((u8 *)temp_v0 + 0xA0) = 0;
    *(s64 *)((u8 *)temp_v0 + 0xA8) = 3;
    *(s32 *)((u8 *)temp_v0 + 0xB0) = (s32) (((0x800 - ((u32) D_00470414 >> 1)) * 0x10) | ((0x800 - ((u32) D_00470418 >> 1)) << 0x14));
    *(s64 *)((u8 *)temp_v0 + 0xB8) = 5;
    *(s32 *)((u8 *)temp_v0 + 0xC0) = (s32) ((D_0047041C * 0x10) | (D_00470428 << 0x14));
    *(s64 *)((u8 *)temp_v0 + 0xC8) = 3;
    *(s32 *)((u8 *)temp_v0 + 0xD0) = (s32) (((((u32) D_00470414 >> 1) + 0x7FF) * 0x10) | 0xA | ((((((u32) D_00470418 >> 1) + 0x7FF) * 0x10) | 0xA) << 0x10));
    *(s64 *)((u8 *)temp_v0 + 0xD8) = 5;
    *(s32 *)((u8 *)temp_v0 + 0xE0) = 0x50002;
    *(s64 *)((u8 *)temp_v0 + 0xE8) = 0x47;
    *(s32 *)((u8 *)temp_v0 + 0xF0) = (s32) (D_00470490 | (D_0047045C << 0x18));
    *(s32 *)((u8 *)temp_v0 + 0xF4) = 0;
    *(s64 *)((u8 *)temp_v0 + 0xF8) = 0x4E;
    amDma_Request(0U, 1U, 1U, 1U, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
}
