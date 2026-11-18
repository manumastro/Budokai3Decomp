/* Draft (not built): func_00107ED0 at 0x00107ED0, size 0x44, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107ED0.s */

s32 func_001077B8(void *, void *);              /* extern */
s32 func_00107928(void *, void *);              /* extern */

void func_00107ED0(u8 *arg0) {
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0x184) != 3) {
        func_00107928(arg0, arg0);
        return;
    }
    func_001077B8(arg0, arg0);
}
