/* Draft (not built): func_001C5870 at 0x001C5870, size 0x4DC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 226 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x30C, original 0x4DC
 * Original: asm/nonmatchings/battle/btl_main/func_001C5870.s */

// src/battle/btl_main.c func_001C5870 size diff=226/195
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern void func_0029D4B0(s32 a);
s32 func_00133420(s32);
s32 func_00133620(s32, s32, void *, void *);
s32 func_00133720(void *, void *, void *);
s32 func_00139A80(void *, s32 *, s32);
s32 func_001CA780(s32, s32);
s32 func_001E0A50(void *, s32);
s32 func_0029D390(f32 *);
s32 func_0029D4D0(s32 *);
f32 func_0029D550(s32 *, void *, f32);
s32 func_0029D6A0(f32);
s32 func_0029D800(f32);
extern s128 D_004313E0;
extern f32 D_0046FD80;
extern s32 D_00470238;
extern s32 D_00470568;
extern void func_0029D8B0(int, int);
void func_001C5870(Fighter *arg0) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp90;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f0;
    f32 var_f20;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s8 temp_a0_2;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_v0;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;

    var_a1 = 0;
    var_s4 = (unsigned char *)(arg0);
    var_s2 = NULL;
    var_s3 = (unsigned char *)(gBattle);
    var_s1 = 0;
loop_7:
    if (var_a1 < 2) {
        temp_a0 = (var_a1 * 0x680) + var_s4;
        if ((*(s8 *)((u8 *)temp_a0 + 0xCBC) == 0) && (*(s8 *)((u8 *)temp_a0 + 0xCBD) == 0)) {
            if (var_s2 == NULL) {
                var_s2 = temp_a0 + 0x650;
            }
            var_s1 += 1;
        }
        var_a1 += 1;
        goto loop_7;
    }
    if (var_s2 != NULL) {
        if (*(s32 *)((u8 *)var_s3 + 0x88EC) == 0) {
            func_001E0A50(var_s4, var_a1);
        }
        var_f20 = 0.0f;
        spD0 = (f32) *(u8 *)((u8 *)var_s4 + 0x1878) / 255.0f;
        spD4 = (f32) *(u8 *)((u8 *)var_s4 + 0x1879) / 255.0f;
        spD8 = (f32) *(u8 *)((u8 *)var_s4 + 0x187A) / 255.0f;
        spC0 = (f32) *(u8 *)((u8 *)var_s4 + 0x187C) / 255.0f;
        spC4 = (f32) *(u8 *)((u8 *)var_s4 + 0x187D) / 255.0f;
        spC8 = (f32) *(u8 *)((u8 *)var_s4 + 0x187E) / 255.0f;
        if (!(*(f32 *)((u8 *)var_s3 + 0x892C) <= 0.0f)) {
            temp_a0_2 = *(s8 *)((u8 *)var_s3 + 0x8AB3);
            if (temp_a0_2 != *(s32 *)((u8 *)var_s4 + 0x1350)) {
                if (temp_a0_2 == 4) {
                    goto block_15;
                }
            } else {
block_15:
                spB0 = (f32) *(u8 *)((u8 *)var_s3 + 0x8928) / 255.0f;
                spB4 = (f32) *(u8 *)((u8 *)var_s3 + 0x8929) / 255.0f;
                spB8 = (f32) *(u8 *)((u8 *)var_s3 + 0x892A) / 255.0f;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
                var_f20 = *(f32 *)((u8 *)var_s3 + 0x892C);
            }
        }
        temp_f0 = *(f32 *)((u8 *)var_s4 + 0x1870);
        temp_f0_2 = temp_f0 * temp_f0;
        if (!(var_f20 <= temp_f0_2)) {

        } else {
            var_f20 = temp_f0_2;
        }
        func_0013B0B0(var_s4);
        var_s5 = 0;
loop_34:
        if (var_s5 < var_s1) {
            spA0 = 2.0f;
            spA4 = spA0 * 2.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00139A80(var_s2 + 0x570, &sp90, *(s32 *)((u8 *)var_s2 + 0x5F0) & 0xFFFF);
            func_00133420(1);
            func_00133720(var_s2 + 0x570, var_s2 + 0x5B0, var_s2 + 0x5E0);
            var_s0 = 0;
loop_24:
            if (var_s0 < 4) {
                temp_v0 = (var_s0 * 0x10) + var_s2;
                func_00133620(var_s0, 1, temp_v0 + 0x570, temp_v0 + 0x5B0);
                var_s0 += 1;
                goto loop_24;
            }
            D_00470238 = 0;
            func_0029D800(*(f32 *)((u8 *)var_s2 + 0x64C) * *(f32 *)((u8 *)var_s3 + 0x88F0));
            func_0029D6A0(0.01f + *(f32 *)((u8 *)var_s4 + 0x1844));
            func_0029D4B0(*(s64 *)((u8 *)var_s2 + 0x5F8));
            sp80 = (s128) D_004313E0;
            if (*(s8 *)((u8 *)var_s4 + 0x2010) != 0) {
                sp80 = 0x3F48C8C9;
                sp84 = 0x3EC8C8C9;
                sp88 = 0x3EC8C8C9;
            }
            if (!(var_f20 <= 0.0f)) {
                spDC = var_f20;
                func_0029D390(&spD0);
                func_0029D8B0(-1, 2);
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_0029D4D0(&sp80);
            temp_a1 = *(u8 **)((u8 *)var_s3 + 0x264);
            if (temp_a1 == NULL) {
                var_f0 = D_0046FD80;
            } else {
                var_f0 = func_0029D550(&sp90, temp_a1, *(f32 *)((u8 *)temp_a1 + 0x34));
            }
            D_0046FD80 = var_f0;
            D_00470568 = *(s32 *)((u8 *)var_s2 + 0x600);
            func_001CA780(*(s32 *)((u8 *)var_s2 + 0x52C), 0);
            D_00470568 = 0;
            func_0029D8B0(-3, 0);
            var_s5 += 1;
            var_s2 += 0x680;
            goto loop_34;
        }
        func_0013B110(1);
        func_001C55D0(var_s4);
    }
}
