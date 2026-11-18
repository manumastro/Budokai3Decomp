/* Draft (not built): func_002B7C40 at 0x002B7C40, size 0x178, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' to 'int' mwccps2.exe Compiler: @ 219: ((s32)((void *)(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)))))), 0);
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7C40.s */

// src/menu/mn_csmodel.c func_002B7C40 cerr diff=-1/0
void func_002B7C40(u8 *arg0) {
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *var_s0;

    temp_s3 = gPracMode;
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C))))))), 0);
    *(s32 *)((u8 *)arg0 + 4) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0xC))))))), 0);
    *(s32 *)((u8 *)arg0 + 8) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x18))))))), 0);
    *(s32 *)((u8 *)arg0 + 0xC) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0xA0))))))), 0);
    var_s2 = 0;
    var_s1 = 0;
    var_s0 = arg0;
    do {
        *(s32 *)((u8 *)var_s0 + 0x10) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C) + var_s1) + 0x4C))))))), 0);
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 2);
    *(s32 *)((u8 *)arg0 + 0x40) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x24))))))), 0);
    *(s32 *)((u8 *)arg0 + 0x44) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x30))))))), 0);
    *(s32 *)((u8 *)arg0 + 0x48) = func_0022D860((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 4))))))), 0);
    *(s32 *)((u8 *)arg0 + 0x4C) = func_0022D860((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x1C))))))), 0);
    *(s32 *)((u8 *)arg0 + 0x50) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x94))))))), 0);
}
