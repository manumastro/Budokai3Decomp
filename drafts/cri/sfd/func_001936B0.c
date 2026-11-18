/* Draft (not built): func_001936B0 at 0x001936B0, size 0x174, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001936B0.c:19: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001936B0.s */

s32 func_0017B420(void *);                          /* extern */
void *func_0017B5B8(void *, s32, s32);          /* extern */
extern s32 D_00426B14;
extern s32 D_00467540;

void func_001936B0(u8 **arg0, s32 *arg1, u8 **arg2, s32 *arg3) {
    s32 temp_s2;
    s32 temp_v1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    *arg1 = 0;
    *arg2 = NULL;
    *arg3 = 0;
    (*(s32 (**)(s32, s32, u8 *))((u8 *)(*arg0) + 0x18))(1, 0x7FFFFFFF, sp);
    temp_v0 = func_0017B5B8(sp0, sp4, 0xCC);
    if (temp_v0 != NULL) {
        if (func_0017B420(temp_v0) & 4) {
            if (sp4 >= ((temp_v0 - sp0) + 6)) {
                temp_v1 = *(&D_00467540 + ((((u64) *(u8 *)((u8 *)temp_v0 + 5) >> 3) & 7) * 4));
                *arg1 = temp_v1;
                if (temp_v1 == 3) {
                    temp_s2 = (sp0 - temp_v0) + sp4;
                    temp_v0_2 = func_0017B5B8(temp_v0, temp_s2, 0x22);
                    if ((temp_v0_2 != NULL) && (func_0017B420(temp_v0_2) & 0x20)) {
                        temp_v0_3 = func_0017B5B8(temp_v0, temp_s2, 2);
                        if (temp_v0_3 == NULL) {
                            goto block_8;
                        }
                        *arg2 = temp_v0_2;
                        *arg3 = temp_v0_3 - temp_v0_2;
                    }
                }
            } else {
                goto block_8;
            }
        }
    } else {
block_8:
        D_00426B14 += 1;
    }
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x1C))(arg0, 1, sp);
}
