/* Draft (not built): dvCiOpen at 0x001665A8, size 0x184, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dvci/dvCiOpen.s */

s32 func_00118C08(s32);                     /* extern */
s32 func_00164D38(s32);                     /* extern */
s32 func_00166150(s32, s32 *);              /* extern */
s32 func_00166180(s32, s32 *);                  /* extern */
void *func_00166550(s32 *);                     /* extern */
s32 func_00166588(void *);                      /* extern */
s32 func_00166DA0(s32, s32 *);              /* extern */
s32 func_00167688(s32, s32);                        /* extern */
s32 scePrintf(s32 *, s32 *);            /* extern */
extern s32 D_00413610;
extern s32 D_00413758;
extern s32 D_00463530;
extern s32 D_00463558;
extern s32 D_00463580;
extern s32 D_004635B0;
extern s32 D_004635D8;

u8 *dvCiOpen(s32 arg0, s32 arg2) {
    s32 *var_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a0;
    u8 *temp_v0;

    var_a0 = arg0;
    if (var_a0 != 0) {
        goto block_3;
    }
    var_a1 = &D_00463530;
    goto block_8;
block_3:
    if (arg2 == 0) {
        goto block_6;
    }
    var_a0 = 0;
    var_a1 = &D_00463558;
    goto block_8;
block_6:
    temp_v0 = func_00166550(&D_00463558);
    temp_s2 = temp_v0 + 0x20;
    if (temp_v0 != NULL) {
        goto block_9;
    }
    var_a0 = 0;
    var_a1 = &D_00463580;
block_8:
    func_00166150(var_a0, var_a1);
    return NULL;
block_9:
    temp_s3 = func_00167688(var_a0, temp_s2);
    if (*(s32 *)((u8 *)temp_v0 + 0x24) != 0) {
        goto block_17;
    }
    func_00166DA0(var_a0, &D_00413610);
    if (D_00413758 == 2) {
        goto block_12;
    }
    scePrintf(&D_004635B0, &D_00413610);
block_12:
    func_00164D38(0x8300);
    func_00118C08(0);
    func_00164D38(0x8301);
    if (func_00166180(temp_s2, &D_00413610) == 0) {
        goto block_14;
    }
    *(s8 *)((u8 *)temp_v0 + 1) = 0;
    goto block_16;
block_14:
    func_00166150(0, &D_004635D8);
    func_00166588(temp_v0);
    return NULL;
block_16:
    goto block_18;
block_17:
    *(s8 *)((u8 *)temp_v0 + 1) = 1;
block_18:
    *(u32 *)((u8 *)temp_v0 + 8) = (u32) ((u32) (*(s32 *)((u8 *)temp_v0 + 0x24) + 0x7FF) >> 0xB);
    *(s8 *)((u8 *)temp_v0 + 0) = 1;
    *(s32 *)((u8 *)temp_v0 + 4) = *(s32 *)((u8 *)temp_v0 + 0x24);
    *(s32 *)((u8 *)temp_v0 + 0xC) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x18) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x10) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x14) = 0;
    *(s8 *)((u8 *)temp_v0 + 2) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x1C) = 0;
    if (temp_s3 != 1) {
        goto block_20;
    }
    *(u32 *)((u8 *)temp_v0 + 8) = 0x7FFFFFFFU;
block_20:
    return temp_v0;
}
