#ifndef MENU_MENU_H
#define MENU_MENU_H

#include "common.h"

/* A task of the game's scheduler, as the menus see it (created by func_00144FC0, which copies the name into
   name[] with strncpy(.., 15), sets prio, the two callbacks and links the task into the list sorted by prio). The
   menus keep their work area in data.work and count frames down in data.wait. */
typedef struct TaskData {
    void *work;     /* 0x30 */
    s32 wait;       /* 0x34 */
} TaskData;

typedef struct Task {
    char name[16];              /* 0x00 */
    s32 f10;                    /* 0x10 */
    s32 f14;                    /* 0x14 */
    s32 prio;                   /* 0x18 */
    void (*func)(struct Task *);  /* 0x1C: called every frame */
    void (*func2)(struct Task *); /* 0x20 */
    struct Task *prev;          /* 0x24 */
    struct Task *next;          /* 0x28 */
    s32 f2C;                    /* 0x2C */
    TaskData data;              /* 0x30 */
} Task;

typedef void (*TaskFunc)(Task *);

/* Sets the function a task runs from the next frame on. As an expression: the label of the ?: is not padded to
   8 bytes, while the same test written as an if statement pads it (the original never does). */
#define TASK_SET_FUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

/* The scheduler (sys area; not named yet). */
extern Task *func_00144FC0(TaskFunc func, TaskFunc func2, s32 prio, s32 f10, s32 f14, char *name);
extern void func_00145120(Task *task);

/* The heap: alloc(size, flags, source file, line) and free. */
extern void *func_0013AAB0(s32 size, s32 flags, char *file, s32 line);
extern void func_0013AC90(void *p);

#endif
