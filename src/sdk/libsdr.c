#include "common.h"

s32 sceSifDmaStat(s32);                             /* extern */
s32 sceSifSetDma(s32 *, s32);               /* extern */
extern s32 D_00478C40;

struct sd_client_x00117C10 {
    int pad_0[9];
    int bound;                      
};
extern struct sd_client_x00117C10 D_01FE1EC0_x00117C10 __asm__("D_00478CC0");
extern int D_01EFE3D8_x00117C10 __asm__("D_003EDD40");
extern int D_01EFE3DC_x00117C10 __asm__("D_003EDD44");
extern void sceSifInitRpc_x00117C10(int) __asm__("sceSifInitRpc");
extern int sceSifBindRpc_x00117C10(void *, unsigned int, int) __asm__("sceSifBindRpc");
extern int scePrintf_x00117C10(const char *, ...) __asm__("scePrintf");
extern void FlushCache_x00117C10(int) __asm__("FlushCache");
extern char ext_str0_x00117C10[] __asm__("D_0045DB50");
int func_00117C10_x00117C10(void) __asm__("func_00117C10");
/* sceSdRemoteInit: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceSdRemoteInit.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117C10_x00117C10(void)
{
    int spin;

    sceSifInitRpc_x00117C10(0);
    do {
        if (sceSifBindRpc_x00117C10(&D_01FE1EC0_x00117C10, 0x80000701, 0) < 0) {
            scePrintf_x00117C10(ext_str0_x00117C10);
            return -1;
        }
        for (spin = 10000; spin != -1; spin--) {
        }
    } while (D_01FE1EC0_x00117C10.bound == 0);
    D_01EFE3D8_x00117C10 = 0;
    D_01EFE3DC_x00117C10 = 0;
    FlushCache_x00117C10(0);
    return 0;
}
s32 func_00117CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if ((arg3 == 0) || (*(s32 *)((u8 *)(&D_00478C40) + 0) = arg0, *(s32 *)((u8 *)(&D_00478C40) + 4) = arg1, *(s32 *)((u8 *)(&D_00478C40) + 8) = arg2, *(s32 *)((u8 *)(&D_00478C40) + 0xC) = 0, temp_v0 = sceSifSetDma(&D_00478C40, 1), (temp_v0 == 0))) {
        return -1;
    }
    if (arg3 == 1) {
        do {

        } while (sceSifDmaStat(temp_v0) >= 0);
    }
    return 0;
}
extern __inline__ void *GetGp_x00117D48(void) __asm__("GetGp");
static __inline__ void *GetGp_x00117D48(void)
{
        void *gp;
        __asm__ volatile (
                "move           %0, $28\n"
                : "=r"(gp)
                :
                : "memory"
        );
        return(gp);
}
typedef void (*sceSifEndFunc_x00117D48)(void *param);
extern sceSifEndFunc_x00117D48 sceSdEndFunc_x00117D48 __asm__("D_003EDD40");
extern void *sceSdEndGp_x00117D48 __asm__("D_003EDD44");
sceSifEndFunc_x00117D48 func_00117D48_x00117D48(sceSifEndFunc_x00117D48 func) __asm__("func_00117D48");
/* sceSdCallBack: from https://github.com/crashbashash/DW4_Decomp (src/sony/libsdr/sdr_main.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
sceSifEndFunc_x00117D48 func_00117D48_x00117D48(sceSifEndFunc_x00117D48 func)
{
    sceSifEndFunc_x00117D48 prev = sceSdEndFunc_x00117D48;

    sceSdEndFunc_x00117D48 = func;
    sceSdEndGp_x00117D48 = GetGp_x00117D48();
    return prev;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libsdr", func_00117D68);
