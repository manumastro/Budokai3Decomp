/* Draft (not built): func_002B7C40 at 0x002B7C40, size 0x178, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7C40.s */

void func_002B7C40(u8 *arg0) {
    u8 *var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s3;
    temp_s3 = gPracMode;
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    D_00470704 = (int)temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)temp_a0, 0x1000);
    *(s32 *)((u8 *)arg0 + 0) = (int)func_0022D670((void *)**(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C), 0);
    *(s32 *)((u8 *)arg0 + 4) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0xC), 0);
    *(s32 *)((u8 *)arg0 + 8) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0x18), 0);
    D_00470238 = 0;
    var_s2 = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0xA0), 0);
    var_s1 = 0;
    var_s0 = arg0;
    do {
        *(s32 *)((u8 *)var_s0 + 0x10) = (int)func_0022D670((void *)*(s32 *)((u8 *)(*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + var_s1) + 0x4C), 0);
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    }
    while (var_s2 < 2);
    *(s32 *)((u8 *)arg0 + 0x40) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0x24), 0);
    *(s32 *)((u8 *)arg0 + 0x44) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0x30), 0);
    *(s32 *)((u8 *)arg0 + 0x48) = (int)func_0022D860((void *)*(s32 *)((u8 *)*(u8 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x14) + 4), 0);
    *(s32 *)((u8 *)arg0 + 0x4C) = (int)func_0022D860((void *)*(s32 *)((u8 *)*(u8 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x14) + 0x1C), 0);
    *(s32 *)((u8 *)arg0 + 0x50) = (int)func_0022D670((void *)*(s32 *)((u8 *)*(s32 **)((u8 *)*(u8 **)((u8 *)temp_s3 + 8) + 0x1C) + 0x94), 0);
}

/* Similar function already in C: StrSelect_InitObjects (src/story/str_select.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
void StrSelect_InitObjects(StrSelectWork *w) {
    s32 v;
    s32 n;
    s32 i;

    D_00470704 = v = (s32)w->tex;
    D_0047070C = n = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, n);
    D_00470238 = 0;
    for (i = 0; i < 7; i++) {
        w->f28[i] = func_0022D860(w->model->obj[i + 7], 0.0f);
    }
    w->f14 = func_0022D860(w->model->obj[2], 0.0f);
    w->f18 = func_0022D860(w->model->obj[3], 0.0f);
    w->f1C = func_0022D860(w->model->obj[4], 0.0f);
    w->f20 = func_0022D860(w->model->obj[5], 0.0f);
    w->f24 = func_0022D860(w->model->obj[6], 0.0f);
}
#endif
