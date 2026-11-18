/* Draft (not built): func_00164258 at 0x00164258, size 0x10C, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/srd/func_00164258.s */

s32 func_00164130();                            /* extern */
s32 func_00164160(void *);                      /* extern */
s32 func_00164188(void *);                      /* extern */
s32 func_0016FF40();                            /* extern */
s32 func_0016FF58(s32 *);                       /* extern */
extern s32 D_00411598;
extern s32 D_004115D4;
extern s32 D_004115F4;

void func_00164258(u8 *arg0) {
    s16 var_s0;
    s8 temp_s2;
    u8 temp_v0;

    var_s0 = 0;
    goto loop_2;
block_1:
    var_s0 += 1;
loop_2:
    if (var_s0 >= 0x3E8) {
        goto block_6;
    }
    func_0016FF40();
    if (D_004115D4 != 1) {
        goto block_5;
    }
    func_0016FF58(&D_004115D4);
    func_00164130();
    goto block_1;
block_5:
    D_004115D4 = 1;
    func_0016FF58(&D_004115D4);
block_6:
    temp_s2 = *(s8 *)((u8 *)arg0 + 2);
    if (temp_s2 != 2) {
        goto block_13;
    }
    temp_v0 = (u8) *(s8 *)((u8 *)(&D_00411598) + 1);
    if (*(s8 *)((u8 *)(&D_00411598) + 1) != 1) {
        goto block_9;
    }
    func_00164160(arg0);
block_9:
    if ((s8) temp_v0 != temp_s2) {
        goto block_11;
    }
    func_00164188(arg0);
block_11:
    if (*(s8 *)((u8 *)arg0 + 2) == 9) {
        goto block_13;
    }
    *(s8 *)((u8 *)arg0 + 2) = 3;
    D_004115F4 += 1;
block_13:
    D_004115D4 = 0;
    return;
}
