/* Draft (not built): func_0010F878 at 0x0010F878, size 0x178, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_0010F878.c:52: parse error before `int'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F878.s */

s32 CreateSema(s32 *, s32);                 /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
void *get_iob();                                    /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D718;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474940;
extern s32 D_00474B40;

s32 func_0010F878(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0_2;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = get_iob();
    _sceFsWaitS(1);
    if ((D_003EC6BC == 0) || (temp_s0 == NULL) || (*(s32 *)((u8 *)temp_s0 + 4) == 0)) {
        func_0010EFF0();
        return -9;
    }
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = (s32) *(s32 *)((u8 *)temp_s0 + 0);
    *(s32 *)((u8 *)(&D_00473440) + 0x10) = (s32) ((s32) (temp_s0 - &D_00474940) >> 4);
    sp14 = 1;
    sp24 = &D_0045D718;
    sp18 = 0;
    temp_v0 = CreateSema(&sp10, 1);
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_v0;
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    if (func_0010EA50(&D_00474B40, 1, 0, &D_00473440, 0, 0) >= 0) {
        *(s32 *)((u8 *)temp_s0 + 4) = 0;
        temp_s0_2 = *((s32) &D_00474080 | 0x20000000);
        func_0010EFF0();
        if (temp_s0_2 == 0) {
            DeleteSema(temp_v0);
            return -0xB;
        }
        WaitSema(temp_v0);
        DeleteSema(temp_v0);
        return (sp30 > -1) int 0 : sp30;
    }
    DeleteSema(temp_v0);
    func_0010EFF0();
    return -0xB;
}
