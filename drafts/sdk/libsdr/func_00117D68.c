/* Draft (not built): func_00117D68 at 0x00117D68, size 0x388, segment sdk/libsdr (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00117D68.c:110: warning: cast from pointer to integer of different size
 * Original: asm/nonmatchings/sdk/libsdr/func_00117D68.s */

s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32 *); /* extern */
extern s32 D_003EDD40;
extern s32 *D_003EDD58;
extern s32 *D_003EDD5C;
extern s32 D_003EDD60;
extern s32 **D_003EDD64;
extern s32 **D_003EDD68;
extern s32 *D_003EDD6C;
extern s32 D_003EDD70;
extern s32 D_003EDD74;
extern s32 D_003EDD78;
extern s32 D_00478C80;
extern s32 D_00478CC0;

s32 *func_00117D68(s32 arg0, s64 arg1, s64 arg2, s64 arg3) {
    s32 *sp10;
    s64 spC8;
    s64 spD0;
    s64 spD8;
    s64 spE0;
    s64 spE8;
    s64 spF0;
    s64 spF8;
    s32 *var_s4;
    s32 *var_v0;
    s32 var_t3;
    s32 *var_a2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s2;
    s64 *var_v1;

    var_v1 = &spD0;
    spC8 = arg1;
    spD0 = arg2;
    var_s2 = 0;
    var_a2 = &D_00478C80 + 4;
    spD8 = arg3;
    var_a1 = 5;
    spE0 = M2C_ERROR(/* Read from unset register $t0 */);
    spE8 = M2C_ERROR(/* Read from unset register $t1 */);
    spF0 = M2C_ERROR(/* Read from unset register $t2 */);
    spF8 = M2C_ERROR(/* Read from unset register $t3 */);
    *(s32 **)((u8 *)(&D_00478C80) + 0) = &D_00478C80;
    temp_s1 = *(s32 *)((u8 *)var_v1 + -8);
    do {
        var_v1 += 8;
        var_a1 -= 1;
        *var_a2 = *(s32 *)((u8 *)var_v1 + -8);
        var_a2 += 4;
    } while (var_a1 >= 0);
    var_t3 = 0;
    if (arg0 == 0) {
        var_t3 = 1;
        var_s2 = D_003EDD40;
    }
    var_s4 = NULL;
    if (temp_s1 == 0x8160) {
        if (*(s32 *)((u8 *)(&D_00478C80) + 4) == 0) {
            var_s4 = D_003EDD58;
            D_003EDD58 = *(s32 **)((u8 *)(&D_00478C80) + 8);
            D_003EDD64 = *(s32 ***)((u8 *)(&D_00478C80) + 0xC);
            D_003EDD70 = saved_reg_gp;
        } else {
            var_s4 = D_003EDD5C;
            D_003EDD5C = *(s32 **)((u8 *)(&D_00478C80) + 8);
            D_003EDD68 = *(s32 ***)((u8 *)(&D_00478C80) + 0xC);
            D_003EDD74 = saved_reg_gp;
        }
    } else if (temp_s1 == 0x8170) {
        var_s4 = (s32 *) D_003EDD60;
        D_003EDD60 = *(s32 *)((u8 *)(&D_00478C80) + 4);
        D_003EDD6C = *(s32 **)((u8 *)(&D_00478C80) + 8);
        D_003EDD78 = saved_reg_gp;
    }
    sp10 = NULL;
    switch (temp_s1) {                              /* irregular */
    case 0x8130:
    case 0x81A0:
    case 0x81B0:
        if (var_s2 != 0) {

        }
        var_a3 = (s32) *(s32 **)((u8 *)(&D_00478C80) + 8);
        var_a1_2 = temp_s1 | *(s32 *)((u8 *)(&D_00478C80) + 4);
block_42:
        sceSifCallRpc(&D_00478CC0, var_a1_2, var_t3, (s32 *) var_a3);
        var_v0 = *(s32 **)((u8 *)(&D_00478C80) + 0);
        if (var_s2 != 0) {
            var_v0 = *(s32 **)((u8 *)(&D_00478C80) + 0);
        }
block_44:
        sp10 = var_v0;
        break;
    case 0x8140:
        if (var_s2 != 0) {

        }
        sceSifCallRpc(&D_00478CC0, *(s32 *)((u8 *)(&D_00478C80) + 4) | 0x8140, var_t3, &D_00478C80, *(s32 **)((u8 *)(&D_00478C80) + 8));
        if (var_s2 != 0) {

        }
        break;
    case 0x81C0:
    case 0x81D0:
        *(u16 *)((u8 *)(*(s32 *)((u8 *)(&D_00478C80) + 4)) + 2) = (u16) *(s32 **)((u8 *)(&D_00478C80) + 8);
        if (temp_s1 == 0x81D0) {
            *(s32 *)((u8 *)(*(s32 *)((u8 *)(&D_00478C80) + 4)) + 4) = (s32) *(s32 *)((u8 *)(&D_00478C80) + 0x14);
        }
        if (*(s32 ***)((u8 *)(&D_00478C80) + 0xC) == NULL) {

        }
        if (var_s2 != 0) {

        }
        sceSifCallRpc(&D_00478CC0, temp_s1, var_t3, (s32 *) *(s32 *)((u8 *)(&D_00478C80) + 4), &D_00478C80);
        if (var_s2 != 0) {

        }
        if (*(s32 ***)((u8 *)(&D_00478C80) + 0xC) != NULL) {
            var_v0 = **(s32 ***)((u8 *)(&D_00478C80) + 0xC);
            goto block_44;
        }
        break;
    default:
        if ((u32) (temp_s1 + 0xFFFF7000) < 0xF1U) {
            if (var_s2 != 0) {

            }
            var_a3 = *(s32 *)((u8 *)(&D_00478C80) + 4);
            var_a1_2 = temp_s1;
        } else {
            if (var_s2 != 0) {

            }
            var_a3 = (s32) &D_00478C80;
            var_a1_2 = temp_s1;
        }
        goto block_42;
    }
    if ((temp_s1 == 0x8160) || (temp_s1 == 0x8170)) {
        sp10 = var_s4;
    }
    return sp10;
}
