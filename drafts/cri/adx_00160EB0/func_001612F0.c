/* Draft (not built): func_001612F0 at 0x001612F0, size 0xEC, segment cri/adx_00160EB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00160EB0/func_001612F0.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_00158880(s32, s32);                /* extern */
s32 func_00158898(s32, s32);                /* extern */
s32 func_00158E90(s32);                         /* extern */
s32 func_0015CCD8(s32, s32);                /* extern */
s32 func_0015CD48(s32);                         /* extern */
s32 func_0015CE38(s32);                         /* extern */
s32 func_0015E408(void *, void **);             /* extern */

void func_001612F0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_4;
    s32 var_s2;
    u8 ***var_s0;
    u8 **temp_a0_2;
    u8 **temp_a0_3;

    func_00152508();
    func_00158880(*(s32 *)((u8 *)arg0 + 0xC), 0);
    func_00158898(*(s32 *)((u8 *)arg0 + 0xC), 0);
    func_00158E90(*(s32 *)((u8 *)arg0 + 4));
    func_00152520();
    temp_a0 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_a0 != 0) {
        func_0015CE38(temp_a0);
        temp_a0_2 = *(u8 ***)((u8 *)arg0 + 0x14);
        (*(s32 (**)(u8 **))((u8 *)(*temp_a0_2) + 0x14))(temp_a0_2);
    }
    var_s2 = 0;
    func_00152508();
    if (*(s8 *)((u8 *)arg0 + 3) > 0) {
        var_s0 = arg0 + 0x18;
        do {
            temp_a0_3 = *var_s0;
            var_s0 += 4;
            var_s2 += 1;
            (*(s32 (**)(u8 **))((u8 *)(*temp_a0_3) + 0x14))(temp_a0_3);
        } while (var_s2 < *(s8 *)((u8 *)arg0 + 3));
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_a0_4 != 0) {
        func_0015CCD8(temp_a0_4, 0);
        func_0015CD48(*(s32 *)((u8 *)arg0 + 8));
    }
    func_0015E408(arg0, *(u8 ***)((u8 *)arg0 + 0x14));
    func_00152520();
}
