/* Draft (not built): func_00156B68 at 0x00156B68, size 0x28, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00156B68.s */

s32 func_00156A90(s32, s32);                    /* extern */
extern s32 D_00405CC8;
extern s32 D_00405D4C;

void func_00156B68(void) {
    func_00156A90(D_00405D4C, D_00405CC8);
}

/* Similar function already in C: func_00123B90 (src/sdk/libc_00123B90.c), similarity 0.82.
 * It is the template below (not built). */
#if 0
void func_00123B90(void) {
    _cleanup_r(_impure_ptr);
}
#endif
