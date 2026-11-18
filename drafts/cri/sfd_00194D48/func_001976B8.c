/* Draft (not built): func_001976B8 at 0x001976B8, size 0xBC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001976B8.c:53: warning: passing arg 3 of `func_0018D920' from incompatible pointer type
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001976B8.s */

s32 func_0018D908(s32 *);                   /* extern */
s32 func_0018D920(s32 *, s32, void **, s32); /* extern */
extern s32 D_00426A78;
extern void *D_00426AE4;

s32 func_001976B8(void) {
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 *temp_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    u8 **var_a2;
    u8 *var_v0;

    func_0018D908(&sp10);
    sp4 = 0;
    var_a2 = &D_00426AE4;
    sp8 = 0;
    var_a1 = 7;
    var_v0 = D_00426AE4;
loop_1:
    var_a2 += 4;
    if (var_v0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)var_v0 + 0x48);
        var_s0_2 = 0;
        if (temp_v0 != 0) {
            var_s0_2 = 2;
            if (temp_v0 != 6) {
                var_s0_2 = 1;
                if (temp_v0 < 0) {
                    var_s0_2 = 2;
                }
            }
        }
        temp_a0 = sp + (var_s0_2 * 4);
        *temp_a0 += 1;
    }
    var_a1 -= 1;
    if (var_a1 >= 0) {
        var_v0 = *var_a2;
        goto loop_1;
    }
    var_s0 = 1;
    if (sp4 == 0) {
        var_s0 = (sp8 == 0) int 0 : 2;
    }
    D_00426A78 = var_s0;
    func_0018D920(&sp10, var_a1, var_a2, 6);
    return var_s0;
}
