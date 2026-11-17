#include "common.h"

/* sceMcGetInfo's results for each port and slot. */
typedef struct McInfo {
    s32 type;
    s32 format;
    s32 free;
    s32 result;
} McInfo;

/* sceMcStDateTime / sceMcTblGetDir (Sony's libmc). */
typedef struct McDateTime {
    u8 resv2;
    u8 sec;
    u8 min;
    u8 hour;
    u8 day;
    u8 month;
    u16 year;
} McDateTime;

typedef struct McName {
    u8 name[32];
} McName;

typedef struct McDirEnt {
    McDateTime create;
    McDateTime modify;
    u32 size;
    u16 attr;
    u16 resv1;
    u32 resv2;
    u32 pdaAplNo;
    McName name;
} McDirEnt;

extern char D_004680C0[];
extern char D_004680D8[];
extern s32 D_004704D8;
extern s32 D_004704E0[2];
extern s32 gMcPort;
extern s32 gMcSlot;
extern s32 D_004704F0;
extern s32 D_004704F4;
extern s32 gMcState;
extern s32 gMcResult;
extern s32 D_00470500;
extern s32 D_00470504;
extern s32 D_00470508;
extern s32 D_00470540;
extern s32 D_00470544;
extern s32 D_00470548;
extern void *D_0047054C;
extern u32 D_00470550;
extern s32 D_00470554;
extern u32 D_00470558;
extern void (*gMcDoneFn)(s32, s32);
extern void (*gMcNextFn)(s32, s32);
extern s32 D_00470564;
extern McInfo D_00492C00[];
extern char gMcFileName[];
extern McDirEnt gMcDirEnt;
extern McInfo gMcInfo[2][4];

extern s32 func_00119CB0(void);
extern s32 func_00126B00(char *, ...);
extern void sceMtapPortOpen(s32);
extern void memset(void *, s32, s32);
extern s32 func_0011A700(s32, s32 *, s32 *);
extern s32 func_0011A820(s32, s32, s32 *, s32 *, s32 *);
extern s32 func_0011AD30(s32, s32);
extern s32 func_0011AA10(s32, s32, char *, s32, s32, McDirEnt *);
extern void func_00127A88(char *, char *);
extern s32 func_0011A1E8(s32, s32);
extern s32 func_0011AE00(s32, s32);
extern void amHeap_Free(void *);
extern s32 func_0011A0C0(s32, s32, char *, s32);
extern s32 func_0011A470(s32, void *, s32);
extern void *amHeap_Alloc(u32, s32, char *, s32);

void amMc_OnGetInfo(s32 cmd, s32 result);
void amMc_OnFormat(s32 cmd, s32 result);
void amMc_OnGetDir(s32 cmd, s32 result);
void amMc_OnDelete(s32 cmd, s32 result);
void amMc_OnUnformat(s32 cmd, s32 result);
void amMc_OnOpen(s32 cmd, s32 result);
void amMc_OnRead(s32 cmd, s32 result);
void amMc_CheckFileNext(s32 cmd, s32 result);
void amMc_LoadNext(s32 cmd, s32 result);
void amMc_ReadNext(s32 cmd, s32 result);
extern void func_001A31B0(s32 cmd, s32 result);
extern void func_001A3250(s32 cmd, s32 result);

void amMc_Init(void) {
    s32 i;

    if (func_00119CB0()) {
        func_00126B00(D_004680C0);
        D_004704D8 = 0;
        return;
    }
    D_004704D8 = 2;
    if (D_00470564 & 4) {
        sceMtapPortOpen(2);
    }
    if (D_00470564 & 8) {
        sceMtapPortOpen(3);
    }
    for (i = 0; i < 2; i++) {
        D_004704E0[i] = 4;
    }
    gMcPort = 0;
    gMcSlot = 0;
    D_004704F0 = 0;
    D_004704F4 = 0;
    gMcState = 0;
    gMcResult = 0;
    gMcNextFn = 0;
    D_0047054C = 0;
    D_00470504 = 0;
    D_00470508 = 0;
    D_00470500 = 1;
    memset(gMcInfo, 0, 0x80);
}

void amMc_Sync(void) {
    s32 cmd;
    s32 result;

    if (gMcState == 1) {
        if (func_0011A700(1, &cmd, &result) == 1) {
            if (gMcDoneFn) {
                gMcDoneFn(cmd, result);
            } else {
                gMcState = 2;
                gMcResult = result;
            }
        }
    }
}

