#include "common.h"

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_003EC6E0;
extern s32 D_00475028;

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00111C50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00111E90);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112138);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112330);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112510);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112598);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112608);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112688);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112700);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112720);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112810);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112880);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001128F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112960);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001129E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112A60);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112B60);
s32 func_00112BF0(void) {
    D_003EC6E0 = -1;
    memset(&D_00475028, 0, 4);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112C28);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112E30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113038);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001130C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113168);
int _sceSifLoadModuleBuffer_x001131F8(void *addr, int arglen, int args, void *ret) __asm__("func_00112C28");
int _sceSifLoadModuleBuffer_x001131F8(void *addr, int arglen, int args, void *ret) __asm__("func_00112C28");
void func_001131F8_x001131F8(void *addr, int arglen, int args) __asm__("func_001131F8");
/* sceSifLoadModuleBuffer: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001131F8_x001131F8(void *addr, int arglen, int args)
{
    int local[4];
    _sceSifLoadModuleBuffer_x001131F8(addr, arglen, args, &local);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113218);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113238);
int _sceSifLoadModule_x00113460(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int _sceSifLoadModule_x00113460(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int func_00113460_x00113460(void *name, int arglen, int args) __asm__("func_00113460");
/* sceSifLoadModule: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113460_x00113460(void *name, int arglen, int args)
{
    int local;
    return _sceSifLoadModule_x00113460(name, arglen, args, (int)&local, 0);
}
int _sceSifLoadModule_x00113480(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int _sceSifLoadModule_x00113480(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int func_00113480_x00113480(void *name, int arglen, int args, int ret) __asm__("func_00113480");
/* sceSifLoadStartModule: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113480_x00113480(void *name, int arglen, int args, int ret)
{
    return _sceSifLoadModule_x00113480(name, arglen, args, ret, 0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001134A0);
int _sceSifLoadElfPart_x001135A8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int _sceSifLoadElfPart_x001135A8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int func_001135A8_x001135A8(void *name, int sec, int out) __asm__("func_001135A8");
/* sceSifLoadElfPart: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001135A8_x001135A8(void *name, int sec, int out)
{
    return _sceSifLoadElfPart_x001135A8(name, sec, out, 1);
}
int _sceSifLoadElfPart_x001135C8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int _sceSifLoadElfPart_x001135C8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
extern char ext_str0_x001135C8[] __asm__("D_0045D918");
int func_001135C8_x001135C8(void *name, int out) __asm__("func_001135C8");
/* sceSifLoadElf: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001135C8_x001135C8(void *name, int out)
{
    return _sceSifLoadElfPart_x001135C8(name, (int)ext_str0_x001135C8, out, 1);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001135F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001136E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001137C0);
unsigned int sceSifGetReg_x00113918(unsigned int reg) __asm__("sceSifGetReg");
int func_00113918_x00113918(void) __asm__("func_00113918");
/* sceSifIsAliveIop: from https://github.com/nathanialf/ico-pc (sce/libkernl/iopreset.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113918_x00113918(void)
{
    int t = sceSifGetReg_x00113918(4) & 0x10000;
    return t != 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113940);
int printf_x00113990(const char *fmt, ...) __asm__("scePrintf");
void sceSifInitRpc_x00113990(int mode) __asm__("sceSifInitRpc");
void sceSifExitRpc_x00113990(void) __asm__("func_0010D9C0");
int sceSifResetIop_x00113990(char *arg, int mode) __asm__("func_001137C0");
int sceSifResetIop_x00113990(char *arg, int mode) __asm__("func_001137C0");
extern char ext_str0_x00113990[] __asm__("D_0045D930");
extern char ext_str1_x00113990[] __asm__("D_0045D920");
int func_00113990_x00113990(const char *arg) __asm__("func_00113990");
/* sceSifRebootIop: from https://github.com/nathanialf/ico-pc (sce/libkernl/iopreset.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113990_x00113990(const char *arg)
{
    char buf[80];
    char *s = ext_str1_x00113990;
    char *d;
    char *p;

    for (p = (char *)arg; *p != 0; p++) {}
     
    if ((unsigned int)(p + 11 - (char *)arg) > 80) {
        printf_x00113990(ext_str0_x00113990, arg);
        return 0;
    }
    sceSifInitRpc_x00113990(0);
    sceSifExitRpc_x00113990();
    d = buf;
    while (*s != 0) {
        *d++ = *s++;
    }
    while (*arg != 0) {
        *d++ = *arg++;
    }
    *d = 0;
    return sceSifResetIop_x00113990(buf, 0);
}
