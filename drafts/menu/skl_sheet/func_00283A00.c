/* Draft (not built): func_00283A00 at 0x00283A00, size 0x1CC, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/skl_sheet/func_00283A00.s */

extern u8 *D_00470820;
s32 func_00209540(s32, s32, s32);
extern void *amTask_Create();
extern void func_00283710(void);
extern void func_002832E0(void);
void func_00283A00(u8 *arg0) {
    s32 var_s2;
    s32 *var_v1_2;
    s32 temp_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 **var_a2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    var_a3 = 0;
    var_s2 = 0;
    var_a2 = (unsigned char **)D_00470820;
    loop_1:
    temp_v1 = *var_a2;

    if (temp_v1 != NULL) {
        if (*(s16 *)((u8 *)temp_v1 + 4) == 3) {
            if (var_a3 == 4) {
                var_s2 = 1;
            }
            goto block_5;
        }
    } else {
        block_5:
        var_a3 += 1;

        var_a2 += 4;
        if (var_a3 >= 5) {
            var_s0 = 0;
            var_s1 = 0;
            do {
                temp_v1_2 = (unsigned char *)*(s32 *)(D_00470820 + var_s0);
                if (temp_v1_2 != NULL) {
                    amFile_Load(*(u8 **)((u8 *)temp_v1_2 + 0x54));
                }
                var_s1 += 1;
                var_s0 += 4;
            }
            while (var_s1 < 5);
            *(s32 *)((u8 *)D_00470820 + 0x30) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)D_00470820 + 0) + 0x54);
            *(s32 *)((u8 *)D_00470820 + 0x38) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)D_00470820 + 8) + 0x54);
            *(s32 *)((u8 *)D_00470820 + 0x34) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)D_00470820 + 4) + 0x54);
            *(s32 *)((u8 *)D_00470820 + 0x3C) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)D_00470820 + 0xC) + 0x54);
            if (var_s2 != 0) {
                *(s32 *)((u8 *)D_00470820 + 0x40) = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)D_00470820 + 0x10) + 0x54);
            }
            temp_a0 = *(s32 *)((u8 *)D_00470820 + 0x48);
            switch (temp_a0) {
                case 0:
                    var_v1 = 1;
                    block_18:
                *(s32 *)((u8 *)D_00470820 + 0x48) = var_v1;

                    break;

                case 2:
                    var_v1 = 3;
                    goto block_18;
            }

            if (var_s2 != 0) {
                *(s32 *)((u8 *)D_00470820 + 0x44) = func_00209540(*(s32 *)((u8 *)D_00470820 + 0x40), 0, 0);
                *(u8 **)((u8 *)D_00470820 + 0x2C) = amTask_Create(&func_00283710, 0, *(s32 *)((u8 *)D_00470820 + 0x4C) - 0x10, 0x200);
                *(s32 **)((u8 *)arg0 + 0x1C) = NULL;
                return;
            }
            var_v1_2 = (int *)&func_002832E0;
            if (&func_002832E0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        }
        goto loop_1;
    }
}
