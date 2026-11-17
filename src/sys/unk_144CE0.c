#include "common.h"

/* Tasks: a priority-ordered list between two sentinels (gTaskHead "TCB Head", gTaskTail "TCB Tail"), allocated
 * from a ring of slots (0x40 bytes of header, D_0047035C bytes of work area, then 0x10 bytes of timing). */
typedef struct Task Task;
typedef s32 (*TaskFn)(Task *);

struct Task {
    char name[0x10];
    s32 group;
    s32 flags;
    u32 prio;
    TaskFn exec;
    TaskFn kill;
    Task *prev;
    Task *next;
    u32 magic;
    s32 pad30[4];
};

typedef struct TaskTime {
    u32 magic;
    s32 pad4;
    s32 time;
    s32 max;
} TaskTime;

#define TASK_TIME(t) ((TaskTime *)((u32)(t) + 0x40 + D_0047035C))

extern char D_0045F5E0[];
extern char D_0045F5F0[];
extern s32 D_00470350;
extern s32 D_00470354;
extern s32 D_00470358;
extern s32 D_0047035C;
extern s32 D_00470360;
extern Task *D_00470364;
extern Task **D_00470368;
extern s32 D_0047036C;
extern s32 D_00470370;
extern s32 D_00470374;
extern s32 D_00470378;
extern s32 D_0047037C;
extern Task gTaskHead;
extern Task gTaskTail;

extern void *func_00124940(s32, s32);
extern void func_00128040(char *, char *, s32);
extern void memset(void *, s32, s32);

void amTask_Free(Task *t);

#if 0
/* Differs only in the sentinels' exec / kill: the original stores a zero moved into a register first
 * (`daddu v0, $zero, $zero; sw v0`), not $zero; source form not found yet. */
void amTask_Init(s32 n, s32 work) {
    Task *t;
    s32 i;
    TaskTime *tt;

    D_00470350 = 0;
    D_00470354 = 0;
    D_00470358 = 0;
    D_0047036C = 0;
    D_00470370 = 0;
    D_00470374 = 0;
    D_00470378 = 0;
    D_0047037C = 0;
    D_0047035C = (work + 63) & ~63;
    D_00470360 = n;
    D_00470364 = func_00124940(0x40, (D_0047035C + 0x50) * D_00470360);
    D_00470368 = func_00124940(0x40, D_00470360 * 4);
    func_00128040(gTaskHead.name, D_0045F5E0, 0x10);
    gTaskHead.prio = 0;
    gTaskHead.prev = 0;
    gTaskHead.next = &gTaskTail;
    gTaskHead.group = 0;
    gTaskHead.flags = 1;
    gTaskHead.magic = 0xD020A0C;
    gTaskHead.exec = (TaskFn)0L;
    gTaskHead.kill = (TaskFn)0L;
    func_00128040(gTaskTail.name, D_0045F5F0, 0x10);
    gTaskTail.prio = -1;
    gTaskTail.prev = &gTaskHead;
    gTaskTail.next = 0;
    gTaskTail.group = 0;
    gTaskTail.flags = 1;
    gTaskTail.magic = 0xD020A0C;
    gTaskTail.exec = (TaskFn)0L;
    gTaskTail.kill = (TaskFn)0L;
    t = D_00470364;
    for (i = 0; i < D_00470360; i++) {
        D_00470368[i] = t;
        tt = TASK_TIME(t);
        t->magic = 0xD020A0C;
        tt->magic = 0xD020A0C;
        t = (Task *)((u32)t + 0x50 + D_0047035C);
    }
}

#endif
INCLUDE_ASM("asm/nonmatchings/sys/unk_144CE0", amTask_Init);

void amTask_Run(void) {
    Task *t;
    volatile u32 start;
    TaskTime *tt;

    for (t = gTaskHead.next; t != &gTaskTail; t = t->next) {
        start = *(volatile u32 *)0x10000000;
        if ((s32)t->exec > 0) t->exec(t);
        tt = TASK_TIME(t);
        tt->time = *(volatile u32 *)0x10000000 - start;
        if (tt->max < tt->time) tt->max = tt->time;
    }
    for (t = gTaskHead.next; t != &gTaskTail; t = t->next) {
        if ((s32)t->exec == -1) amTask_Free(t);
    }
}

Task *amTask_Create(TaskFn exec, TaskFn kill, u32 prio, s32 group, s32 flags, char *name) {
    Task *t;
    TaskTime *tt;
    Task *q;

    D_00470350++;
    t = D_00470368[D_00470354];
    D_00470354 = (D_00470354 + 1) & (D_00470360 - 1);
    memset(t, 0, 0x10);
    func_00128040(t->name, name, 15);
    tt = TASK_TIME(t);
    tt->time = 0;
    tt->max = 0;
    t->prio = prio;
    t->prio = prio;
    t->group = group;
    t->flags = flags;
    t->exec = exec == 0 ? 0 : exec;
    t->kill = kill == 0 ? 0 : kill;
    for (q = gTaskHead.next; q != &gTaskTail && !(prio < q->prio); q = q->next) {
    }
    q->prev->next = t;
    t->prev = q->prev;
    q->prev = t;
    t->next = q;
    return t;
}

void amTask_Kill(Task *t) {
    if ((s32)t->exec != -1) {
        if ((s32)t->kill > 0) t->kill(t);
        t->exec = (TaskFn)-1;
    }
}

void amTask_KillGroup(s32 group, s32 flags, s32 mode) {
    Task *t;

    if (group == 0) group = -1;
    t = gTaskHead.next;
    switch (mode) {
    case 0:
        for (; t != &gTaskTail; t = t->next) {
            if ((t->group & group) && (t->flags & flags)) amTask_Kill(t);
        }
        break;
    case 1:
        for (; t != &gTaskTail; t = t->next) {
            if ((t->group & group) && (flags & t->flags) == flags) amTask_Kill(t);
        }
        break;
    case 2:
        for (; t != &gTaskTail; t = t->next) {
            if ((t->group & group) && !(t->flags & flags)) amTask_Kill(t);
        }
        break;
    case 3:
        for (; t != &gTaskTail; t = t->next) {
            if ((t->group & group) && (flags & t->flags) != flags) amTask_Kill(t);
        }
        break;
    }
}

void amTask_KillRange(u32 lo, u32 hi, s32 group) {
    Task *t;

    t = gTaskHead.next;
    while (t != &gTaskTail && t->prio < lo) t = t->next;
    while (t != &gTaskTail && t->prio <= hi) {
        if (group == 0 || (t->group & group)) amTask_Kill(t);
        t = t->next;
    }
}

void amTask_SetPause(s32 a, s32 b) {
    D_0047036C = a;
    D_00470370 = D_0047036C ? b : 0;
}

void amTask_Free(Task *t) {
    t->prev->next = t->next;
    t->next->prev = t->prev;
    D_00470368[D_00470358] = t;
    D_00470358 = (D_00470358 + 1) & (D_00470360 - 1);
    D_00470350--;
}
