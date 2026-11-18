/* Draft (not built): MWSTM_ReqStart at 0x00187500, size 0xBC, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/MWSTM_ReqStart.s */

s32 MWSFCRE_SetSupplySj(void *);                /* extern */
s32 func_00182420(s32);                     /* extern */
s32 func_001870E8(s32 *, s32);              /* extern */
s32 func_001880B0(s32, s32, s32, s32);          /* extern */
s32 func_00188128(s32);                             /* extern */
s32 func_00188190(s32);                             /* extern */
extern s32 D_00467110;

s32 MWSTM_ReqStart(u8 *arg0) {
    u8 **temp_a0;

    if (func_00188190(*(s32 *)((u8 *)arg0 + 0x44)) != 2) {
        temp_a0 = *(u8 ***)((u8 *)arg0 + 0x1D0);
        if (temp_a0 != NULL) {
            (*(s32 (**)(u8 **))((u8 *)(*temp_a0) + 0x14))(temp_a0);
        }
        func_001880B0(*(s32 *)((u8 *)arg0 + 0x44), *(s32 *)((u8 *)arg0 + 0x1B8), *(s32 *)((u8 *)arg0 + 0x1C4), *(s32 *)((u8 *)arg0 + 0x1C8));
        if (func_00188128(*(s32 *)((u8 *)arg0 + 0x44)) == -1) {
            *(s32 *)((u8 *)arg0 + 8) = 4;
            func_00182420(-0x66);
            func_001870E8(&D_00467110, *(s32 *)((u8 *)arg0 + 0x1B8));
            *(s32 *)((u8 *)arg0 + 0x1C0) = 0;
            return -1;
        }
        MWSFCRE_SetSupplySj(arg0);
        return 1;
    }
    return -1;
}
