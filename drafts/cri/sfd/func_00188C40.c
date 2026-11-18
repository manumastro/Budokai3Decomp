/* Draft (not built): func_00188C40 at 0x00188C40, size 0x108, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00188C40.c:34: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00188C40.s */

s32 func_00188D48(void *, void *, s32 *);       /* extern */
s32 func_0018D3C0();                                /* extern */
s32 memcmp(s32, s32 *, s32);                /* extern */
extern s32 D_00467220;
extern s32 func_00188A68;

void func_00188C40(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp4;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_s3;

    var_s0 = arg1;
    *arg3 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    var_s1 = 0;
    if (func_0018D3C0() >= 0x6C) {
        *(s32 **)((u8 *)temp_s3 + 0x3C) = &func_00188A68;
    } else {
loop_4:
        if (var_s1 < (arg2 - 0x12)) {
            var_s0 += 0x12;
            if (memcmp(var_s0, &D_00467220, 0x12) != 0) {
                *(s32 **)((u8 *)temp_s3 + 0x3C) = &func_00188A68;
            } else {
                var_s1 += 0x12;
                goto loop_4;
            }
        }
        *arg3 = var_s1;
        if (func_00188D48(arg0, sp, &sp4) == 0) {
            *(s32 *)((u8 *)temp_s3 + 0x38) = (s32) (*(s32 *)((u8 *)temp_s3 + 0x38) + ((var_s1 / (s32) (sp0 * 0x12)) << 5));
        }
    }
}
