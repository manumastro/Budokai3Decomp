/* Draft (not built): func_002E9300 at 0x002E9300, size 0x1B4, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'int *' to 'float' mwccps2.exe Compiler: @ 403: var_f20 = (f32)(D_005C9F74);
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E9300.s */

// src/unk/unk_2E8540.c func_002E9300 cerr diff=-1/0
extern s32 gBtlSys;
extern s32 D_005C9F70[];
extern s32 D_005C9F74[];
extern s32 D_005C9F78[];
f32 func_00253570(s32);
f32 func_00253A50(s32, f32 *);
void func_002E9300(void) {
    f32 sp60;
    f32 sp64;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp90;
    s8 sp98;
    s32 *var_s0;
    s32 *var_s1_2;
    f32 var_f20;
    f32 var_f21;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s3;
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    var_f21 = 0.0f;
    temp_s3 = *(s32 *)((u8 *)gBtlSys + 0xEC0);
    var_s0 = (s32 *)(&D_005C9F10);
loop_3:
    if (var_s1 < 0x10) {
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0x10);
        if (temp_a0 == -1) {

        } else {
            var_f21 += func_00253570(temp_a0);
            var_s0 += 4;
            var_s1 += 1;
            goto loop_3;
        }
    }
    var_f20 = (f32)(D_005C9F74);
    if (temp_s3 != 0) {
        memset(&sp60, 0, 0x40);
        temp_a0_2 = D_005C9F70 & 3;
        switch (temp_a0_2) {                        /* irregular */
        case 0:
            break;
        case 1:
            var_f20 -= var_f21;
            break;
        case 2:
            var_f20 -= var_f21 * 0.5f;
            break;
        }
        var_s2 = 0;
        var_s1_2 = (s32 *)(&D_005C9F10);
        sp90 |= D_005C9F70 & 0xC;
        sp90 |= 0x10000;
        sp6C = 0x3F800000;
        sp60 = var_f20;
        sp70 = 0x3F800000;
        sp74 = 0x3F800000;
        sp78 = 0x3F800000;
        sp7C = 0x3F800000;
        sp64 = (f32)(D_005C9F78);
loop_16:
        if (var_s2 < 0x10) {
            temp_a0_3 = *(s32 *)((u8 *)var_s1_2 + 0x10);
            if (temp_a0_3 == -1) {

            } else {
                sp98 = (s8) temp_a0_3;
                var_s1_2 += 4;
                var_s2 += 1;
                sp60 += func_00253A50(temp_s3, &sp60);
                goto loop_16;
            }
        }
    }
}
