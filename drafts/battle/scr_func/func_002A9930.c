/* Draft (not built): func_002A9930 at 0x002A9930, size 0x1B0, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); all 'func_002A9930()' does not match 'func_002A9930(int, int, unsigned char *, unsigned char *)' @ 347: func_002A9930();
 * Original: asm/nonmatchings/battle/scr_func/func_002A9930.s */

// src/battle/scr_func.c func_002A9930 cerr diff=-1/0
s32 amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_0046EB08;
extern void func_0022E0B0(void *);
void func_002A9930(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_a0;
    u8 *temp_s2;

    temp_s2 = (arg1 * 0x28) + (((u8 *)&D_005BCD20) + (arg0 * 0xA0));
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 4);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)(temp_a0));
        *(u8 **)((u8 *)temp_s2 + 4) = NULL;
    }
    *(u8 **)((u8 *)temp_s2 + 4) = arg2;
    *(u8 **)((u8 *)temp_s2 + 0xC) = arg3;
    if ((u32) arg3 >= (u32) *(u32 *)((u8 *)arg3 + 0x14)) {
        func_0022E0B0(arg3);
    }
    temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x10);
    temp_s0 = temp_v1 * 4;
    if (temp_v1 != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x20) = amHeap_Alloc(temp_s0, 0, &D_0046EB08, 0x191F);
        memset((void *)(*(s32 *)((u8 *)temp_s2 + 0x20)), 0, (s32)(temp_s0));
    }
    temp_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x18);
    temp_s0_2 = temp_v1_2 * 4;
    if (temp_v1_2 != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x24) = amHeap_Alloc(temp_s0_2, 0, &D_0046EB08, 0x1924);
        memset((void *)(*(s32 *)((u8 *)temp_s2 + 0x24)), 0, (s32)(temp_s0_2));
    }
    var_s1 = 0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x10) > 0) {
        var_s0 = 0;
        do {
            var_s1 += 1;
            *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x20) + var_s0) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x14) + var_s0), 0);
            var_s0 += 4;
        } while (var_s1 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x10));
    }
    var_s1_2 = 0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x18) > 0) {
        var_s0_2 = 0;
        do {
            var_s1_2 += 1;
            *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x24) + var_s0_2) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x1C) + var_s0_2), 0);
            var_s0_2 += 4;
        } while (var_s1_2 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x18));
    }
}
