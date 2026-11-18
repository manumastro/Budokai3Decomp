/* Draft (not built): func_002FBE20 at 0x002FBE20, size 0x118, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 53 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FBE20.s */

// src/unk/unk_2FAFF0.c func_002FBE20 diff diff=53/70
extern s32 D_004DFAE8[];
s32 Zenie_SetStep(s32);
s32 Zenie_SetTarget(s32);
extern u16 D_00493086;
extern char D_00492FCE[];
void func_002FBE20(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = arg0;
    var_s1 = var_s2 + 0x30;
    *(s32 *)((u8 *)arg0 + 0x38) = (s32) (*(s32 *)((u8 *)arg0 + 0x38) + 1);
    temp_v1 = *(u8 **)((u8 *)gTourMap + 0x40);
    var_s0 = temp_v1 + 0x30;
    *(s32 *)((u8 *)gTourMap + 0x294) = (s32) (*(s32 *)((u8 *)gTourMap + 0x294) + 1);
    Zenie_Update();
    func_00208F70((s32)((void *)(*(u8 **)((u8 *)var_s0 + 8))));
    if (((*D_00492FCE | D_00493086) & 0x4008) || !(((f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta) <= 120.0f)) {
        *(s32 *)((u8 *)temp_v1 + 0x30) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x30) + 1);
        *(s32 *)((u8 *)var_s1 + 8) = 0;
        Zenie_SetTarget((s32)(D_004DFAE8 + *(u32 *)((u8 *)gTourMap + 0x58)));
        Zenie_SetStep((*(u32 *)((u8 *)gTourMap + 0x58) / 100) + ((u32) *(u32 *)((u8 *)gTourMap + 0x58) >> 0x1F));
        var_v1 = (s32 *)(&func_002FBD90);
        if (&func_002FBD90 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)var_s2 + 0x1C) = var_v1;
    }
}
