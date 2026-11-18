/* Draft (not built): func_001003F0 at 0x001003F0, size 0x68, segment sdk/libgraph (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_001003F0.c:13: parse error before `)'
 * Original: asm/nonmatchings/sdk/libgraph/func_001003F0.s */

extern s32 D_003EC420;

void func_001003F0(void) {
    *(s32 *)0x10003C10 = 1;
    *(s32 *)0x10003C20 = 2;
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: cfc2.ni $a0, $vi28 */);
    M2C_ERROR(/* unknown instruction: ctc2.ni $a0, $vi28 */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    *(s128 *)0x10005000 = *(s128 *)((u8 *)(&D_003EC420) + 0);
    *(s128 *)0x10005000 = *(s128 *)((u8 *)(&D_003EC420) + 0x10);
    *(s32 *)0x10003000 = 1;
}
