/* Draft (not built): func_00206310 at 0x00206310, size 0x2E0, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 589: if (var_s3 != temp_s6) { @ 560: if (var_s3 != temp_s6) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00206310.s */

// src/unk/unk_1FB760.c func_00206310 cerr diff=-1/0
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 func_001351F0(s32, s32, s32, s32);
s32 func_00135FD0(void *, void *, s32 *, void *);
s32 func_00136130(void *, void *, s32 *);
extern s32 D_0046FD18;
extern s32 D_0047064C;
extern void amDraw_FlushPacket(void);
void func_00206310(u8 *arg0) {
    s32 sp90;
    s32 spA0;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 var_a1;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_s4;
    u8 *var_s3;

    temp_s6 = (s32)(arg0 + 0x44);
    var_s2 = 0;
    var_s1 = 1;
    temp_s4 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s3 = *(u8 **)((u8 *)arg0 + 0x3C);
    temp_s7 = D_0046FD18;
    var_s0 = 3;
    if (*(s32 *)((u8 *)temp_s4 + 8) & 1) {
        var_s0 = 3 | 0x800;
    }
    if (*(s32 *)((u8 *)temp_s4 + 8) & 2) {
        var_s0 |= 0x1000;
    }
    if (*(s32 *)((u8 *)temp_s4 + 8) & 0x02000000) {
        var_a1 = 1;
    } else {
        var_a1 = 0;
    }
    func_00133780(0, var_a1);
    if (!(*(s32 *)((u8 *)temp_s4 + 8) & 0x01000000)) {
        amGs_SetReg32(0, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
    }
    amDraw_SetPacketMode(1);
    if (*(s32 *)((u8 *)temp_s4 + 8) & 0x1000) {
loop_24:
        if (var_s3 != temp_s6) {
            if (!(*(s32 *)((u8 *)var_s3 + 0xC) & 1)) {
                if (var_s2 == 0x80) {
                    var_s1 = 1;
                    var_s2 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s1 != 0) {
                    func_001351F0(1, var_s0 | 0x24, 0, 0);
                    var_s1 = 0;
                }
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_a2 = &spA0;
                } else {
                    var_a2 = (s32 *)(var_s3 + 0x30);
                }
                func_00135FD0(var_s3 + 0x10, var_s3 + 0x50, var_a2, var_s3 + 0x40);
                var_s2 += 1;
            }
            var_s3 = *(u8 **)((u8 *)var_s3 + 0);
            goto loop_24;
        }
    } else {
loop_36:
        if (var_s3 != temp_s6) {
            if (!(*(s32 *)((u8 *)var_s3 + 0xC) & 1)) {
                if (var_s2 == 0x80) {
                    var_s1 = 1;
                    var_s2 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s1 != 0) {
                    func_001351F0(1, var_s0, 0, 0);
                    var_s1 = 0;
                }
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_a2_2 = &sp90;
                } else {
                    var_a2_2 = (s32 *)(var_s3 + 0x30);
                }
                func_00136130(var_s3 + 0x10, var_s3 + 0x50, var_a2_2);
                var_s2 += 1;
            }
            var_s3 = *(u8 **)((u8 *)var_s3 + 0);
            goto loop_36;
        }
    }
    amDraw_FlushPacket();
    amDraw_SetPacketMode(0);
    amGs_SetReg32(0, temp_s7);
}
