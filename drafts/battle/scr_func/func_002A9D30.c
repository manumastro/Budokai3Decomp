/* Draft (not built): func_002A9D30 at 0x002A9D30, size 0x164, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'unsigned char *' to 'int' @ 332: amMotion_BindAnim(*(u8 **)((u8 *)temp_s0 + 0x3C), var_s1, temp_a2);
 * Original: asm/nonmatchings/battle/scr_func/func_002A9D30.s */

// src/battle/scr_func.c func_002A9D30 cerr diff=-1/0
extern void amHeap_Free(void *);
void func_002A9D30(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 temp_a2;
    s32 var_a1;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *var_a0;
    u8 *var_s2;

    temp_s0 = (arg1 * 0x20E0) + (&D_005ABA80 + (arg0 * 0x8380));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)((void *)(temp_a0)));
    }
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0_2 != NULL) {
        amCdFs_ReleaseCache((s32)((void *)(temp_a0_2)));
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0x38);
    if (temp_a0_3 != NULL) {
        amHeap_Free(temp_a0_3);
        *(u8 **)((u8 *)temp_s0 + 0x38) = NULL;
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0x3C);
    if (temp_a0_4 != NULL) {
        amHeap_Free(temp_a0_4);
        *(u8 **)((u8 *)temp_s0 + 0x3C) = NULL;
    }
    *(u8 **)((u8 *)temp_s0 + 4) = arg2;
    *(u8 **)((u8 *)temp_s0 + 0x20) = arg3;
    amFile_Load((s32)((void *)(arg3)));
    var_a1 = 0;
    var_a0 = temp_s0;
loop_9:
    if (*(s32 *)((u8 *)var_a0 + 0xC) == 0) {
        var_a1 += 1;
        var_a0 += 4;
        if (var_a1 >= 0x10) {

        } else {
            goto loop_9;
        }
    }
    if (var_a1 != 0x10) {
        amMotion_Create((s32)((void *)(arg3)), 0, 0);
        *(u8 **)((u8 *)temp_s0 + 0x3C) = (u8 *) M2C_ERROR(/* Read from unset register $v0 */);
        var_s1 = 0;
        var_s2 = temp_s0;
        do {
            temp_a2 = *(s32 *)((u8 *)var_s2 + 0x28);
            if (temp_a2 != 0) {
                amMotion_BindAnim(*(u8 **)((u8 *)temp_s0 + 0x3C), var_s1, temp_a2);
            }
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 < 0x10);
        *(s8 *)((u8 *)temp_s0 + 0x20A0) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x208C) = 0;
    }
    *(s32 *)((u8 *)temp_s0 + 0x2094) = 0;
}
