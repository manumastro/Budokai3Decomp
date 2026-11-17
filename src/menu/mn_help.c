#include "common.h"
#include "menu/menu.h"

/* A data file read with amCdFs_ReadFileId; 0x54 is the pointer to its contents once loaded. */
typedef struct HelpFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once loaded */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} HelpFile;

/* The help screen's global block (0x60 bytes, gHelp), reference counted by Load / Exit. */
/* file0's contents (layout not known; 0x14 points to a table of ids for func_0022D860). */
typedef struct HelpData {
    char pad0[0x14];
    s32 *f14;           /* 0x14 */
} HelpData;

typedef struct Help {
    Task *ctrl;         /* 0x00: "# HELP CTRL #" */
    Task *draw;         /* 0x04: "# HELP DRAW #" */
    s32 refs;           /* 0x08 */
    HelpFile *file0;    /* 0x0C: file 0x10828 */
    HelpFile *file1;    /* 0x10: file 0x10829 */
    HelpData *f14;      /* 0x14: file0's contents */
    void *f18;          /* 0x18: file1's contents */
    s32 pad1C;
    s64 f20;            /* 0x20 */
    s32 f28;            /* 0x28 */
    u16 f2C;            /* 0x2C */
    u16 f2E;            /* 0x2E */
    char pad30[0x58 - 0x30];
    s8 f58;             /* 0x58 */
    char pad59[0x60 - 0x59];
} Help;

/* The draw task's work area (0x18 bytes). */
typedef struct HelpWork {
    f32 scroll;         /* 0x00 */
    f32 scrollMax;      /* 0x04 */
    f32 alpha;          /* 0x08 */
    s32 fC;             /* 0x0C */
    s32 f10;            /* 0x10 */
    s32 f14;            /* 0x14 */
} HelpWork;

extern Help *gHelp;
extern char D_0046EBF8[];
extern char D_0046EC08[];
extern char D_0046EC18[];
extern f32 D_004E0614[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;

extern void Help_CopyEntries(void);
extern void func_002B5500(void);
extern void func_002B5620(HelpWork *);
extern void func_002B58A0(HelpWork *);
extern s32 func_0022BF80(s32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0022E0B0(void *);
extern void amFile_Load(void *);
extern void amModel_SetCurrent(s32, s32);
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void amCdFs_Close(void *, s32);

void Help_TaskClose(Task *t) {
    Help *g;
    HelpWork *w;
    f32 a;

    w = t->data.work;
    g = gHelp;

    func_002B58A0(w);
    Help_CopyEntries();
    w->alpha = a = w->alpha - 0.2f;
    if (a < 0.0f) {
        w->alpha = 0.0f;
    }
    if (func_0022BF80(w->fC) == 0xFF) {
        if (w->fC != 0) {
            func_0022D0E0(w->fC, 1);
        }
        if (w->f10 != 0) {
            func_0022D0E0(w->f10, 1);
        }
        if (w->f14 != 0) {
            func_0022D0E0(w->f14, 1);
        }
        amHeap_Free(w);
        amTask_Kill(g->ctrl);
        amTask_Kill(g->draw);
        g->ctrl = NULL;
        g->draw = NULL;
    }
}

void Help_TaskOpened(Task *t);
void Help_TaskFadeIn(Task *t);

void Help_TaskMain(Task *t) {
    Help *g;
    HelpWork *w;
    s32 v;
    s32 c;
    u16 b;
    f32 a;

    g = gHelp;
    w = t->data.work;
    D_00470704 = v = (s32)g->f18;
    D_0047070C = c = 0xFF00;
    D_00470708 = 0;
    amModel_SetCurrent(v, c);
    D_00470238 = 0;
    if (g->f2C & 1) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x16, 0);
        }
        if (w->fC != 0) {
            func_0022D0E0(w->fC, 1);
        }
        w->fC = func_0022D860(g->f14->f14[1], 0.0f);
        TASK_SET_FUNC(t, Help_TaskClose);
    } else {
        b = g->f2E;
        if (b & 0x50) {
            if (b & 0x10) {
                w->scroll = a = w->scroll - 4.0f;
                if (a < 0.0f) {
                    w->scroll = 0.0f;
                }
            } else {
                w->scroll = w->scroll + 4.0f;
                if (!(w->scroll <= w->scrollMax)) {
                    w->scroll = w->scrollMax;
                }
            }
        }
    }
    func_002B58A0(w);
    func_002B5620(w);
    Help_CopyEntries();
}

