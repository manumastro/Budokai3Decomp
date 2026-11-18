/* Draft (not built): Save_TaskIdle at 0x002E3A50, size 0x3D4, segment menu/mn_save (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  was declared as: 'void (struct Task *)' now declared as: 'void (unsigned char *)' @ 175: void Save_TaskIdle(u8 *arg0) {
 * Original: asm/nonmatchings/menu/mn_save/Save_TaskIdle.s */

// src/menu/mn_save.c Save_TaskIdle cerr diff=-1/0
void Save_TaskIdle(u8 *arg0) {
    u32 temp_v1;
    void (*var_v0)(u8 *);
    void (*var_v1)(u8 *);
    void (*var_v1_10)(u8 *);
    void (*var_v1_11)(u8 *);
    void (*var_v1_2)(u8 *);
    void (*var_v1_3)(u8 *);
    void (*var_v1_4)(u8 *);
    void (*var_v1_5)(u8 *);
    void (*var_v1_6)(u8 *);
    void (*var_v1_7)(u8 *);
    void (*var_v1_8)(u8 *);
    void (*var_v1_9)(u8 *);
    u8 *temp_s0;

    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    temp_s0 = arg0 + 0x30;
    if (*(s32 *)((u8 *)arg0 + 0x5C) != 0) {
        temp_v1 = *(u32 *)((u8 *)temp_s0 + 0x1C);
        switch (temp_v1) {
        case 0:
            Save_ClearBusy();
            if (func_0028DFC0(0, *(s32 *)((u8 *)temp_s0 + 0xC), 0, 0, 0x1F, 0, 0, 0, 0) != 0) {
                var_v1 = Save_TaskWait;
                if (Save_TaskWait == NULL) {
                    var_v1 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            Save_SetBusy();
            var_v1_2 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v1_2 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        case 1:
            Save_ClearBusy();
            if (func_0028DFC0(3, *(s32 *)((u8 *)temp_s0 + 0xC), 0, 0, 0x1F, 0, 0, 0, 0) != 0) {
                var_v1_3 = Save_TaskWait;
                if (Save_TaskWait == NULL) {
                    var_v1_3 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_3;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            Save_SetBusy();
            var_v1_4 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v1_4 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_4;
            return;
        case 4:
            Save_ClearBusy();
            if (func_0028DFC0(5, *(s32 *)((u8 *)temp_s0 + 0xC), *(s32 *)((u8 *)temp_s0 + 0x20), *(s32 *)((u8 *)temp_s0 + 0x28), 0x1D) == 1) {
                var_v1_5 = Save_TaskWait;
                if (Save_TaskWait == NULL) {
                    var_v1_5 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_5;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            Save_SetBusy();
            var_v1_6 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v1_6 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_6;
            return;
        case 5:
            Save_ClearBusy();
            if (func_0028DFC0(8, *(s32 *)((u8 *)temp_s0 + 0xC), 0, *(s32 *)((u8 *)temp_s0 + 0x28), 0x1E) == 1) {
                var_v1_7 = Save_TaskSlots;
                if (Save_TaskSlots == NULL) {
                    var_v1_7 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_7;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            Save_SetBusy();
            var_v1_8 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v1_8 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_8;
            return;
        case 2:
            Save_TaskCreate(&jtbl_0046F480);
            return;
        case 3:
            Save_ClearBusy();
            if (func_0028DFC0(3, *(s32 *)((u8 *)temp_s0 + 0xC), 0, 0, 0x1F, 0, 0, 0, 0) != 0) {
                var_v1_9 = Save_TaskWait;
                if (Save_TaskWait == NULL) {
                    var_v1_9 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_9;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            Save_SetBusy();
            var_v1_10 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v1_10 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_10;
            return;
        case 6:
            Save_TaskWrite(&jtbl_0046F480);
            return;
        case 7:
            Save_ClearBusy();
            if (func_0028DFC0(7, *(s32 *)((u8 *)temp_s0 + 0xC), 0, 0, 0x1F, 0, 0, 0, 0) != 0) {
                var_v1_11 = Save_TaskWait;
                if (Save_TaskWait == NULL) {
                    var_v1_11 = NULL;
                }
                *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1_11;
                *(s32 *)((u8 *)temp_s0 + 0x18) = 2;
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = 3;
            var_v0 = Save_TaskIdle;
            *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
            if (Save_TaskIdle == NULL) {
                var_v0 = NULL;
            }
            *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v0;
            Save_SetBusy();
            break;
        }
    } else {
    default:
    }
}
