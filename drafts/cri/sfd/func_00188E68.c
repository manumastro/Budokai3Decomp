/* Draft (not built): func_00188E68 at 0x00188E68, size 0x19C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00188E68.s */

s32 ADXT_GetErrCode(s32);                           /* extern */
s32 ADXT_GetStat(s32);                              /* extern */
s32 func_0015FA00(s32);                         /* extern */
s32 func_00189070(void *);                          /* extern */
s32 func_001890A0(void *, s32);             /* extern */
s32 func_0018D650(void *, s32);             /* extern */
s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019C348(s32, s32);                /* extern */
extern s32 D_0048CFEC;

void func_00188E68(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    u32 var_v0;
    u8 *temp_s4;

    temp_s4 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    temp_s2 = *(s32 *)((u8 *)temp_s4 + 0);
    temp_s3 = ADXT_GetStat(temp_s2);
    temp_v0 = ADXT_GetErrCode(temp_s2);
    if (temp_v0 != 0) {
        D_0048CFEC = temp_v0;
    }
    temp_s0 = (func_001999E0(arg0, 0x1A) == 0) ? 0 : temp_v0;
    if (temp_s0 != -1) {
        if (temp_s0 < 0) {
            if (temp_s0 != -2) {
                goto block_12;
            }
            func_0018D650(arg0, 0xFF000C09);
            goto block_13;
        }
        var_v0 = temp_s3 - 4;
        if (temp_s0 != 0) {
block_12:
            func_0018D650(arg0, 0xFF000C07);
            goto block_13;
        }
    } else {
        func_0018D650(arg0, 0xFF000C08);
block_13:
        var_v0 = temp_s3 - 4;
    }
    if (var_v0 < 2U) {
        func_0019C348(arg0 + 0xFA0, 0);
    }
    if ((temp_s3 == 5) || (temp_s0 != 0)) {
        func_001890A0(arg0, 1);
    }
    if ((func_00189070(arg0) == 1) && (arg1 == 0)) {
        func_0015FA00(temp_s2);
        if (*(s32 *)((u8 *)temp_s4 + 0x48) == 0) {
            func_001890A0(arg0, 1);
        }
    }
}