s32 amMc_GetInfo(s32 port, s32 slot, s32 check) {
    McInfo *info;
    s32 r;

    info = &gMcInfo[port][slot];
    r = func_0011A820(port, slot, &info->type, &info->free, &info->format);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 1;
        D_004704F4 = 1;
        gMcState = 1;
        gMcResult = 0;
        D_00470504 = 0;
        D_00470508 = 0;
        D_00470500 = check;
        gMcDoneFn = amMc_OnGetInfo;
    }
    return r;
}

s32 amMc_Format(s32 port, s32 slot) {
    s32 r = func_0011AD30(port, slot);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 16;
        D_004704F4 = 16;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnFormat;
    }
    return r;
}

s32 amMc_GetDir(s32 port, s32 slot, char *name, McDirEnt *table, s32 max) {
    s32 r = func_0011AA10(port, slot, name, 0, max, table);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 13;
        D_004704F4 = 13;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnGetDir;
    }
    return r;
}

s32 amMc_CheckFile(s32 port, s32 slot, char *name, s32 a3, s32 t0) {
    s32 r = amMc_GetInfo(port, slot, 1);
    if (r) return r;
    func_00127A88(gMcFileName, name);
    D_00470540 = a3;
    D_00470544 = t0;
    gMcNextFn = amMc_CheckFileNext;
    return r;
}

s32 amMc_Delete(s32 port, s32 slot) {
    s32 r = func_0011A1E8(port, slot);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 11;
        D_004704F4 = 11;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnDelete;
    }
    return r;
}

s32 amMc_Unformat(s32 port, s32 slot) {
    s32 r = func_0011AE00(port, slot);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 15;
        D_004704F4 = 15;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnUnformat;
    }
    return r;
}

s32 amMc_Load(s32 port, s32 slot, char *name, void *buf, McDirEnt *ent, u32 size) {
    s32 r;

    if (ent == 0) {
        r = amMc_GetDir(port, slot, name, &gMcDirEnt, 1);
        if (r) return r;
    } else {
        gMcDirEnt.create = ent->create;
        gMcDirEnt.modify = ent->modify;
        gMcDirEnt.size = ent->size;
        gMcDirEnt.attr = ent->attr;
        gMcDirEnt.resv1 = ent->resv1;
        gMcDirEnt.resv2 = ent->resv2;
        gMcDirEnt.pdaAplNo = ent->pdaAplNo;
        gMcDirEnt.name = ent->name;
    }
    func_00127A88(gMcFileName, name);
    if (D_0047054C && D_00470548) {
        amHeap_Free(D_0047054C);
    }
    D_0047054C = buf;
    D_00470550 = size;
    if (buf) {
        D_00470548 = 0;
    } else {
        D_00470548 = 1;
    }
    gMcNextFn = amMc_LoadNext;
    if (ent) {
        gMcPort = port;
        gMcSlot = slot;
        amMc_LoadNext(0, 0);
        if (gMcState == 3) {
            r = -1;
        } else {
            r = 0;
        }
    }
    return r;
}

s32 amMc_Save(s32 port, s32 slot, char *name, void *buf, u32 size) {
    s32 r;

    r = func_0011A0C0(port, slot, name, 0x202);
    if (r == 0) {
        gMcPort = port;
        gMcSlot = slot;
        D_004704F0 = 6;
        D_004704F4 = 2;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnOpen;
        gMcNextFn = func_001A3250;
    } else {
        gMcState = 3;
        gMcNextFn = 0;
        return r;
    }
    func_00127A88(gMcFileName, name);
    if (D_0047054C && D_00470548) {
        amHeap_Free(D_0047054C);
    }
    D_0047054C = buf;
    D_00470548 = 0;
    D_00470558 = size;
    return r;
}

