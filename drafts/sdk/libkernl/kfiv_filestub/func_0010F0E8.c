/* Draft (not built): func_0010F0E8 at 0x0010F0E8, size 0x208, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F0E8.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsIobSemaMK();                          /* extern */
s32 func_0010D3A8(s32, s32 *, s32 *); /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
extern s32 D_003EC6BC;
extern s32 D_003EC6C0;
extern s32 D_003EC6C8;
extern s32 D_00473400;
extern s32 D_00474080;
extern s32 D_004740C0;
extern s32 D_00474940;
extern s32 D_00474B40;
extern s32 D_00474B68;
extern s32 D_00474B80;
extern s32 D_00474BC0;
extern s32 D_FFFFF;
extern s32 func_0010EBB0;
extern s32 func_0010F0A0;

s32 func_0010F0E8(void) {
    s32 sp10;
    s32 *var_v0_2;
    s32 *var_v1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_a0;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    sceSifInitRpc(0);
    *(s32 *)((u8 *)(&D_00474BC0) + 0) = 0;
    *(s32 *)((u8 *)(&D_00474BC0) + 4) = 0;
    temp_s0 = DI();
    func_0010D3A8(0x80000011, &func_0010EBB0, &D_00474B80);
    func_0010D3A8(0x80000013, &func_0010F0A0, &D_00474BC0);
    if (temp_s0 == 0) {
        goto block_4;
    }
    EI();
    goto block_5;
block_2:
loop_3:
    if (var_v0_2 != (s32 *)-1) {
        goto loop_3;
    }
block_4:
block_5:
    var_v0 = -0x16;
    if (sceSifBindRpc(&D_00474B40, 0x80000001, 0) < 0) {
        goto block_15;
    }
    var_v0_2 = &D_FFFFF;
    if (*(s32 *)((u8 *)(&D_00474B40) + 0x24) == 0) {
        goto block_2;
    }
    _sceFsIobSemaMK();
    WaitSema(D_003EC6C8);
    var_v1 = &D_00474940;
    temp_a0 = &D_00474940 + 0x200;
    if ((u32) &D_00474940 >= (u32) temp_a0) {
        goto block_11;
    }
loop_9:
    *(s32 *)((u8 *)var_v1 + 4) = 0;
    var_v1 += 0x10;
    if ((u32) var_v1 < (u32) temp_a0) {
        goto loop_9;
    }
    goto block_12;
block_11:
block_12:
    SignalSema(D_003EC6C8);
    *(s32 **)((u8 *)(&D_00473400) + 0) = &D_004740C0;
    *(u8 **)((u8 *)(&D_00473400) + 4) = (u8 *) (&D_004740C0 + 0x440);
    if (func_0010EA50(&D_00474B40, 0xFF, 0, &D_00473400, 0, 0) >= 0) {
        goto block_14;
    }
    return 0xFFFEFFFF;
block_14:
    D_00474B68 = M2C_UNALIGNED32(*(s32 *)((u8 *)((s32) &D_00474080 | 0x20000000) + 0));
    temp_v1 = M2C_UNALIGNED32(*(s32 *)((u8 *)((s32) (&D_00474080 + 4) | 0x20000000) + 0));
    sp10 = temp_v1;
    D_003EC6BC = 1;
    var_v0 = 0;
    D_003EC6C0 = temp_v1 == 2;
block_15:
    return var_v0;
}
