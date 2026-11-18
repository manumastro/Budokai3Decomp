/* Draft (not built): func_001A0908 at 0x001A0908, size 0x130, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A0908.s */

s32 func_0019F320(u32 *, s32 *);                /* extern */
s32 func_0019F6D0(void *, u32 *, s32 *, s32); /* extern */
s32 func_001A0858(s32);                             /* extern */
s32 func_001A0A38(void *, u32 *, s32, s32);     /* extern */
s32 func_001A0BC8(void *, u32 *, s32, s32);     /* extern */
extern s32 D_00467E20;
extern s32 D_00467E28;
extern s32 D_00467E58;

void func_001A0908(u8 *arg0, u32 *arg1, s32 arg2, s32 arg3) {
    u32 temp_v1;

    if (*(s32 *)((u8 *)arg0 + 4) != 0) {
        goto block_2;
    }
    *(s32 *)((u8 *)arg0 + 4) = func_0019F320(arg1, &D_00467E20);
block_2:
    if (func_001A0858(*(s32 *)((u8 *)arg0 + 0x24)) == 1) {
        goto block_5;
    }
    func_0019F6D0(arg0, arg1, &D_00467E28, 2);
    return;
block_5:
    temp_v1 = *arg1;
    if (temp_v1 == 2) {
        goto block_10;
    }
    if (temp_v1 < 3U) {
        goto block_12;
    }
    if (temp_v1 != 3) {
        goto block_12;
    }
    func_001A0A38(arg0, arg1, arg2, arg3);
    return;
block_10:
    func_001A0BC8(arg0, arg1, arg2, arg3);
    return;
block_12:
    func_0019F6D0(arg0, arg1, &D_00467E58, 2);
    return;
}
