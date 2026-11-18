/* Draft (not built): func_00106F48 at 0x00106F48, size 0x238, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 _alalcInit(s32, s32, s32);                  /* extern */
s32 _alalcSetDynamic(s32, s32, s32, s32);       /* extern */
s32 func_00106E78(s32);                         /* extern */
s32 func_00107C88(void *);                      /* extern */
s32 func_00107F18(void *);                      /* extern */
s32 func_00108170(s32, s32, s32, s32);      /* extern */
s32 func_00109738(s32, s32 *, s32);         /* extern */
s32 func_00109790(s32, s32 *, s32);         /* extern */
s32 memset(s32, s32);                       /* extern */
extern s32 D_0045D168;
extern s32 D_0045D190;
extern s32 D_0045D1B8;
extern s32 func_001081F8;
extern s32 func_00108220;

s32 func_00106F48(u8 *arg0, s32 arg1, s32 arg2) {
    s32 *var_a1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    memset(arg1, 0);
    temp_s2 = ((u32) (arg1 + 3) >> 2) * 4;
    temp_a2 = arg2 - (temp_s2 - arg1);
    if (temp_a2 < 0x19A0) {
        func_00109738(temp_s2, &D_0045D1B8, temp_a2);
        return 0;
    }
    temp_s1 = temp_s2 + 0x118;
    *(s32 *)((u8 *)arg0 + 0x40) = temp_s2;
    _alalcInit(temp_s1, temp_s2 + 0x19A0, temp_a2 - 0x19A0);
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s64 *)((u8 *)arg0 + 0x10) = -1;
    *(s64 *)((u8 *)arg0 + 0x18) = -1;
    *(s64 *)((u8 *)arg0 + 0x20) = 0;
    *(s64 *)((u8 *)arg0 + 0x28) = -1;
    *(s64 *)((u8 *)arg0 + 0x30) = -1;
    *(s64 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xC8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xCC) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xD0) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xD4) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xD8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xDC) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xE0) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xE4) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xE8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xEC) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xF0) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xF4) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xF8) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xFC) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x108) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x18) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x3C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x48) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x54) = 0;
    *(s64 *)((u8 *)temp_s2 + 0x100) = -1;
    *(s32 **)((u8 *)temp_s2 + 0x24) = &func_001081F8;
    *(s32 **)((u8 *)temp_s2 + 0x30) = &func_00108220;
    temp_v0 = func_00108170(temp_s2, temp_s1, 0x800, 8);
    *(s32 *)((u8 *)temp_s2 + 0x64) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x10C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x110) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x114) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x8C) = 0;
    *(s64 *)((u8 *)temp_s2 + 0x90) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x98) = -1;
    *(s64 *)((u8 *)temp_s2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x9C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xC0) = 0;
    *(s32 *)((u8 *)temp_s2 + 0xA8) = -1;
    *(s32 *)((u8 *)temp_s2 + 0xAC) = -1;
    *(s32 *)((u8 *)temp_s2 + 0xB0) = -1;
    *(u8 **)((u8 *)temp_s2 + 0x868) = arg0;
    *(s32 *)((u8 *)temp_s2 + 0x60) = temp_v0;
    *(s32 *)((u8 *)temp_s2 + 0xC4) = 1;
    func_00106E78(temp_s2);
    func_00107C88(arg0);
    func_00107F18(arg0);
    temp_a1 = temp_s2 + 0x2C8;
    temp_a2_2 = temp_s2 + 0x330;
    temp_a3 = temp_s2 + 0x398;
    *(s32 *)((u8 *)temp_s2 + 0x1C8) = (s32) (temp_s2 + 0x1F8);
    *(s32 *)((u8 *)temp_s2 + 0x1CC) = (s32) (temp_s2 + 0x260);
    *(s32 *)((u8 *)temp_s2 + 0x1D4) = temp_a1;
    *(s32 *)((u8 *)temp_s2 + 0x1D8) = temp_a2_2;
    *(s32 *)((u8 *)temp_s2 + 0x1DC) = temp_a3;
    *(s32 *)((u8 *)temp_s2 + 0x1E4) = (s32) (temp_s2 + 0x400);
    *(s32 *)((u8 *)temp_s2 + 0x1E8) = (s32) (temp_s2 + 0x468);
    *(s32 *)((u8 *)temp_s2 + 0x1EC) = (s32) (temp_s2 + 0x4D0);
    *(s32 *)((u8 *)temp_s2 + 0x1F4) = (s32) (temp_s2 + 0x538);
    _alalcSetDynamic(temp_s1, temp_a1, temp_a2_2, temp_a3);
    *(s32 *)((u8 *)temp_s2 + 0x860) = -1;
    temp_a2_3 = temp_s2 & 0x3C;
    *(s32 *)((u8 *)temp_s2 + 0x85C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x864) = 0;
    if (temp_a2_3 != 0) {
        var_a1 = &D_0045D168;
        goto block_6;
    }
    if (temp_a2_3 != 0) {
        var_a1 = &D_0045D190;
block_6:
        func_00109790(temp_s2, var_a1, temp_a2_3);
        return 0;
    }
    return 1;
}
