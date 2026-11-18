/* Draft (not built): func_00237BB0 at 0x00237BB0, size 0x248, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d char *' to 'int' mwccps2.exe Compiler: @ 837: func_0022C7D0(*(u8 **)((u8 *)arg0 + 0x10), 1, *(f32 *)((u8 *)arg0 + 0));
 * Original: asm/nonmatchings/battle/char_light/func_00237BB0.s */

// src/battle/char_light.c func_00237BB0 cerr diff=-1/0
extern u8 D_0058BF1C[];
extern void func_0022C7D0(s32, s32, f32);
s32 func_0022ACF0(void *);
s32 func_002535B0(s32, s32);
s32 func_00253690(s32, s32, void **);
void *func_00259CC0(void *, s32, void *, void *);
void func_00237BB0(u8 *arg0) {
    u8 *sp40;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f2;
    u8 **temp_s0_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;

    temp_s0 = (u8 *)(gBtlSys);
    temp_f2 = *(f32 *)((u8 *)arg0 + 0) + D_00470710;
    *(f32 *)((u8 *)arg0 + 0) = temp_f2;
    if (!(temp_f2 < 85.0f)) {
        if (D_0047072C != 0) {
            temp_s0_2 = &D_0058BEB0 + (*(s32 *)((u8 *)arg0 + 0xC) * 4);
            temp_a0 = *temp_s0_2;
            if (temp_a0 != NULL) {
                amTask_Kill(temp_a0);
                *temp_s0_2 = NULL;
            }
        }
        return;
    }
    if ((*(s32 *)((u8 *)arg0 + 8) == 1) && (D_0058BF1C != NULL)) {
        if (!(temp_f2 < 8.0f)) {
            if (*(f32 *)((u8 *)D_0058BF1C + 0x30) < 8.0f) {
                *(f32 *)((u8 *)arg0 + 0) = 8.0f;
            } else {
                *(f32 *)((u8 *)arg0 + 0) = 8.0f;
                *(f32 *)((u8 *)D_0058BF1C + 0x30) = 8.0f;
                *(s32 *)((u8 *)arg0 + 8) = 0;
            }
        } else if (!(*(f32 *)((u8 *)D_0058BF1C + 0x30) < 8.0f)) {
            *(f32 *)((u8 *)D_0058BF1C + 0x30) = 8.0f;
        }
    }
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0xE84);
        D_00470704 = (s32)(temp_a0_2);
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        func_002284D0(0);
        func_0022C7D0(*(u8 **)((u8 *)arg0 + 0x10), 1, *(f32 *)((u8 *)arg0 + 0));
        func_0022ACF0(*(u8 **)((u8 *)arg0 + 0x10));
        func_00228410();
        func_002535B0(*(s32 *)((u8 *)arg0 + 0x28), *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0x30) + 0x40);
        temp_v0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0x30);
        temp_f1 = *(f32 *)((u8 *)temp_v0 + 0x40);
        *(f32 *)((u8 *)temp_v0 + 0x40) = (f32) *(f32 *)((u8 *)temp_v0 + 0x48);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0x30)) + 0x48) = temp_f1;
    }
    func_00253690(*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x20) * 4) + temp_s0) + 0xEC0), *(s32 *)((u8 *)arg0 + 0x24), &sp40);
    temp_a2 = *(s32 *)((u8 *)sp40 + 0x14) + sp40;
    temp_f20 = (f32) *(s16 *)((u8 *)(sp40 + *(temp_a2 + ((sp48 - *(s32 *)((u8 *)sp40 + 0x18)) * 4))) + 0x10);
    temp_v0_2 = *(u8 **)((u8 *)(func_00259CC0(*(u8 **)((u8 *)arg0 + 0x10), 0x8D, temp_a2, sp40)) + 0x30);
    temp_f1_2 = -temp_f20;
    if (*(f32 *)((u8 *)temp_v0_2 + 0x30) < temp_f1_2) {
        *(f32 *)((u8 *)temp_v0_2 + 0x30) = temp_f1_2;
    }
    temp_v1 = *(u8 **)((u8 *)(func_00259CC0(*(u8 **)((u8 *)arg0 + 0x10), 0x8E, 0, 0)) + 0x30);
    temp_f1_3 = 564.0f - temp_f20;
    if (*(f32 *)((u8 *)temp_v1 + 0x20) < temp_f1_3) {
        *(f32 *)((u8 *)temp_v1 + 0x20) = temp_f1_3;
    }
}
