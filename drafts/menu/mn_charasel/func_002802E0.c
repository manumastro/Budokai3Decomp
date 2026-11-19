/* Draft (not built): func_002802E0 at 0x002802E0, size 0x188, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x188
 * Original: asm/nonmatchings/menu/mn_charasel/func_002802E0.s */

// src/menu/mn_charasel.c func_002802E0 size diff=42/103
extern s32 gVsCharasel;
s32 DataErase_IsReady(s16);
s32 Fade_Request(s32, s32, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *amTask_Create();
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022E0B0(void *);
extern void func_0027FEB0(void);
void func_002802E0(u8 *arg0) {
    s32 *var_v1;
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 *temp_a0_2;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x38);
    temp_s0 = gVsCharasel;
    temp_a0 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4);
    if ((temp_a0 == 3) && (DataErase_IsReady(temp_a0) == 1)) {
        *(u8 **)((u8 *)temp_s0 + 8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = NULL;
        amCdFs_Close((s32) *(u8 **)((u8 *)temp_s0 + 0), 0);
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
        *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
        amCdFs_Close((s32) *(u8 **)((u8 *)temp_s0 + 4), 0);
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 0xC));
        Fade_Request(-1, 0, 0);
        *(u8 **)((u8 *)temp_s0 + 0x10) = amTask_Create(func_0027F8A0, 0, 0x1001, 8);
        *(u8 **)((u8 *)temp_s0 + 0x18) = amTask_Create(func_0027F890, 0, 0x3000, 8);
        temp_s0_2 = gVsCharasel;
        temp_a0_2 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x2000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s1 + 0xC) = func_0022D670(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x1C), 0);
        *(s32 *)((u8 *)temp_s1 + 0x10) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x14), 0);
        func_002800F0(arg0);
        var_v1 = (int *)(&func_0027FEB0);
        if (&func_0027FEB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002C3D20 (src/story/str_status.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
void func_002C3D20(s32 *a0)
{
  s32 *s1 = (s32 *) a0[0x30 / 4];
  s32 *s0 = (s32 *) gTourMode;
  void *f;
  s32 v;
  if ((*((s16 *) (((char *) ((s32 *) s0[1])) + 4))) == 3)
  {
    s1[0] = ((s32 *) s0[0])[0x54 / 4];
    ((s32 *) s0[0])[0x54 / 4] = 0;
    amCdFs_Close(s0[0], 0);
    s1[1] = ((s32 *) s0[1])[0x54 / 4];
    ((s32 *) s0[1])[0x54 / 4] = 0;
    amCdFs_Close(s0[1], 0);
    func_0022E0B0(s1[0]);
    amFile_Load(s1[1]);
    Fade_Request(-1, 0, 0);
    v = s1[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s1[2] = func_0022D670(((s32 *) ((s32 *) s1[0])[0x1C / 4])[0], 0.0f);
    func_002C1860((u8 *)s1);
    *((s32 *) (((char *) s1) + 0xC4)) = 0x41F00000;
    f = (void *) func_002C3B40;
    a0[0x1C / 4] = (s32) ((f == 0) ? (0) : ((void *) func_002C3B40));
  }
}
#endif
