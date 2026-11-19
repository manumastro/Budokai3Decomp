/* Draft (not built): func_001F0A50 at 0x001F0A50, size 0x3C4, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 64 *)((u8 *)(&D_0044B6D0) + 0x10); @ 3647: *(s128 *)((u8 *)(&sp130[0]) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B6D0) + 0);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F0A50.s */

// src/battle/btb_draw.c func_001F0A50 cerr diff=-1/0
extern void amModel_SetCurrent(s32, s32);
extern void func_0013B160(s32);
s32 amDraw_SetPacketMode(s32);
s32 func_00136870(s32, s32, s128 *, s32);
s32 func_001374A0(void *, void *);
s32 func_0013B8D0(f32);
s32 func_00146F10(s32 *, s32 *, s32);
extern s128 D_0044B610;
extern s32 D_0044B620;
extern s128 D_0044B660;
extern s32 D_0044B6D0;
extern s32 D_0044B6F0;
extern s32 D_0044B710;
extern f32 D_0047040C;
extern f32 D_00470410;
extern f32 D_0047042C;
extern f32 D_00470430;
extern void amDraw_FlushPacket(void);
void func_001F0A50(u8 *arg0) {
    s32 sp130;
    s32 sp110;
    u8 sp[0x400];
    s32 sp90;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 spC0;
    f32 spC4;
    f32 spD0;
    f32 spD4;
    s128 spE0;
    f32 spEC;
    s32 spF0;
    f32 sp100;
    f32 sp104;
    s128 sp150;
    s32 sp1C0;
    f32 sp200;
    f32 sp204;
    s32 var_a3;
    f32 temp_f0;
    f32 temp_f20;
    s128 *var_a0;
    s128 *var_a1;
    s32 temp_s0;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1;
    u8 *temp_s3;

    temp_s3 = arg0 + 0x30;
    if (!(*(f32 *)((u8 *)arg0 + 0x48) < 0.0f)) {
        var_a1 = &D_0044B660;
        var_a0 = &sp150;
        var_v1 = 7;
        sp200 = (s128) D_0044B610;
        sp200 = D_0047042C / 2.0f;
        sp204 = D_00470430 / 2.0f;
        *(s128 *)((u8 *)(&sp1C0) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B620) + 0);
        *(s128 *)((u8 *)(&sp1C0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_0044B620) + 0x10);
        *(s128 *)((u8 *)(&sp1C0) + 0x20) = (s128) *(s128 *)((u8 *)(&D_0044B620) + 0x20);
        *(s128 *)((u8 *)(&sp1C0) + 0x30) = (s128) *(s128 *)((u8 *)(&D_0044B620) + 0x30);
        do {
            var_v1 -= 1;
            *var_a0 = *var_a1;
            var_a1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 > 0);
        *(s128 *)((u8 *)(&sp130[0]) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B6D0) + 0);
        *(s64 *)((u8 *)(&sp130[0]) + 0x10) = (s64) *(s64 *)((u8 *)(&D_0044B6D0) + 0x10);
        *(f32 *)((u8 *)(&sp130[0]) + 0x18) = (f32) *(f32 *)((u8 *)(&D_0044B6D0) + 0x18);
        *(s128 *)((u8 *)(&sp110[0]) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B6F0) + 0);
        *(s64 *)((u8 *)(&sp110[0]) + 0x10) = (s64) *(s64 *)((u8 *)(&D_0044B6F0) + 0x10);
        *(f32 *)((u8 *)(&sp110[0]) + 0x18) = (f32) *(f32 *)((u8 *)(&D_0044B6F0) + 0x18);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a1) */);
        sp100 = (*(f32 *)((u8 *)temp_s3 + 0x10) * D_0047042C) / D_0047040C;
        sp104 = (*(f32 *)((u8 *)temp_s3 + 0x14) * D_00470430) / D_00470410;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        temp_s0 = amGs_SetReg32(0, 0x30000);
        func_00133780(2, 1);
        D_00470238 = 0;
        amModel_SetCurrent(*(s32 *)((u8 *)temp_s3 + 0x28), 0x02003000);
        amDraw_SetPacketMode(1);
        var_s5 = 0;
loop_13:
        if (var_s5 < 7) {
            spE0 = (&sp150)[var_s5];
            temp_f20 = (&sp110[0])[var_s5];
            spEC *= *(f32 *)((u8 *)temp_s3 + 0x24);
            if (var_s5 != 0) {
                var_a3 = 0x64;
            } else {
                var_a3 = 0x65;
            }
            func_00136870(1, 0x926, &spE0, var_a3);
            var_s4 = 0;
            temp_f0 = -temp_f20;
            *(s128 *)((u8 *)(&spA0) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B710) + 0);
            *(s128 *)((u8 *)(&spA0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_0044B710) + 0x10);
            *(s128 *)((u8 *)(&spA0) + 0x20) = (s128) *(s128 *)((u8 *)(&D_0044B710) + 0x20);
            *(s128 *)((u8 *)(&spA0) + 0x30) = (s128) *(s128 *)((u8 *)(&D_0044B710) + 0x30);
            spA0 = temp_f0;
            spA4 = temp_f0;
            spB0 = temp_f20;
            spB4 = temp_f0;
            spC0 = temp_f0;
            spC4 = temp_f20;
            spD0 = temp_f20;
            spD4 = temp_f20;
loop_11:
            if (var_s4 < 4) {
                func_0013B160((s32)(D_003F0800));
                func_0013B8D0(0.001f * (*(f32 *)((u8 *)temp_s3 + 0x10) / (f32) (var_s5 + 1)));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                func_00146F10(&sp90, &spF0, (&sp130[0])[var_s5]);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                func_001374A0((var_s4 * 0x10) + sp + 0xA0, (var_s4 * 0x10) + sp + 0x1C0);
                var_s4 += 1;
                goto loop_11;
            }
            amDraw_FlushPacket();
            var_s5 += 1;
            goto loop_13;
        }
        amDraw_SetPacketMode(0);
        func_00133780(2, 0);
        amGs_SetReg32(0, temp_s0);
    }
}
