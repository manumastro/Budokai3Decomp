/* Draft (not built): func_002A9EA0 at 0x002A9EA0, size 0x1B0, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); all 'func_002A9EA0()' does not match 'func_002A9EA0(int, int, unsigned char *, unsigned char *)' @ 444: func_002A9EA0();
 * Original: asm/nonmatchings/battle/scr_func/func_002A9EA0.s */

// src/battle/scr_func.c func_002A9EA0 cerr diff=-1/0
s32 amMotSet_Init(void *, void *);
extern void amHeap_Free(void *);
extern void *amObject_Create(void *, void *);
void func_002A9EA0(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_v1;

    temp_s0 = (arg1 * 0x20E0) + (((u8 *)&D_005ABA80) + (arg0 * 0x8380));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0));
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        *(s32 *)((u8 *)temp_s0 + 0x20) = 0;
    }
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0_2 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0_2));
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0x38);
    if (temp_a0_3 != NULL) {
        amHeap_Free(temp_a0_3);
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0x3C);
    if (temp_a0_4 != NULL) {
        amHeap_Free(temp_a0_4);
        *(u8 **)((u8 *)temp_s0 + 0x3C) = NULL;
    }
    *(u8 **)((u8 *)temp_s0 + 0) = arg2;
    *(u8 **)((u8 *)temp_s0 + 0x1C) = arg3;
    amFile_Load((s32)(arg3));
    *(u8 **)((u8 *)temp_s0 + 0x38) = amObject_Create(arg3, NULL);
    var_a0 = 0;
    var_v1 = temp_s0;
loop_9:
    if (*(s32 *)((u8 *)var_v1 + 0xC) == 0) {
        var_a0 += 1;
        var_v1 += 4;
        if (var_a0 >= 2) {

        } else {
            goto loop_9;
        }
    }
    if (var_a0 != 2) {
        *(u8 **)((u8 *)temp_s0 + 0x3C) = amMotion_CreateFromObj((s32)(*(u8 **)((u8 *)temp_s0 + 0x38)), 0, 0);
        var_s1 = 0;
        var_s2 = temp_s0;
        do {
            temp_a2 = *(s32 *)((u8 *)var_s2 + 0x28);
            if (temp_a2 != 0) {
                amMotion_BindAnim((s32)(*(u8 **)((u8 *)temp_s0 + 0x3C)), (s32)(var_s1), (s32)(temp_a2));
            }
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 < 2);
        *(s8 *)((u8 *)temp_s0 + 0x20A0) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x208C) = 0;
    }
    *(s32 *)((u8 *)temp_s0 + 0x2094) = 0;
    amMotSet_Init(temp_s0 + 0x40, *(u8 **)((u8 *)temp_s0 + 0x38));
    var_s1_2 = 0;
    var_s2_2 = temp_s0;
    do {
        temp_a2_2 = *(s32 *)((u8 *)var_s2_2 + 0x30);
        if (temp_a2_2 != 0) {
            amMotSet_Bind(temp_s0 + 0x40, var_s1_2, temp_a2_2);
        }
        var_s1_2 += 1;
        var_s2_2 += 4;
    } while (var_s1_2 < 2);
}
