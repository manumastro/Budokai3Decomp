/* Draft (not built): func_0026DE30 at 0x0026DE30, size 0x1D0, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x1D0
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026DE30.s */

// src/menu/ess_main_2.c func_0026DE30 size diff=47/113
s32 *amHeap_Alloc(s32, s32, s32 *, s32);
u32 func_0012EAE0(s32, s32 *, s32 *, s32 *);
extern s32 D_0046B440;
extern s32 D_004E0660;
s32 func_0026DE30(s32 arg0, s32 arg1, u8 *arg2) {
    s32 *var_a1;
    s32 *temp_s1;
    s32 *temp_v0;
    s32 *var_a0;
    s32 *var_a2;
    s32 *var_a3;
    s32 var_s2;
    s32 var_t0;
    s64 temp_v1;
    u32 var_s2_2;
    u32 var_s3;
    u32 var_v1;
    u8 *var_s4;

    var_s4 = arg2;
    temp_s1 = amHeap_Alloc(0x94C, 0, &D_0046B440, 0x1F4);
    temp_v0 = amHeap_Alloc(0x94C, 0, &D_0046B440, 0x1F5);
    var_a1 = &D_004E0660;
    var_a3 = temp_s1;
    var_a2 = temp_v0;
    var_s3 = 0;
    var_s2_2 = 0;
    var_t0 = 0;
loop_1:
    *var_a3 = 0;
    *var_a2 = 0;
    if (*(u8 *)((u8 *)var_a1 + 0x14) != arg0) {
        goto block_8;
    }
    temp_v1 = *(s64 *)((u8 *)var_a1 + 0);
    if (temp_v1 == 0) {
        goto block_4;
    }
    if (!(temp_v1 & arg1)) {
        goto block_8;
    }
block_4:
    if (temp_v1 == 0) {
        goto block_6;
    }
    *var_a2 = 1;
    var_s2_2 += 1;
block_6:
    if ((s32) *var_s4 >= (s32) *(u8 *)((u8 *)var_a1 + 0xD)) {
        goto block_8;
    }
    *var_a3 = 1;
    var_s3 += 1;
block_8:
    var_t0 += 1;
    var_a1 += 0x28;
    var_s4 += 1;
    var_a3 += 4;
    var_a2 += 4;
    if (var_t0 < 0x253) {
        goto loop_1;
    }
    if (var_s3 == 0) {
        goto block_12;
    }
    var_v1 = func_0012EAE0(0x20, var_a1, var_a2, var_a3) % var_s3;
    var_a0 = temp_s1;
    goto block_15;
block_12:
    if (var_s2_2 == 0) {
        goto block_14;
    }
    var_v1 = func_0012EAE0(0x20, var_a1, var_a2, var_a3) % var_s2_2;
    var_a0 = temp_v0;
    goto block_15;
block_14:
    amHeap_Free(temp_v0);
    amHeap_Free(temp_s1);
    return 0;
block_15:
    var_s2 = -1;
    if ((s32) var_v1 < 0) {
        goto block_18;
    }
loop_16:
    var_s2 += 1;
    var_v1 -= *var_a0;
    var_a0 += 4;
    if ((s32) var_v1 >= 0) {
        goto loop_16;
    }
block_18:
    amHeap_Free(temp_v0);
    amHeap_Free(temp_s1);
    return var_s2;
}