void Help_TaskOpened(Task *t) {
    Help *g;
    HelpWork *w;

    w = t->data.work;
    g = gHelp;
    func_002B58A0(w);
    func_002B5620(w);
    Help_CopyEntries();
    g->f28 = 1;
    TASK_SET_FUNC(t, Help_TaskMain);
}

void Help_TaskFadeIn(Task *t) {
    HelpWork *w;
    f32 a;

    w = t->data.work;
    w->alpha += 0.1f;
    if (!(w->alpha <= 0.8f)) {
        w->alpha = 0.8f;
    }
    func_002B58A0(w);
    Help_CopyEntries();
    if (func_0022BF80(w->fC) == 0xFF) {
        w->alpha = 0.8f;
        TASK_SET_FUNC(t, Help_TaskOpened);
    }
}

void Help_TaskLoad(Task *t) {
    Help *g;
    HelpWork *w;
    s32 v;
    s32 c;

    w = t->data.work;
    g = gHelp;
    Help_CopyEntries();
    if (g->f18 == NULL) {
        if (g->file1->state != 3) {
            return;
        }
        g->f14 = g->file0->data;
        g->file0->data = NULL;
        amCdFs_Close(g->file0, 0);
        g->file0 = NULL;
        g->f18 = g->file1->data;
        g->file1->data = NULL;
        amCdFs_Close(g->file1, 0);
        g->file1 = NULL;
        func_0022E0B0(g->f14);
        amFile_Load(g->f18);
    }
    D_00470704 = v = (s32)g->f18;
    D_0047070C = c = 0xFF00;
    D_00470708 = 0;
    amModel_SetCurrent(v, c);
    D_00470238 = 0;
    w->fC = func_0022D860(g->f14->f14[0], 0.0f);
    g->f28 = 2;
    TASK_SET_FUNC(t, Help_TaskFadeIn);
}

void Help_TaskCtrl(void) {
    func_002B5500();
}

void Help_Clear(void) {
    gHelp = NULL;
}

void Help_Exit(void) {
    Help *g = gHelp;

    if (g->refs != 0) {
        g->refs--;
        return;
    }
    if (g->file0 != NULL) {
        amCdFs_Close(g->file0, 0);
    }
    if (g->file1 != NULL) {
        amCdFs_Close(g->file1, 0);
    }
    if (g->f14 != NULL) {
        amHeap_Free(g->f14);
    }
    if (g->f18 != NULL) {
        amHeap_Free(g->f18);
    }
    if (g->ctrl != NULL) {
        amTask_Kill(g->ctrl);
    }
    if (g->draw != NULL) {
        amHeap_Free(g->draw->data.work);
        amTask_Kill(g->draw);
    }
    amHeap_Free(g);
    gHelp = NULL;
}

void Help_Open(s64 mode, s32 kind) {
    Help *g;
    Task *t;
    HelpWork *w;
    s64 m;

    g = gHelp;
    if (g->ctrl == NULL) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        g->ctrl = amTask_Create((TaskFunc)Help_TaskCtrl, 0, 0x1000, 8, 2, D_0046EBF8);
        func_002B5500();
        g->draw = t = amTask_Create(Help_TaskLoad, 0, 0xEFFF, 8, 2, D_0046EC08);
        t->data.work = w = amHeap_Alloc(0x18, 0, D_0046EC18, 0xD9);
    } else {
        t = g->draw;
        w = t->data.work;
        TASK_SET_FUNC(t, Help_TaskLoad);
    }
    m = (s64)0x08000000 << 32;
    g->f20 = (mode & m) ? m : mode;
    g->f58 = kind;
    g->f28 = 1;
    w->scroll = 0;
    w->scrollMax = 0;
    w->alpha = 0;
    w->fC = 0;
    w->f10 = 0;
    w->f14 = 0;
}

void Help_Load(void) {
    Help *g;

    if (gHelp != NULL) {
        gHelp->refs++;
        return;
    }
    gHelp = g = amHeap_Alloc(0x60, 0, D_0046EC18, 0xA4);
    g->ctrl = NULL;
    g->draw = NULL;
    g->refs = 0;
    g->file0 = amCdFs_ReadFileId(0x10828, 0, 0);
    g->file1 = amCdFs_ReadFileId(0x10829, 0, 0);
    g->f14 = NULL;
    g->f18 = NULL;
}
