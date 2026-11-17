#include "common.h"

extern s32 D_00470270, gPacketQwc, D_00470294, D_00470298, D_00470278, D_0047028C, D_00470288;
typedef struct { char pad[0xC]; s16 hC; char pE; char pF; s16 h10; char p12[2]; s32 w14; } R27C;
extern s16 *D_00470280;
extern R27C *D_0047027C;
extern u32 *gPacketPtr;
extern void amDma_Request(s32, s32, s32, s32, u32, s32, s32, s32);
void amDraw_KickPending(void);





typedef struct { char pad[0x14]; u32 w14; char p18[0x10]; u32 w28; } Tex;
typedef struct Node {
    char pad0[0xC];
    f32 fC;
    char pad10[0xC];
    f32 f1C;
    char pad20[0x28];
    struct Node *prev;
    struct Node *next;
} Node;
extern Node gNodePool[32];
extern Node *gNodeFreeStack[32];
extern s32 gNodeUsed;
extern Node *gNodeHead;
extern Node *gNodeTail;
extern s32 D_004702B4;
extern void memset(void *, s32, s32);

void amDraw_FlushPacket(void) {
    s16 *h;
    R27C *r;
    if (D_00470270 == -1) return;
    if (D_00470270 & 1) {
        h = D_00470280;
        *h = gPacketQwc;
        r = D_0047027C;
        r->pE = D_00470294;
        r->w14 = D_00470298;
    } else {
        h = D_00470280;
        *h = gPacketQwc;
        r = D_0047027C;
        r->hC = D_00470294;
        r->h10 = D_00470298 | 0x8000;
    }
    if (D_00470278 && !D_0047028C) {
        amDma_Request(0, 1, 1, 1, D_00470278 & 0x0FFFFFFF, 0, 0, 0);
    }
    D_00470270 = -1;
}
void amDraw_SetPacketMode(s32 a) {
    amDraw_KickPending();
    D_00470288 = a;
}
void amDraw_KickPending(void) {
    u32 *p;
    if (D_0047028C) {
        p = gPacketPtr;
        p[0] = 0x60000000;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p += 4;
        gPacketPtr = p;
        amDma_Request(0, 1, 1, 1, D_0047028C & 0x0FFFFFFF, 0, 0, 0);
        D_0047028C = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00138070);
s32 amDraw_Null(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00138390);
void amDraw_PutTexRegs(u32 **pp, Tex *t, s32 flags) {
    u32 *p = *pp;
    if (t) {
        if (flags & 2) {
            p[0] = 0x50000000;
            p[1] = t->w28;
            p[2] = 0;
            p[3] = 0;
            p += 4;
        }
        if (flags & 1) {
            p[0] = 0x50000000;
            p[1] = t->w14;
            p[2] = 0;
            p[3] = 0;
            p += 4;
        }
        *pp = p;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00139100);
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00139330);
void amNode_Clear24(Node *n) {
    *(s32 *)((char *)n + 0x24) = 0;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00139620);
void amNode_InitPool(void) {
    s32 i;
    gNodeHead = 0;
    gNodeTail = 0;
    for (i = 0; i < 32; i++) {
        gNodeFreeStack[i] = &gNodePool[i];
    }
    gNodeUsed = 0;
    D_004702B4 = 0;
}
Node *amNode_Alloc(void) {
    Node *n;
    n = gNodeFreeStack[gNodeUsed];
    gNodeUsed++;
    memset(n, 0, 0x50);
    n->fC = 1.0f;
    n->f1C = 1.0f;
    n->next = 0;
    n->prev = gNodeTail;
    if (gNodeTail) gNodeTail->next = n;
    gNodeTail = n;
    if (!n->prev) gNodeHead = n;
    return n;
}
void amNode_Free(Node *n) {
    gNodeUsed--;
    if (n->next) n->next->prev = n->prev;
    else gNodeTail = n->prev;
    if (n->prev) n->prev->next = n->next;
    else gNodeHead = n->next;
    gNodeFreeStack[gNodeUsed] = n;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_137EE0", func_00139A80);
