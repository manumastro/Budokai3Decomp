/* Draft (not built): func_00164C48 at 0x00164C48, size 0xCC, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/srd/func_00164C48.s */

s32 func_00164BF8();
s32 scePrintf();
extern s32 D_00411598;
extern s32 D_004115D4;
extern s32 D_004115EC;
extern s32 D_00463018;
extern s32 D_00463028;
extern s32 D_00463048;
extern s32 D_00463068;
extern s32 D_00463088;
extern s32 D_004630A8;
extern s32 D_004630C8;

s32 func_00164C48(void) {
    u8 temp_a1;

    scePrintf(&D_00463018);
    scePrintf(&D_00463028, D_004115D4);
    scePrintf(&D_00463048, D_004115EC);
    scePrintf(&D_00463068, (s32) *(s8 *)((u8 *)(&D_00411598) + 2));
    temp_a1 = (u8) *(s8 *)((u8 *)(&D_00411598) + 1);
    if (*(s8 *)((u8 *)(&D_00411598) + 1) == 1) {
        scePrintf(&D_00463088, (s32) temp_a1);
    }
    if ((s8) temp_a1 == 2) {
        scePrintf(&D_004630A8, (s32) temp_a1);
    }
    scePrintf(&D_004630C8, func_00164BF8());
    return 0;
}
