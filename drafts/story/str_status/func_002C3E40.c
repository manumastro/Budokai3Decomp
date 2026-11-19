/* Draft (not built): func_002C3E40 at 0x002C3E40, size 0x1CC, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x1CC
 * Original: asm/nonmatchings/story/str_status/func_002C3E40.s */

// src/story/str_status.c func_002C3E40 size diff=52/95
void func_002C3E40(void) {
    s32 *sp50;
    u8 *sp54;
    u8 *sp58;
    u8 *sp5C;
    u8 *sp60;
    u8 *sp64;
    u8 *sp68;
    u8 *sp6C;
    u8 *sp70;
    u8 *sp74;
    u8 *sp78;
    u8 *sp7C;
    Task *temp_a0_4;
    Task *temp_v0;
    TourModeGlobal *temp_s0;
    s32 **var_s1;
    s32 **var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s3;

    temp_s0 = gTourMode;
    temp_v0 = temp_s0->task;
    if (temp_v0 != NULL) {
        temp_s3 = temp_v0->data.work;
        temp_a0 = *(s32 *)((u8 *)temp_s3 + 8);
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            *(s32 *)((u8 *)temp_s3 + 8) = 0;
        }
        var_v1 = &sp50;
        var_v0 = 0x30;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp50 = (int *)(temp_s3 + 0xC);
        var_s2 = 0;
        sp54 = temp_s3 + 0x10;
        sp58 = temp_s3 + 0x14;
        sp5C = temp_s3 + 0x18;
        sp60 = temp_s3 + 0x1C;
        sp64 = temp_s3 + 0x20;
        sp68 = temp_s3 + 0x24;
        sp6C = temp_s3 + 0x28;
        sp70 = temp_s3 + 0x2C;
        sp74 = temp_s3 + 0x34;
        sp78 = temp_s3 + 0x38;
        sp7C = temp_s3 + 0x30;
        var_s1 = &sp50;
        do {
            temp_a0_2 = **var_s1;
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            var_s2 += 1;
            **var_s1 = 0;
            var_s1 += 4;
        } while (var_s2 < 0xC);
        func_002C0750((s32 *) temp_s3);
        StrStatus_Exit((struct Task *)(*(s32 *)((u8 *)temp_s3 + 0x9C)));
        temp_a0_3 = *(s32 *)((u8 *)temp_s3 + 0xA0);
        if (temp_a0_3 != 0) {
            func_0027E120(temp_a0_3);
            func_0027E070();
        }
        temp_a0_4 = *(Task **)((u8 *)temp_s3 + 0xA4);
        if (temp_a0_4 != NULL) {
            amTask_Kill(temp_a0_4);
        }
        amHeap_Free(temp_s3);
        amTask_Kill(temp_s0->task);
        temp_a0_5 = *(u8 **)((u8 *)temp_s3 + 0);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        temp_a0_6 = *(u8 **)((u8 *)temp_s3 + 4);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
    }
    amHeap_Free(temp_s0);
    gTourMode = NULL;
    Help_Exit();
    func_0028DF20();
    func_0027E070();
}

/* Similar function already in C: ArenaMode_Exit (src/menu/mn_ArenaMode.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void ArenaMode_Exit(void) {
    ArenaModeGlobal *g = gArenaMode;
    ArenaModeWork *w = g->task->data.work;
    s32 i;

    if (w->se >= 0) {
        amAdx_Stop(w->se);
    }
    if (g->task != NULL) {
        s32 p[10] = {0};

        p[0] = w->f8;
        p[1] = w->fC;
        p[2] = w->f10;
        p[3] = w->f14;
        p[4] = w->f18[0];
        p[5] = w->f18[1];
        p[6] = w->f18[2];
        p[7] = w->f24;
        p[8] = w->f28;
        p[9] = w->f2C;
        for (i = 0; i < 10; i++) {
            if (p[i] != 0) {
                func_0022D0E0(p[i], 1);
            }
        }
        StrStatus_Exit(w->f30);
        if (w->res != NULL) {
            amHeap_Free(w->res);
        }
        if (w->tex != NULL) {
            amHeap_Free(w->tex);
        }
        amHeap_Free(w);
        amTask_Kill(g->task);
    }
    amHeap_Free(g);
    gArenaMode = NULL;
    Help_Exit();
}
#endif
