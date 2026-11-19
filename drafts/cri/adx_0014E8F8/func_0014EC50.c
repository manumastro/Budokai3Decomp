/* Draft (not built): func_0014EC50 at 0x0014EC50, size 0x30, segment cri/adx_0014E8F8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014E8F8/func_0014EC50.s */

extern s32 (*D_00400E60)(s32);

void func_0014EC50(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC0);
    if (temp_v0 != 0) {
        D_00400E60(temp_v0);
    }
}

/* Similar function already in C: ADXB_AhxTermSupply (src/cri/adx/mk_adx_bahx.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void ADXB_AhxTermSupply(AdxBasicAhx* adxb)
{
    if (adxb->decoder != 0) {
        ahxtermsupplyfunc(adxb->decoder);
    }
}
#endif
