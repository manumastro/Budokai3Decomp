/* Draft (not built): func_0010D0C0 at 0x0010D0C0, size 0x280, segment sdk/libkernl/kfiv_sifcmd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifcmd/func_0010D0C0.s */

s32 AddDmacHandler();
s32 DI();
s32 EI();
s32 FlushCache();
s32 func_0010AE78();
s32 sceSifGetReg();
s32 sceSifSendCmd();
s32 sceSifSetDChain();
s32 sceSifSetReg();
extern s32 D_003EC628;
extern s32 D_004718C0;
extern s32 D_00471940;
extern s32 D_00471980;
extern s32 D_00471994;
extern s32 D_00471998;
extern s32 D_004719C0;
extern s32 D_00471B40;
extern s32 _change_addr;
extern s32 _set_sreg;
extern s32 func_0010D628;

void func_0010D0C0(void) {
    s32 *var_v1;
    s32 *var_v0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    DI();
    if (D_003EC628 != 0) {
        EI();
        return;
    }
    temp_a1 = (s32) &D_00471940 | 0x20000000;
    temp_a2 = (s32) &D_004718C0 | 0x20000000;
    D_003EC628 = 1;
    *(s32 *)((u8 *)(&D_00471998) + 0) = temp_a2;
    *(s32 **)((u8 *)(&D_00471998) + 0x1C) = &D_00471B40;
    var_v1 = &D_004719C0;
    *(s32 *)((u8 *)(&D_00471998) + 4) = temp_a1;
    *(s32 *)((u8 *)(&D_00471998) + 0x10) = 0x20;
    *(s32 *)((u8 *)(&D_00471998) + 8) = 0;
    *(s32 **)((u8 *)(&D_00471998) + 0xC) = &D_004719C0;
    *(s32 *)((u8 *)(&D_00471998) + 0x14) = 0;
    *(s32 *)((u8 *)(&D_00471998) + 0x18) = 0;
    do {
        *(s32 *)((u8 *)var_v1 + 0) = 0;
        *(s32 *)((u8 *)var_v1 + 4) = 0;
        var_v1 += 0xC;
    } while ((s32) var_v1 < (s32) (&D_004719C0 + 0x180));
    var_s0 = 0x1F;
    var_v0 = &D_00471B40 + 0x7C;
    do {
        *var_v0 = 0;
        var_s0 -= 1;
        var_v0 -= 4;
    } while (var_s0 >= 0);
    *(s32 **)((u8 *)(&D_004719C0) + 0) = &_change_addr;
    *(s32 **)((u8 *)(&D_004719C0) + 0xC) = &_set_sreg;
    *(s32 **)((u8 *)(&D_004719C0) + 0x10) = &D_00471998;
    *(s32 **)((u8 *)(&D_004719C0) + 4) = &D_00471998;
    EI(&D_004719C0, temp_a1, temp_a2, 0x20);
    FlushCache(0);
    if (*(s32 *)0x1000E010 & 0x20) {
        *(u8 *)0x1000E010 = 0x20;
    }
    if (!(*(s32 *)0x1000C000 & 0x100)) {
        sceSifSetDChain();
    }
    D_00471994 = AddDmacHandler(5, &func_0010D628, 0);
    func_0010AE78(5);
    temp_v0 = sceSifGetReg(0x80000000);
    *(s32 *)((u8 *)(&D_00471998) + 8) = temp_v0;
    if (temp_v0 != 0) {
        *(s32 **)((u8 *)(&D_00471980) + 0x10) = &D_004718C0;
        sceSifSendCmd(0x80000000, &D_00471980, 0x14, 0);
        return;
    }
    do {

    } while (!(sceSifGetReg(4) & 0x20000));
    temp_v0_2 = sceSifGetReg(2);
    *(s32 *)((u8 *)(&D_00471998) + 8) = temp_v0_2;
    sceSifSetReg(0x80000000, temp_v0_2);
    sceSifSetReg(0x80000001, (s32) &D_00471998);
    *(s32 **)((u8 *)(&D_00471980) + 0x10) = &D_004718C0;
    *(s32 *)((u8 *)(&D_00471980) + 0xC) = 0;
    sceSifSendCmd(0x80000002, &D_00471980, 0x14, 0);
}
