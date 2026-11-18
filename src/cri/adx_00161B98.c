#include "common.h"

extern s32 D_0047ECD0;

extern s32 (*D_0041158C)(s32);
extern s32 D_00411590;

INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161B98);
typedef signed short Sint16_x00161C90;
typedef signed int Sint32_x00161C90;
extern int* sceCdCallback_x00161C90(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00161C90 unk0;
               Sint16_x00161C90 unk2;
               Sint16_x00161C90 unk4;
               Sint16_x00161C90 unk6;
} ADXPD_OBJ_SUB_x00161C90;
typedef struct {
               Sint32_x00161C90 used;
               Sint32_x00161C90 unk4;
               Sint32_x00161C90 mode;
               Sint32_x00161C90 stat;
               Sint32_x00161C90 num_blk;
               Sint32_x00161C90 unk14;
               Sint32_x00161C90 unk18;
               Sint32_x00161C90 unk1C;
               Sint32_x00161C90 unk20;
               Sint32_x00161C90 unk24;
               ADXPD_OBJ_SUB_x00161C90 unk28;
               Sint16_x00161C90 unk30;
               Sint16_x00161C90 unk32;
               Sint16_x00161C90 unk34;
               Sint16_x00161C90 unk36;
               Sint16_x00161C90 unk38;
               Sint16_x00161C90 unk3A;
} ADXPD_OBJ_x00161C90;
typedef ADXPD_OBJ_x00161C90* ADXPD_x00161C90;
void ADXPD_ExecHndl_x00161C90(ADXPD_x00161C90) __asm__("func_00161B98");
extern ADXPD_OBJ_x00161C90 adxpd_obj_x00161C90[16] __asm__("lbl_8017E5BC");
void ADXPD_ExecHndl_x00161C90(ADXPD_x00161C90 adxpd) __asm__("func_00161B98");
void func_00161C90_x00161C90() __asm__("func_00161C90");
/* ADXPD_ExecServer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_xpnd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00161C90_x00161C90() {
    ADXPD_x00161C90 adxpd;
    Sint32_x00161C90 i;
    for (i = 0; i < 16; i++) {
        adxpd = &adxpd_obj_x00161C90[i];
        if (adxpd->used == 1) {
            ADXPD_ExecHndl_x00161C90(adxpd);
        }
    }
}
void func_00161CF0(void) {
    if (D_0041158C != NULL) {
        D_0041158C(D_00411590);
    }
}
s32 func_00161CF0_x00161D20(s32 *, s32, s32) __asm__("func_00161CF0");
extern s32 D_00411590_x00161D20 __asm__("D_00411590");
void func_00161D20_x00161D20(s32 arg0) __asm__("func_00161D20");
void func_00161D20_x00161D20(s32 arg0) {
    func_00161CF0_x00161D20(&D_00411590_x00161D20, arg0, 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161D48);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161E10);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161F18);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161FA8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162080);
typedef unsigned int size_t_x00162118;
typedef signed int Sint32_x00162118;
typedef char Char8_x00162118;
extern int* sceCdCallback_x00162118(void (*func)(int)) __asm__("sceCdCallback");
size_t_x00162118 strlen_x00162118(const char* s) __asm__("func_00127BA0");
extern void (*cvfs_errfn_x00162118)(void*, const Char8_x00162118*) __asm__("cvfs_errfn");
void func_00162118_x00162118(Char8_x00162118* str) __asm__("func_00162118");
/* toUpperStr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00162118_x00162118(Char8_x00162118* str) {
    size_t_x00162118 len = strlen_x00162118(str);
    Sint32_x00162118 i;
    for (i = 0; i < len + 1; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162178);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162250);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162318);
s32 *func_00162398(void) {
    return &D_0047ECD0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_001623A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162450);
typedef signed int Sint32_x00162578;
typedef char Char8_x00162578;
extern int* sceCdCallback_x00162578(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162578 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162578* device_name, void*, Sint32_x00162578);
               void (*Close)(void* fd);
               Sint32_x00162578 (*Seek)(void* fd, Sint32_x00162578 offset, Sint32_x00162578 whence);
               Sint32_x00162578 (*Tell)(void* fd);
               Sint32_x00162578 (*ReqRd)(void* fd, Sint32_x00162578 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162578 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x00162578 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162578;
typedef struct {
    CVFSDevice_x00162578* device;
    void* fd;
} CVFSHandle_x00162578;
extern void (*cvfs_errfn_x00162578)(void*, const Char8_x00162578*) __asm__("cvfs_errfn");
extern CVFSHandle_x00162578 D_006BDA68_x00162578[40] __asm__("D_0047E990");
CVFSHandle_x00162578* func_00162578_x00162578() __asm__("func_00162578");
/* allocCvFsHn: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
CVFSHandle_x00162578* func_00162578_x00162578() {
    Sint32_x00162578 i;
    for (i = 0; i < 40; i++) {
        if (D_006BDA68_x00162578[i].fd == 0) {
            break;
        }
    }
    if (i == 40) {
        return 0;
    }
    return &D_006BDA68_x00162578[i];
}
void func_001625E0_x001625E0(u8 *arg0) __asm__("func_001625E0");
void func_001625E0_x001625E0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_001625F0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162738);
typedef signed int Sint32_x001627A0;
typedef char Char8_x001627A0;
extern int* sceCdCallback_x001627A0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x001627A0 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x001627A0* device_name, void*, Sint32_x001627A0);
               void (*Close)(void* fd);
               Sint32_x001627A0 (*Seek)(void* fd, Sint32_x001627A0 offset, Sint32_x001627A0 whence);
               Sint32_x001627A0 (*Tell)(void* fd);
               Sint32_x001627A0 (*ReqRd)(void* fd, Sint32_x001627A0 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x001627A0 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x001627A0 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x001627A0;
typedef struct {
    CVFSDevice_x001627A0* device;
    void* fd;
} CVFSHandle_x001627A0;
extern void (*cvfs_errfn_x001627A0)(void*, const Char8_x001627A0*) __asm__("cvfs_errfn");
void releaseCvFsHn_x001627A0(CVFSHandle_x001627A0* handle) __asm__("func_001625E0");
void cvFsError_x001627A0(const Char8_x001627A0* msg) __asm__("func_00161D20");
void releaseCvFsHn_x001627A0(CVFSHandle_x001627A0* handle) __asm__("func_001625E0");
extern char ext_str0_x001627A0[] __asm__("D_00462398");
extern char ext_str1_x001627A0[] __asm__("D_00462378");
void func_001627A0_x001627A0(CVFSHandle_x001627A0* fs_handle) __asm__("func_001627A0");
/* cvFsClose: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001627A0_x001627A0(CVFSHandle_x001627A0* fs_handle) {
    if (fs_handle == 0) {
        cvFsError_x001627A0(ext_str1_x001627A0);
        return;
    }
    if (fs_handle->device->Close != 0) {
        fs_handle->device->Close(fs_handle->fd);
    } else {
        cvFsError_x001627A0(ext_str0_x001627A0);
        return;
    }
    releaseCvFsHn_x001627A0(fs_handle);
}
typedef signed int Sint32_x00162818;
typedef char Char8_x00162818;
extern int* sceCdCallback_x00162818(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162818 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162818* device_name, void*, Sint32_x00162818);
               void (*Close)(void* fd);
               Sint32_x00162818 (*Seek)(void* fd, Sint32_x00162818 offset, Sint32_x00162818 whence);
               Sint32_x00162818 (*Tell)(void* fd);
               Sint32_x00162818 (*ReqRd)(void* fd, Sint32_x00162818 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162818 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x00162818 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162818;
typedef struct {
    CVFSDevice_x00162818* device;
    void* fd;
} CVFSHandle_x00162818;
extern void (*cvfs_errfn_x00162818)(void*, const Char8_x00162818*) __asm__("cvfs_errfn");
void cvFsError_x00162818(const Char8_x00162818* msg) __asm__("func_00161D20");
extern char ext_str0_x00162818[] __asm__("D_004623D0");
extern char ext_str1_x00162818[] __asm__("D_004623B0");
Sint32_x00162818 func_00162818_x00162818(CVFSHandle_x00162818* fs_handle) __asm__("func_00162818");
/* cvFsTell: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00162818 func_00162818_x00162818(CVFSHandle_x00162818* fs_handle) {
    Sint32_x00162818 offset;
    if (fs_handle == 0) {
        cvFsError_x00162818(ext_str1_x00162818);
        return 0;
    }
    if (fs_handle->device->Tell != 0) {
        offset = fs_handle->device->Tell(fs_handle->fd);
    } else {
        offset = 0;
        cvFsError_x00162818(ext_str0_x00162818);
    }
    return offset;
}
typedef signed int Sint32_x00162880;
typedef char Char8_x00162880;
extern int* sceCdCallback_x00162880(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162880 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162880* device_name, void*, Sint32_x00162880);
               void (*Close)(void* fd);
               Sint32_x00162880 (*Seek)(void* fd, Sint32_x00162880 offset, Sint32_x00162880 whence);
               Sint32_x00162880 (*Tell)(void* fd);
               Sint32_x00162880 (*ReqRd)(void* fd, Sint32_x00162880 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162880 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x00162880 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162880;
typedef struct {
    CVFSDevice_x00162880* device;
    void* fd;
} CVFSHandle_x00162880;
extern void (*cvfs_errfn_x00162880)(void*, const Char8_x00162880*) __asm__("cvfs_errfn");
void cvFsError_x00162880(const Char8_x00162880* msg) __asm__("func_00161D20");
extern char ext_str0_x00162880[] __asm__("D_00462408");
extern char ext_str1_x00162880[] __asm__("D_004623E8");
Sint32_x00162880 func_00162880_x00162880(CVFSHandle_x00162880* fs_handle, Sint32_x00162880 offset, Sint32_x00162880 whence) __asm__("func_00162880");
/* cvFsSeek: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00162880 func_00162880_x00162880(CVFSHandle_x00162880* fs_handle, Sint32_x00162880 offset, Sint32_x00162880 whence) {
    Sint32_x00162880 ret;
    if (fs_handle == 0) {
        cvFsError_x00162880(ext_str1_x00162880);
        return 0;
    }
    if (fs_handle->device->Seek != 0) {
        ret = fs_handle->device->Seek(fs_handle->fd, offset, whence);
    } else {
        ret = 0;
        cvFsError_x00162880(ext_str0_x00162880);
    }
    return ret;
}
typedef signed int Sint32_x001628E8;
typedef char Char8_x001628E8;
extern int* sceCdCallback_x001628E8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x001628E8 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x001628E8* device_name, void*, Sint32_x001628E8);
               void (*Close)(void* fd);
               Sint32_x001628E8 (*Seek)(void* fd, Sint32_x001628E8 offset, Sint32_x001628E8 whence);
               Sint32_x001628E8 (*Tell)(void* fd);
               Sint32_x001628E8 (*ReqRd)(void* fd, Sint32_x001628E8 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x001628E8 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x001628E8 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x001628E8;
typedef struct {
    CVFSDevice_x001628E8* device;
    void* fd;
} CVFSHandle_x001628E8;
extern void (*cvfs_errfn_x001628E8)(void*, const Char8_x001628E8*) __asm__("cvfs_errfn");
void cvFsError_x001628E8(const Char8_x001628E8* msg) __asm__("func_00161D20");
extern char ext_str0_x001628E8[] __asm__("D_00462440");
extern char ext_str1_x001628E8[] __asm__("D_00462420");
Sint32_x001628E8 func_001628E8_x001628E8(CVFSHandle_x001628E8* fs_handle, Sint32_x001628E8 len, void* buf) __asm__("func_001628E8");
/* cvFsReqRd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001628E8 func_001628E8_x001628E8(CVFSHandle_x001628E8* fs_handle, Sint32_x001628E8 len, void* buf) {
    Sint32_x001628E8 ret;
    if (fs_handle == 0) {
        cvFsError_x001628E8(ext_str1_x001628E8);
        return 0;
    }
    if (fs_handle->device->ReqRd != 0) {
        ret = fs_handle->device->ReqRd(fs_handle->fd, len, buf);
    } else {
        ret = 0;
        cvFsError_x001628E8(ext_str0_x001628E8);
    }
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162950);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_001629B8);
