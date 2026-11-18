/* Draft (not built): func_00108068 at 0x00108068, size 0xCC, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00108068.s */

s32 func_00103238();
s32 func_00109738();
extern s32 D_0045D298;
extern s32 D_0045D2B8;

s32 func_00108068(s32 *arg0) {
    s32 temp_v0;
    u8 *var_s1;

    if ((*(s32 *)((u8 *)arg0 + 0x184) == 3) && (*(s32 *)((u8 *)arg0 + 0x130) != 0)) {
        func_00109738(&D_0045D298);
        *(s32 *)((u8 *)arg0 + 0x130) = 0;
    }
    switch (*(s32 *)((u8 *)arg0 + 0x184)) {        /* irregular */
    case 3:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1D0);
        break;
    case 1:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1E0);
        break;
    case 2:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1F0);
        break;
    default:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1D0);
        func_00109738(arg0, &D_0045D2B8);
        break;
    }
    temp_v0 = func_00103238(arg0);
    if (temp_v0 != 0) {
        *(s32 *)((u8 *)var_s1 + 0x28) = 1;
    }
    return temp_v0;
}
