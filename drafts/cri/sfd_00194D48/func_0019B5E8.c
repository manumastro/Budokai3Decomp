/* Draft (not built): func_0019B5E8 at 0x0019B5E8, size 0x14C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0019B5E8.c:16: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B5E8.s */

s32 func_0019A718(void *, s32 *);               /* extern */
s32 func_0019B738(void *, s32, s32, s32 *);     /* extern */
s32 func_0019B7B0(void *, s32 *, s32, f32, f32); /* extern */
extern s32 D_00426A90;

void func_0019B5E8(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp0;
    s32 sp4;
    f32 temp_f13;
    f32 temp_f1;
    s32 temp_a1;
    s32 temp_v0;

    func_0019A718(sp, &sp4);
    if (sp4 == 1) {
        if (sp0 != -2) {
            func_0019B738(arg0, arg1, arg2, arg3);
            return;
        }
        *arg3 = 1;
        return;
    }
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x9DC);
    temp_f1 = ((f32) arg1 * 10000.0f) / (f32) arg2;
    temp_v0 = sp0 + ((s32) (sp4 * M2C_ERROR(/* Read from unset register $t0 */)) / (s32) *(s32 *)((u8 *)(&D_00426A90) + 8));
    temp_f13 = ((f32) temp_v0 * 10000.0f) / (f32) sp4;
    sp0 = temp_v0;
    if (temp_a1 != 1) {
        func_0019B7B0(arg0, arg3, 1, temp_f1, temp_f13);
        return;
    }
    if (!(temp_f1 <= temp_f13)) {
        *arg3 = 0;
        return;
    }
    *arg3 = temp_a1;
}
