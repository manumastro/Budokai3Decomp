/* Draft (not built): func_00111078 at 0x00111078, size 0x154, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00111078.c:44: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00111078.s */

s32 CreateSema(s32 *, s32);                 /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
void *get_iob();                                    /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D820;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00111078(s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0_2;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = get_iob();
    _sceFsWaitS(0xB);
    if ((D_003EC6BC != 0) && (temp_s0 != NULL)) {
        if (*(s32 *)((u8 *)temp_s0 + 4) != 0) {
            *(s32 *)((u8 *)(&D_00473440) + 0x10) = arg1;
            *(s32 *)((u8 *)(&D_00473440) + 0xC) = (s32) *(s32 *)((u8 *)temp_s0 + 0);
            sp14 = 1;
            sp24 = &D_0045D820;
            sp18 = 0;
            temp_v0 = CreateSema(&sp10, 1);
            *(s32 *)((u8 *)(&D_00473440) + 0) = temp_v0;
            *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
            *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
            if (func_0010EA50(&D_00474B40, 0xB, 0, &D_00473440, 0, 0) < 0) {
                WaitSema(temp_v0);
                func_0010EFF0();
                return -0xB;
            }
            temp_s0_2 = *((s32) &D_00474080 | 0x20000000);
            func_0010EFF0();
            if (temp_s0_2 == 0) {
                DeleteSema(temp_v0);
                return -0xB;
            }
            WaitSema(temp_v0);
            DeleteSema(temp_v0);
            return sp30;
        }
        goto block_5;
    }
block_5:
    func_0010EFF0();
    return -9;
}
