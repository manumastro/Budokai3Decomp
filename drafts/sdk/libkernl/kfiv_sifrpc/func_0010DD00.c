/* Draft (not built): func_0010DD00 at 0x0010DD00, size 0x164, segment sdk/libkernl/kfiv_sifrpc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010DD00.c:28: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifrpc/func_0010DD00.s */

s32 CreateSema(void *, s32, s32, s32 *);        /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceRpcFreePacket(void *);                  /* extern */
void *_sceRpcGetPacket(s32 *);                  /* extern */
s32 sceSifSendCmd(s32, void *, s32, s32); /* extern */
extern s32 D_0045D628;
extern s32 D_004733C0;

s32 func_0010DD00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    s32 var_v0;
    u8 *temp_v0;

    temp_v0 = _sceRpcGetPacket(&D_004733C0);
    var_v0 = -1;
    if (temp_v0 != NULL) {
        *(u8 **)((u8 *)arg0 + 0) = temp_v0;
        *(s32 *)((u8 *)arg0 + 4) = (s32) *(s32 *)((u8 *)temp_v0 + 0x18);
        *(s32 *)((u8 *)temp_v0 + 0x20) = arg1;
        *(s32 *)((u8 *)temp_v0 + 0x24) = arg2;
        *(s32 *)((u8 *)temp_v0 + 0x28) = arg3;
        *(u8 **)((u8 *)temp_v0 + 0x14) = temp_v0;
        *(u8 **)((u8 *)temp_v0 + 0x1C) = arg0;
        if (!(M2C_ERROR(/* Read from unset register $t0 */) & 1)) {
            temp_v0_2 = CreateSema(sp, 1, 0, &D_0045D628);
            *(s32 *)((u8 *)arg0 + 8) = temp_v0_2;
            if (temp_v0_2 < 0) {
                _sceRpcFreePacket(temp_v0);
                return -3;
            }
            if (sceSifSendCmd(0x8000000C, temp_v0, 0x40, 0) == 0) {
                _sceRpcFreePacket(temp_v0);
                DeleteSema(*(s32 *)((u8 *)arg0 + 8));
                goto block_9;
            }
            WaitSema(*(s32 *)((u8 *)arg0 + 8));
            DeleteSema(*(s32 *)((u8 *)arg0 + 8));
            return 0;
        }
        *(s32 *)((u8 *)arg0 + 8) = -1;
        var_v0 = 0;
        if (sceSifSendCmd(0x8000000C, temp_v0, 0x40, 0) == 0) {
            _sceRpcFreePacket(temp_v0);
block_9:
            var_v0 = -2;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
