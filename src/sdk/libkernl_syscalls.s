/* libkernl's system call stubs (Sony SDK 3.0, libkernl 3000): written in assembly in the SDK itself, so their
   source is this file, not C. Each stub loads the call number into $v1 and traps: `addiu $v1, $zero, N; syscall;
   jr $ra; nop` (negative numbers: the interrupt-handler versions, iXxx). Names from config/symbols/lib_syscalls.txt;
   func_XXXXXXXX ones are calls this executable has whose name is not known. Assembled as it is by the build
   (configure.py takes src/<segment>.s in place of splat's asm/<segment>.s), byte-identical. */
.include "macro.inc"

.set noat
.set noreorder

.section .text, "ax"

/* KSYSCALL name, number: one stub (not SYSCALL: gas macro names ignore case, and syscall is an instruction) */
.macro KSYSCALL name, num
glabel \name
    addiu   $v1, $zero, \num
    syscall 0
    jr      $ra
    nop
endlabel \name
.endm

KSYSCALL func_00109E40, 0
KSYSCALL ResetEE, 1
KSYSCALL SetGsCrt, 2
KSYSCALL func_00109E70, 3
KSYSCALL Exit, 4
KSYSCALL func_00109E90, 5
KSYSCALL LoadExecPS2, 6
KSYSCALL ExecPS2, 7
KSYSCALL func_00109EC0, 8
KSYSCALL func_00109ED0, 9
KSYSCALL AddSbusIntcHandler, 10
KSYSCALL RemoveSbusIntcHandler, 11
KSYSCALL Interrupt2Iop, 12
KSYSCALL SetVTLBRefillHandler, 13
KSYSCALL SetVCommonHandler, 14
KSYSCALL SetVInterruptHandler, 15
KSYSCALL AddIntcHandler, 16
KSYSCALL AddIntcHandler2, 16
KSYSCALL RemoveIntcHandler, 17
KSYSCALL AddDmacHandler, 18
KSYSCALL AddDmacHandler2, 18
KSYSCALL RemoveDmacHandler, 19
KSYSCALL _EnableIntc, 20
KSYSCALL _DisableIntc, 21
KSYSCALL _EnableDmac, 22
KSYSCALL _DisableDmac, 23
KSYSCALL func_00109FE0, 252
KSYSCALL func_00109FF0, 253
KSYSCALL _iEnableIntc, -26
KSYSCALL _iDisableIntc, -27
KSYSCALL _iEnableDmac, -28
KSYSCALL _iDisableDmac, -29
KSYSCALL func_0010A040, -254
KSYSCALL func_0010A050, -255
KSYSCALL CreateThread, 32
KSYSCALL DeleteThread, 33
KSYSCALL StartThread, 34
KSYSCALL ExitThread, 35
KSYSCALL ExitDeleteThread, 36
KSYSCALL TerminateThread, 37
KSYSCALL iTerminateThread, -38
KSYSCALL DisableDispatchThread, 39
KSYSCALL EnableDispatchThread, 40
KSYSCALL ChangeThreadPriority, 41
KSYSCALL iChangeThreadPriority, -42
KSYSCALL RotateThreadReadyQueue, 43
KSYSCALL _iRotateThreadReadyQueue, -44
KSYSCALL ReleaseWaitThread, 45
KSYSCALL iReleaseWaitThread, -46
KSYSCALL GetThreadId, 47
KSYSCALL ReferThreadStatus, 48
KSYSCALL iReferThreadStatus, -49
KSYSCALL SleepThread, 50
KSYSCALL WakeupThread, 51
KSYSCALL _iWakeupThread, -52
KSYSCALL CancelWakeupThread, 53
KSYSCALL iCancelWakeupThread, -54
KSYSCALL SuspendThread, 55
KSYSCALL _iSuspendThread, -56
KSYSCALL ResumeThread, 57
KSYSCALL iResumeThread, -58
KSYSCALL JoinThread, 59
KSYSCALL SetupThread, 60
KSYSCALL SetupHeap, 61
KSYSCALL EndOfHeap, 62
KSYSCALL func_0010A250, 63
KSYSCALL CreateSema, 64
KSYSCALL DeleteSema, 65
KSYSCALL SignalSema, 66
KSYSCALL iSignalSema, -67
KSYSCALL WaitSema, 68
KSYSCALL PollSema, 69
KSYSCALL iPollSema, -70
KSYSCALL ReferSemaStatus, 71
KSYSCALL iReferSemaStatus, -72
KSYSCALL func_0010A2F0, 73
KSYSCALL SetOsdConfigParam, 74
KSYSCALL GetOsdConfigParam, 75
KSYSCALL GetGsHParam, 76
KSYSCALL GetGsVParam, 77
KSYSCALL SetGsHParam, 78
KSYSCALL SetGsVParam, 79
KSYSCALL func_0010A360, 80
KSYSCALL func_0010A370, 81
KSYSCALL func_0010A380, 82
KSYSCALL func_0010A390, -83
KSYSCALL func_0010A3A0, 84
KSYSCALL func_0010A3B0, -85
KSYSCALL func_0010A3C0, 86
KSYSCALL func_0010A3D0, 87
KSYSCALL func_0010A3E0, -88
KSYSCALL func_0010A3F0, 89
KSYSCALL func_0010A400, -90
KSYSCALL func_0010A410, 91
KSYSCALL func_0010A420, 92
KSYSCALL func_0010A430, -92
KSYSCALL func_0010A440, 93
KSYSCALL func_0010A450, -93
KSYSCALL func_0010A460, 94
KSYSCALL func_0010A470, -94
KSYSCALL func_0010A480, 95
KSYSCALL func_0010A490, -95
KSYSCALL KSeg0, 96
KSYSCALL EnableCache, 97
KSYSCALL DisableCache, 98
KSYSCALL GetCop0, 99
KSYSCALL FlushCache, 100
KSYSCALL CpuConfig, 102
KSYSCALL iGetCop0, -103
KSYSCALL iFlushCache, -104
KSYSCALL iCpuConfig, -106
KSYSCALL sceSifStopDma, 107
KSYSCALL SetCPUTimerHandler, 108
KSYSCALL SetCPUTimer, 109
KSYSCALL SetOsdConfigParam2, 110
KSYSCALL GetOsdConfigParam2, 111
KSYSCALL GsGetIMR, 112
KSYSCALL iGsGetIMR, -112
KSYSCALL GsPutIMR, 113
KSYSCALL iGsPutIMR, -113
KSYSCALL SetPgifHandler, 114
KSYSCALL SetVSyncFlag, 115
KSYSCALL SetSyscall, 116
KSYSCALL func_0010A5F0, 117
KSYSCALL sceSifDmaStat, 118
KSYSCALL isceSifDmaStat, -118
KSYSCALL sceSifSetDma, 119
KSYSCALL isceSifSetDma, -119
KSYSCALL sceSifSetDChain, 120
KSYSCALL isceSifSetDChain, -120
KSYSCALL sceSifSetReg, 121
KSYSCALL sceSifGetReg, 122
KSYSCALL ExecOSD, 123
KSYSCALL Deci2Call, 124
KSYSCALL PSMode, 125
KSYSCALL MachineType, 126
KSYSCALL GetMemorySize, 127
KSYSCALL func_0010A6D0, 130
