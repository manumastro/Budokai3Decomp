/* Draft (not built): func_002378F0 at 0x002378F0, size 0x1E4, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x1E4
 * Original: asm/nonmatchings/battle/char_light/func_002378F0.s */

// src/battle/char_light.c func_002378F0 size diff=46/115
u8 *func_002378F0(u8 *arg0) {
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s16 var_s1;
    s32 temp_v1;
    u16 temp_v1_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v0;

    temp_v0 = amHeap_Alloc(0x38, 1, D_0046A798, 0x108);
    memset(temp_v0, 0, 0x38);
    *(s32 *)((u8 *)temp_v0 + 0x1C) = 0x3F800000;
    *(u8 **)((u8 *)temp_v0 + 0) = amNode_Alloc();
    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0)) + 0x30) = 0;
    temp_a0 = *(u8 **)((u8 *)temp_v0 + 0);
    *(u16 *)((u8 *)temp_a0 + 0x32) = (u16) (*(u16 *)((u8 *)temp_a0 + 0x32) | 3);
    *(s32 *)((u8 *)temp_v0 + 4) = -1;
    if (arg0 == NULL) {
        return temp_v0;
    }
    *(u8 **)((u8 *)arg0 + 0x1C) = temp_v0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_v0 != NULL) {
        *(s32 *)((u8 *)temp_v0 + 8) = 0;
        if ((temp_v1 >= 0) && (temp_v1 < 6)) {
            *(s32 *)((u8 *)temp_v0 + 8) = (s32) (0x100 << temp_v1);
            temp_v1_2 = (u16) *(s32 *)((u8 *)temp_v0 + 8);
            temp_a0_2 = *(u8 **)((u8 *)temp_v0 + 0);
            if (temp_v1_2 & 0x30) {
                *(u16 *)((u8 *)temp_a0_2 + 0x32) = (u16) (*(u16 *)((u8 *)temp_a0_2 + 0x32) & 0xFFCF);
            }
            *(u16 *)((u8 *)temp_a0_2 + 0x32) = (u16) (*(u16 *)((u8 *)temp_a0_2 + 0x32) | temp_v1_2);
        }
    }
    if (arg0 != NULL) {
        var_s1 = *((*(s32 *)((u8 *)arg0 + 0x10) * 8) + (D_00447454 + (*(s32 *)((u8 *)arg0 + 0xC) * 0x60)));
    } else {
        var_s1 = 0;
    }
    memset(&sp30, 0, 0x30);
    if ((var_s1 != 3) && (var_s1 != 2)) {
        if (var_s1 != 0) {
            if ((var_s1 != 5) && (var_s1 != 1)) {

            } else {
                var_s1 = 0;
                goto block_20;
            }
        } else {
block_20:
            sp50 = 1;
        }
    } else {
        sp40 = 0;
    }
    sp30 = (s32) var_s1;
    if ((temp_v0 != NULL) && (sp30 >= 0) && (sp30 < 6)) {
        *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
        D_0046A760[sp30]();
    }
    return temp_v0;
}
