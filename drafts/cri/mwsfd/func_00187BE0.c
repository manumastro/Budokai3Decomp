/* Draft (not built): func_00187BE0 at 0x00187BE0, size 0xBC, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mwsfd/func_00187BE0.s */

s32 func_00187650();
s32 func_00187D20();
s32 func_00187D30();
s32 func_00196728();
s32 func_001967B8();
extern void *D_004268B8;

s32 func_00187BE0(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x40);
    func_00187D20((u8 *)1);
    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_s1 != 1) {
        func_00187D20(arg0, 0);
        return 0;
    }
    D_004268B8 = arg0;
    func_00187D30(arg0, 1);
    func_001967B8(temp_s2);
    func_00187D30(arg0, 0);
    if (*(s32 *)((u8 *)arg0 + 8) == 0) {
        *(s32 *)((u8 *)arg0 + 0x6C) = 0;
    } else {
        *(s32 *)((u8 *)arg0 + 0x6C) = temp_s1;
        func_00187650(arg0);
    }
    func_00187D20(arg0, 0);
    return func_00196728(temp_s2) != 1;
}
