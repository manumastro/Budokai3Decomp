/* Compiler probe: three functions of the game's own code written as C, each compiled to the original bytes.
 * Run: .venv/bin/python scripts/mwmatch.py scripts/probe/compiler_probe.c \
 *          func_001CF570=0x1CF570 func_001E3D60=0x1E3D60 func_002AA5A0=0x2AA5A0 --flags=-O4,p
 * (needs scripts/get_tools.py --all-compilers for the whole version matrix; docs/plan.md, "Compiler").
 * The names and types are placeholders: nothing here is understood yet beyond the instructions. */

/* func_001CF570: a two-sided lookup in a table reached through a $gp pointer (offset 0x8934 needs `lui $at`). */
typedef struct Big { char pad[0x8934]; void *tbl[2]; } Big;
extern Big *D_00470570;
typedef struct Arg { char pad[0x2c]; int *p; } Arg;
extern void func_001C8480(void *, int);
extern void func_001C7D90(void *, int, void *);
int func_001CF570(void *unused, Arg *a) {
    int side = a->p[1];
    int id = a->p[0];
    func_001C8480(D_00470570->tbl[side], id);
    func_001C7D90(D_00470570->tbl[side], id, D_00470570->tbl[1 - side]);
    return 1;
}

/* func_001E3D60: is an angle (0x10000 = a full turn) inside a window of `w` degrees around 180? */
int func_001E3D60(int a, float w) {
    float ang = 360.0f * ((float)a / 65536.0f);
    float h = 0.5f * w;
    if (ang > 180.0f - h && ang < 180.0f + h) return 1;
    return 0;
}

/* func_002AA5A0: a task step that resets a per-side float and adds a step unless the state is 3. */
typedef struct Obj { int id; int pad[2]; int state; } Obj;
typedef struct Task { Obj *obj; int pad[3]; int (*fn)(); } Task;
extern float D_004708F0[2];
extern float D_004708F8;
extern int func_002AA560();
int func_002AA5A0(Task *t) {
    t->fn = func_002AA560;
    D_004708F0[t->obj->id] = 0.0f;
    if (t->obj->state != 3) D_004708F0[t->obj->id] += D_004708F8;
    return 3;
}
