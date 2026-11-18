/* Draft (not built): ADXT_StartSj at 0x0015E5C8, size 0x84, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/ADXT_StartSj.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 ADXT_Stop();                                /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015E408(void *, s32);                 /* extern */
s32 func_0015FB70(void *, s32);             /* extern */
extern s32 D_004618E8;

void ADXT_StartSj(u8 *arg0, s32 arg1) {
    if ((arg0 == NULL) || (arg1 == 0)) {
        ADXERR_CallErrFunc1(&D_004618E8);
        return;
    }
    ADXT_Stop();
    func_00152508();
    func_0015E408(arg0, arg1);
    *(s8 *)((u8 *)arg0 + 2) = 3;
    func_0015FB70(arg0, 1);
    func_00152520();
}
