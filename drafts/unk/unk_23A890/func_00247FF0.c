/* Draft (not built): func_00247FF0 at 0x00247FF0, size 0x360, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 133 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x358, original 0x360
 * Original: asm/nonmatchings/unk/unk_23A890/func_00247FF0.s */

// src/unk/unk_23A890.c func_00247FF0 size diff=133/214
s32 amMotion_BindAnim(s32, s32, s32);
s32 amMotion_CreateFromObj(s32, s32, s32);
extern u8 D_0046ADA0;
extern u8 D_0046ADB0;
extern u8 D_0046ADC0;
extern u8 *D_00470744;
void func_00247FF0(void) {
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;
    u8 *temp_t1;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;

    memset(D_00470740, 0, 4);
    temp_s2 = func_001A50F0(*D_0051CD0C, 0x27F);
    temp_v0 = func_001F5EF0(0, 0);
    temp_v0_2 = func_001F5FD0(0x84000000, (u8 *)(&D_0046ADA0), (s32)(temp_v0), func_00247F70, M2C_ERROR(/* Read from unset register $a4 */));
    temp_s0 = temp_v0_2 + 0x30;
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~0x100);
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x100);
    *D_00470740 = temp_v0_2;
    memset(temp_s0, 0, 4);
    *(s32 *)((u8 *)temp_v0_2 + 0x30) = temp_s2;
    *(s32 *)((u8 *)temp_s0 + 0x1C) = 1;
    *(s32 *)((u8 *)temp_s0 + 0xC) = amObject_Create(*(s32 *)((u8 *)(*(s32 *)temp_v0) + 8), 0);
    *(s32 *)((u8 *)temp_s0 + 8) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_s0 + 0xC), 0, 0);
    amMotion_BindAnim(*(s32 *)((u8 *)temp_s0 + 8), 0, *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)temp_v0) + 0xC)) + 4));
    func_00247C80(temp_v0_2);
    *(s32 (**)(u8 *))((u8 *)temp_s0 + 0x24) = func_00247C80;
    temp_v0_3 = func_001F5FD0(0x84000000, (u8 *)(&D_0046ADB0), (s32)(temp_v0), func_00247F70, M2C_ERROR(/* Read from unset register $a4 */));
    temp_s0_2 = temp_v0_3 + 0x30;
    *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) & ~0x100);
    *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) | 0x100);
    D_00470744 = temp_v0_3;
    memset(temp_s0_2, 0, 4);
    *(s32 *)((u8 *)temp_v0_3 + 0x30) = temp_s2;
    *(s32 *)((u8 *)temp_s0_2 + 0x1C) = 2;
    *(s32 *)((u8 *)temp_s0_2 + 0xC) = amObject_Create(*(s32 *)((u8 *)(*(s32 *)temp_v0) + 8), 0);
    *(s32 *)((u8 *)temp_s0_2 + 8) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_s0_2 + 0xC), 0, 0);
    amMotion_BindAnim(*(s32 *)((u8 *)temp_s0_2 + 8), 0, *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)temp_v0) + 0xC)) + 4));
    func_00247AB0(temp_v0_3);
    *(s32 (**)(u8 *))((u8 *)temp_s0_2 + 0x24) = func_00247AB0;
    temp_v0_4 = func_001F5EF0(0, 1);
    temp_v0_5 = func_001F5FD0(0x84000000, (u8 *)(&D_0046ADC0), (s32)(temp_v0_4), func_00247F70, M2C_ERROR(/* Read from unset register $a4 */));
    temp_s0_3 = temp_v0_5 + 0x30;
    *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x20) & ~0x100);
    *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x20) | 0x100);
    memset(temp_s0_3, 0, 4);
    *(u8 **)((u8 *)temp_s0_3 + 8) = (u8 *) **(u8 ***)((u8 *)temp_v0_4 + 8);
    switch (D_00470734) {                           /* irregular */
    case 0:
        var_v1 = 0x10000;
block_12:
        *(s32 *)((u8 *)temp_s0_3 + 0x14) = var_v1;
        break;
    case 1:
        var_v1 = 0x10000;
        goto block_12;
    case 2:
        var_v1 = 0x10001;
        goto block_12;
    case 3:
        var_v1 = 0x10000;
        goto block_12;
    }
    temp_t1 = *(u8 **)((u8 *)temp_s0_3 + 8);
    temp_t0 = *(s32 *)((u8 *)temp_s0_3 + 0x14);
    temp_a3 = temp_t1 + 0x41C;
    if (*(s32 *)((u8 *)temp_t1 + 0x41C) != temp_t0) {
        var_a2 = 0;
        if (*(s32 *)((u8 *)temp_t1 + 0x418) > 0) {
            var_a1 = 0;
            do {
                var_a2 += 1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x30) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x34) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x38) = -1;
                var_a1 += 0x40;
            } while (var_a2 < *(s32 *)((u8 *)temp_t1 + 0x418));
        }
        *(s32 *)((u8 *)temp_a3 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)temp_t1 + 0x41C) = temp_t0;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 8)) + 0x424) = 0;
    amMotion_Apply(*(u8 **)((u8 *)temp_s0_3 + 8), 0.0f, 1.0f);
    *(s32 **)((u8 *)temp_s0_3 + 0x24) = (int *)(&func_002479B0);
}
