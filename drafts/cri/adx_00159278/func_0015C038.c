/* Draft (not built): func_0015C038 at 0x0015C038, size 0x68, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C038.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015A940(s32);                         /* extern */

void func_0015C038(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    if (arg0 != NULL) {
        func_00152508();
        temp_v0 = *(s32 *)((u8 *)arg0 + 0x80);
        if (temp_v0 != 0) {
            func_0015A940(temp_v0);
        }
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x84);
        if (temp_a0 != 0) {
            func_0015A940(temp_a0);
        }
        *(s32 *)((u8 *)arg0 + 0) = 0;
        func_00152520();
    }
}

/* Similar function already in C: func_00158D38 (src/cri/adx_001563B0.c), similarity 0.76.
 * It is the template below (not built). */
#if 0
void func_00158D38(u8 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 4);
        if (temp_v0 != 0) {
            *(s32 *)((u8 *)arg0 + 4) = 0;
            func_001507E8(temp_v0);
        }
        func_00152508();
        memset(arg0, 0, 0xA8);
        func_00152520();
    }
}
#endif
