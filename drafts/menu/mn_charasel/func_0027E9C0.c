/* Draft (not built): func_0027E9C0 at 0x0027E9C0, size 0x98, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027E9C0.s */

extern void memset(void *, s32, s32);
void *A2d_AllocObj(s32, s32);
extern f32 D_0047042C;
extern f32 D_00470430;
void func_0027E9C0(u8 *arg0) {
    u8 *temp_v0;
    *(u8 **)((u8 *)arg0 + 0x38) = temp_v0;
    temp_v0 = A2d_AllocObj(0, 0);
    memset(temp_v0, 0, 0x60);
    *(s32 *)((u8 *)temp_v0 + 0x14) = -1;
    *(s32 *)((u8 *)temp_v0 + 4) = 1;
    *(u16 *)((u8 *)temp_v0 + 0x18) = -1;
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x2C) = 0x3F800000;
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0;
    *(f32 *)((u8 *)temp_v0 + 0x3C) = (f32)D_00470430;
    *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32)D_0047042C;
    *(s32 *)((u8 *)temp_v0 + 0x50) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x54) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x58) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_v0 + 8) = 1;
}

/* Similar function already in C: ArenaStageSel_CreateObj (src/unk/unk_2E4030.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void ArenaStageSel_CreateObj(Ctx2E4 *c) {
    Obj2E4 *o;

    o = A2d_AllocObj(0.0f, 0);
    c->f28 = o;
    c = (Ctx2E4 *)o;
    memset(c, 0, 0x60);
    o = (Obj2E4 *)c;
    o->f4 = 1;
    o->f14 = -1;
    o->f18 = -1;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2C = 1.0f;
    o->f34 = 0;
    o->f3C = D_00470430;
    o->f30 = 0;
    o->f38 = D_0047042C;
    o->f50 = 0;
    o->f54 = 0;
    o->f58 = 0;
    o->f5C = 0;
    o->f8 = 1;
}
#endif
