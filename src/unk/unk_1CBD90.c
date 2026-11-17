#include "common.h"

typedef struct Big { char pad[0x8934]; void *tbl[2]; } Big;
extern Big *D_00470570;
typedef struct Arg { char pad[0x2c]; int *p; } Arg;
typedef struct Side {
    char pad0[0xB88];
    int **blk;
    short *idx;
    char pad1[0xCC3 - 0xB90];
    signed char m;
    signed char n;
    char pad2[0x1354 - 0xCC5];
    struct Side *other;
    char pad3[0x201E - 0x1358];
    signed char out;
} Side;
extern void func_001C8480(void *, int);
extern void func_001C7D90(void *, int, void *);
extern int func_00218960(void *);
extern void func_00219270(signed char);
extern signed char func_00218B60(short, int);
extern void func_00218C40(void *, int, int, int, float, float);
extern void func_00219340(void *, float);
extern void func_00219390(void *);
extern void func_00219470(void *);
extern void func_001D9CA0(void *, int);

// func_001CBD90, func_001CBDF0, func_001CBE80, func_001CBEE0: register and scheduling differences; not matched yet.
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBD90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBDF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBEE0);
int func_001CBF50(void *unused, Arg *a) {
    int x = a->p[0];
    return func_00218960((char *)D_00470570 + (x << 5) + 0x5C4) ? 1 : 3;
}
int func_001CBF90(void *unused, Arg *a) {
    *(int *)a = func_00218960((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int func_001CBFE0(void *unused, Arg *a) {
    if (*(short *)((char *)D_00470570 + 0x7E6) != -1) {
        func_00219270(-1);
    }
    return 1;
}
int func_001CC020(void *unused, Arg *a) {
    int r;
    if (*(short *)((char *)D_00470570 + 0x7E6) != -1) {
        r = func_00218B60(*(short *)((char *)D_00470570 + 0x7E4), 1);
        func_00219270(r);
    }
    return 1;
}
int func_001CC070(void *unused, Arg *a) {
    char *q = *(char **)unused;
    int *p = a->p;
    func_00218C40((char *)D_00470570 + (p[2] << 5) + 0x5C4, *(int *)(q + 0x10), *(int *)(q + 0x14), *(int *)(q + 0x18), *(float *)&p[1], (float)p[0]);
    return 1;
}
int func_001CC0C0(void *unused, Arg *a) {
    int *p = a->p;
    func_00219340((char *)D_00470570 + (p[1] << 5) + 0x5C4, *(float *)p);
    return 1;
}
int func_001CC100(void *unused, Arg *a) {
    int *p = a->p;
    char *e = (char *)(p[0] << 5);
    *(float *)((char *)a + 0x40) = *(float *)(e + (int)D_00470570 + 0x5C4);
    return 1;
}
int func_001CC130(void *unused, Arg *a) {
    func_00219390((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int func_001CC170(void *unused, Arg *a) {
    func_00219470((char *)D_00470570 + (a->p[0] << 5) + 0x5C4);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC1B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC270);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC4B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC710);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC7C0);
int func_001CC850(void *unused, Arg *a) {
    func_001D9CA0(D_00470570->tbl[a->p[0]], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC9A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCA90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCBF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCC70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCC90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCCC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCCF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCD20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCD50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCD80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCDB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCDD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCF30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCFC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCFE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD000);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD050);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD270);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD2C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD340);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD530);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD5B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD640);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD6A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD700);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD750);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD800);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD850);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD8B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD9C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDA10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDA60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDA90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDAE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDB20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDB80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDBC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDC00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDC30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDCA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDCD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDD20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDD80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDDA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDDC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDDE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDE40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDEA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDF00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDF10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDF80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CDFD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE110);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE1F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE340);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE3A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE430);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE4E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE560);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE5B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE7C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE820);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE850);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE960);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CED20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEDE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEF00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CEFF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF0A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF100);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF2C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF4A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF4F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF530);

int func_001CF570(void *unused, Arg *a) {
    int side = a->p[1];
    int id = a->p[0];
    func_001C8480(D_00470570->tbl[side], id);
    func_001C7D90(D_00470570->tbl[side], id, D_00470570->tbl[1 - side]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF6D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF760);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF7B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF810);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF850);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF8B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF920);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF940);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF990);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF9E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFA00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFA60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFAA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFAB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFAC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFAD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFB80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFE50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFF90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D00C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D01C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D02C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D03E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D05D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D06F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0860);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0990);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0A20);
