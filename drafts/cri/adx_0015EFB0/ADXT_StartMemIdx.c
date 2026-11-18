/* Draft (not built): ADXT_StartMemIdx at 0x00160190, size 0x170, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_StartMemIdx.s */

s32 ADXERR_CallErrFunc1();
s32 ADXT_Stop();
s32 func_00152508();
s32 func_00152520();
s32 func_0015E408();
s32 func_0015FB70();
s32 func_0016DBE0();
extern s32 D_00462080;
extern s32 D_004620B0;

void ADXT_StartMemIdx(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    if ((arg0 == NULL) || (arg1 == NULL) || (arg2 < 0)) {
        ADXERR_CallErrFunc1(&D_00462080);
        return;
    }
    ADXT_Stop();
    temp_v1 = *(s32 *)((u8 *)arg1 + 4);
    temp_a1 = (temp_v1 >> 8) & 0xFF00;
    temp_a0 = ((temp_v1 << 8) & 0xFF0000) | temp_a1;
    if (arg2 >= (((u32) temp_v1 >> 0x18) | (temp_v1 << 0x18) | temp_a0)) {
        return;
    }
    if (arg2 < 0) {
        return;
    }
    func_00152508(temp_a0, temp_a1);
    temp_v1_2 = *(s32 *)((u8 *)((arg2 * 8) + arg1) + 8);
    temp_a2 = (temp_v1_2 >> 8) & 0xFF00;
    temp_v0 = func_0016DBE0(arg1 + (((u32) temp_v1_2 >> 0x18) | (temp_v1_2 << 0x18) | (((temp_v1_2 << 8) & 0xFF0000) | temp_a2)), 0x40000000, temp_a2);
    if (temp_v0 == 0) {
        func_00152520(arg0, temp_v0);
        ADXERR_CallErrFunc1(&D_004620B0);
        return;
    }
    func_0015E408(arg0, temp_v0);
    *(s8 *)((u8 *)arg0 + 2) = 2;
    func_0015FB70(arg0, 0);
    func_00152520();
}
