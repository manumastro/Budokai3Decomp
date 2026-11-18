/* Draft (not built): _sceFsSemInit at 0x0010EF68, size 0x54, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: pile error: d_0010EF68.c:9: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/_sceFsSemInit.s */

s32 CreateSema(void *, s32, s32, s32 *);        /* extern */
extern s32 D_003EC6C4;
extern s32 D_0045D6E8;

void _sceFsSemInit(void) {
    if (D_003EC6C4 == -1) {
        D_003EC6C4 = CreateSema(sp, 1, 1, &D_0045D6E8);
    }
}
