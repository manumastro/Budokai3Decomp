/* Draft (not built): func_0028DFC0 at 0x0028DFC0, size 0x604, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 238 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x540, original 0x604
 * Original: asm/nonmatchings/sys/mc_opr/func_0028DFC0.s */

// src/sys/mc_opr.c func_0028DFC0 size diff=238/336
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 amMc_GetInfo(s32, s32, s32);
s16 func_0012EAE0(s32);
s32 func_001F0280(s8 *);
extern s32 D_0046B9F8;
extern s32 D_00470830;
extern s32 D_00470840;
extern u8 D_00470841;
extern u8 D_00470842;
extern u8 D_00470843;
extern u8 D_00470845;
extern u8 D_00470846;
extern u8 D_00470847;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_0047085C;
extern s32 D_00470860;
extern s32 D_00470864;
extern s32 D_00470868;
extern void *D_00470870;
extern s32 D_00470874;
extern s32 D_00470878;
extern s32 D_0047087C;
extern s32 D_00470880;
extern s8 D_004B4B64;
extern void *amTask_Create();
extern char D_004B4B40[];
extern char D_004B4BC0[];
extern void func_00119BF0(void *);
extern void func_001EF730(char *);
extern void BtbEntry_DecodeColors(char *, void *);
extern void func_001EFDB0(char *, char *);
extern void func_0028DDF0(void);
extern void func_0028B380(void);
extern void func_0028B270(void);
extern void func_0028A480(void);
extern void func_0028A300(void);
extern void func_00289380(void);
extern void func_00289210(void);
extern void func_00289DF0(void);
extern void func_0028D4D0(void);
s32 func_0028DFC0(u32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg_sp0) {
    s32 *var_v0;
    u8 *var_s1;

    var_s1 = arg3;
    if (D_00470048 != -1) {
        return 0;
    }
    switch (arg0) {
    case 0:
        if (*D_004B4BC0 != 0) {
            D_0047088C = amTask_Create(func_0028DDF0, 0, 0xE000, 1);
            D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
            func_00288870(0);
            D_00470854 = 1;
            D_00470894 = (s32) &func_0028B380;
            goto block_12;
        }
        if (amMc_GetInfo(0, 0, 1) != 0) {
            return 0;
        }
        D_004708A0 = amHeap_Alloc(0xD680, 0, &D_0046B9F8, 0x206);
        func_001F0280((s8 *)(D_004B4B40));
        func_001EFDB0((char *)((s8 *) D_004708A0), (char *)(D_004B4B40));
        *(u8 *)((u8 *)D_004708A0 + 0x30) = (u8) D_00470847;
        *(u8 *)((u8 *)D_004708A0 + 0x31) = (u8) D_00470846;
        *(u8 *)((u8 *)D_004708A0 + 0x32) = (u8) D_00470845;
        *(u8 *)((u8 *)D_004708A0 + 0x33) = (u8) D_00470843;
        *(u8 *)((u8 *)D_004708A0 + 0x34) = (u8) D_00470842;
        *(u8 *)((u8 *)D_004708A0 + 0x35) = (u8) D_00470841;
        *(s16 *)((u8 *)D_004708A0 + 0x36) = func_0012EAE0(D_00470841 & 0x1F);
        *(s32 *)((u8 *)D_004708A0 + 0x38) = func_0012EAE0(D_00470842 & 0x1F);
        *(s32 *)((u8 *)D_004708A0 + 0x3C) = func_0012EAE0(D_00470845 & 0x1F);
        *(s32 *)((u8 *)D_004708A0 + 0x50) = 0;
        BtbEntry_DecodeColors((char *)((s8 *) D_004708A0), (void *)(&D_00470840));
        func_001EF730((char *)((s8 *) D_004708A0));
        var_s1 = D_004708A0;
        D_00470864 = 0;
        D_00470868 = 0;
        D_0047088C = amTask_Create(func_0028B270, 0, 0xE000, 1);
        D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
        func_00288870(0x20);
block_12:
        D_00470860 = 0;
        D_00470830 = 0;
        D_0047084C = 0;
    default:
block_39:
        D_00470048 = (s32) arg0;
        D_00470870 = var_s1;
        D_00470874 = M2C_ERROR(/* Read from unset register $t3 */);
        D_00470848 = arg1;
        D_00470878 = M2C_ERROR(/* Read from unset register $t0 */);
        D_0047087C = M2C_ERROR(/* Read from unset register $t1 */);
        D_00470880 = M2C_ERROR(/* Read from unset register $t2 */);
        D_0047085C = arg_sp0;
        return 1;
    case 3:
        func_00119BF0(&D_00470840);
        /* fallthrough */
    case 1:
        if (*D_004B4BC0 != 0) {
            D_0047088C = amTask_Create(func_0028DDF0, 0, 0xE000, 1);
            D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
            func_00288870(1);
            D_00470854 = 1;
            D_00470894 = (s32) &func_0028A480;
            goto block_20;
        }
        if (amMc_GetInfo(0, 0, 1) != 0) {
            return 0;
        }
        D_0047088C = amTask_Create(func_0028A300, 0, 0xE000, 1);
        D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
        func_00288870(0x20);
block_20:
        D_00470830 = 0;
        D_0047084C = 0;
        goto block_39;
    case 7:
        D_0047083C = 0x8000;
        D_00470838 = 0;
        D_0047088C = amTask_Create(func_00289380, 0, 0xE000, 1);
        D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
        D_0047084C = 0;
        if (amMc_GetInfo(0, 0, 1) == 0) {
            var_v0 = (int *)(&func_00289210);
            if (&func_00289210 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)D_0047088C + 0x1C) = var_v0;
        }
        goto block_39;
    case 6:
        D_00470838 = 0;
        D_0047083C = 0;
        D_0047088C = amTask_Create(func_00289DF0, 0, 0xE000, 1);
        D_0047084C = arg2;
        goto block_39;
    case 4:
        if (D_004B4B64 == -1) {
            return -1;
        }
    case 2:
    case 5:
        if (amMc_GetInfo(arg2, 0, 1) != 0) {
            return 0;
        }
        D_0047088C = amTask_Create(func_0028DDF0, 0, 0xE000, 1);
        D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
        func_00288870(0x20);
        D_0047084C = arg2;
        D_00470868 = 0;
        D_00470894 = (s32) func_0028D4D0;
        D_00470864 = 0;
        D_00470830 = 0;
        goto block_39;
    case 9:
    case 10:
        D_00470884 = 1.0f;
        /* fallthrough */
    case 8:
        if (amMc_GetInfo(arg2, 0, 1) != 0) {
            return 0;
        }
        func_00119BF0(&D_00470840);
        D_0047088C = amTask_Create(func_0028D4D0, 0, 0xE000, 1);
        D_00470890 = amTask_Create(func_0028DF10, 0, 0xDFFF, 1);
        D_0047084C = arg2;
        D_00470830 = 0;
        if (arg0 == 8) {
            func_00288870(0x20);
        } else {
            func_00288870(0x1A);
        }
        goto block_39;
    }
}
