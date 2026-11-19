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

SYSCALL_STUB(func_00113B88, 90);
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
SYSCALL_STUB(func_00113BD0, 91);
SYSCALL_STUB(func_00113BE0, 116);
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
SYSCALL_STUB(func_00113CB8, 85);
SYSCALL_STUB(func_00113CC8, -85);
SYSCALL_STUB(func_00113CD8, 86);
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
SYSCALL_STUB(func_00113D18, -86);
SYSCALL_STUB(func_00113D28, 87);
SYSCALL_STUB(func_00113D38, -87);
SYSCALL_STUB(func_00113D48, 88);
SYSCALL_STUB(func_00113D58, -88);
SYSCALL_STUB(func_00113D68, 89);
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
typedef unsigned int u_int_x00113DB8;
struct TLBEntry_x00113DB8 {
	u_int_x00113DB8 PageMask;
	u_int_x00113DB8 EntryHi;
	u_int_x00113DB8 EntryLo0;
	u_int_x00113DB8 EntryLo1;
};
struct TLBInfo_x00113DB8 {
	int NumKernelTLBEntries;
	int NumDefaultTLBEntries;
	int NumExtendedTLBEntries;
	int NumWiredEntries;
	struct TLBEntry_x00113DB8 *kernelTLB_x00113DB8;
	struct TLBEntry_x00113DB8 *defaultTLB_x00113DB8;
	struct TLBEntry_x00113DB8 *extendedTLB;
};
extern int kprintf_x00113DB8(const char *fmt, ...) __asm__("func_0010CFC8");
extern void Exit_x00113DB8(int status) __asm__("func_001149D8");
extern struct TLBEntry_x00113DB8 kernelTLB_x00113DB8[13] __asm__("kernelTLB");
extern struct TLBEntry_x00113DB8 defaultTLB_x00113DB8[18] __asm__("defaultTLB");
extern struct TLBInfo_x00113DB8 TLBInfo_x00113DB8 __asm__("D_003ECD18");
int _SetTLBEntry_x00113DB8(u_int_x00113DB8 index, u_int_x00113DB8 PageMask, u_int_x00113DB8 EntryHi, u_int_x00113DB8 EntryLo0, u_int_x00113DB8 EntryLo1) __asm__("func_00113CD8");
extern char ext_str0_x00113DB8[] __asm__("D_0045D9B8");
extern char ext_str1_x00113DB8[] __asm__("D_0045D9A0");
extern char ext_str2_x00113DB8[] __asm__("D_0045D988");
extern char ext_str3_x00113DB8[] __asm__("D_0045D950");
int func_00113DB8_x00113DB8(void) __asm__("func_00113DB8");
/* InitTLB32MB: from https://github.com/DabDavis/socom2-decomp (src/lib/sdk/tlbfunc.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113DB8_x00113DB8(void)
{
	register int i asm ("$25");
	int n, end;
	u_int_x00113DB8 value;
	struct TLBEntry_x00113DB8 *e;

	kprintf_x00113DB8(ext_str3_x00113DB8,
	        TLBInfo_x00113DB8.NumKernelTLBEntries - 1, TLBInfo_x00113DB8.NumKernelTLBEntries,
	        TLBInfo_x00113DB8.NumKernelTLBEntries + TLBInfo_x00113DB8.NumDefaultTLBEntries - 1,
	        TLBInfo_x00113DB8.NumKernelTLBEntries + TLBInfo_x00113DB8.NumDefaultTLBEntries,
	        TLBInfo_x00113DB8.NumKernelTLBEntries + TLBInfo_x00113DB8.NumDefaultTLBEntries + TLBInfo_x00113DB8.NumExtendedTLBEntries - 1);
	asm volatile ("mtc0 $0, $6\n\tsync.p");
	i = 0;
	end = TLBInfo_x00113DB8.NumKernelTLBEntries;
	if (end > 48) {
		kprintf_x00113DB8(ext_str2_x00113DB8);
		Exit_x00113DB8(1);
	}
	for (e = TLBInfo_x00113DB8.kernelTLB_x00113DB8; i < end; i++, e++)
		_SetTLBEntry_x00113DB8(i, e->PageMask, e->EntryHi, e->EntryLo0, e->EntryLo1);
	end = i + TLBInfo_x00113DB8.NumDefaultTLBEntries;
	if (end > 48) {
		kprintf_x00113DB8(ext_str1_x00113DB8);
		Exit_x00113DB8(1);
	}
	for (e = TLBInfo_x00113DB8.defaultTLB_x00113DB8; i < end; i++, e++)
		_SetTLBEntry_x00113DB8(i, e->PageMask, e->EntryHi, e->EntryLo0, e->EntryLo1);
	TLBInfo_x00113DB8.NumWiredEntries = i;
	asm volatile ("mtc0 %0, $6\n\tsync.p" : : "r" (i));
	if (TLBInfo_x00113DB8.NumExtendedTLBEntries > 0) {
		end = i + TLBInfo_x00113DB8.NumExtendedTLBEntries;
		if (end > 48) {
			kprintf_x00113DB8(ext_str0_x00113DB8);
			Exit_x00113DB8(1);
		}
		for (e = TLBInfo_x00113DB8.extendedTLB; i < end; i++, e++)
			_SetTLBEntry_x00113DB8(i, e->PageMask, e->EntryHi, e->EntryLo0, e->EntryLo1);
	}
	n = i;
	i <<= 13;
	if (n < 48) {
		value = 0xE0000000 + i;
		do {
			_SetTLBEntry_x00113DB8(n, 0, value, 0, 0);
			n++;
			value += 0x2000;
		} while (n < 48);
	}
	return i;
}
INCLUDE_PAD(20);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kTLBException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kDebugException);
int DI_x00114320(void) __asm__("DI");
/* DIntr: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_1161A0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int DI_x00114320(void)
{
    int s, v;
    __asm__ volatile("mfc0 %0, $12" : "=r"(s));
    s &= 0x10000;
    if (s) {
        do {
            __asm__ volatile("di");
            __asm__ volatile("sync.p");
            __asm__ volatile("mfc0 %0, $12" : "=r"(v));
            v &= 0x10000;
             
            __asm__ volatile("nop\n\tnop" : "+r"(v));
        } while (v);
    }
    return s != 0;
}
int EI_x00114370(void) __asm__("EI");
/* EIntr: from https://github.com/denzi-gh/crashwoc-decomp-ps2 (src/sdk/sce/diei.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int EI_x00114370(void)
{
    int eie;

    __asm__ volatile ("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    __asm__ volatile ("ei");
    return eie != 0;
}
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
SYSCALL_STUB(func_001143F8, 90);
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
SYSCALL_STUB(func_00114480, 131);
extern int *_SyscallEntry_x00114490 __asm__("D_003ECD38");
int Copy_x00114490(void *dst, void *src, int size) __asm__("func_001143F8");
void *func_00114490_x00114490(int number) __asm__("func_00114490");
/* GetSystemCallEntry: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/initsys.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void *func_00114490_x00114490(int number)
{
    void *entry;
    Copy_x00114490(&entry, _SyscallEntry_x00114490 + number, 4);
    return entry;
}
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
SYSCALL_STUB(func_001145C8, 116);
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
SYSCALL_STUB(func_00114630, 116);
SYSCALL_STUB(func_00114640, 90);
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
SYSCALL_STUB(func_00114688, 91);
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
SYSCALL_STUB(func_001147B0, 90);
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
SYSCALL_STUB(func_001147F0, 116);
typedef struct {
    int number;
    void *handler;
} SyscallEntry_x00114800;
extern char *_kExecArg_x00114800 __asm__("D_003ECA60");
typedef unsigned int size_t_x00114800;
size_t_x00114800 strlen_x00114800(const char *) __asm__("func_00127BA0");
extern SyscallEntry_x00114800 SysEntry_exit_x00114800 __asm__("D_003ED518");
int Copy_x00114800(void *dst, const void *src, int size) __asm__("func_001147B0");
void setup_x00114800(int number, void *handler) __asm__("func_001147F0");
char *func_00114800_x00114800(const char *filename, int argc, char **argv) __asm__("func_00114800");
/* SetArg: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/exit.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
char *func_00114800_x00114800(const char *filename, int argc, char **argv)
{
    char **slot = (char **)_kExecArg_x00114800;
    char *data = (char *)(slot + 16);
    char *strings = data;
    int length;
    int i;
    setup_x00114800(SysEntry_exit_x00114800.number, SysEntry_exit_x00114800.handler);
    if (argc > (16 - 1)) argc = (16 - 1);
    Copy_x00114800(slot, &data, 4);
    slot++;
    length = strlen_x00114800(filename) + 1;
    Copy_x00114800(data, filename, length);
    data += length;
    for (i = 0; i < argc; i++) {
        Copy_x00114800(slot, &data, 4);
        slot++;
        length = strlen_x00114800(argv[i]) + 1;
        Copy_x00114800(data, argv[i], length);
        data += length;
    }
    return strings;
}
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
SYSCALL_STUB(func_00114A50, 116);
SYSCALL_STUB(func_00114A60, 90);
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
SYSCALL_STUB(func_00114AA8, 91);
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
void func_00114B90_x00114B90(unsigned int addr, unsigned int value) __asm__("func_00114B90");
/* SetT2: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114B90_x00114B90(unsigned int addr, unsigned int value)
{
    unsigned int eie;
    unsigned int status;

    __asm__("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    if (eie) {
        do {
            __asm__ volatile(".p2align 3\n"
                             "di\n"
                             "sync.p\n"
                             "mfc0 %0, $12" : "=r"(status));
        } while (status & 0x10000);
    }
    __asm__ volatile("mfc0 %0, $12\n\tsync.p" : "=r"(status));
    status = ((status | 0x2 | 0x4) ^ 0x2) | eie;
    __asm__("mtc0 %0, $12\n\tsync.p" : : "r"(status));
    *(unsigned int *)addr = value;
    __asm__(".set push\n\t.set noreorder\n\tmtc0 $31, $30\n\tsync.p\n\teret\n\t.set pop");
}
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
extern int AddIntcHandler_x00114C30(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
int DIntr_x00114C30(void) __asm__("DI");
int EIntr_x00114C30(void) __asm__("EI");
int EnableIntc_x00114C30(int cause) __asm__("func_0010ADA8");
int _sceTimerAlarmInit_x00114C30(void) __asm__("func_00115F00");
typedef unsigned int size_t_x00114C30;
void *memset_x00114C30(void *, int, size_t_x00114C30) __asm__("memset");
typedef unsigned long u_long_x00114C30;
typedef u_long_x00114C30 (*TimerHandler_x00114C30)(int id, u_long_x00114C30 schedule, u_long_x00114C30 actual, void *arg, void *addr);
typedef struct Counter_x00114C30 {
    struct Counter_x00114C30 *next;
    struct Counter_x00114C30 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00114C30 base;
    u_long_x00114C30 count;
    u_long_x00114C30 schedule;
    TimerHandler_x00114C30 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00114C30;
typedef struct {
    volatile u_long_x00114C30 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00114C30 *freeList;
    Counter_x00114C30 *alarms;
    volatile int current;
} TimerState_x00114C30;
extern int AddIntcHandler2_x00114C30(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
int cbTimerHandler_x00114C30(int cause, void *arg, void *addr) __asm__("func_001151D0");
extern TimerState_x00114C30 g_Timer_x00114C30 __asm__("D_003EDCC8");
extern Counter_x00114C30 timerCounters_x00114C30[128] __asm__("D_00476300");
void SetT2_COUNT_x00114C30(unsigned int count) __asm__("func_00114C00");
void SetT2_MODE_x00114C30(unsigned int mode) __asm__("func_00114C10");
void SetT2_COMP_x00114C30(unsigned int comp) __asm__("func_00114C20");
int cbTimerHandler_x00114C30(int cause, void *arg, void *addr) __asm__("func_001151D0");
int func_00114C30_x00114C30(int clock) __asm__("func_00114C30");
/* InitTimer: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114C30_x00114C30(int clock)
{
    int i;
    int handler;
    int intr;
    int mode;
    if (g_Timer_x00114C30.intcHandler >= 0) {
        return 0x80008001;
    }
    g_Timer_x00114C30.overflows = 0;
    g_Timer_x00114C30.usedCounters = 0;
    memset_x00114C30(timerCounters_x00114C30, 0, sizeof(timerCounters_x00114C30));
    g_Timer_x00114C30.freeList = timerCounters_x00114C30;
    for (i = 128 - 1; i >= 0; i--) {
        timerCounters_x00114C30[i].next = &timerCounters_x00114C30[i + 1];
    }
    timerCounters_x00114C30[128 - 1].next = 0;
    _sceTimerAlarmInit_x00114C30();
    handler = AddIntcHandler2_x00114C30(11, (int (*)(int))cbTimerHandler_x00114C30, 0, 0);
    if (handler < 0) {
        return 0x80009021;
    }
    g_Timer_x00114C30.intcHandler = handler;
    intr = DIntr_x00114C30();
    mode = (*(volatile unsigned int *)0x10001010);
    mode = (mode & ~0x3U) | clock;
    mode |= 0x200U | 0x100U;
    if (!(mode & 0x80U)) {
        mode |= 0x800U | 0x400U | 0x80U;
        SetT2_COUNT_x00114C30(0);
        SetT2_COMP_x00114C30(0xffff);
    }
    SetT2_MODE_x00114C30(mode);
    EnableIntc_x00114C30(11);
    if (intr) {
        EIntr_x00114C30();
    }
    return 0;
}
extern int AddIntcHandler_x00114D88(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
int RemoveIntcHandler_x00114D88(int cause, int id) __asm__("RemoveIntcHandler");
int DIntr_x00114D88(void) __asm__("DI");
int EIntr_x00114D88(void) __asm__("EI");
int DisableIntc_x00114D88(int cause) __asm__("func_0010AD40");
typedef unsigned long u_long_x00114D88;
typedef u_long_x00114D88 (*TimerHandler_x00114D88)(int id, u_long_x00114D88 schedule, u_long_x00114D88 actual, void *arg, void *addr);
typedef struct Counter_x00114D88 {
    struct Counter_x00114D88 *next;
    struct Counter_x00114D88 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00114D88 base;
    u_long_x00114D88 count;
    u_long_x00114D88 schedule;
    TimerHandler_x00114D88 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00114D88;
typedef struct {
    volatile u_long_x00114D88 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00114D88 *freeList;
    Counter_x00114D88 *alarms;
    volatile int current;
} TimerState_x00114D88;
extern int AddIntcHandler2_x00114D88(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x00114D88 g_Timer_x00114D88 __asm__("D_003EDCC8");
void SetT2_COUNT_x00114D88(unsigned int count) __asm__("func_00114C00");
void SetT2_MODE_x00114D88(unsigned int mode) __asm__("func_00114C10");
int func_00114D88_x00114D88(void) __asm__("func_00114D88");
/* EndTimer: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114D88_x00114D88(void)
{
    int intr;
    if (g_Timer_x00114D88.intcHandler < 0) {
        return 0x80008001;
    }
    if (g_Timer_x00114D88.usedCounters != 0) {
        return 0x80000010;
    }
    intr = DIntr_x00114D88();
    if (RemoveIntcHandler_x00114D88(11, g_Timer_x00114D88.intcHandler) == 0) {
        DisableIntc_x00114D88(11);
        SetT2_MODE_x00114D88(0x800U | 0x400U);
        SetT2_COUNT_x00114D88(0);
    }
    g_Timer_x00114D88.overflows = 0;
    g_Timer_x00114D88.intcHandler = -1;
    if (intr) {
        EIntr_x00114D88();
    }
    return 0;
}
extern int AddIntcHandler_x00114E40(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x00114E40;
typedef u_long_x00114E40 (*TimerHandler_x00114E40)(int id, u_long_x00114E40 schedule, u_long_x00114E40 actual, void *arg, void *addr);
typedef struct Counter_x00114E40 {
    struct Counter_x00114E40 *next;
    struct Counter_x00114E40 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00114E40 base;
    u_long_x00114E40 count;
    u_long_x00114E40 schedule;
    TimerHandler_x00114E40 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00114E40;
typedef struct {
    volatile u_long_x00114E40 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00114E40 *freeList;
    Counter_x00114E40 *alarms;
    volatile int current;
} TimerState_x00114E40;
extern int AddIntcHandler2_x00114E40(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x00114E40 g_Timer_x00114E40 __asm__("D_003EDCC8");
int func_00114E40_x00114E40(void) __asm__("func_00114E40");
/* GetTimerPreScaleFactor: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114E40_x00114E40(void)
{
    if (g_Timer_x00114E40.intcHandler < 0) {
        return 0x80008001;
    }
    return (*(volatile unsigned int *)0x10001010) & 0x3U;
}
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
int DIntr_x00114F00(void) __asm__("DI");
int EIntr_x00114F00(void) __asm__("EI");
void SetT2_MODE_x00114F00(unsigned int mode) __asm__("func_00114C10");
int func_00114F00_x00114F00(void) __asm__("func_00114F00");
/* StopTimerSystemTime: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114F00_x00114F00(void)
{
    int intr = DIntr_x00114F00();
    int mode = (*(volatile unsigned int *)0x10001010);
    if (!(mode & 0x80U)) {
        if (intr) {
            EIntr_x00114F00();
        }
        return 0;
    }
    SetT2_MODE_x00114F00(mode & ~(0x800U | 0x400U | 0x80U));
    if (intr) {
        EIntr_x00114F00();
    }
    return 1;
}
extern int AddIntcHandler_x00114F80(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x00114F80;
typedef u_long_x00114F80 (*TimerHandler_x00114F80)(int id, u_long_x00114F80 schedule, u_long_x00114F80 actual, void *arg, void *addr);
typedef struct Counter_x00114F80 {
    struct Counter_x00114F80 *next;
    struct Counter_x00114F80 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00114F80 base;
    u_long_x00114F80 count;
    u_long_x00114F80 schedule;
    TimerHandler_x00114F80 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00114F80;
typedef struct {
    volatile u_long_x00114F80 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00114F80 *freeList;
    Counter_x00114F80 *alarms;
    volatile int current;
} TimerState_x00114F80;
extern int AddIntcHandler2_x00114F80(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x00114F80 g_Timer_x00114F80 __asm__("D_003EDCC8");
void SetT2_MODE_x00114F80(unsigned int mode) __asm__("func_00114C10");
void SetT2_COMP_x00114F80(unsigned int comp) __asm__("func_00114C20");
void func_00114F80_x00114F80(u_long_x00114F80 now) __asm__("func_00114F80");
/* SetNextComp: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114F80_x00114F80(u_long_x00114F80 now)
{
    u_long_x00114F80 first, next;
    long left;
    unsigned int mode;
    Counter_x00114F80 *alarm = g_Timer_x00114F80.alarms;

    if (g_Timer_x00114F80.current >= 0) {
        return;
    }
    mode = (*(volatile unsigned int *)0x10001010);
    if (alarm == 0) {
        SetT2_COMP_x00114F80(0);
        SetT2_MODE_x00114F80(mode & ~0x800U);
        return;
    }
    first = alarm->schedule + alarm->base - alarm->count;
    alarm = alarm->next;
    while (alarm) {
        next = alarm->schedule + alarm->base - alarm->count;
        if (next < first + (147456000 * 200UL / 1000000)) {
            first = next;
        } else {
            break;
        }
        alarm = alarm->next;
    }
    left = first - now;
    if (left < (long)(147456000 * 200UL / 1000000)) {
        SetT2_COMP_x00114F80((*(volatile unsigned int *)0x10001000) + (((147456000 * 200UL / 1000000)) >> ((( mode) & 0x3U) << 2)));
        SetT2_MODE_x00114F80(mode & ~0x800U);
    } else {
        SetT2_MODE_x00114F80(mode & ~0x800U);
        SetT2_COMP_x00114F80(((first) >> ((( mode) & 0x3U) << 2)));
    }
    return;
}
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
typedef struct Alarm_x00115478 { struct Alarm_x00115478 *next; struct Alarm_x00115478 *prev; int id; unsigned int flags; unsigned long x10; unsigned long x18; unsigned long x20; unsigned long (*handler)(int,unsigned long,unsigned long,void *,void *); void *gp; void *arg; } Alarm_x00115478;
typedef struct { volatile unsigned long a; int id; int seq; int cnt; Alarm_x00115478 *free; Alarm_x00115478 *head; int cur; } TimCtl_x00115478;
extern TimCtl_x00115478 D_00487848_x00115478 __asm__("D_003EDCC8");
typedef struct { unsigned long long a; int id; volatile int seq; volatile int cnt; void *free; void *head; volatile int cur; } TimCtl_001172E0_x00115478;
unsigned long func_00115478_x00115478(void) __asm__("func_00115478");
/* iGetTimerSystemTime: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_117040.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned long func_00115478_x00115478(void)
{
    unsigned long t;
     
    __asm__ volatile(
        ".set push\n\t.set noreorder\n\t"
        "lwu %0, 0(%1)\n\t"
        "lw $8, 0x10(%1)\n\t"
        "ld $10, %2\n\t"
        "andi $9, $8, 0x800\n\t"
        "beqz $9, 1f\n\t"
        "addiu $9, $0, 2\n\t"
        "lwu %0, 0(%1)\n\t"
        "daddiu $10, $10, 1\n"
        "1:\n\t"
        "andi $8, $8, 3\n\t"
        "dsll $10, $10, 16\n\t"
        "movz $9, $0, $8\n\t"
        "or %0, %0, $10\n\t"
        "dsllv $9, $9, $8\n\t"
        "dsllv %0, %0, $9\n\t"
        ".set pop"
        : "=&r"(t) : "r"(0x10001000), "m"((*(TimCtl_001172E0_x00115478*)&D_00487848_x00115478).a) : "$8", "$9", "$10");
    return t;
}
typedef struct Alarm_x001154C8 { struct Alarm_x001154C8 *next; struct Alarm_x001154C8 *prev; int id; unsigned int flags; unsigned long x10; unsigned long x18; unsigned long x20; unsigned long (*handler)(int,unsigned long,unsigned long,void *,void *); void *gp; void *arg; } Alarm_x001154C8;
typedef struct { volatile unsigned long a; int id; int seq; int cnt; Alarm_x001154C8 *free; Alarm_x001154C8 *head; int cur; } TimCtl_x001154C8;
extern TimCtl_x001154C8 D_00487848_x001154C8 __asm__("D_003EDCC8");
typedef struct { unsigned long long a; int id; volatile int seq; volatile int cnt; void *free; void *head; volatile int cur; } TimCtl_00117330_x001154C8;
extern int DIntr_x001154C8(void) __asm__("DI");
extern int EIntr_x001154C8(void) __asm__("EI");
unsigned long func_001154C8_x001154C8(void) __asm__("func_001154C8");
/* GetTimerSystemTime: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_117040.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned long func_001154C8_x001154C8(void)
{
    unsigned long t;
    int s = DIntr_x001154C8();
     
    __asm__ volatile(
        ".set push\n\t.set noreorder\n\t"
        "lwu %0, 0(%1)\n\t"
        "lw $8, 0x10(%1)\n\t"
        "ld $10, %2\n\t"
        "andi $9, $8, 0x800\n\t"
        "beqz $9, 1f\n\t"
        "addiu $9, $0, 2\n\t"
        "lwu %0, 0(%1)\n\t"
        "daddiu $10, $10, 1\n"
        "1:\n\t"
        "andi $8, $8, 3\n\t"
        "dsll $10, $10, 16\n\t"
        "movz $9, $0, $8\n\t"
        "or %0, %0, $10\n\t"
        "dsllv $9, $9, $8\n\t"
        "dsllv %0, %0, $9\n\t"
        ".set pop"
        : "=&r"(t) : "r"(0x10001000), "m"((*(TimCtl_00117330_x001154C8*)&D_00487848_x001154C8).a) : "$8", "$9", "$10");
    if (s) EIntr_x001154C8();
    return t;
}
extern int AddIntcHandler_x00115548(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x00115548;
typedef u_long_x00115548 (*TimerHandler_x00115548)(int id, u_long_x00115548 schedule, u_long_x00115548 actual, void *arg, void *addr);
typedef struct Counter_x00115548 {
    struct Counter_x00115548 *next;
    struct Counter_x00115548 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00115548 base;
    u_long_x00115548 count;
    u_long_x00115548 schedule;
    TimerHandler_x00115548 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00115548;
typedef struct {
    volatile u_long_x00115548 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00115548 *freeList;
    Counter_x00115548 *alarms;
    volatile int current;
} TimerState_x00115548;
extern int AddIntcHandler2_x00115548(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x00115548 g_Timer_x00115548 __asm__("D_003EDCC8");
int func_00115548_x00115548(void) __asm__("func_00115548");
/* iAllocTimerCounter: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115548_x00115548(void)
{
    Counter_x00115548 *c = g_Timer_x00115548.freeList;
    if (c == 0) {
        return 0x80008005;
    }
    g_Timer_x00115548.usedCounters++;
    g_Timer_x00115548.freeList = c->next;
    c->handler = 0;
    c->flags = 0;
    c->count = 0;
    g_Timer_x00115548.uniqueKey++;
    c->key = ((g_Timer_x00115548.uniqueKey << 1) & 0x3fe) | 1;
    return (((int)(c) << 4) | (c)->key);
}
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
extern int AddIntcHandler_x00115600(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x00115600;
typedef u_long_x00115600 (*TimerHandler_x00115600)(int id, u_long_x00115600 schedule, u_long_x00115600 actual, void *arg, void *addr);
typedef struct Counter_x00115600 {
    struct Counter_x00115600 *next;
    struct Counter_x00115600 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00115600 base;
    u_long_x00115600 count;
    u_long_x00115600 schedule;
    TimerHandler_x00115600 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00115600;
typedef struct {
    volatile u_long_x00115600 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x00115600 *freeList;
    Counter_x00115600 *alarms;
    volatile int current;
} TimerState_x00115600;
extern int AddIntcHandler2_x00115600(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x00115600 g_Timer_x00115600 __asm__("D_003EDCC8");
Counter_x00115600 *UnlinkAlarm_x00115600(Counter_x00115600 *alarm) __asm__("func_00115198");
int func_00115600_x00115600(int id) __asm__("func_00115600");
/* iFreeTimerCounter: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115600_x00115600(int id)
{
    Counter_x00115600 *c = ((Counter_x00115600 *)(((unsigned int)(id) >> 10) << 6));
    if (id < 0 || (id & 0x3ff) != c->key) return 0x80008002;
    if (g_Timer_x00115600.current == id) return 0x80000010;
    if (c->flags & 2) UnlinkAlarm_x00115600(c);
    c->key = 0;
    c->flags = 0;
    c->next = g_Timer_x00115600.freeList;
    g_Timer_x00115600.freeList = c;
    g_Timer_x00115600.usedCounters--;
    return 0;
}
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
extern int AddIntcHandler_x001156F0(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x001156F0;
typedef u_long_x001156F0 (*TimerHandler_x001156F0)(int id, u_long_x001156F0 schedule, u_long_x001156F0 actual, void *arg, void *addr);
typedef struct Counter_x001156F0 {
    struct Counter_x001156F0 *next;
    struct Counter_x001156F0 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x001156F0 base;
    u_long_x001156F0 count;
    u_long_x001156F0 schedule;
    TimerHandler_x001156F0 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x001156F0;
typedef struct {
    volatile u_long_x001156F0 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x001156F0 *freeList;
    Counter_x001156F0 *alarms;
    volatile int current;
} TimerState_x001156F0;
extern int AddIntcHandler2_x001156F0(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x001156F0 g_Timer_x001156F0 __asm__("D_003EDCC8");
int func_001156F0_x001156F0(int *used, int *unused) __asm__("func_001156F0");
/* iGetTimerUsedUnusedCounters: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001156F0_x001156F0(int *used, int *unused)
{
    if (g_Timer_x001156F0.intcHandler < 0) return 0x80008001;
    if (used) *used = g_Timer_x001156F0.usedCounters;
    if (unused) *unused = 128 - g_Timer_x001156F0.usedCounters;
    return 0;
}
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
extern int AddIntcHandler_x001157A0(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x001157A0;
typedef u_long_x001157A0 (*TimerHandler_x001157A0)(int id, u_long_x001157A0 schedule, u_long_x001157A0 actual, void *arg, void *addr);
typedef struct Counter_x001157A0 {
    struct Counter_x001157A0 *next;
    struct Counter_x001157A0 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x001157A0 base;
    u_long_x001157A0 count;
    u_long_x001157A0 schedule;
    TimerHandler_x001157A0 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x001157A0;
typedef struct {
    volatile u_long_x001157A0 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x001157A0 *freeList;
    Counter_x001157A0 *alarms;
    volatile int current;
} TimerState_x001157A0;
extern int AddIntcHandler2_x001157A0(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x001157A0 g_Timer_x001157A0 __asm__("D_003EDCC8");
u_long_x001157A0 iGetTimerSystemTime_x001157A0(void) __asm__("func_00115478");
void SetNextComp_x001157A0(u_long_x001157A0 now) __asm__("func_00114F80");
void SetNextComp_x001157A0(u_long_x001157A0 now) __asm__("func_00114F80");
void InsertAlarm_x001157A0(Counter_x001157A0 *alarm) __asm__("func_00115110");
u_long_x001157A0 iGetTimerSystemTime_x001157A0(void) __asm__("func_00115478");
int func_001157A0_x001157A0(int id) __asm__("func_001157A0");
/* iStartTimerCounter: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001157A0_x001157A0(int id)
{
    Counter_x001157A0 *c = ((Counter_x001157A0 *)(((unsigned int)(id) >> 10) << 6));
    u_long_x001157A0 now;
    if (id < 0 || (id & 0x3ff) != c->key) return 0x80008002;
    if (g_Timer_x001157A0.current == id) return 0x80000010;
    if (c->flags & 1) return 1;
    now = iGetTimerSystemTime_x001157A0();
    c->base = now;
    c->flags |= 1;
    if (c->flags & 2) {
        InsertAlarm_x001157A0(c);
        SetNextComp_x001157A0(now);
    }
    return 0;
}
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
extern int AddIntcHandler_x001158A0(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x001158A0;
typedef u_long_x001158A0 (*TimerHandler_x001158A0)(int id, u_long_x001158A0 schedule, u_long_x001158A0 actual, void *arg, void *addr);
typedef struct Counter_x001158A0 {
    struct Counter_x001158A0 *next;
    struct Counter_x001158A0 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x001158A0 base;
    u_long_x001158A0 count;
    u_long_x001158A0 schedule;
    TimerHandler_x001158A0 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x001158A0;
typedef struct {
    volatile u_long_x001158A0 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x001158A0 *freeList;
    Counter_x001158A0 *alarms;
    volatile int current;
} TimerState_x001158A0;
extern int AddIntcHandler2_x001158A0(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x001158A0 g_Timer_x001158A0 __asm__("D_003EDCC8");
u_long_x001158A0 iGetTimerSystemTime_x001158A0(void) __asm__("func_00115478");
void SetNextComp_x001158A0(u_long_x001158A0 now) __asm__("func_00114F80");
void SetNextComp_x001158A0(u_long_x001158A0 now) __asm__("func_00114F80");
Counter_x001158A0 *UnlinkAlarm_x001158A0(Counter_x001158A0 *alarm) __asm__("func_00115198");
u_long_x001158A0 iGetTimerSystemTime_x001158A0(void) __asm__("func_00115478");
int func_001158A0_x001158A0(int id) __asm__("func_001158A0");
/* iStopTimerCounter: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001158A0_x001158A0(int id)
{
    Counter_x001158A0 *c = ((Counter_x001158A0 *)(((unsigned int)(id) >> 10) << 6));
    u_long_x001158A0 now;
    if (id < 0 || (id & 0x3ff) != c->key) return 0x80008002;
    if (g_Timer_x001158A0.current == id) return 0x80000010;
    if (!(c->flags & 1)) return 0;
    now = iGetTimerSystemTime_x001158A0();
    c->count += now - c->base;
    c->flags &= ~1;
    if (c->flags & 2) {
        UnlinkAlarm_x001158A0(c);
        SetNextComp_x001158A0(now);
    }
    return 1;
}
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
extern int AddIntcHandler_x001159B8(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
int DIntr_x001159B8(void) __asm__("DI");
int EIntr_x001159B8(void) __asm__("EI");
typedef unsigned long u_long_x001159B8;
typedef u_long_x001159B8 (*TimerHandler_x001159B8)(int id, u_long_x001159B8 schedule, u_long_x001159B8 actual, void *arg, void *addr);
typedef struct Counter_x001159B8 {
    struct Counter_x001159B8 *next;
    struct Counter_x001159B8 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x001159B8 base;
    u_long_x001159B8 count;
    u_long_x001159B8 schedule;
    TimerHandler_x001159B8 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x001159B8;
typedef struct {
    volatile u_long_x001159B8 overflows;
    int intcHandler;
    volatile unsigned int uniqueKey;
    volatile int usedCounters;
    Counter_x001159B8 *freeList;
    Counter_x001159B8 *alarms;
    volatile int current;
} TimerState_x001159B8;
extern int AddIntcHandler2_x001159B8(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
extern TimerState_x001159B8 g_Timer_x001159B8 __asm__("D_003EDCC8");
u_long_x001159B8 iGetTimerSystemTime_x001159B8(void) __asm__("func_00115478");
u_long_x001159B8 iGetTimerSystemTime_x001159B8(void) __asm__("func_00115478");
u_long_x001159B8 func_001159B8_x001159B8(int id, u_long_x001159B8 count) __asm__("func_001159B8");
/* SetTimerCount: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
u_long_x001159B8 func_001159B8_x001159B8(int id, u_long_x001159B8 count)
{
    Counter_x001159B8 *c = ((Counter_x001159B8 *)(((unsigned int)(id) >> 10) << 6));
    int intr;
    u_long_x001159B8 old;
    u_long_x001159B8 now;
    intr = DIntr_x001159B8();
    if (id < 0 || (id & 0x3ff) != c->key || g_Timer_x001159B8.current == id) {
        if (intr) EIntr_x001159B8();
        return -1;
    }
    old = c->count;
    if (c->flags & 1) {
        now = iGetTimerSystemTime_x001159B8();
        old += now - c->base;
        c->base = now;
        c->count = count;
    } else {
        c->count = count;
    }
    if (intr) EIntr_x001159B8();
    return old;
}
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
extern int AddIntcHandler_x00115B20(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
typedef unsigned long u_long_x00115B20;
typedef u_long_x00115B20 (*TimerHandler_x00115B20)(int id, u_long_x00115B20 schedule, u_long_x00115B20 actual, void *arg, void *addr);
typedef struct Counter_x00115B20 {
    struct Counter_x00115B20 *next;
    struct Counter_x00115B20 *prev;
    volatile int key;
    unsigned int flags;
    u_long_x00115B20 base;
    u_long_x00115B20 count;
    u_long_x00115B20 schedule;
    TimerHandler_x00115B20 handler;
    void *gp;
    void *arg;
    int pad[3];
} Counter_x00115B20;
extern int AddIntcHandler2_x00115B20(int cause, int (*handler)(int), int next, void *arg) __asm__("AddIntcHandler2");
u_long_x00115B20 iGetTimerSystemTime_x00115B20(void) __asm__("func_00115478");
u_long_x00115B20 iGetTimerSystemTime_x00115B20(void) __asm__("func_00115478");
u_long_x00115B20 func_00115B20_x00115B20(int id) __asm__("func_00115B20");
/* iGetTimerCount: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
u_long_x00115B20 func_00115B20_x00115B20(int id)
{
    Counter_x00115B20 *c = ((Counter_x00115B20 *)(((unsigned int)(id) >> 10) << 6));
    u_long_x00115B20 count;
    if (id < 0 || (id & 0x3ff) != c->key) return -1;
    count = c->count;
    if (c->flags & 1) count += iGetTimerSystemTime_x00115B20() - c->base;
    return count;
}
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
typedef struct Alarm_x00115BE0 { struct Alarm_x00115BE0 *next; struct Alarm_x00115BE0 *prev; volatile int id; unsigned int flags; long long x10; long long x18; long long x20; void *h; int gp; void *arg; } Alarm_x00115BE0;
typedef struct { unsigned long long a; int id; volatile int seq; volatile int cnt; Alarm_x00115BE0 *free; Alarm_x00115BE0 *head; volatile int cur; } TimCtl_x00115BE0;
extern TimCtl_x00115BE0 D_00487848_x00115BE0 __asm__("D_003EDCC8");
extern void UnlinkAlarm_x00115BE0(Alarm_x00115BE0 *) __asm__("func_00115198");
extern long long iGetTimerSystemTime_x00115BE0(void) __asm__("func_00115478");
extern void SetNextComp_x00115BE0(long long) __asm__("func_00114F80");
extern void InsertAlarm_x00115BE0(Alarm_x00115BE0 *) __asm__("func_00115110");
int func_00115BE0_x00115BE0(int id, long long t, void *h, void *arg) __asm__("func_00115BE0");
/* iSetTimerHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_1179F8.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115BE0_x00115BE0(int id, long long t, void *h, void *arg)
{
    Alarm_x00115BE0 *a = (Alarm_x00115BE0 *)(((unsigned int)id >> 10) << 6);
    if (id < 0 || (id & 0x3FF) != a->id) return 0x80008002;
    if (D_00487848_x00115BE0.cur == id) return 0x80000010;
    if (a->flags & 2) UnlinkAlarm_x00115BE0(a);
    a->h = h;
    if (h == 0) {
        a->flags &= ~2;
    } else {
        a->flags |= 2;
        a->x20 = t;
        __asm__ volatile ("sw $gp, %0" : "=m" (a->gp) : : "memory");
        a->arg = arg;
        if (a->flags & 1) InsertAlarm_x00115BE0(a);
    }
    SetNextComp_x00115BE0(iGetTimerSystemTime_x00115BE0());
    return 0;
}
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
typedef unsigned long u_long_x00115D58;
void func_00115D58_x00115D58(u_long_x00115D58 clocks, unsigned int *sec, unsigned int *usec) __asm__("func_00115D58");
/* sceTimerBusClock2USec: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00115D58_x00115D58(u_long_x00115D58 clocks, unsigned int *sec, unsigned int *usec)
{
    unsigned int s;
    s = clocks / 147456000;
    if (sec) *sec = s;
    if (usec) *usec = (clocks - (u_long_x00115D58)s * 147456000) * 1000000 / 147456000;
}
typedef unsigned long u_long_x00115E00;
u_long_x00115E00 func_00115E00_x00115E00(unsigned int sec, unsigned int usec) __asm__("func_00115E00");
/* sceTimerUSec2BusClock: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
u_long_x00115E00 func_00115E00_x00115E00(unsigned int sec, unsigned int usec)
{
    return (u_long_x00115E00)sec * 147456000 + (u_long_x00115E00)usec * 147456000 / 1000000;
}
typedef unsigned long u_long_x00115E70;
float func_00115E70_x00115E70(u_long_x00115E70 clocks) __asm__("func_00115E70");
/* sceTimerBusClock2Freq: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timer.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
float func_00115E70_x00115E70(u_long_x00115E70 clocks)
{
    return 147456000.0f / clocks;
}
s32 func_00121288_x00115EC8(f32) __asm__("func_00121288");
s32 func_00115EC8_x00115EC8(f32 fparg0) __asm__("func_00115EC8");
s32 func_00115EC8_x00115EC8(f32 fparg0) {
    return func_00121288_x00115EC8(1.47456e8f / fparg0);
}
typedef struct N7D68_x00115F00 { struct N7D68_x00115F00 *next; int p[3]; } N7D68_x00115F00;
extern N7D68_x00115F00 D_004E96C0_x00115F00[] __asm__("D_00478300");
extern N7D68_x00115F00 *D_004E9AC0_x00115F00 __asm__("D_00478700");
int func_00115F00_x00115F00(void) __asm__("func_00115F00");
/* _InitAlarm: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_117D68.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115F00_x00115F00(void)
{
    int i;
    D_004E9AC0_x00115F00 = D_004E96C0_x00115F00;
    for (i = 0x3F; i >= 0; i--) D_004E96C0_x00115F00[i].next = &D_004E96C0_x00115F00[i + 1];
    D_004E96C0_x00115F00[0x3F].next = 0;
    return 0;
}
typedef struct N7D68_x00115F50 { struct N7D68_x00115F50 *next; int p[3]; } N7D68_x00115F50;
extern N7D68_x00115F50 *D_004E9AC0_x00115F50 __asm__("D_00478700");
typedef struct N7DB8_x00115F50 {
    struct N7DB8_x00115F50 *next;
    volatile int id;
    int (*func)(int, int, int, void *);
    void *arg;
} N7DB8_x00115F50;
int func_00115F50_x00115F50(int id, int b, int c, N7DB8_x00115F50 *n) __asm__("func_00115F50");
/* AlarmHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_117D68.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115F50_x00115F50(int id, int b, int c, N7DB8_x00115F50 *n)
{
    int ret = n->func(((int)n << 4) | (id & 0xFE) | 1, b, c, n->arg);
    if (ret == 0) {
        n->next = (*(N7DB8_x00115F50 * volatile*)&D_004E9AC0_x00115F50);
        (*(N7DB8_x00115F50 * volatile*)&D_004E9AC0_x00115F50) = n;
        n->id = 0;
        return -1;
    }
    return ret;
}
typedef int (*AlarmCallback_x00115FB0)(int id, int schedule, int actual, void *arg);
int DIntr_x00115FB0(void) __asm__("DI");
int EIntr_x00115FB0(void) __asm__("EI");
int AllocTimerCounter_x00115FB0(void) __asm__("func_001155B8");
int StartTimerCounter_x00115FB0(int id) __asm__("func_00115850");
typedef unsigned long u_long_x00115FB0;
typedef struct Alarm_x00115FB0 {
    struct Alarm_x00115FB0 *next;
    volatile int counter;
    AlarmCallback_x00115FB0 callback;
    void *arg;
} Alarm_x00115FB0;
extern int SetTimerHandler_x00115FB0(int id, u_long_x00115FB0 schedule, int (*handler)(int, int, int, Alarm_x00115FB0 *), Alarm_x00115FB0 *arg) __asm__("func_00115CD8");
extern int iSetTimerHandler_x00115FB0(int id, u_long_x00115FB0 schedule, int (*handler)(int, int, int, Alarm_x00115FB0 *), Alarm_x00115FB0 *arg) __asm__("iSetTimerHandler");
extern Alarm_x00115FB0 *freeAlarms_x00115FB0 __asm__("D_00478700");
int AlarmHandler_x00115FB0(int counter, int schedule, int actual, Alarm_x00115FB0 *alarm) __asm__("func_00115F50");
int func_00115FB0_x00115FB0(u_long_x00115FB0 clocks, AlarmCallback_x00115FB0 callback, void *arg) __asm__("func_00115FB0");
/* SetTimerAlarm: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timeralarm.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00115FB0_x00115FB0(u_long_x00115FB0 clocks, AlarmCallback_x00115FB0 callback, void *arg)
{
    Alarm_x00115FB0 *alarm;
    Alarm_x00115FB0 *head;
    int counter;
    int intr;
    if (callback == 0) return 0x80000016;
    intr = DIntr_x00115FB0();
    head = freeAlarms_x00115FB0;
    if (head) freeAlarms_x00115FB0 = head->next;
    alarm = head;
    if (alarm == 0) {
        if (intr) EIntr_x00115FB0();
        return 0x80008005;
    }
    counter = AllocTimerCounter_x00115FB0();
    if (counter < 0) {
        alarm->next = freeAlarms_x00115FB0;
        freeAlarms_x00115FB0 = alarm;
        alarm->counter = 0;
        if (intr) EIntr_x00115FB0();
        return counter;
    }
    alarm->callback = callback;
    alarm->arg = arg;
    alarm->counter = counter;
    SetTimerHandler_x00115FB0(counter, clocks, AlarmHandler_x00115FB0, alarm);
    StartTimerCounter_x00115FB0(counter);
    if (intr) EIntr_x00115FB0();
    return (((int)(alarm) << 4) | (( counter) & 0xfe) | 1);
}
typedef int (*AlarmCallback_x001160E0)(int id, int schedule, int actual, void *arg);
int iAllocTimerCounter_x001160E0(void) __asm__("func_00115548");
int iStartTimerCounter_x001160E0(int id) __asm__("func_001157A0");
typedef unsigned long u_long_x001160E0;
typedef struct Alarm_x001160E0 {
    struct Alarm_x001160E0 *next;
    volatile int counter;
    AlarmCallback_x001160E0 callback;
    void *arg;
} Alarm_x001160E0;
extern int SetTimerHandler_x001160E0(int id, u_long_x001160E0 schedule, int (*handler)(int, int, int, Alarm_x001160E0 *), Alarm_x001160E0 *arg) __asm__("SetTimerHandler");
extern int iSetTimerHandler_x001160E0(int id, u_long_x001160E0 schedule, int (*handler)(int, int, int, Alarm_x001160E0 *), Alarm_x001160E0 *arg) __asm__("func_00115BE0");
extern Alarm_x001160E0 *freeAlarms_x001160E0 __asm__("D_00478700");
int AlarmHandler_x001160E0(int counter, int schedule, int actual, Alarm_x001160E0 *alarm) __asm__("func_00115F50");
int func_001160E0_x001160E0(u_long_x001160E0 clocks, AlarmCallback_x001160E0 callback, void *arg) __asm__("func_001160E0");
/* iSetTimerAlarm: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/timeralarm.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001160E0_x001160E0(u_long_x001160E0 clocks, AlarmCallback_x001160E0 callback, void *arg)
{
    Alarm_x001160E0 *alarm;
    Alarm_x001160E0 *head;
    int counter;
    if (callback == 0) return 0x80000016;
    head = freeAlarms_x001160E0;
    if (head) freeAlarms_x001160E0 = head->next;
    alarm = head;
    if (alarm == 0) return 0x80008005;
    counter = iAllocTimerCounter_x001160E0();
    if (counter < 0) {
        alarm->next = freeAlarms_x001160E0;
        freeAlarms_x001160E0 = alarm;
        alarm->counter = 0;
        return counter;
    }
    alarm->callback = callback;
    alarm->arg = arg;
    alarm->counter = counter;
    iSetTimerHandler_x001160E0(counter, clocks, AlarmHandler_x001160E0, alarm);
    iStartTimerCounter_x001160E0(counter);
    return (((int)(alarm) << 4) | (( counter) & 0xfe) | 1);
}
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
typedef struct { void *fn; void *arg; int gp; int pad; } HEnt_x00116398;
extern HEnt_x00116398 *D_00487868_x00116398 __asm__("D_003EDCE8");
extern int D_0048786C_x00116398 __asm__("D_003EDCEC");
extern HEnt_x00116398 D_004E9AC8_x00116398[] __asm__("D_00478708");
extern int DIntr_x00116398(void) __asm__("DI");
extern void EIntr_x00116398(void) __asm__("EI");
int func_00116398_x00116398(unsigned int idx, void *fn, void *arg) __asm__("func_00116398");
/* sceSifAddRebootNotifyHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_118180.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00116398_x00116398(unsigned int idx, void *fn, void *arg)
{
    HEnt_x00116398 *tbl;
    unsigned int max;
    int s, gp;
    if ((int)idx < 0) {
        idx &= 0x7FFFFFFF;
        tbl = D_004E9AC8_x00116398;
        max = 32;
    } else {
        tbl = D_00487868_x00116398;
        max = D_0048786C_x00116398;
    }
    if (idx >= max) return 0x80000069;
    s = DIntr_x00116398();
    tbl[idx].fn = fn;
    tbl[idx].arg = arg;
    __asm__ volatile ("move %0, $gp" : "=r" (gp));
    tbl[idx].gp = gp;
    if (s) EIntr_x00116398();
    return 0;
}
typedef void (*NotifyHandler_x00116450)(void *arg, void *data);
typedef struct {
    NotifyHandler_x00116450 func;
    void *data;
    void *gp;
    int pad;
} NotifyEntry_x00116450;
extern NotifyEntry_x00116450 *rebootNotifyTable_x00116450 __asm__("D_003EDCE8");
extern unsigned int rebootNotifyCount_x00116450 __asm__("D_003EDCEC");
extern NotifyEntry_x00116450 rebootNotifySysTable_x00116450[32] __asm__("D_00478708");
int func_00116450_x00116450(unsigned int index) __asm__("func_00116450");
/* sceSifRemoveRebootNotifyHandler: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/iopnotify.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00116450_x00116450(unsigned int index)
{
    NotifyEntry_x00116450 *table;
    unsigned int count;
    if ((int)index < 0) {
        index &= ~0x80000000;
        table = rebootNotifySysTable_x00116450;
        count = 32;
    } else {
        table = rebootNotifyTable_x00116450;
        count = rebootNotifyCount_x00116450;
    }
    if (index >= count) return -105;
    table[index].func = 0;
    return 0;
}
typedef struct { void *fn; void *arg; int gp; int pad; } HEnt_x001164A8;
extern HEnt_x001164A8 *D_00487868_x001164A8 __asm__("D_003EDCE8");
extern int D_0048786C_x001164A8 __asm__("D_003EDCEC");
extern HEnt_x001164A8 D_004E9AC8_x001164A8[] __asm__("D_00478708");
int func_001164A8_x001164A8(int which, int arg) __asm__("func_001164A8");
/* sceSifExecNotifyHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_118310.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001164A8_x001164A8(int which, int arg)
{
    HEnt_x001164A8 *tbl, *p;
    int cnt, i, oldgp, prev;
    if (which) {
        tbl = D_004E9AC8_x001164A8;
        cnt = 32;
    } else {
        tbl = D_00487868_x001164A8;
        cnt = D_0048786C_x001164A8;
    }
    __asm__ volatile ("move %0, $gp" : "=r" (oldgp));
    p = tbl;
    for (i = 0; i < cnt; i++, p++) {
        if (p->fn) {
            __asm__ volatile ("move $3, $gp\n\tmove $gp, %0" : : "r" (p->gp) : "$3", "memory");
            ((void (*)(int, void *))p->fn)(arg, p->arg);
        }
    }
    __asm__ volatile ("move %0, $gp\n\tmove $gp, %1" : "=&r" (prev) : "r" (oldgp));
    return prev;
}
