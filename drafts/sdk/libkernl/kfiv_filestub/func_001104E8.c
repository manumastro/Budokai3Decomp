/* Draft (not built): func_001104E8 at 0x001104E8, size 0x1E8, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_001104E8.c:67: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_001104E8.s */

s32 CreateSema(s32 *, s32);                 /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
void *get_iob();                                    /* extern */
s32 memcpy(void *, s32, u32);                   /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);  /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D790;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_001104E8(s32 arg1, s32 arg2, u32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s2_2;
    u32 temp_s4;
    u8 *temp_s2;

    temp_s4 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s2 = get_iob();
    _sceFsWaitS(0x1A);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    if ((temp_s2 == NULL) || (*(s32 *)((u8 *)temp_s2 + 4) == 0)) {
        func_0010EFF0();
        return -9;
    }
    if ((arg3 >= 0x401U) || (temp_s4 >= 0x401U)) {
        func_0010EFF0();
        return -0x16;
    }
    if (arg2 == 0) {
        *(u32 *)((u8 *)(&D_00473440) + 0x41C) = 0U;
    } else {
        memcpy(&D_00473440 + 0x14, arg2, arg3);
    }
    *(s32 *)((u8 *)(&D_00473440) + 0x10) = arg1;
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = (s32) *(s32 *)((u8 *)temp_s2 + 0);
    *(u32 *)((u8 *)(&D_00473440) + 0x41C) = arg3;
    sp14 = 1;
    sp24 = &D_0045D790;
    sp18 = 0;
    temp_s2_2 = CreateSema(&sp10, 1);
    *(u32 *)((u8 *)(&D_00473440) + 0x418) = temp_s4;
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    *(s32 *)((u8 *)(&D_00473440) + 0x414) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s2_2;
    sceSifWriteBackDCache(&D_00473440, 0x420);
    if (func_0010EA50(&D_00474B40, 0x1A, 0, &D_00473440, 0, 0) < 0) {
        DeleteSema(temp_s2_2);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    if (temp_s0 == 0) {
        DeleteSema(temp_s2_2);
        return -0xB;
    }
    WaitSema(temp_s2_2);
    DeleteSema(temp_s2_2);
    return sp30;
}
