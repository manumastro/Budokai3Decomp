/* Draft (not built): func_003081F0 at 0x003081F0, size 0x1E4, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 760 + (temp_a0 * 4)) + (((u8) *(s8 *)((u8 *)temp_s0 + 0x1D) & 0xFF) * 4)); @ 237: *(s32 *)((u8 *)temp_s0 + 0x28) = sp38;
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_003081F0.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_003081F0 cerr diff=-1/0
s32 Scene_FadeTo(s32, s32);
s64 func_0027DAA0(void *);
s64 func_0027DAE0(void *);
s32 func_0027DAF0(void *, s8 *);
s32 func_0027DDC0(void *);
extern s32 D_00455760;
extern void func_0027DB20(void *);
extern void ArenaList_Load(void);
extern char D_00492FCE[];
extern void Scene_Request();
void func_003081F0(u8 *arg0) {
    s8 sp30;
    s32 sp31;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_v0_2;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_v0;
    s64 temp_v1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(temp_s0);
    if (func_0027DAF0(*(u8 **)((u8 *)temp_s0 + 8), &sp30) != 0) {
        temp_v0 = func_0027DAE0(*(u8 **)((u8 *)temp_s0 + 8));
        temp_v1 = temp_v0 << 0x30;
        temp_a0 = (s64) (temp_v0 << 0x38) >> 0x38;
        *(s8 *)((u8 *)temp_s0 + 0x16) = (s8) *(s8 *)((u8 *)(&sp31) + 0);
        *(s8 *)((u8 *)temp_s0 + 0x17) = (s8) *(s8 *)((u8 *)(&sp31) + 1);
        *(s8 *)((u8 *)temp_s0 + 0x18) = (s8) *(s8 *)((u8 *)(&sp31) + 2);
        *(s8 *)((u8 *)temp_s0 + 0x19) = (s8) *(s8 *)((u8 *)(&sp31) + 3);
        *(s8 *)((u8 *)temp_s0 + 0x1A) = (s8) *(s8 *)((u8 *)(&sp31) + 4);
        *(s8 *)((u8 *)temp_s0 + 0x1B) = (s8) *(s8 *)((u8 *)(&sp31) + 5);
        *(s8 *)((u8 *)temp_s0 + 0x1C) = (s8) *(s8 *)((u8 *)(&sp31) + 6);
        *(s8 *)((u8 *)temp_s0 + 0x1D) = sp30;
        *(s32 *)((u8 *)temp_s0 + 0x28) = sp38;
        if (temp_a0 == 0x26) {
            var_v0 = 0;
        } else {
            temp_v0_2 = *(*(&D_00455760 + (temp_a0 * 4)) + (((u8) *(s8 *)((u8 *)temp_s0 + 0x1D) & 0xFF) * 4));
            if (temp_v0_2 == 0) {
                var_v0 = 0;
            } else {
                var_v0 = temp_v0_2 - *(s32 *)((u8 *)temp_s0 + 0x28);
            }
        }
        *(s32 *)((u8 *)temp_s0 + 0x2C) = var_v0;
        D_005C4126 = (s16) (temp_v1 >> 0x30);
    }
    if ((((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 8)) << 0x38) >> 0x38) == 4) && (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x1000)) {
        func_0027DB20(*(u8 **)((u8 *)temp_s0 + 8));
        Scene_Request(0x17, 0);
        Scene_FadeTo(0xA, 0);
        var_v1 = (s32 *)(&func_003081E0);
        if (&func_003081E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (((s64) (func_0027DAA0(*(u8 **)((u8 *)temp_s0 + 8)) << 0x38) >> 0x38) == 1) {
        ArenaList_Load();
        func_0027DDC0(*(u8 **)((u8 *)temp_s0 + 8));
        var_v1_2 = (s32 *)(&ArenaCharasel_TaskOpenList);
        if (&ArenaCharasel_TaskOpenList == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
