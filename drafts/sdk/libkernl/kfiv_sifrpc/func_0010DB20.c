/* Draft (not built): func_0010DB20 at 0x0010DB20, size 0xCC, segment sdk/libkernl/kfiv_sifrpc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifrpc/func_0010DB20.s */

s32 _sceRpcFreePacket(s32);                     /* extern */
s32 iSignalSema(s32);                           /* extern */

void func_0010DB20(u8 *arg0) {
    s32 temp_a0;
    s32 temp_gp;
    u32 temp_v1;
    u8 *temp_s1;
    u8 *temp_s1_2;

    temp_v1 = *(u32 *)((u8 *)arg0 + 0x20);
    if (temp_v1 == 0x8000000A) {
        goto block_4;
    }
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (temp_v1 > 0x8000000AU) {
        goto block_7;
    }
    if (temp_v1 == 0x80000009) {
        goto block_6;
    }
    goto block_7;
block_4:
    temp_s1_2 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (*(s32 (**)(s32))((u8 *)temp_s1_2 + 0x1C) == NULL) {
        goto block_7;
    }
    temp_gp = *(s32 *)((u8 *)temp_s1_2 + 0x18);
    (*(s32 (**)(s32))((u8 *)temp_s1_2 + 0x1C))(*(s32 *)((u8 *)temp_s1_2 + 0x20));
    goto block_7;
block_6:
    *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
    *(s32 *)((u8 *)temp_s1 + 0x14) = (s32) *(s32 *)((u8 *)arg0 + 0x28);
block_7:
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C)) + 8);
    if (temp_a0 < 0) {
        goto block_9;
    }
    iSignalSema(temp_a0);
block_9:
    _sceRpcFreePacket(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C)) + 0));
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C)) + 0) = 0;
    return;
}
