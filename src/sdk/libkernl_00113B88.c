#include "common.h"

s32 func_00115BE0(s32, s32, s32, s32);              /* extern */

s32 func_00115B20(s32);                             /* extern */

s32 func_00115A88(s32);                             /* extern */

s32 func_001158A0(s32);                             /* extern */

s32 func_001157A0(s32);                             /* extern */

s32 func_001156F0(s32, s32);                        /* extern */

s32 func_00115600(s32);                             /* extern */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_00115548();                                /* extern */

s32 Exit(s32);                                  /* extern */

s32 func_00113D78();                            /* extern */

s32 func_0010B038();                            /* extern */
s32 func_00113BF0();                            /* extern */
s32 func_00114388();                            /* extern */
s32 func_001144C8();                            /* extern */
s32 func_00114700();                            /* extern */
s32 func_00114AB8();                            /* extern */
s32 func_00114C30(s32);                     /* extern */
s32 func_00114E70();                            /* extern */
s32 func_001162F0();                            /* extern */

extern s32 D_003ECD54;

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113B88);
s32 func_00113B98_x00113B98(s32 *arg0, s32 *arg1, u32 arg2) __asm__("func_00113B98");
s32 func_00113B98_x00113B98(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v1;
    u32 temp_a2;
    u32 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = arg2 >> 2;
    var_a3 = 0;
    if (temp_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < temp_a2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BE0);
typedef unsigned char u8_x00113BF0;
typedef signed int s32_x00113BF0;
typedef unsigned int u32_x00113BF0;
typedef struct SdfKernelThreadParam_x00113BF0 {
    s32_x00113BF0 status;              
    void (*entry_x00113BF0)(void);     
    void *stack_x00113BF0;             
    s32_x00113BF0 stackSize_x00113BF0;           
    void *gp_x00113BF0;                
    s32_x00113BF0 priority_x00113BF0;            
    u8_x00113BF0 opaque18_x00113BF0[0x18];       
} SdfKernelThreadParam_x00113BF0;
typedef char SdfKernelThreadParam_size_must_be_0x30[
    (sizeof(SdfKernelThreadParam_x00113BF0) == 0x30) ? 1 : -1];
typedef char SdfKernelThreadParam_entry_offset_must_be_0x04[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->entry_x00113BF0 == 0x04) ? 1 : -1];
typedef char SdfKernelThreadParam_stack_offset_must_be_0x08[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->stack_x00113BF0 == 0x08) ? 1 : -1];
typedef char SdfKernelThreadParam_stackSize_offset_must_be_0x0C[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->stackSize_x00113BF0 == 0x0C) ? 1 : -1];
typedef char SdfKernelThreadParam_gp_offset_must_be_0x10[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->gp_x00113BF0 == 0x10) ? 1 : -1];
typedef char SdfKernelThreadParam_priority_offset_must_be_0x14[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->priority_x00113BF0 == 0x14) ? 1 : -1];
typedef char SdfKernelThreadParam_opaque18_offset_must_be_0x18[
    ((u32_x00113BF0)&((SdfKernelThreadParam_x00113BF0 *)0)->opaque18_x00113BF0 == 0x18) ? 1 : -1];
