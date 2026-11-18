/* Draft (not built): func_00192860 at 0x00192860, size 0x108, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00192860.c:33: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00192860.s */

s32 func_0017C7C0(s32, void *, s32 *);          /* extern */
s32 func_001999E0(void *, s32);                 /* extern */

void func_00192860(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 sp4;
    s32 temp_v0;
    s32 var_s0;
    u8 *temp_s3;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_s0 = *(s32 *)((u8 *)temp_s3 + 0x74);
    if (*(s32 *)((u8 *)temp_s3 + 0x110) != 0) {
        func_0017C7C0(*(s32 *)((u8 *)temp_s3 + 0), sp, &sp4);
        if (sp0 != 1) {
            if (*(s32 *)((u8 *)arg0 + 0xDD8) == 0) {
                temp_v0 = func_001999E0(arg0, 0x49);
                sp4 = ((temp_v0 ^ 1) == 0) int temp_v0 : sp4;
            }
            var_s0 = ((sp4 ^ 1) == 0) int 2 : var_s0;
        } else {
            var_s0 = 5;
        }
    }
    if (arg2 == 1) {
        if ((u32) (*(s32 *)((u8 *)arg1 + 0x18) - 1) < 2U) {
            var_s0 = 2;
        }
    } else if (var_s0 == 2) {
        var_s0 = 3;
    } else {
        var_s0 = ((var_s0 ^ 3) == 0) int 5 : var_s0;
    }
    *(s32 *)((u8 *)temp_s3 + 0x74) = var_s0;
}
