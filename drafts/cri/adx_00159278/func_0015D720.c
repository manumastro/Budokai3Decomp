/* Draft (not built): func_0015D720 at 0x0015D720, size 0x130, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: rror: d_0015D720.c:19: too few arguments to function `memcmp'
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015D720.s */

s32 func_00161F18(s32 *, s32 *, s32); /* extern */
s32 func_00162250(s32 *);                   /* extern */
s32 func_001635A0(s32 *, s32);          /* extern */
s32 func_00167AB8(s32, s32, s32, s32);          /* extern */
s32 func_00167AD8(s32);                         /* extern */
s32 memcmp(s32 *, s32 *, s32, u8);  /* extern */
extern s32 D_00411128;
extern u8 D_00411137;
extern s32 D_00411138;
extern s32 D_004617E0;
extern s32 D_004617E8;
extern s32 func_0015D708;
extern s32 func_00166120;
extern s32 func_0016A798;

void func_0015D720(u8 *arg0) {
    memcmp(&D_00411128, &D_00411128, 0x60);
    memcmp(&D_00411138, &D_00411138, 0xE8, D_00411137);
    func_001635A0(&func_0015D708, 0);
    func_00161F18(&D_004617E0, &func_0016A798, 0);
    func_001635A0(&func_0015D708, 0);
    func_00161F18(&D_004617E8, &func_00166120, 0);
    func_00162250(&D_004617E8);
    if (arg0 != NULL) {
        func_00167AB8(*(s32 *)((u8 *)arg0 + 8), *(s32 *)((u8 *)arg0 + 0xC), *(s32 *)((u8 *)arg0 + 0x10), *(s32 *)((u8 *)arg0 + 4));
        func_00167AD8(*(s32 *)((u8 *)arg0 + 0));
        return;
    }
    func_00167AB8(0, 0, 0, 0);
    func_00167AD8(0);
}
