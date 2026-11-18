/* Draft (not built): func_00189208 at 0x00189208, size 0x154, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00189208.s */

s32 ADXT_StartSj();
s32 func_0016E120();
s32 func_00189360();
void *func_00189518();
s32 func_00189598();
s32 func_00189988();
s32 func_0018D650();
s32 func_001999E0();
extern s32 func_00188248;
extern s32 func_00188268;
extern s32 func_00188288;
extern s32 func_001882A8;
extern s32 func_001882C8;

s32 func_00189208(u8 *arg0) {
    s32 temp_v0_2;
    s32 var_v0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_t0;
    u8 *temp_v0;

    temp_s1 = arg0 + 0x30E8;
    temp_s3 = arg0 + 0x30E0;
    var_v0 = func_001999E0(6);
    if (var_v0 != 0) {
        *(u8 **)((u8 *)arg0 + 0x1CB4) = temp_s3;
        var_v0 = func_00189360(arg0, temp_s3);
        if (var_v0 == 0) {
            temp_v0 = func_00189518(temp_s1);
            if (temp_v0 == NULL) {
                return func_0018D650(arg0, 0xFF000C04);
            }
            temp_v0_2 = func_0016E120(*(s32 *)((u8 *)temp_s1 + 8), *(s32 *)((u8 *)arg0 + 0x30E8), *(s32 *)((u8 *)temp_s1 + 4));
            temp_t0 = arg0 + 0x3194;
            if (temp_v0_2 == 0) {
                return func_0018D650(arg0, 0xFF000C05, &func_001882A8, &func_001882C8);
            }
            *(s32 *)((u8 *)temp_s3 + 4) = temp_v0_2;
            *(u8 **)((u8 *)arg0 + 0x30E0) = temp_v0;
            *(u8 **)((u8 *)arg0 + 0x1DC4) = temp_t0;
            *(s32 **)((u8 *)temp_t0 + 0x14) = &func_001882C8;
            *(s32 **)((u8 *)temp_t0 + 4) = &func_00188248;
            *(s32 *)((u8 *)arg0 + 0x3194) = (s32) *(s32 *)((u8 *)temp_v0 + 0xC);
            *(s32 **)((u8 *)temp_t0 + 8) = &func_00188268;
            *(s32 **)((u8 *)temp_t0 + 0xC) = &func_00188288;
            *(s32 **)((u8 *)temp_t0 + 0x10) = &func_001882A8;
            ADXT_StartSj(temp_v0, temp_v0_2, &func_001882A8, &func_001882C8);
            func_00189988(arg0, 1);
            func_00189598(arg0);
            var_v0 = 0;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
