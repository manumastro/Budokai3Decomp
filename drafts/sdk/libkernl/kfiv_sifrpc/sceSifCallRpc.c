/* Draft (not built): sceSifCallRpc at 0x0010E1A8, size 0x200, segment sdk/libkernl/kfiv_sifrpc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_0010E1A8.c:67: `sp' undeclared (first use in this function)
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifrpc/sceSifCallRpc.s */

s32 CreateSema(void *, s32, s32, s32 *);        /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceRpcFreePacket(void *);                  /* extern */
void *_sceRpcGetPacket(s32 *);                  /* extern */
s32 sceSifSendCmd(s32, void *, s32, s32);   /* extern */
s32 sceSifWriteBackDCache(s32, s32);            /* extern */
extern s32 D_0045D648;
extern s32 D_004733C0;

s32 sceSifCallRpc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg_sp0) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 var_v0;
    u8 *temp_v0;

    temp_s4 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s3 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s7 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_v0 = _sceRpcGetPacket(&D_004733C0);
    var_v0 = -1;
    if (temp_v0 != NULL) {
        *(s32 *)((u8 *)arg0 + 0x20) = arg_sp0;
        *(s32 *)((u8 *)arg0 + 4) = (s32) *(s32 *)((u8 *)temp_v0 + 0x18);
        *(u8 **)((u8 *)arg0 + 0) = temp_v0;
        *(s32 *)((u8 *)arg0 + 0x1C) = temp_s7;
        *(s32 *)((u8 *)arg0 + 0x18) = (s32) saved_reg_gp;
        *(s32 *)((u8 *)temp_v0 + 0x20) = arg1;
        *(s32 *)((u8 *)temp_v0 + 0x24) = temp_s2;
        *(s32 *)((u8 *)temp_v0 + 0x28) = temp_s4;
        *(s32 *)((u8 *)temp_v0 + 0x2C) = temp_s3;
        *(u8 **)((u8 *)temp_v0 + 0x14) = temp_v0;
        *(u8 **)((u8 *)temp_v0 + 0x1C) = arg0;
        *(s32 *)((u8 *)temp_v0 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
        if (!(arg2 & 2)) {
            if (arg3 == temp_s4) {
                sceSifWriteBackDCache(arg3, (temp_s2 >= temp_s3) int temp_s2 : temp_s3);
            } else {
                if (temp_s2 > 0) {
                    sceSifWriteBackDCache(arg3, temp_s2);
                }
                if (temp_s3 > 0) {
                    sceSifWriteBackDCache(temp_s4, temp_s3);
                }
            }
        }
        if (arg2 & 1) {
            if (temp_s7 == 0) {
                *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
            } else {
                *(s32 *)((u8 *)temp_v0 + 0x30) = 1;
            }
            *(s32 *)((u8 *)arg0 + 8) = -1;
            var_v0 = 0;
            if (sceSifSendCmd(0x8000000A, temp_v0, 0x40, arg3) == 0) {
                goto block_18;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
        temp_v0_2 = CreateSema(sp, 1, 0, &D_0045D648);
        *(s32 *)((u8 *)arg0 + 8) = temp_v0_2;
        if (temp_v0_2 < 0) {
            _sceRpcFreePacket(temp_v0);
            return -3;
        }
        *(s32 *)((u8 *)temp_v0 + 0x30) = 1;
        if (sceSifSendCmd(0x8000000A, temp_v0, 0x40, arg3) == 0) {
            DeleteSema(*(s32 *)((u8 *)arg0 + 8));
block_18:
            _sceRpcFreePacket(temp_v0);
            return -2;
        }
        WaitSema(*(s32 *)((u8 *)arg0 + 8));
        DeleteSema(*(s32 *)((u8 *)arg0 + 8));
        var_v0 = 0;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
