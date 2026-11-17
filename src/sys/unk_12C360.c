#include "common.h"

/* File loaders chosen by a tag that follows the file's first byte; the first byte is set to '!' once loaded. */
typedef struct FileType {
    s32 (*fn)(u8 *);
    char tag[4];
} FileType;

extern FileType D_003F00C0[];
extern s32 D_0046FD00;
extern s32 func_00127BA0(char *);
extern s32 func_00127E88(char *, u8 *, s32);
extern s32 func_00127940(char *, char *);
extern void func_00127A88(char *, char *);

s32 amFile_Load(u8 *data) {
    u8 *p;
    s32 (*fn)(u8 *);
    s32 i;
    char *tag;

    p = data;
    p++;
    fn = 0;
    for (i = 0; D_003F00C0[i].fn != 0; i++) {
        tag = D_003F00C0[i].tag;
        if (func_00127E88(tag, p, func_00127BA0(tag)) == 0) {
            fn = D_003F00C0[i].fn;
            break;
        }
    }
    if (*data == '!') return 0;
    fn(data);
    *data = '!';
    return 1;
}

s32 amFile_AddLoader(char *tag, s32 (*fn)(u8 *)) {
    FileType *t;

    if (D_0046FD00 >= 31) return -1;
    t = D_003F00C0;
    do {
        if (func_00127940(t->tag, tag) == 0) return 0;
        t++;
    } while (t->fn != 0);
    func_00127A88(t->tag, tag);
    t->fn = fn;
    t[1].fn = 0;
    D_0046FD00++;
    return 1;
}
