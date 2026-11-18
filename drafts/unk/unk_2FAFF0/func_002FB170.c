/* Draft (not built): func_002FB170 at 0x002FB170, size 0x348, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 169: temp_s0 = D_005CA030 == 1;
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FB170.s */

// src/unk/unk_2FAFF0.c func_002FB170 cerr diff=-1/0
void *A2d_AllocObj(s32, f32);
s32 func_00133780(s32, s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002FB170(void) {
    s32 *temp_s4;
    s32 temp_s0;
    s32 temp_v1;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s4 = (s32 *)(*(s32 *)((u8 *)gTourMap + 0x40) + 0x30);
    func_00300D20();
    temp_s1 = *(u8 **)((u8 *)gTourMap + 0x28);
    temp_s2 = *(u8 **)((u8 *)gTourMap + 0x34);
    temp_s0 = D_005CA030 == 1;
    D_0047070C = 0x11406000;
    D_00470704 = temp_s1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_s1, 0x11406000);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s3 = (u8 *)(gTourMap + 0x25C);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xE8), (f32) *(s32 *)((u8 *)gTourMap + 0x264) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xD8), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xDC), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xF4), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xF8), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xFC), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x100), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x104), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x108), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x10C), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x110), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x114), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_00133780(0, 0);
    if (temp_s0 != 0) {
        D_00470704 = temp_s1;
        D_0047070C = 0x11406000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_s1, 0x11406000);
        D_00470238 = 0;
        func_00133780(0, 1);
        temp_v1 = *temp_s4;
        switch (temp_v1) {                          /* irregular */
        case 0:
            temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x34), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
            func_0022C6B0(temp_v0);
            func_0022D4B0(temp_v0, 1);
            temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x40), 0.0f);
            *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) *(f32 *)((u8 *)temp_v0 + 0x24);
            func_0022C6B0(temp_v0_2);
            func_0022D4B0(temp_v0_2, 1);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x5C), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
            break;
        case 1:
            temp_s0_2 = (u8 *)(gTourMap + 0x28C);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x38), (f32) *(s32 *)((u8 *)gTourMap + 0x294) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x118), (f32) *(s32 *)((u8 *)temp_s0_2 + 8) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x11C), (f32) *(s32 *)((u8 *)temp_s0_2 + 8) * gFrameDelta);
            break;
        }
        func_00133780(0, 0);
    }
}
