/* Draft (not built): func_00241280 at 0x00241280, size 0x278, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d was declared as: 'void (struct B7Q *)' now declared as: 'void (unsigned char *)' @ 883: void func_00241280(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241280.s */

// src/unk/unk_23A890.c func_00241280 cerr diff=-1/0
extern void func_00209A90(void *, void *);
void func_00241280(u8 *arg0) {
    s32 var_a1;
    s16 temp_a0_3;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_s3 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_v0 = func_00215320((s64) ((s64) temp_s3 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x1C));
    if (temp_v0 != NULL) {
        temp_s1 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = &func_00212480;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_00212650;
        memset(temp_s1, 0, 0x50);
        temp_v1 = *(s16 *)((u8 *)arg0 + 0x1C);
        temp_s0 = temp_s3 * 0x1A4;
        temp_a2 = D_0046FE48 + temp_s0;
        switch (temp_v1) {                          /* irregular */
        case 0x1:
            if (temp_s3 != 0) {
                var_a1 = 0x04000020;
            } else {
                var_a1 = 0x04000010;
            }
            break;
        case 0x2:
            if (temp_s3 != 0) {
                var_a1 = 0x04000008;
            } else {
                var_a1 = 0x04000004;
            }
            break;
        case 0x4:
            if (temp_s3 != 0) {
                var_a1 = 0x400020;
            } else {
                var_a1 = 0x400010;
            }
            break;
        case 0x8:
            var_a1 = 0x400008;
            break;
        case 0x10:
            var_a1 = 0x04000002;
            break;
        case 0x400:
            var_a1 = 0x04000040;
            break;
        case 0x800:
            if (temp_s3 != 0) {
                var_a1 = 0x04000100;
            } else {
                var_a1 = 0x04000080;
            }
            break;
        default:
            var_a1 = 0;
            break;
        }
        *(u8 **)((u8 *)temp_v0 + 0x10) = func_00209540(*(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a2 + 0xC) + *(s16 *)((u8 *)arg0 + 0x22)) * 4) + temp_a2) + 0x14), var_a1, 0);
        temp_a0 = *(u8 **)((u8 *)temp_v0 + 0x10);
        if (temp_a0 != NULL) {
            func_00209A90(temp_a0, arg0);
            temp_a0_2 = D_0046FE48 + temp_s0;
            *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) *(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a0_2 + 0xC) + *(s16 *)((u8 *)arg0 + 0x20)) * 4) + temp_a0_2) + 0x14);
            *(s32 *)((u8 *)temp_s1 + 0x28) = (s32) ((temp_s3 * 0x600) + 0x03006000 + (*(s16 *)((u8 *)arg0 + 0x20) * 0x30));
            temp_a0_3 = *(s16 *)((u8 *)arg0 + 0x24);
            if (temp_a0_3 > 0) {
                temp_a1 = D_0046FE48 + temp_s0;
                *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) *(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a1 + 0xC) + temp_a0_3) * 4) + temp_a1) + 0xD4);
                return;
            }
            *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
        }
    }
}
