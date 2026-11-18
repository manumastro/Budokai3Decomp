/* Draft (not built): func_00117AD8 at 0x00117AD8, size 0x124, segment sdk/libpad_00117A70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00117AD8.c:33: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libpad_00117A70/func_00117AD8.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EDD08;
extern s32 D_00478940;
extern s32 D_00478B80;
extern s32 D_00478C00;

s32 func_00117AD8(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = D_003EDD08;
    if (arg0 == 0) {
        *(s32 *)((u8 *)(&D_00478B80) + 0) = 0x18;
        D_003EDD08 = 0;
        *(s32 *)((u8 *)(&D_00478B80) + 4) = 0;
        do {

        } while (sceSifCallRpc(&D_00478940, 1, 0, &D_00478B80, 0) < 0);
    } else {
        if (temp_s1 == 0) {
            *(s32 *)((u8 *)(&D_00478B80) + 0) = 0x18;
            *(s32 *)((u8 *)(&D_00478B80) + 4) = 1;
loop_6:
            if (sceSifCallRpc(&D_00478940, 1, 0, &D_00478B80) < 0) {
                goto loop_6;
            }
        }
        temp_v0 = DI();
        D_00478C00 = saved_reg_gp;
        D_003EDD08 = arg0;
        if (temp_v0 == 1) {
            EI();
        }
    }
    return temp_s1;
}
