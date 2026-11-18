/* Draft (not built): func_001745E0 at 0x001745E0, size 0x174, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001745E0.c:25: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mpv/func_001745E0.s */

s32 func_00174758(void *, s32 *, s32);      /* extern */
s32 memcpy(s32, s32 *, s32);                /* extern */
extern s32 D_00465238;

void func_001745E0(u8 *arg0, s32 *arg1, s32 arg2) {
    s32 sp10;
    s32 (*temp_v1)(s32, s32);
    s32 temp_s3;
    s32 temp_s4;
    u8 **temp_s1;
    u8 *var_v0;

    temp_s3 = *(s32 *)((u8 *)arg0 + 0x634);
    temp_s4 = (temp_s3 * 0xC) + 0x110;
    temp_s1 = *(u8 ***)((u8 *)(arg0 + temp_s4) + 8);
    if (temp_s1 != NULL) {
        (*(s32 (**)(u8 **, s32, s32 *, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 0, sp);
        memcpy(sp0, arg1, sp4);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 1, sp);
        var_v0 = arg0 + temp_s4;
        if (sp4 < arg2) {
            (*(s32 (**)(u8 **, s32, s32 *, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 0, arg2 - sp4, &sp10);
            memcpy(sp10, arg1 + sp4, sp14);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 1, &sp10);
            var_v0 = arg0 + temp_s4;
        }
        temp_v1 = *(s32 (**)(s32, s32))((u8 *)var_v0 + 0xC);
        if (temp_v1 != NULL) {
            temp_v1(*(s32 *)((u8 *)var_v0 + 0x10), temp_s3);
        }
    }
    if (temp_s3 == 3) {
        if (*(s32 *)((u8 *)arg0 + 0x148) != 0) {
            if (*(s32 *)((u8 *)arg0 + 0x578) != 0) {
                func_00174758(arg0, &D_00465238, 8);
            }
            func_00174758(arg0, arg1, arg2);
        }
    }
}
