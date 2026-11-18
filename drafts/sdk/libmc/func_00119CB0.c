/* Draft (not built): func_00119CB0 at 0x00119CB0, size 0x228, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_00119CB0.s */

s32 CreateSema(s32 *);                          /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 func_0011A700(s32, s32, s32);   /* extern */
s32 scePrintf(s32 *);                       /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
extern s32 D_003EF94C;
extern s32 D_003EF950;
extern s32 D_0045DE08;
extern s32 D_0045DE18;
extern s32 D_0045DE30;
extern s32 D_0045DE48;
extern s32 D_0045DE70;
extern s32 D_00478FC0;
extern s32 D_00479040;
extern s32 D_0047A580;
extern s32 D_FFFFF;

s32 func_00119CB0(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 *var_v1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    var_s1 = 0;
    if (D_003EF94C >= 0) {
        goto block_5;
    }
    sp18 = 1;
    sp24 = &D_0045DE08;
    sp14 = 1;
    temp_v0 = CreateSema(&sp10);
    D_003EF94C = temp_v0;
    if (temp_v0 != -1) {
        goto block_3;
    }
    return -0x65;
block_3:
    sp14 = 1;
    sp18 = 0;
    sp24 = &D_0045DE18;
    temp_v0_2 = CreateSema(&sp10);
    D_003EF950 = temp_v0_2;
    if (temp_v0_2 != -1) {
        goto block_5;
    }
    DeleteSema(D_003EF94C);
    D_003EF94C = temp_v0_2;
    return -0x65;
block_5:
    func_0011A700(0, 0, 0);
    WaitSema(D_003EF94C);
    sceSifInitRpc(0);
    goto loop_10;
block_7:
    var_v1 = &D_FFFFF;
loop_8:
    if (var_v1 != NULL) {
        goto loop_8;
    }
    var_s1 += 1;
    if (var_s1 >= 0x200) {
        goto block_22;
    }
loop_10:
    if (sceSifBindRpc(&D_00478FC0, 0x80000400, 0) >= 0) {
        goto block_13;
    }
    scePrintf(&D_0045DE30);
loop_12:
    goto loop_12;
block_13:
    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        goto block_7;
    }
    temp_s0 = sceSifCallRpc(&D_00478FC0, 0xFE, 0, &D_00479040, 0);
    SignalSema(D_003EF94C);
    if (temp_s0 < 0) {
        goto block_16;
    }
    goto block_18;
block_16:
    *(s32 *)((u8 *)(&D_00478FC0) + 0x24) = 0;
    return -0x5B;
block_18:
    if (*(s32 *)((u8 *)(&D_0047A580) + 4) >= 0x20A) {
        goto block_20;
    }
    scePrintf(&D_0045DE48);
    *(s32 *)((u8 *)(&D_00478FC0) + 0x24) = 0;
    return -0x78;
block_20:
    if (*(s32 *)((u8 *)(&D_0047A580) + 8) >= 0x20E) {
        goto block_23;
    }
    scePrintf(&D_0045DE70);
    *(s32 *)((u8 *)(&D_00478FC0) + 0x24) = 0;
    return -0x79;
block_22:
    scePrintf(&D_0045DE30);
    return -0x5B;
block_23:
    return *(s32 *)((u8 *)(&D_0047A580) + 0);
}
