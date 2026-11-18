/* Draft (not built): func_0018EF40 at 0x0018EF40, size 0xC4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018EF40.s */

s32 func_00199818();
s32 func_001999E0();
s32 func_0019C140();

void func_0018EF40(u8 *arg0) {
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    if ((func_001999E0((u8 *)6) == 1) && (*(s32 *)((u8 *)temp_s1 + 8) == 0) && (func_0019C140(arg0, 6) != 0)) {
        func_00199818(arg0, 6, 0);
    }
    if ((func_001999E0(arg0, 5) == 1) && (*(s32 *)((u8 *)temp_s1 + 4) == 0) && (func_0019C140(arg0, 7) != 0)) {
        func_00199818(arg0, 5, 0);
    }
}
