/* Draft (not built): func_001AF100 at 0x001AF100, size 0x544, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 192 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4EC, original 0x544
 * Original: asm/nonmatchings/battle/btl_main/func_001AF100.s */

// src/battle/btl_main.c func_001AF100 size diff=192/315
f32 *func_0021C600();
s32 func_0029D800(f32);
extern s8 D_004703F4;
extern s8 D_004B4B57;
extern s8 D_004B4B58;
extern s16 D_004E05DE;
extern char D_004E05DC[];
void func_001AF100(s32 arg0) {
    f32 *temp_s1;
    f32 var_f0;
    s16 temp_v0;
    s16 var_a0;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_v0_3;
    s32 var_v0_3;
    s8 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *var_at;
    u8 *var_at_2;
    u8 *var_at_3;
    u8 *var_at_4;
    u8 *var_v1;

    temp_s0 = (u8 *)(gBattle);
    temp_s2 = temp_s0 + 0x830;
    temp_s1 = func_0021C600();
    var_v0 = *(s16 *)((u8 *)temp_s0 + 0x7E0);
    if (var_v0 == 0) {
        var_v0 = 2;
    }
    *(s32 *)((u8 *)temp_s0 + 0x88D8) = (s32) var_v0;
    *(s16 *)((u8 *)temp_s0 + 0x7E0) = (s16) *(s32 *)((u8 *)temp_s0 + 0x88D8);
    if (*(s32 *)((u8 *)temp_s0 + 0x88D8) == 2) {
        *(u8 **)((u8 *)temp_s2 + 0x1354) = (u8 *) (temp_s2 + 0x2020);
        *(u8 **)((u8 *)temp_s2 + 0x3374) = temp_s2;
    }
    *(s8 *)((u8 *)temp_s0 + 0x8AB5) = (s8) *(s16 *)((u8 *)temp_s0 + 0x7E8);
    *(s8 *)((u8 *)temp_s0 + 0x8ABA) = 0;
    temp_v0 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
    switch (temp_v0) {
    case 0:
        if (arg0 == 0) {
            if (*(s32 *)((u8 *)temp_s0 + 0x7F0) != -1) {
                *(s32 *)((u8 *)temp_s0 + 0x88F8) = 0;
            } else {
                var_at = temp_s0 + 0x10000;
                goto block_12;
            }
        } else {
            var_at = temp_s0 + 0x10000;
block_12:
            *(s32 *)((u8 *)var_at + -0x7708) = 3;
        }
        var_v0_2 = *D_004E05DC;
        var_at_2 = temp_s0 + 0x10000;
block_33:
        *(s8 *)((u8 *)var_at_2 + -0x754B) = (s8) var_v0_2;
        break;
    case 1:
        if (arg0 == 0) {
            var_v0_3 = 1;
            var_at_3 = temp_s0 + 0x10000;
        } else {
            var_v0_3 = 2;
            var_at_3 = temp_s0 + 0x10000;
        }
        *(s32 *)((u8 *)var_at_3 + -0x7708) = var_v0_3;
        var_v0_2 = D_004E05DE;
        var_at_2 = temp_s0 + 0x10000;
        goto block_33;
    case 2:
        *(s32 *)((u8 *)temp_s0 + 0x88F8) = 2;
        *(s8 *)((u8 *)temp_s0 + 0x8AB5) = (s8) D_004B4B57;
        temp_v0_2 = *(s8 *)((u8 *)temp_s0 + 0x8AB5);
        *(s8 *)((u8 *)temp_s0 + 0x8AB5) = (s8) ((temp_v0_2 >= 2) ? 2 : temp_v0_2);
        *(s8 *)((u8 *)temp_s0 + 0x8AB6) = (s8) D_004B4B58;
        *(s8 *)((u8 *)temp_s0 + 0x8ABA) = (s8) (D_004B4B57 >= 3);
        break;
    case 3:
        *(s32 *)((u8 *)temp_s0 + 0x88F8) = 4;
        var_v0_2 = (s16) *(s8 *)((u8 *)gBattle + 0x897A);
        var_at_2 = temp_s0 + 0x10000;
        goto block_33;
    case 4:
        *(s32 *)((u8 *)temp_s0 + 0x88F8) = 4;
        break;
    case 6:
        var_v0_2 = 4;
        *(s32 *)((u8 *)temp_s0 + 0x88F8) = 4;
        var_at_2 = temp_s0 + 0x10000;
        goto block_33;
    case 5:
        if (arg0 == 0) {
            if (*(s32 *)((u8 *)temp_s0 + 0x7F0) != -1) {
                *(s32 *)((u8 *)temp_s0 + 0x88F8) = 0;
            } else {
                var_at_4 = temp_s0 + 0x10000;
                goto block_30;
            }
        } else {
            var_at_4 = temp_s0 + 0x10000;
block_30:
            *(s32 *)((u8 *)var_at_4 + -0x7708) = 3;
        }
        var_v0_2 = *D_004E05DC;
        var_at_2 = temp_s0 + 0x10000;
        goto block_33;
    default:
        *(s32 *)((u8 *)temp_s0 + 0x88F8) = 1;
        var_v0_2 = 4;
        var_at_2 = temp_s0 + 0x10000;
        goto block_33;
    }
    *(s32 *)((u8 *)temp_s0 + 0x8AA8) = 0;
    if ((*(s16 *)((u8 *)temp_s0 + 0x7F8) == 5) && (gBattle != NULL)) {
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) ((u64) ((s64) *(s32 *)((u8 *)gBattle + 0x8AA8) << 0x20) >> 0x20);
        *(s32 *)((u8 *)gBattle + 0x8AA8) = (s32) (*(s32 *)((u8 *)gBattle + 0x8AA8) | 0xE);
    }
    if (D_004703F4 != 3) {
        var_f0 = 1.0f;
    } else {
        var_f0 = 1.2f;
    }
    var_a0 = 0;
    *(f32 *)((u8 *)temp_s0 + 0x88F4) = var_f0;
    *(f32 *)((u8 *)temp_s0 + 0x88F0) = var_f0;
    *(s32 *)((u8 *)temp_s0 + 0x88EC) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB4) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB1) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x88FC) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x8900) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x8904) = -1;
    *(s16 *)((u8 *)temp_s0 + 0x8944) = 0;
    *(s16 *)((u8 *)temp_s0 + 0x8948) = -1;
    *(s16 *)((u8 *)temp_s0 + 0x894A) = -1;
    *(s8 *)((u8 *)temp_s0 + 0x8976) = 0;
    *(s16 *)((u8 *)temp_s0 + 0x8946) = 0;
    var_v1 = gScrMachines;
loop_42:
    if (*(s32 *)((u8 *)var_v1 + 0xC) == 0) {
        *(s16 *)((u8 *)temp_s0 + 0x8946) = var_a0;
    } else {
        var_a0 += 1;
        var_v1 += 0x5C;
        if (var_a0 < 2) {
            goto loop_42;
        }
    }
    *(s8 *)((u8 *)temp_s0 + 0x8AAD) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB2) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB3) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x892C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8928) = 0x200800;
    *(s32 *)((u8 *)temp_s0 + 0x892C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8930) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB9) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8ABB) = -1;
    *(s32 *)((u8 *)gBattle + 0x8920) = 0;
    *(s32 *)((u8 *)gBattle + 0x8924) = 0;
    func_0029D860(0);
    func_0029D800(*(f32 *)((u8 *)temp_s0 + 0x88F0));
    temp_v0_3 = *(s32 *)((u8 *)temp_s0 + 0x7EC);
    if (temp_v0_3 < 0) {
        *temp_s1 = (f32) temp_v0_3;
    }
    *(s8 *)((u8 *)temp_s0 + 0x897C) = 0;
    func_0029D8E0();
}
