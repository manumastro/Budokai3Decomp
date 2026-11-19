/* Draft (not built): func_00270660 at 0x00270660, size 0x204, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 70 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x21C, original 0x204
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00270660.s */

// src/unk/unk_26FF30.c func_00270660 size diff=70/135
void *A2d_AllocObj(s32, void *, s32, s32);
s32 func_0022D4B0(void *, s32);
extern f32 D_00470018;
extern void func_0022C6B0(void *);
void func_00270660(void) {
    f32 temp_f2;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 *temp_s2;
    u8 *var_v1;
    u8 *var_v1_2;

    temp_a2 = *(s32 *)((u8 *)D_004707FC + 0x50);
    var_a0 = temp_a2 - 1;
    if (var_a0 >= 0) {
        var_v1 = (unsigned char *)(D_004707FC + (var_a0 * 4));
loop_2:
        if (*(s32 *)((u8 *)var_v1 + 0x5DC) >= 0) {

        } else {
            var_a0 -= 1;
            var_v1 -= 4;
            if (var_a0 < 0) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_a0 = -1;
    }
    if (var_a0 >= 0) {
        var_s1 = *(s32 *)((u8 *)((var_a0 * 4) + D_004707FC) + 0x69C) - *(s32 *)((u8 *)D_004707FC + 0x4C);
    } else {
        var_s1 = -1;
    }
    var_a0_2 = temp_a2 + 1;
    if (var_a0_2 < 0x30) {
        var_v1_2 = (unsigned char *)(D_004707FC + (var_a0_2 * 4));
loop_13:
        if (*(s32 *)((u8 *)var_v1_2 + 0x5DC) >= 0) {

        } else {
            var_a0_2 += 1;
            var_v1_2 += 4;
            if (var_a0_2 >= 0x30) {
                goto block_17;
            }
            goto loop_13;
        }
    } else {
block_17:
        var_a0_2 = -1;
    }
    if (var_a0_2 > 0) {
        var_s0 = *(s32 *)((u8 *)((var_a0_2 * 4) + D_004707FC) + 0x69C) - *(s32 *)((u8 *)D_004707FC + 0x4C);
        if (var_s0 >= 0xA) {
            var_s0 = 9;
        }
    } else {
        var_s0 = 9;
    }
    temp_s2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x20)) + 0x1C)) + 0x38), D_004707FC, temp_a2, 0);
    if (var_s1 >= 0) {
        temp_f2 = (f32) (var_s1 + 1);
        *(f32 *)((u8 *)temp_s2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x24) + (D_00470018 * temp_f2));
        *(f32 *)((u8 *)temp_s2 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x3C) - (D_00470018 * temp_f2));
    } else {
        *(f32 *)((u8 *)temp_s2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x24) + D_00470018);
    }
    if (var_s0 < 9) {
        var_v0 = var_s0;
        if (var_s1 >= 0) {
            var_v0 = var_s0 - var_s1;
        }
        *(f32 *)((u8 *)temp_s2 + 0x3C) = (f32) ((f32) var_v0 * D_00470018);
    }
    if (var_s1 < 0) {
        *(f32 *)((u8 *)temp_s2 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x34) - D_00470018);
    }
    if (var_s0 == 9) {
        *(f32 *)((u8 *)temp_s2 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x3C) + D_00470018);
    }
    func_0022C6B0(temp_s2);
    func_0022D4B0(temp_s2, 1);
}
