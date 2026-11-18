/* Draft (not built): ADXT_ExecHndl at 0x00161748, size 0xC4, segment cri/adx_00160EB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00160EB0/ADXT_ExecHndl.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 adxt_stat_decinfo();                        /* extern */
s32 func_00160EB0();                            /* extern */
s32 func_00161028();                            /* extern */
s32 func_001610E0();                            /* extern */
s32 func_001612E8();                            /* extern */
s32 func_00161630(void *);                      /* extern */
s32 func_001616B0(void *);                      /* extern */
extern s32 D_00462168;

void ADXT_ExecHndl(u8 *arg0) {
    s8 temp_v1;

    if (arg0 != NULL) {
        goto block_3;
    }
    ADXERR_CallErrFunc1(&D_00462168);
    return;
block_3:
    temp_v1 = *(s8 *)((u8 *)arg0 + 1);
    if (temp_v1 != 3) {
        goto block_5;
    }
    func_00161028();
    goto block_13;
block_5:
    if (temp_v1 != 1) {
        goto block_7;
    }
    adxt_stat_decinfo();
    goto block_13;
block_7:
    if (temp_v1 != 2) {
        goto block_9;
    }
    func_00160EB0();
    goto block_13;
block_9:
    if (temp_v1 != 4) {
        goto block_11;
    }
    func_001610E0();
    goto block_13;
block_11:
    if (temp_v1 != 5) {
        goto block_13;
    }
    func_001612E8();
block_13:
    func_001616B0(arg0);
    func_00161630(arg0);
    return;
}
