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
extern s32 D_004704E8;
extern s32 D_004704EC;
extern s32 D_004704F0;
extern s32 D_004704F4;
extern s32 D_004704F8;
extern s32 D_004704FC;
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
extern void (*D_0047055C)(s32, s32);
extern void (*D_00470560)(s32, s32);
extern s32 D_00470564;
extern McInfo D_00492C00[];
extern char D_00492D50[];
extern McDirEnt D_00492E00;
extern McInfo D_00492E40[2][4];

extern s32 func_00119CB0(void);
extern s32 func_00126B00(char *, ...);
extern void sceMtapPortOpen(s32);
extern void func_001258F8(void *, s32, s32);
extern s32 func_0011A700(s32, s32 *, s32 *);
extern s32 func_0011A820(s32, s32, s32 *, s32 *, s32 *);
extern s32 func_0011AD30(s32, s32);
extern s32 func_0011AA10(s32, s32, char *, s32, s32, McDirEnt *);
extern void func_00127A88(char *, char *);
extern s32 func_0011A1E8(s32, s32);
extern s32 func_0011AE00(s32, s32);
extern void func_0013AC90(void *);
extern s32 func_0011A0C0(s32, s32, char *, s32);
extern s32 func_0011A470(s32, void *, s32);
extern void *func_0013AAB0(u32, s32, char *, s32);

void func_001A26D0(s32 cmd, s32 result);
void func_001A2990(s32 cmd, s32 result);
void func_001A2A10(s32 cmd, s32 result);
void func_001A2A90(s32 cmd, s32 result);
void func_001A2B10(s32 cmd, s32 result);
void func_001A2B90(s32 cmd, s32 result);
void func_001A2C10(s32 cmd, s32 result);
void func_001A2E40(s32 cmd, s32 result);
void func_001A2F20(s32 cmd, s32 result);
void func_001A30B0(s32 cmd, s32 result);
extern void func_001A31B0(s32 cmd, s32 result);
extern void func_001A3250(s32 cmd, s32 result);

void func_001A1E80(void) {
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
    D_004704E8 = 0;
    D_004704EC = 0;
    D_004704F0 = 0;
    D_004704F4 = 0;
    D_004704F8 = 0;
    D_004704FC = 0;
    D_00470560 = 0;
    D_0047054C = 0;
    D_00470504 = 0;
    D_00470508 = 0;
    D_00470500 = 1;
    func_001258F8(D_00492E40, 0, 0x80);
}

void func_001A1F90(void) {
    s32 cmd;
    s32 result;

    if (D_004704F8 == 1) {
        if (func_0011A700(1, &cmd, &result) == 1) {
            if (D_0047055C) {
                D_0047055C(cmd, result);
            } else {
                D_004704F8 = 2;
                D_004704FC = result;
            }
        }
    }
}

s32 func_001A2010(s32 port, s32 slot, s32 check) {
    McInfo *info;
    s32 r;

    info = &D_00492E40[port][slot];
    r = func_0011A820(port, slot, &info->type, &info->free, &info->format);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 1;
        D_004704F4 = 1;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_00470504 = 0;
        D_00470508 = 0;
        D_00470500 = check;
        D_0047055C = func_001A26D0;
    }
    return r;
}

s32 func_001A20D0(s32 port, s32 slot) {
    s32 r = func_0011AD30(port, slot);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 16;
        D_004704F4 = 16;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2990;
    }
    return r;
}

s32 func_001A2150(s32 port, s32 slot, char *name, McDirEnt *table, s32 max) {
    s32 r = func_0011AA10(port, slot, name, 0, max, table);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 13;
        D_004704F4 = 13;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2A10;
    }
    return r;
}

s32 func_001A21D0(s32 port, s32 slot, char *name, s32 a3, s32 t0) {
    s32 r = func_001A2010(port, slot, 1);
    if (r) return r;
    func_00127A88(D_00492D50, name);
    D_00470540 = a3;
    D_00470544 = t0;
    D_00470560 = func_001A2E40;
    return r;
}

s32 func_001A2270(s32 port, s32 slot) {
    s32 r = func_0011A1E8(port, slot);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 11;
        D_004704F4 = 11;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2A90;
    }
    return r;
}

s32 func_001A22F0(s32 port, s32 slot) {
    s32 r = func_0011AE00(port, slot);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 15;
        D_004704F4 = 15;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2B10;
    }
    return r;
}

s32 func_001A2370(s32 port, s32 slot, char *name, void *buf, McDirEnt *ent, u32 size) {
    s32 r;

    if (ent == 0) {
        r = func_001A2150(port, slot, name, &D_00492E00, 1);
        if (r) return r;
    } else {
        D_00492E00.create = ent->create;
        D_00492E00.modify = ent->modify;
        D_00492E00.size = ent->size;
        D_00492E00.attr = ent->attr;
        D_00492E00.resv1 = ent->resv1;
        D_00492E00.resv2 = ent->resv2;
        D_00492E00.pdaAplNo = ent->pdaAplNo;
        D_00492E00.name = ent->name;
    }
    func_00127A88(D_00492D50, name);
    if (D_0047054C && D_00470548) {
        func_0013AC90(D_0047054C);
    }
    D_0047054C = buf;
    D_00470550 = size;
    if (buf) {
        D_00470548 = 0;
    } else {
        D_00470548 = 1;
    }
    D_00470560 = func_001A2F20;
    if (ent) {
        D_004704E8 = port;
        D_004704EC = slot;
        func_001A2F20(0, 0);
        if (D_004704F8 == 3) {
            r = -1;
        } else {
            r = 0;
        }
    }
    return r;
}

