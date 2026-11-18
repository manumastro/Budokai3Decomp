/* Draft (not built): func_00270EC0 at 0x00270EC0, size 0x1BC, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 232: temp_v1 = *(*(s32 *)((u8 *)D_004707FC + 0x54) + *arg0);
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00270EC0.s */

// src/unk/unk_26FF30.c func_00270EC0 cerr diff=-1/0
void *A2d_AllocObj(s32, s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
s32 func_0026D320(void *, void *, s16, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00270EC0(s32 *arg0) {
    s32 temp_a2;
    s32 temp_v1_2;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;

    temp_a2 = *arg0;
    temp_s2 = *(u8 **)((u8 *)D_004707FC + 0x20);
    temp_a0 = *(u8 **)((u8 *)D_004707FC + 0x28);
    temp_s1 = &D_004E0660 + (temp_a2 * 0x28);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401380;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401380, temp_a2, D_004707FC);
    D_00470238 = 0;
    temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xF0), 0);
    *(s16 *)((u8 *)temp_v0 + 0x18) = (s16) *arg0;
    func_0026D320(temp_v0, *(u8 **)((u8 *)D_004707FC + 0x28), *(s16 *)((u8 *)temp_v0 + 0x18), 9);
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x38) * 0.8f);
    func_0022C6B0(temp_v0);
    func_0022D4B0(temp_v0, 1);
    temp_a0_2 = *(u8 **)((u8 *)D_004707FC + 0x24);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x11401300;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x11401300);
    D_00470238 = 0;
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x1C), (f32) (*(u8 *)((u8 *)temp_s1 + 0xA) & 3));
    temp_v1 = *(*(s32 *)((u8 *)D_004707FC + 0x54) + *arg0);
    if ((s32) temp_v1 > 0) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x18), (f32) (temp_v1 - 1));
    }
    temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 8) & 7;
    if (temp_v1_2 > 0) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x2C), (f32) (temp_v1_2 - 1));
    }
    if (*(u8 *)((u8 *)temp_s1 + 0xB) & 8) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x30), 0.0f);
    }
    if (!(*(u8 *)((u8 *)temp_s1 + 0xB) & 1)) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x34), 0.0f);
    }
}
