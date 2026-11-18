/* Draft (not built): func_001181F8 at 0x001181F8, size 0x16C, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 184 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libcdvd/func_001181F8.s */

s32 ExitDeleteThread();                         /* extern */
s32 WaitSema(s32);                              /* extern */
s32 scePrintf(s32 *, s32 (*)(s32), s32); /* extern */
extern s32 D_003EDD90;
extern s32 D_003EDD94;
extern s32 D_003EDDA0;
extern s32 D_003EDDB4;
extern s32 D_003EDDE0;
extern s32 D_003EDDE4;
extern s32 D_0045DB78;
extern s32 (*D_00478D00)(s32);
extern s32 D_00478D14;

void func_001181F8(void) {
    s32 temp_v0;

loop_1:
    WaitSema(D_003EDDA0);
    temp_v0 = D_003EDD90;
    if (D_003EDDE0 == -1) {
        D_003EDDB4 = 0;
        D_003EDDE0 = 0;
        D_003EDD94 = 0;
        D_00478D14 = 0;
        ExitDeleteThread();
    }
    if (temp_v0 > 0) {
        scePrintf(&D_0045DB78, D_00478D00, D_003EDDE4);
    }
    if ((D_00478D00 != NULL) && (D_003EDDE4 != 0)) {
        D_00478D00(D_003EDDE4);
    }
    D_003EDDB4 = 0;
    goto loop_1;
}