s32 func_001A25A0(s32 port, s32 slot, char *name, void *buf, u32 size) {
    s32 r;

    r = func_0011A0C0(port, slot, name, 0x202);
    if (r == 0) {
        D_004704E8 = port;
        D_004704EC = slot;
        D_004704F0 = 6;
        D_004704F4 = 2;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2B90;
        D_00470560 = func_001A3250;
    } else {
        D_004704F8 = 3;
        D_00470560 = 0;
        return r;
    }
    func_00127A88(D_00492D50, name);
    if (D_0047054C && D_00470548) {
        func_0013AC90(D_0047054C);
    }
    D_0047054C = buf;
    D_00470548 = 0;
    D_00470558 = size;
    return r;
}

void func_001A26D0(s32 cmd, s32 result) {
    McInfo *info;
    McInfo *p;
    s32 i;
    s32 type;
    s32 free;
    s32 format;

    if (D_00492E40[D_004704E8][D_004704EC].type != 2) result = -11;
    if (D_00470500) {
        info = &D_00492E40[D_004704E8][D_004704EC];
        D_00492C00[D_00470508].type = info->type;
        D_00492C00[D_00470508].free = info->free;
        D_00492C00[D_00470508].format = info->format;
        D_00492C00[D_00470508].result = result;
        if (D_00470508 < 20) {
        retry:
            if (func_0011A820(D_004704E8, D_004704EC, &info->type, &info->free, &info->format) == 0) {
                D_00470508++;
                D_004704F0 = 1;
                D_004704F4 = 1;
                D_004704F8 = 1;
                D_004704FC = 0;
                D_0047055C = func_001A26D0;
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
    D_004704F8 = 2;
    D_004704FC = result;
    if (result > -2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2990(s32 cmd, s32 result) {
    if (result == 0) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2A10(s32 cmd, s32 result) {
    if (result >= 0) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2A90(s32 cmd, s32 result) {
    if (result == 0) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2B10(s32 cmd, s32 result) {
    if (result == 0) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2B90(s32 cmd, s32 result) {
    if (result >= 0) {
        D_004704F8 = 2;
        D_00470554 = result;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2C10(s32 cmd, s32 result) {
    if (result >= 0) {
        D_00470558 += result;
        if (D_00470558 < D_00492E00.size) {
            if (func_0011A470(D_00470554, D_0047054C, D_00492E00.size) == 0) {
                D_004704F8 = 1;
                D_004704FC = 0;
                D_0047055C = func_001A2C10;
            } else {
                D_004704F8 = 3;
                D_00470560 = 0;
            }
            return;
        }
        D_004704F8 = 2;
        D_004704FC = D_00470558;
    } else {
        D_004704F8 = 3;
        D_004704FC = result;
    }
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
        return;
    }
    D_00470560 = 0;
    if (D_0047054C && D_00470548) {
        func_0013AC90(D_0047054C);
    }
    D_0047054C = 0;
}

void func_001A2D40(s32 cmd, s32 result) {
    if (result == D_00470558) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2DC0(s32 cmd, s32 result) {
    if (result == 0) {
        D_004704F8 = 2;
    } else {
        D_004704F8 = 3;
    }
    D_004704FC = result;
    if (D_004704F8 == 2 && D_00470560) {
        D_00470560(cmd, result);
    } else {
        D_00470560 = 0;
    }
}

void func_001A2E40(s32 cmd, s32 result) {
    McInfo *info = &D_00492E40[D_004704E8][D_004704EC];

    if (info->type != 2) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (info->format == 0) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (result < -10) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else {
        if (func_001A2150(D_004704E8, D_004704EC, D_00492D50, (McDirEnt *)D_00470540, D_00470544) < 0) {
            D_004704F8 = 3;
        }
        D_00470560 = 0;
    }
}

void func_001A2F20(s32 cmd, s32 result) {
    McInfo *info = &D_00492E40[D_004704E8][D_004704EC];

    if (info->type != 2) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (info->format == 0) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (result < -10) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (D_00492E00.attr & 0x20) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (D_0047054C && (D_00470550 < D_00492E00.size || D_00492E00.size == 0)) {
        D_004704F8 = 3;
        D_00470560 = 0;
    } else if (func_0011A0C0(D_004704E8, D_004704EC, D_00492D50, 1) == 0) {
        D_004704F0 = 5;
        D_004704F4 = 2;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2B90;
        D_00470560 = func_001A30B0;
    } else {
        D_004704F8 = 3;
        D_00470560 = 0;
    }
}

void func_001A30B0(s32 cmd, s32 result) {
    if (D_0047054C == 0) {
        D_0047054C = func_0013AAB0(D_00492E00.size, 0, D_004680D8, 0x7DF);
        if (D_0047054C == 0) {
            D_004704F8 = 3;
            D_00470560 = 0;
            return;
        }
    }
    if (func_0011A470(D_00470554, D_0047054C, D_00492E00.size) == 0) {
        D_00470558 = 0;
        D_004704F0 = 5;
        D_004704F4 = 5;
        D_004704F8 = 1;
        D_004704FC = 0;
        D_0047055C = func_001A2C10;
        D_00470560 = func_001A31B0;
    } else {
        D_004704F8 = 3;
        D_00470560 = 0;
        if (D_0047054C && D_00470548) {
            func_0013AC90(D_0047054C);
        }
        D_0047054C = 0;
    }
}
