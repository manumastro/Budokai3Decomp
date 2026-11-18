/* Draft (not built): sceSifInitRpc at 0x0010D820, size 0x19C, segment sdk/libkernl_0010D628 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libkernl_0010D628.s */

s32 DI();
s32 EI();
s32 func_0010D0C0();
s32 func_0010D3A8();
s32 sceSifGetReg();
s32 sceSifGetSreg();
s32 sceSifSendCmd();
s32 sceSifSetReg();
extern s32 D_003EC630;
extern s32 D_00471BC0;
extern s32 D_004723C0;
extern s32 D_00472BC0;
extern s32 D_004733C0;
extern s32 _request_call;
extern s32 func_0010DB20;
extern s32 func_0010DC30;
extern s32 func_0010DEF8;

void sceSifInitRpc(void) {
    s32 temp_a3;
    u8 *temp_a1;

    DI();
    if (D_003EC630 == 0) {
        goto block_3;
    }
    EI();
    return;
block_3:
    D_003EC630 = 1;
    EI();
    func_0010D0C0();
    DI();
    temp_a3 = (s32) &D_00472BC0 | 0x20000000;
    *(s32 *)((u8 *)(&D_004733C0) + 0x20) = 0x20;
    *(s32 *)((u8 *)(&D_004733C0) + 0) = 1;
    *(s32 *)((u8 *)(&D_004733C0) + 0x14) = (s32) ((s32) &D_004723C0 | 0x20000000);
    *(s32 *)((u8 *)(&D_004733C0) + 4) = (s32) ((s32) &D_00471BC0 | 0x20000000);
    *(s32 *)((u8 *)(&D_004733C0) + 0x1C) = temp_a3;
    *(s32 *)((u8 *)(&D_004733C0) + 8) = 0x20;
    *(s32 *)((u8 *)(&D_004733C0) + 0xC) = 0;
    *(s32 *)((u8 *)(&D_004733C0) + 0x10) = 0;
    *(s32 *)((u8 *)(&D_004733C0) + 0x18) = 0x20;
    *(s32 *)((u8 *)(&D_004733C0) + 0x24) = 0;
    func_0010D3A8(0x80000008, &func_0010DB20, &D_004733C0, temp_a3);
    func_0010D3A8(0x80000009, &func_0010DEF8, &D_004733C0);
    func_0010D3A8(0x8000000A, &_request_call, &D_004733C0);
    func_0010D3A8(0x8000000C, &func_0010DC30, &D_004733C0);
    EI();
    if (sceSifGetReg(0x80000002) != 0) {
        goto block_8;
    }
    temp_a1 = &D_00471BC0 + 0x40;
    *(s32 *)((u8 *)temp_a1 + 0xC) = 1;
    sceSifSendCmd(0x80000002, temp_a1, 0x10, 0);
loop_5:
    if (sceSifGetSreg(0) == 0) {
        goto loop_5;
    }
    sceSifSetReg(0x80000002, 1);
    return;
block_8:
    return;
}
