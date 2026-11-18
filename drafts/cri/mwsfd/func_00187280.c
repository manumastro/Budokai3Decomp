/* Draft (not built): func_00187280 at 0x00187280, size 0xC0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 14 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00187280.s */

s32 MWSTM_ReqStart(void *);                         /* extern */
s32 func_00187098();                                /* extern */
s32 func_001870B8(s32);                         /* extern */
s32 func_00187340(void *, s32);             /* extern */
s32 func_00187358(void *);                      /* extern */
s32 func_001996B0(s32);                             /* extern */

void func_00187280(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C0);
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x40);
    if (temp_s2 == 1) {
        temp_s0 = func_00187098();
        if (MWSTM_ReqStart(arg0) == temp_s2) {
            *(s32 *)((u8 *)arg0 + 0x1C0) = 0;
        }
        func_001870B8(temp_s0);
    }
    func_00187358(arg0);
    temp_v0 = func_001996B0(temp_s3);
    if ((temp_v0 == 4) || (temp_v0 == 6)) {
        *(s32 *)((u8 *)arg0 + 8) = 2;
        func_00187340(arg0, 6);
    }
}
