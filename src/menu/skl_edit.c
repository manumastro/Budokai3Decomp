#include "common.h"
#include "menu/menu.h"

typedef struct SklEditPart {
    void *file;         /* 0x00 */
    void *f4;
    char pad8[0x1C8 - 8];
} SklEditPart;

/* Shared by the users that open it (gSklEditUsers counts them). */
typedef struct SklEdit {
    void *file[2];      /* 0x00 */
    void *f8[2];        /* 0x08 */
    char pad10[0x28 - 0x10];
    s32 f28;
    char pad2C[0x38 - 0x2C];
    s32 prio;           /* 0x38 */
    s32 f3C;
    s32 f40;
    char *f44;
    SklEditPart part[2]; /* 0x48 */
} SklEdit;

extern SklEdit *gSklEdit;
extern s32 gSklEditUsers;
extern char D_0046EB60[];
extern char D_0046EB70[];
extern void func_00283C10(void);
extern void func_002D2360(void);
extern void func_002D23D0(void);
extern void Help_Exit(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void memset(void *, s32, s32);
extern void func_002D2440(s32, s32, s32, s32);
extern void Help_Load(void);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void func_002B4A30(Task *);

void SklEdit_Init(void) {
    gSklEdit = NULL;
    gSklEditUsers = 0;
    func_00283C10();
    func_002D2360();
}

void SklEdit_Close(void) {
    s32 j;
    SklEditPart *p;
    s32 i;

    if (--gSklEditUsers <= 0) {
        func_002D23D0();
        Help_Exit();
        amTask_KillGroup(0x200, 0x400, 0);
        for (i = 0; i < 2; i++) {
            if (gSklEdit->file[i] != NULL) {
                amCdFs_Close(gSklEdit->file[i], 0);
            }
            if (gSklEdit->f8[i] != NULL) {
                amCdFs_ReleaseCache(gSklEdit->f8[i]);
            }
        }
        for (j = 0; j < 2; j++) {
            p = &gSklEdit->part[j];
            if (p->file != NULL) {
                amCdFs_Close(p->file, 0);
            }
            if (p->f4 != NULL) {
                amCdFs_ReleaseCache(p->f4);
            }
        }
        amHeap_Free(gSklEdit);
        gSklEdit = NULL;
    }
}

void SklEdit_Open(s32 prio, char *name, s32 a2, s32 a3, s32 a4) {
    if (gSklEditUsers++ <= 0) {
        gSklEdit = amHeap_Alloc(0x3D8, 0, D_0046EB60, 0x11C);
        memset(gSklEdit, 0, 0x3D8);
        gSklEdit->prio = prio;
        gSklEdit->f28 = a2;
        gSklEdit->f3C = a3;
        gSklEdit->f44 = name;
        gSklEdit->f40 = a4;
        func_002D2440(prio + 0x10, 1, 0x11403000, 0);
        Help_Load();
        gSklEdit->file[0] = amCdFs_ReadFileId(0x10844, 0, 0);
        gSklEdit->file[1] = amCdFs_ReadFileId(0x10845, 0, 0);
        amTask_Create(func_002B4A30, 0, prio, 0x200, 0x400, D_0046EB70);
    }
}