void FlushCache_x00113BF0(s32_x00113BF0 mode) __asm__("FlushCache");
extern void FlushCache_x00113BF0(s32_x00113BF0 mode) __asm__("FlushCache");
typedef struct {
    u32_x00113BF0 index;
    void (*entry_x00113BF0)(void);
} kernelEntryPair_t_x00113BF0;
extern void FlushCache_x00113BF0(s32_x00113BF0 mode) __asm__("FlushCache");
extern void *execArgumentBlock_x00113BF0 __asm__("D_003ECA60");
extern kernelEntryPair_t_x00113BF0 tlbEntryPairs_x00113BF0[8] __asm__("D_003ECA68");
extern void *execArgumentBlock_x00113BF0 __asm__("D_003ECA60");
extern const u8_x00113BF0 TLBFunctionsImage_x00113BF0[0x330] __asm__("D_003EC6E8");
extern s32_x00113BF0 Copy_2_x00113BF0(void *destination, const void *source, u32_x00113BF0 size) __asm__("func_00113B88");
extern void *GetEntryAddress_1_x00113BF0(u32_x00113BF0 index) __asm__("func_00113BD0");
extern void setup_0_x00113BF0(u32_x00113BF0 index, void *entry_x00113BF0) __asm__("func_00113BE0");
void func_00113BF0_x00113BF0(void) __asm__("func_00113BF0");
/* InitTLBFunctions: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00113BF0_x00113BF0(void)
{
    u32_x00113BF0 index;
    u32_x00113BF0 i;
    void *entry_x00113BF0;

    setup_0_x00113BF0(tlbEntryPairs_x00113BF0[0].index, tlbEntryPairs_x00113BF0[0].entry_x00113BF0);
    Copy_2_x00113BF0((void *)0x80075000, TLBFunctionsImage_x00113BF0, 0x330);
    FlushCache_x00113BF0(0);
    FlushCache_x00113BF0(2);
    setup_0_x00113BF0(tlbEntryPairs_x00113BF0[1].index, tlbEntryPairs_x00113BF0[1].entry_x00113BF0);
    setup_0_x00113BF0(tlbEntryPairs_x00113BF0[2].index, tlbEntryPairs_x00113BF0[2].entry_x00113BF0);
    for (i = 3; i < 8; i++) {
        index = tlbEntryPairs_x00113BF0[i].index;
        entry_x00113BF0 = GetEntryAddress_1_x00113BF0(index);
        setup_0_x00113BF0(tlbEntryPairs_x00113BF0[i].index, entry_x00113BF0);
    }
    execArgumentBlock_x00113BF0 = GetEntryAddress_1_x00113BF0(3);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CD8);
s32 func_00113CD8_x00113CE8() __asm__("func_00113CD8");
s32 func_00113CE8_x00113CE8(s32 arg0) __asm__("func_00113CE8");
s32 func_00113CE8_x00113CE8(s32 arg0)
{
  if (((u32) (arg0 - 0xD)) >= 0x23U)
  {
    return -1;
  }
  if (arg0)
  {
    return func_00113CD8_x00113CE8();
  }
  else
  {
    return func_00113CD8_x00113CE8();
  }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D18);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D28);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D38);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D48);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D68);
typedef signed int         s32_x00113D78;
extern s32_x00113D78 GetMemorySize_x00113D78() __asm__("GetMemorySize");
extern s32_x00113D78 _InitTLB_x00113D78() __asm__("func_0010A6D0");
extern s32_x00113D78 InitTLB32MB_x00113D78() __asm__("func_00113DB8");
s32_x00113D78 func_00113D78_x00113D78(void) __asm__("func_00113D78");
/* InitTLB: from https://github.com/lombyte-project/Lombyte (src/sdk/kernel/init_tlb.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00113D78 func_00113D78_x00113D78(void) {
    s32_x00113D78 tlb_init_result;

    if (GetMemorySize_x00113D78() == 0x2000000) {
        tlb_init_result = InitTLB32MB_x00113D78();
    } else {
        tlb_init_result = _InitTLB_x00113D78();
    }
    return tlb_init_result;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113DB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kTLBException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kDebugException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", DI);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", EI);
extern int CreateSema_x00114388(struct SemaParam_x00114388 *p) __asm__("CreateSema");
extern char D_00460370_x00114388[] __asm__("D_0045D9D0");
extern char D_00460380_x00114388[] __asm__("D_0045D9E0");
extern int D_003FAF18_x00114388 __asm__("D_003ECD50");
extern int D_003FAF1C_x00114388 __asm__("D_003ECD54");
struct SemaParam_x00114388 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
void func_00114388_x00114388(void) __asm__("func_00114388");
/* supplement_crt0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b0268.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114388_x00114388(void)
{
    struct SemaParam_x00114388 s1;
    struct SemaParam_x00114388 s2;

    s1.maxCount = 1;
    s1.initCount = 1;
    s1.option = (unsigned int)D_00460370_x00114388;
    s2.maxCount = 1;
    s2.initCount = 1;
    s2.option = (unsigned int)D_00460380_x00114388;
    D_003FAF18_x00114388 = CreateSema_x00114388(&s1);
    D_003FAF1C_x00114388 = CreateSema_x00114388(&s2);
}
s32 func_001143E8(void) {
    return D_003ECD54;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001143F8);
s32 func_00114408_x00114408(s32 *arg0, s32 *arg1, u32 arg2) __asm__("func_00114408");
s32 func_00114408_x00114408(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v1;
    u32 temp_a2;
    u32 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = arg2 >> 2;
    var_a3 = 0;
    if (temp_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < temp_a2);
    }
    return 0;
}
typedef unsigned int       u32_x00114440;
u32_x00114440 *func_00114440_x00114440(u32_x00114440 *addr, u32_x00114440 *end, u32_x00114440 key) __asm__("func_00114440");
/* FindKernelAddress: from https://github.com/lombyte-project/Lombyte (src/sdk/system/find_kernel_address.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x00114440 *func_00114440_x00114440(u32_x00114440 *addr, u32_x00114440 *end, u32_x00114440 key) {
    u32_x00114440 current_word;
    for (;;) {
        current_word = *addr;
        if (current_word == key) {
            break;
        }
        if (!(addr < end)) {
            break;
        }
        addr++;
    }
    return (addr < end) ? addr : 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114480);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114490);
s32 func_00114480_x001144C8(s32, s32, s32 *) __asm__("func_00114480");
s32 func_001145C8_x001144C8(s32, s32) __asm__("func_001145C8");
extern u32 D_003ECD38_x001144C8 __asm__("D_003ECD38");
extern s32 D_003ECD40_x001144C8 __asm__("D_003ECD40");
extern s32 func_00114408_x001144C8 __asm__("func_00114408");
extern s32 func_00114440_x001144C8 __asm__("func_00114440");
void func_001144C8_x001144C8(void) __asm__("func_001144C8");
void func_001144C8_x001144C8(void)
{
  s32 var_s2;
  s32 var_s3;
  s32 var_v0;
  u32 var_s0;
  u32 var_s1;
  func_001145C8_x001144C8(*((s32 *) (((u8 *) (&D_003ECD40_x001144C8)) + 0)), *((s32 *) (((u8 *) (&D_003ECD40_x001144C8)) + 4)));
  func_001145C8_x001144C8(*((s32 *) (((u8 *) (&D_003ECD40_x001144C8)) + 8)), *((s32 *) (((u8 *) (&D_003ECD40_x001144C8)) + 0xC)));
  var_s3 = func_00114480_x001144C8(0x80000000, 0x80080000, &func_00114440_x001144C8);
  var_s1 = var_s3 - 0x20C;
  var_s2 = func_00114480_x001144C8(0x80000000, 0x80080000, &func_00114408_x001144C8);
  var_s0 = var_s2 - 0x168;
  if (var_s1 != var_s0)
  {
    ;
    do
    {
      if ((var_s1 < var_s0) != 0)
      {
        var_s3 = func_00114480_x001144C8(var_s3 + 4, 0x80080000, &func_00114440_x001144C8);
        var_s1 = var_s3 - 0x20C;
      }
      else
      {
        var_s2 = func_00114480_x001144C8(var_s2 + 4, 0x80080000, &func_00114408_x001144C8);
        var_s0 = var_s2 - 0x168;
      }
      var_v0 = var_s1 < var_s0;
    }
    while (var_s1 != var_s0);
  }
  D_003ECD38_x001144C8 = var_s1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001145C8);
void func_001145D8(void) {
    func_00114388();
    func_001144C8();
    func_00114AB8();
    func_00114C30(2);
    func_00114E70();
    func_0010B038();
    func_00114700();
    func_00113BF0();
    func_001162F0();
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114630);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114640);
s32 func_00114650_x00114650(s32 *arg0, s32 *arg1, u32 arg2) __asm__("func_00114650");
s32 func_00114650_x00114650(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v1;
    u32 temp_a2;
    u32 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = arg2 >> 2;
    var_a3 = 0;
    if (temp_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < temp_a2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114688);
typedef unsigned char      u8_x00114698;
typedef signed int         s32_x00114698;
typedef unsigned int       u32_x00114698;
extern s32_x00114698 GetOsdConfigParam_x00114698() __asm__("GetOsdConfigParam");
extern s32_x00114698 SetOsdConfigParam_x00114698() __asm__("SetOsdConfigParam");
s32_x00114698 func_00114698_x00114698(void) __asm__("func_00114698");
/* PatchIsNeeded: from https://github.com/lombyte-project/Lombyte (src/sdk/kernel/PatchIsNeeded.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00114698 func_00114698_x00114698(void) {
    union {
        u32_x00114698 words[4];
        struct {
            u32_x00114698 a;
            u32_x00114698 b;
            u8_x00114698  pad[8];
        } f;
    } cfg;

    GetOsdConfigParam_x00114698(&cfg);
    cfg.f.b = (cfg.f.a & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam_x00114698(&cfg.f.b);
    GetOsdConfigParam_x00114698(&cfg.f.b);
    SetOsdConfigParam_x00114698(&cfg);
    return ((cfg.f.b >> 13) & 7) == 0;
}
typedef unsigned char u8_x00114700;
typedef signed int s32_x00114700;
typedef unsigned int u32_x00114700;
extern void FlushCache_x00114700(s32_x00114700 mode) __asm__("FlushCache");
typedef struct {
    u32_x00114700 index;
    void (*entry)(void);
} kernelEntryPair_t_x00114700;
s32_x00114700 PatchIsNeeded_0_x00114700(void) __asm__("func_00114698");
extern void FlushCache_x00114700(s32_x00114700 mode) __asm__("FlushCache");
extern kernelEntryPair_t_x00114700 execEntryPairs_x00114700[3] __asm__("D_003ED500");
extern const u8_x00114700 execPs2Payload_x00114700[0x7A8] __asm__("D_003ECD58");
extern s32_x00114700 PatchIsNeeded_0_x00114700(void) __asm__("func_00114698");
extern void gcc2_compiled__15_x00114700(u32_x00114700 index, void *entry) __asm__("func_00114630");
extern s32_x00114700 Copy_0_x00114700(void *destination, const void *source, u32_x00114700 size) __asm__("func_00114640");
extern void *GetEntryAddress_x00114700(u32_x00114700 index) __asm__("func_00114688");
void func_00114700_x00114700(void) __asm__("func_00114700");
/* InitExecPS2: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114700_x00114700(void)
{
    u32_x00114700 index;
    u32_x00114700 i;
    void *entry;

    if (PatchIsNeeded_0_x00114700() == 0) {
        return;
    }
    gcc2_compiled__15_x00114700(execEntryPairs_x00114700[0].index, execEntryPairs_x00114700[0].entry);
    Copy_0_x00114700((void *)0x80074000, execPs2Payload_x00114700, 0x7A8);
    FlushCache_x00114700(0);
    FlushCache_x00114700(2);
    gcc2_compiled__15_x00114700(execEntryPairs_x00114700[1].index, execEntryPairs_x00114700[1].entry);
    for (i = 2; i < 3; i++) {
        index = execEntryPairs_x00114700[i].index;
        entry = GetEntryAddress_x00114700(index);
        gcc2_compiled__15_x00114700(execEntryPairs_x00114700[i].index, entry);
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147B0);
s32 func_001147C0(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a3;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    if (arg2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < arg2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114800);
void func_00114918(void) {
    func_00113D78();
}
typedef signed int s32_x00114920;
typedef struct execArgumentBlock_t_x00114920 {
    char *arguments[16];
    char strings[1];
} execArgumentBlock_t_x00114920;
extern void *execArgumentBlock_x00114920 __asm__("D_003ECA60");
char *SetArg_x00114920(const char *path, s32_x00114920 count, const char *const *arguments) __asm__("func_00114800");
void TerminateLibrary_x00114920(void) __asm__("func_00114918");
extern const char execDefaultPath_x00114920[] __asm__("D_0045D9F0");
extern s32_x00114920 _ExecPS2_x00114920(void *entry, void *gp, s32_x00114920 count, char **arguments) __asm__("ExecPS2");
extern void *execArgumentBlock_x00114920 __asm__("D_003ECA60");
extern const char execDefaultPath_x00114920[8] __asm__("D_0045D9F0");
s32_x00114920 func_00114920_x00114920(void *entry, void *gp, s32_x00114920 count, const char *const *arguments) __asm__("func_00114920");
/* ExecPS2: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00114920 func_00114920_x00114920(void *entry, void *gp, s32_x00114920 count, const char *const *arguments)
{
    SetArg_x00114920(execDefaultPath_x00114920, count, arguments);
    TerminateLibrary_x00114920();
    return _ExecPS2_x00114920(entry, gp, count,
                    &((execArgumentBlock_t_x00114920 *)execArgumentBlock_x00114920)->arguments[1]);
}
typedef signed int s32_x00114990;
typedef struct execArgumentBlock_t_x00114990 {
    char *arguments[16];
    char strings[1];
} execArgumentBlock_t_x00114990;
extern void *execArgumentBlock_x00114990 __asm__("D_003ECA60");
char *SetArg_x00114990(const char *path, s32_x00114990 count, const char *const *arguments) __asm__("func_00114800");
void TerminateLibrary_x00114990(void) __asm__("func_00114918");
extern void libc_2DBAE0_x00114990(const char *path, s32_x00114990 count, char **arguments) __asm__("LoadExecPS2");
extern void *execArgumentBlock_x00114990 __asm__("D_003ECA60");
void func_00114990_x00114990(const char *path, s32_x00114990 count, char **arguments) __asm__("func_00114990");
/* LoadExecPS2: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114990_x00114990(const char *path, s32_x00114990 count, char **arguments)
{
    char *packedPath = SetArg_x00114990(path, count, (const char *const *)arguments);
    TerminateLibrary_x00114990();
    libc_2DBAE0_x00114990(packedPath, count,
                  &((execArgumentBlock_t_x00114990 *)execArgumentBlock_x00114990)->arguments[1]);
}
void Exit_001149D8(s32 arg0) {
    func_00114918();
    Exit(arg0);
}
typedef signed int s32_x00114A00;
typedef struct execArgumentBlock_t_x00114A00 {
    char *arguments[16];
    char strings[1];
} execArgumentBlock_t_x00114A00;
extern void *execArgumentBlock_x00114A00 __asm__("D_003ECA60");
char *SetArg_x00114A00(const char *path, s32_x00114A00 count, const char *const *arguments) __asm__("func_00114800");
void TerminateLibrary_x00114A00(void) __asm__("func_00114918");
extern const char execDefaultPath_x00114A00[] __asm__("D_0045D9F0");
extern void _ExecOSD_x00114A00(s32_x00114A00 count, char **arguments) __asm__("ExecOSD");
extern void *execArgumentBlock_x00114A00 __asm__("D_003ECA60");
extern const char execDefaultPath_x00114A00[8] __asm__("D_0045D9F0");
void func_00114A00_x00114A00(s32_x00114A00 count, const char *const *arguments) __asm__("func_00114A00");
/* ExecOSD: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114A00_x00114A00(s32_x00114A00 count, const char *const *arguments)
{
    SetArg_x00114A00(execDefaultPath_x00114A00, count, arguments);
    TerminateLibrary_x00114A00();
    _ExecOSD_x00114A00(count, &((execArgumentBlock_t_x00114A00 *)execArgumentBlock_x00114A00)->arguments[1]);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A60);
s32 func_00114A70_x00114A70(s32 *arg0, s32 *arg1, u32 arg2) __asm__("func_00114A70");
s32 func_00114A70_x00114A70(s32 *arg0, s32 *arg1, u32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v1;
    u32 temp_a2;
    u32 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = arg2 >> 2;
    var_a3 = 0;
    if (temp_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < temp_a2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114AA8);
void RFU090_x00114AB8(void *dst, void *src, int size) __asm__("func_00114A60");
void *RFU091_x00114AB8(int num) __asm__("func_00114AA8");
void RFU116_SetSyscall_x00114AB8(int num, void *func) __asm__("func_00114A50");
void FlushCache_x00114AB8(int mode) __asm__("FlushCache");
typedef struct SyscallPatch_x00114AB8 {
    int num;
    void *func;
} SyscallPatch_x00114AB8;
extern SyscallPatch_x00114AB8 libkernl_syscall_patches_x00114AB8[8] __asm__("D_003EDC88");
extern char libkernl_patch_code_x00114AB8[] __asm__("D_003ED520");
extern char libkernl_patch_code2_x00114AB8[] __asm__("D_003EDC60");
void func_00114AB8_x00114AB8(void) __asm__("func_00114AB8");
/* libkernl_install_patches: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_patch.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114AB8_x00114AB8(void)
{
    unsigned int i;
    SyscallPatch_x00114AB8 *patch;

    if (*(volatile unsigned int *)0x10001810 & 0x100)
        return;
    RFU116_SetSyscall_x00114AB8(libkernl_syscall_patches_x00114AB8[0].num, libkernl_syscall_patches_x00114AB8[0].func);
    RFU090_x00114AB8((void *)0x80076000, libkernl_patch_code_x00114AB8, 0x740);
    RFU090_x00114AB8((void *)0x00082000, libkernl_patch_code2_x00114AB8, 40);
    FlushCache_x00114AB8(0);
    FlushCache_x00114AB8(2);
    RFU116_SetSyscall_x00114AB8(libkernl_syscall_patches_x00114AB8[1].num, libkernl_syscall_patches_x00114AB8[1].func);
    for (i = 2, patch = &libkernl_syscall_patches_x00114AB8[2]; i < 8; i++, patch++)
        RFU116_SetSyscall_x00114AB8(patch->num, RFU091_x00114AB8(patch->num));
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114B90);
s32 func_00114B90_x00114C00(s32, s32) __asm__("func_00114B90");
void func_00114C00_x00114C00(s32 arg0) __asm__("func_00114C00");
void func_00114C00_x00114C00(s32 arg0) {
    func_00114B90_x00114C00(0xB0001000, arg0);
}
s32 func_00114B90_x00114C10(s32, s32) __asm__("func_00114B90");
void func_00114C10_x00114C10(s32 arg0) __asm__("func_00114C10");
void func_00114C10_x00114C10(s32 arg0) {
    func_00114B90_x00114C10(0xB0001010, arg0);
}
s32 func_00114B90_x00114C20(s32, s32) __asm__("func_00114B90");
void func_00114C20_x00114C20(s32 arg0) __asm__("func_00114C20");
void func_00114C20_x00114C20(s32 arg0) {
    func_00114B90_x00114C20(0xB0001020, arg0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114D88);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114E40);
int DIntr_x00114E70(void) __asm__("DI");
int EIntr_x00114E70(void) __asm__("EI");
extern void SetT2_B0001010_3B6A10_x00114E70(int mode) __asm__("func_00114C10");
extern unsigned long iGetTimerSystemTime_x00114E70(void) __asm__("func_00115478");
extern void SetNextComp_x00114E70(unsigned long t) __asm__("func_00114F80");
int func_00114E70_x00114E70(void) __asm__("func_00114E70");
/* func_003B6B90: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2cd0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114E70_x00114E70(void)
{
    int state;
    int mode;

    state = DIntr_x00114E70();
    mode = *(volatile int *)0x10001010;
    if (mode & 0x80) {
        if (state != 0) {
            EIntr_x00114E70();
        }
        return 1;
    }
    SetT2_B0001010_3B6A10_x00114E70((mode & 0xFFFFF3FF) | 0x80);
    SetNextComp_x00114E70(iGetTimerSystemTime_x00114E70());
    if (state != 0) {
        EIntr_x00114E70();
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F80);
typedef struct _timer_alarm_x00115110 sceTimerAlarm_x00115110;
struct _timer_alarm_x00115110 {
    sceTimerAlarm_x00115110 *next;       
    sceTimerAlarm_x00115110 *prev;       
    unsigned char  pad08[0x8];
    unsigned long  interval;   
    unsigned long  elapsed;    
    unsigned long  start;      
};
typedef struct _timer_ctl_x00115110 {
    unsigned long  ovf;        
    unsigned char  pad08[0x10];
    sceTimerAlarm_x00115110 *alarms;     
} sceTimerCtl_x00115110;
extern sceTimerCtl_x00115110 D_003FBE90_x00115110 __asm__("D_003EDCC8");
void func_00115110_x00115110(sceTimerAlarm_x00115110 *a) __asm__("func_00115110");
/* func_003B6DB8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b6db8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00115110_x00115110(sceTimerAlarm_x00115110 *a)
{
    sceTimerAlarm_x00115110 *prev;
    sceTimerAlarm_x00115110 *cur;
    unsigned long t;

    t = (a->start + a->interval) - a->elapsed;
    prev = 0;
    cur = D_003FBE90_x00115110.alarms;
    while (cur != 0) {
        if (t < (cur->start + cur->interval) - cur->elapsed) {
            break;
        }
        prev = cur;
        cur = prev->next;
    }
    a->prev = prev;
    a->next = cur;
    if (cur != 0) {
        cur->prev = a;
    }
    if (prev != 0) {
        prev->next = a;
    } else {
        D_003FBE90_x00115110.alarms = a;
    }
}
extern void *D_003EDCE0_x00115198 __asm__("D_003EDCE0");
u8 *func_00115198_x00115198(u8 *arg0) __asm__("func_00115198");
u8 *func_00115198_x00115198(u8 *arg0)
{
  u8 **temp_v0;
  u8 *temp_v1;
  temp_v0 = *((u8 ***) (((u8 *) arg0) + 4));
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0));
  if (temp_v0 != ((void *) 0))
  {
    *temp_v0 = temp_v1;
    arg0++;
    arg0--;
  }
  else
  {
    D_003EDCE0_x00115198 = temp_v1;
  }
  if (temp_v1 != ((void *) 0))
  {
    *((u8 ***) (((u8 *) temp_v1) + 4)) = (u8 **) (*((u8 ***) (((u8 *) arg0) + 4)));
  }
  *((u8 ***) (((u8 *) arg0) + 4)) = (void *) 0;
  return temp_v1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001151D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115478);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001154C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115548);
s32 func_001155B8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = DI();
    temp_s1 = func_00115548();
    if (temp_s0 != 0) {
        EI();
    }
    return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115600);
s32 func_001156A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115600(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001156F0);
s32 func_00115740(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = DI();
    temp_s0 = func_001156F0(arg0, arg1);
    if (temp_s2 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001157A0);
s32 func_00115850(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001157A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001158A0);
s32 func_00115968(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001158A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001159B8);
long long func_00115A88_x00115A88(u32 arg0) __asm__("func_00115A88");
long long func_00115A88_x00115A88(u32 arg0)
{
  s32 temp_a1;
  temp_a1 = (arg0 >> 0xA) << 6;
  if (((s32) arg0) < 0)
  {
    goto block_4;
  }
  if ((arg0 & 0x3FF) != (*((s32 *) (((u8 *) temp_a1) + 8))))
  {
    goto block_3;
  }
  goto block_5;
  block_3:
  block_4:
  return -1;


  block_5:
  if (!((*((s32 *) (((u8 *) temp_a1) + 0xC))) & 1))
  {
    goto block_7;
  }

  return (*((s64 *) (((u8 *) temp_a1) + 0x10))) - (*((s64 *) (((u8 *) temp_a1) + 0x18)));
  block_7:
  return 0;

}
s32 func_00115AD0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115A88(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115B20);
s32 func_00115B90(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115B20(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115BE0);
s32 func_00115CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;

    temp_s4 = DI();
    temp_s0 = func_00115BE0(arg0, arg1, arg2, arg3);
    if (temp_s4 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E70);
s32 func_00121288_x00115EC8(f32) __asm__("func_00121288");
s32 func_00115EC8_x00115EC8(f32 fparg0) __asm__("func_00115EC8");
s32 func_00115EC8_x00115EC8(f32 fparg0) {
    return func_00121288_x00115EC8(1.47456e8f / fparg0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115FB0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001160E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001161D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116278);
s32 memset_x001162F0(s32 *, s32, s32) __asm__("memset");
extern s32 D_003EDCE8_x001162F0 __asm__("D_003EDCE8");
extern s32 D_003EDCEC_x001162F0 __asm__("D_003EDCEC");
extern s32 D_00478708_x001162F0 __asm__("D_00478708");
void func_001162F0_x001162F0(void) __asm__("func_001162F0");
void func_001162F0_x001162F0(void) {
    D_003EDCE8_x001162F0 = 0;
    D_003EDCEC_x001162F0 = 0;
    memset_x001162F0(&D_00478708_x001162F0, 0, 0x200);
}
s32 DI_x00116318() __asm__("DI");
s32 EI_x00116318() __asm__("EI");
s32 memset_x00116318(s32, s32, s32) __asm__("memset");
extern s32 D_003EDCE8_x00116318 __asm__("D_003EDCE8");
extern s32 D_003EDCEC_x00116318 __asm__("D_003EDCEC");
s32 func_00116318_x00116318(s32 arg0, s32 arg1) __asm__("func_00116318");
s32 func_00116318_x00116318(s32 arg0, s32 arg1)
{
  s32 temp_s2;
  s32 new_var;
  s32 temp_s3;
  new_var = DI_x00116318();
  temp_s3 = D_003EDCE8_x00116318;
  temp_s2 = new_var;
  D_003EDCE8_x00116318 = arg0;
  D_003EDCEC_x00116318 = arg1;
  memset_x00116318(arg0, 0, arg1 * 0x10);
  if (temp_s2 != 0)
  {
    EI_x00116318();
  }
  return temp_s3;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116398);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116450);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001164A8);