void amMc_OnGetInfo(s32 cmd, s32 result) {
    McInfo *info;
    McInfo *p;
    s32 i;
    s32 type;
    s32 free;
    s32 format;

    if (gMcInfo[gMcPort][gMcSlot].type != 2) result = -11;
    if (D_00470500) {
        info = &gMcInfo[gMcPort][gMcSlot];
        D_00492C00[D_00470508].type = info->type;
        D_00492C00[D_00470508].free = info->free;
        D_00492C00[D_00470508].format = info->format;
        D_00492C00[D_00470508].result = result;
        if (D_00470508 < 20) {
        retry:
            if (func_0011A820(gMcPort, gMcSlot, &info->type, &info->free, &info->format) == 0) {
                D_00470508++;
                D_004704F0 = 1;
                D_004704F4 = 1;
                gMcState = 1;
                gMcResult = 0;
                gMcDoneFn = amMc_OnGetInfo;
                return;
            }
        }
        type = D_00492C00[0].type;
        free = D_00492C00[0].free;
        format = D_00492C00[0].format;
        result = D_00492C00[0].result;
        for (i = 1; i < 21; i++) {
            p = &D_00492C00[i];
            if (p->result != result || p->type != type || p->format != format || p->free != free) {
                D_00470504++;
                if (D_00470504 < 3) {
                    D_00470508 = 0;
                    goto retry;
                }
                p = &D_00492C00[D_00470508];
                info->type = p->type;
                info->format = p->format;
                info->free = p->free;
                info->result = p->result;
                result = D_00492C00[D_00470508].result;
                break;
            }
        }
    }
    D_00470504 = 0;
    D_00470508 = 0;
    gMcState = 2;
    gMcResult = result;
    if (result > -2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnFormat(s32 cmd, s32 result) {
    if (result == 0) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnGetDir(s32 cmd, s32 result) {
    if (result >= 0) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnDelete(s32 cmd, s32 result) {
    if (result == 0) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnUnformat(s32 cmd, s32 result) {
    if (result == 0) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnOpen(s32 cmd, s32 result) {
    if (result >= 0) {
        gMcState = 2;
        D_00470554 = result;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnRead(s32 cmd, s32 result) {
    if (result >= 0) {
        D_00470558 += result;
        if (D_00470558 < gMcDirEnt.size) {
            if (func_0011A470(D_00470554, D_0047054C, gMcDirEnt.size) == 0) {
                gMcState = 1;
                gMcResult = 0;
                gMcDoneFn = amMc_OnRead;
            } else {
                gMcState = 3;
                gMcNextFn = 0;
            }
            return;
        }
        gMcState = 2;
        gMcResult = D_00470558;
    } else {
        gMcState = 3;
        gMcResult = result;
    }
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
        return;
    }
    gMcNextFn = 0;
    if (D_0047054C && D_00470548) {
        amHeap_Free(D_0047054C);
    }
    D_0047054C = 0;
}

void amMc_OnWrite(s32 cmd, s32 result) {
    if (result == D_00470558) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_OnClose(s32 cmd, s32 result) {
    if (result == 0) {
        gMcState = 2;
    } else {
        gMcState = 3;
    }
    gMcResult = result;
    if (gMcState == 2 && gMcNextFn) {
        gMcNextFn(cmd, result);
    } else {
        gMcNextFn = 0;
    }
}

void amMc_CheckFileNext(s32 cmd, s32 result) {
    McInfo *info = &gMcInfo[gMcPort][gMcSlot];

    if (info->type != 2) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (info->format == 0) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (result < -10) {
        gMcState = 3;
        gMcNextFn = 0;
    } else {
        if (amMc_GetDir(gMcPort, gMcSlot, gMcFileName, (McDirEnt *)D_00470540, D_00470544) < 0) {
            gMcState = 3;
        }
        gMcNextFn = 0;
    }
}

void amMc_LoadNext(s32 cmd, s32 result) {
    McInfo *info = &gMcInfo[gMcPort][gMcSlot];

    if (info->type != 2) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (info->format == 0) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (result < -10) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (gMcDirEnt.attr & 0x20) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (D_0047054C && (D_00470550 < gMcDirEnt.size || gMcDirEnt.size == 0)) {
        gMcState = 3;
        gMcNextFn = 0;
    } else if (func_0011A0C0(gMcPort, gMcSlot, gMcFileName, 1) == 0) {
        D_004704F0 = 5;
        D_004704F4 = 2;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnOpen;
        gMcNextFn = amMc_ReadNext;
    } else {
        gMcState = 3;
        gMcNextFn = 0;
    }
}

void amMc_ReadNext(s32 cmd, s32 result) {
    if (D_0047054C == 0) {
        D_0047054C = amHeap_Alloc(gMcDirEnt.size, 0, D_004680D8, 0x7DF);
        if (D_0047054C == 0) {
            gMcState = 3;
            gMcNextFn = 0;
            return;
        }
    }
    if (func_0011A470(D_00470554, D_0047054C, gMcDirEnt.size) == 0) {
        D_00470558 = 0;
        D_004704F0 = 5;
        D_004704F4 = 5;
        gMcState = 1;
        gMcResult = 0;
        gMcDoneFn = amMc_OnRead;
        gMcNextFn = func_001A31B0;
    } else {
        gMcState = 3;
        gMcNextFn = 0;
        if (D_0047054C && D_00470548) {
            amHeap_Free(D_0047054C);
        }
        D_0047054C = 0;
    }
}
