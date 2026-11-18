/* Draft (not built): func_001D4AF0 at 0x001D4AF0, size 0x4D8, segment battle/char_secp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp' @ 255: amTask_KillGroup(0x20, *(s32 *)((u8 *)((var_s0 * 4) + sp) + 0xB0), 1);
 * Original: asm/nonmatchings/battle/char_secp/func_001D4AF0.s */

// src/battle/char_secp.c func_001D4AF0 cerr diff=-1/0
s32 A2d_CallHandler(s32, s32 *);
s32 Sp_CallHandler(s32, s32 *);
s32 amTask_KillGroup(s32, s32, s32);
s32 func_001D41F0(s32);
s32 func_001DF8F0(s32, s32);
f32 func_00200270(s32, f32, f32);
s32 func_00218440(s32, s32 *);
s32 func_00246DA0(void *);
s32 func_002470B0(s32, s64);
extern s128 D_0044A1E0;
extern void amTask_Kill(void *);
extern void func_001ABD30(void *);
extern void AdxSlot_Stop(void *);
extern void func_0013B160(void *);
extern char D_003F0800[];
extern void func_00237000(int, void *);
extern void func_001E73C0(void *);
extern void func_001E7070();
extern void func_001E8630();
extern void func_001E8640();
extern void func_0013B620(void *);
extern void func_00144430(void *);
void func_001D4AF0(void) {
    s32 sp60;
    s32 sp70;
    s16 sp78;
    s32 sp90;
    s32 sp94;
    f32 sp98;
    s32 spA0;
    s32 spA4;
    s128 spB0;
    u8 *spC0;
    s32 spC4;
    s16 spC8;
    s32 spD0;
    s32 spD4;
    s32 spE0;
    s32 spF0;
    s32 spF4;
    s32 sp110;
    s32 sp11C;
    s32 sp120;
    s32 sp124;
    s32 sp140;
    u8 *sp158;
    s32 sp15C;
    f32 var_f0;
    s32 var_s0;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_v1;

    temp_s3 = (u8 *)(gBattle);
    var_s2 = 0;
loop_30:
    if (var_s2 < *(s32 *)((u8 *)temp_s3 + 0x88D8)) {
        temp_v1 = temp_s3 + (var_s2 * 0x2020);
        *(s32 *)((u8 *)temp_v1 + 0x14CC) = 0x3F800000;
        *(s32 *)((u8 *)temp_v1 + 0x870) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x874) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x878) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x87C) = 0x3F800000;
        *(s8 *)((u8 *)temp_v1 + 0x2829) = 0;
        *(s8 *)((u8 *)temp_v1 + 0x2831) = 0;
        temp_s1 = temp_v1 + 0x830;
        if (*(f32 *)((u8 *)temp_v1 + 0x2078) < 0.0f) {
            *(s8 *)((u8 *)temp_s1 + 0x2002) = 0;
        } else {
            *(s32 *)((u8 *)temp_s1 + 0x1848) = 0xBF800000;
            sp120 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            sp124 = (s32) *(s8 *)((u8 *)temp_s1 + 0x200D);
            sp11C = 2;
            func_00218440(9, &sp110);
            func_00144430(temp_s1 + 0x1A80);
        }
        func_001ABD30(temp_s1 + 0x1360);
        *(s8 *)((u8 *)temp_s1 + 0x2010) = 0;
        spA0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
        spA4 = (s32) *(s8 *)((u8 *)temp_s1 + 0x2010);
        A2d_CallHandler(0x35, &spA0);
        *(s32 *)((u8 *)temp_s1 + 0x17E0) = 0xBF800000;
        temp_a0 = *(u8 **)((u8 *)temp_s1 + 0x1AB4);
        if (temp_a0 != NULL) {
            amTask_Kill(temp_a0);
            *(u8 **)((u8 *)temp_s1 + 0x1AB4) = NULL;
        }
        if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
            spF0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            spF4 = 2;
            Sp_CallHandler(2, &spE0);
        }
        if (*(s32 *)((u8 *)temp_s1 + 0x1CFC) == 0x2A) {
            *(s32 *)((u8 *)temp_s1 + 0x1A4C) = 0;
            *(s32 *)((u8 *)temp_s1 + 0x1A50) = 0;
            if (*(s32 *)((u8 *)temp_s1 + 0x1DB8) != 0) {
                func_001E7070(temp_s1 + 0x650, 0);
                sp90 = *(s32 *)((u8 *)temp_s1 + 0x1350);
                sp94 = 0;
                if ((**(s16 **)((u8 *)temp_s1 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f0 = 0.0f;
                } else {
                    var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0xBA4) * 0x14) + *(s32 *)((u8 *)temp_s1 + 0x1CF8)) + 0xDD) * 0x3E8);
                }
                sp98 = var_f0;
                A2d_CallHandler(8, &sp90);
                sp70 = *(s32 *)((u8 *)temp_s1 + 0x1350);
                sp78 = (s16) *(s32 *)((u8 *)temp_s1 + 0xBA4);
                Sp_CallHandler(1, &sp60);
            }
            func_00246DA0(temp_s1);
            spD0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            spD4 = 0;
            A2d_CallHandler(0x33, &spD0);
        }
        sp158 = temp_s1;
        sp15C = 7;
        func_002470B0(-1, (s64) sp158);
        *(s32 *)((u8 *)temp_s1 + 0x1860) = 0xBF800000;
        temp_s0 = temp_s1 + 0x1AA0;
        if (*(s32 *)((u8 *)temp_s1 + 0x1AA4) > 0) {
            func_00144430(temp_s0);
            *(s32 *)((u8 *)temp_s0 + 4) = 0;
        }
        *(s32 *)((u8 *)temp_s1 + 0x1CF0) = -1;
        AdxSlot_Stop(gBattle + ((*(s32 *)((u8 *)temp_s1 + 0x1350) + 3) << 5) + 0x5C4);
        if (*(s32 *)((u8 *)temp_s1 + 0x1A70) >= 0) {
            func_00144430(temp_s1 + 0x1A70);
            *(s32 *)((u8 *)temp_s1 + 0x1A70) = -1;
        }
        func_001E73C0(temp_s1 + 0x650);
        *(s32 *)((u8 *)temp_s1 + 0x19F4) = 0x3F000000;
        *(s32 *)((u8 *)temp_s1 + 0x19F8) = 0x3F000000;
        *(s32 *)((u8 *)temp_s1 + 0x19FC) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x1A00) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x1A04) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x18C0) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xCA4) = 0x3F800000;
        *(s32 *)((u8 *)temp_s1 + 0xCA8) = 0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        spC8 = -1;
        spC0 = temp_s1;
        spC4 = 0;
        *(f32 *)((u8 *)temp_s1 + 0x1844) = func_00200270(0, *(f32 *)((u8 *)temp_s1 + 0x650), *(f32 *)((u8 *)temp_s1 + 0x658));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) *(f32 *)((u8 *)temp_s1 + 0x1844);
        if (0 == 0) {

        }
        func_0013B160(D_003F0800);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_0013B620(*(u8 **)((u8 *)temp_s1 + 0x17A4));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        func_001E8640(temp_s1 + 0x650, -1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(f32 *)((u8 *)temp_s1 + 0x84) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x84) + **(f32 **)((u8 *)temp_s1 + 0xB94));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        if (*(s8 *)((u8 *)temp_s1 + 0x1FF9) == 0) {

        }
        *(f32 *)((u8 *)temp_s1 + 0x64) = *(f32 *)((u8 *)temp_s1 + 0x44);
        func_001E8630(temp_s1 + 0x650);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_001D41F0(*(s32 *)((u8 *)temp_s1 + 0xB84));
        var_s2 += 1;
        goto loop_30;
    }
    func_00237000(7, NULL);
    amTask_KillGroup(0x20, 0x40000010, 1);
    var_s0 = 0;
    spB0 = D_0044A1E0;
loop_33:
    if (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        amTask_KillGroup(0x20, *(s32 *)((u8 *)((var_s0 * 4) + sp) + 0xB0), 1);
        var_s0 += 1;
        goto loop_33;
    }
}
