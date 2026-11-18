/* Draft (not built): func_001658C0 at 0x001658C0, size 0x80, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/dtr/func_001658C0.s */

s32 GetThreadId();                                  /* extern */
s32 sceSifRegisterRpc(s32 *, s32, s32 *, s32 *); /* extern */
s32 sceSifRpcLoop(s32 *);                   /* extern */
s32 sceSifSetRpcQueue(s32 *, s32);          /* extern */
extern s32 D_00411E24;
extern s32 D_00411E28;
extern s32 D_004126E8;
extern s32 D_00412730;
extern s32 D_00412750;
extern s32 func_00165810;

s32 func_001658C0(void) {
    sceSifSetRpcQueue(&D_00412730, GetThreadId());
    sceSifRegisterRpc(&D_004126E8, D_00411E24, &func_00165810, &D_00412750);
    D_00411E28 = 1;
    sceSifRpcLoop(&D_00412730);
    return 0;
}
