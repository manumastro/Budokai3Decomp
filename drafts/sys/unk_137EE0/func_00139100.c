/* Draft (not built): func_00139100 at 0x00139100, size 0x224, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 184: D_0047CAB8(temp_s0, var_a1); @ 183: if (D_0047CAB8 != NULL) {
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00139100.s */

// src/sys/unk_137EE0.c func_00139100 cerr diff=-1/0
extern s64 D_003F01C0;
extern s64 D_003F01C8;
extern s128 D_003F01E0;
extern s32 D_0046FD18;
extern s32 D_0046FD1C;
extern s32 D_0046FD20;
extern f32 D_0046FD24;
extern f32 D_0046FD28;
extern f32 D_0046FD2C;
extern f32 D_0046FD30;
extern s32 D_00470230;
extern s32 D_00470234;
extern s32 D_00470238;
extern s32 D_00470250;
extern s32 D_00470254;
extern f32 D_00470258;
extern s32 D_0047025C;
extern s32 D_00470260;
extern s32 D_00470264;
extern s32 D_00470268;
extern s32 gModelBlock;
extern void *gModelUser;
extern s32 D_0047CAB8;
void func_00139100(s32 arg0) {
    f32 var_f0;
    s32 var_v1;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *var_a1;

    temp_s0 = (u8 *)(gPacketPtr);
    temp_a1 = (u8 *)(D_00470234 + (D_00470230 * 8));
    D_00470230 += 1;
    *(s32 *)((u8 *)temp_a1 + 0) = (s32) M2C_ERROR(/* Read from unset register $f0 */);
    *(u8 **)((u8 *)temp_a1 + 4) = temp_s0;
    *(s32 *)((u8 *)temp_s0 + 0) = -1;
    *(s32 *)((u8 *)temp_s0 + 4) = (s32) gModelBlock;
    *(u8 **)((u8 *)temp_s0 + 8) = (u8 *) gModelUser;
    *(s32 *)((u8 *)temp_s0 + 0xC) = arg0;
    if (D_00470254 != 0) {
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (D_0046FD20 | 0x80);
        *(s32 *)((u8 *)temp_s0 + 0x18) = (s32) (~D_0046FD20 & D_00470250);
    } else {
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (D_0046FD20 & ~0x80);
        *(s32 *)((u8 *)temp_s0 + 0x18) = (s32) (~*(s32 *)((u8 *)temp_s0 + 0x14) & D_00470250 & ~0x80);
    }
    *(s32 *)((u8 *)temp_s0 + 0x1C) = (s32) (D_00470268 | (D_00470238 * 2));
    if (D_00470254 >= 0) {
        var_f0 = (f32) D_00470254;
    } else {
        var_f0 = 2.0f * (f32) (((u32) D_00470254 >> 1) | (D_00470254 & 1));
    }
    *(f32 *)((u8 *)temp_s0 + 0x20) = var_f0;
    *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) D_0046FD24;
    *(f32 *)((u8 *)temp_s0 + 0x28) = (f32) D_0046FD28;
    *(f32 *)((u8 *)temp_s0 + 0x2C) = (f32) D_0046FD2C;
    *(f32 *)((u8 *)temp_s0 + 0x30) = (f32) D_00470258;
    *(f32 *)((u8 *)temp_s0 + 0x34) = (f32) D_0046FD30;
    *(s32 *)((u8 *)temp_s0 + 0x38) = (s32) D_0047025C;
    *(s32 *)((u8 *)temp_s0 + 0x3C) = (s32) D_00470260;
    *(s32 *)((u8 *)temp_s0 + 0x40) = (s32) D_00470264;
    *(s32 *)((u8 *)temp_s0 + 0x4C) = (s32) D_0046FD18;
    *(s32 *)((u8 *)temp_s0 + 0x50) = (s32) D_0046FD1C;
    *(s64 *)((u8 *)temp_s0 + 0x58) = (s64) D_003F01C0;
    *(s64 *)((u8 *)temp_s0 + 0x60) = (s64) D_003F01C8;
    *(s128 *)((u8 *)temp_s0 + 0x70) = (s128) D_003F01E0;
    var_a1 = temp_s0 + 0x80;
    var_v1 = 7;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a0) */);
    do {
        var_v1 -= 1;
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, 0x40($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x50($a0) */);
        var_a1 += 0x40;
    } while (var_v1 != 0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
    if (D_0047CAB8 != NULL) {
        D_0047CAB8(temp_s0, var_a1);
    }
    gPacketPtr = (u32 *)(temp_s0 + 0x270);
}
