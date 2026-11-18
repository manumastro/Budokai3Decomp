/* Draft (not built): func_0017FFB8 at 0x0017FFB8, size 0x78, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_0017FFB8.s */

s32 func_0017FED0();                            /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004656A0;

void func_0017FFB8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_v1;

    temp_v1 = arg0 + 0x170;
    if (arg1 == 0) {
        *(s32 *)((u8 *)temp_v1 + 8) = 0;
        *(u8 **)((u8 *)arg0 + 0x17C) = (u8 *) (arg0 + 0x164);
        *(s32 *)((u8 *)arg0 + 0x170) = 0;
        *(s32 *)((u8 *)temp_v1 + 4) = 0;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        func_0017FED0();
        return;
    }
    if (arg2 >= ((*(s32 *)((u8 *)arg0 + 0x1C) + 4) * arg3)) {
        *(s32 *)((u8 *)arg0 + 0x170) = arg1;
        *(s32 *)((u8 *)temp_v1 + 4) = arg2;
        *(s32 *)((u8 *)temp_v1 + 8) = arg3;
        *(u8 **)((u8 *)arg0 + 0x17C) = temp_v1;
        func_0017FED0();
        return;
    }
    func_001870E8(&D_004656A0);
}
