# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

"Done" also counts **functions whose original source was assembly**: code the original authors wrote in assembly
(not compiler output) is kept as a hand-written assembly source under `src/` (`src/<segment>.s`, assembled by the
build in place of splat's `asm/<segment>.s`, byte-identical), the way decompilations keep e.g. VU microcode or a
crt0 in `.s` files. Today: libkernl's 138 system call stubs (`src/sdk/libkernl_syscalls.s`, Sony's SDK wrote them
in assembly: `addiu $v1, $zero, N; syscall; jr $ra; nop`), and 24 more such stubs that sit between C functions
of libkernl and libgraph objects, written there as `SYSCALL_STUB(name, N)` (include/include_asm.h).

<!-- progress table -->

Measured 2026-11-23 (scripts/progress.py).

| Part | Functions done | All | % | Bytes done | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 855 | 861 | 99.30 | 176,996 | 179,352 | 98.69 |
| Metrowerks, linked before CRI (am* layer, main) | 346 | 411 | 84.18 | 68,688 | 137,476 | 49.96 |
| CRI ADX / Sofdec, libmtap (gcc) | 2,788 | 2,798 | 99.64 | 333,720 | 337,024 | 99.02 |
| Metrowerks, linked after CRI (the game) | 3,084 | 4,230 | 72.91 | 548,996 | 1,476,564 | 37.18 |
| All | 7,073 | 8,300 | 85.22 | 1,128,400 | 2,130,416 | 52.97 |

<!-- end of progress table -->

## Milestones

| Date | Milestone | State |
|---|---|---|
| 2026-11-17 | Split rebuilt byte-identical; compiler identified (Metrowerks 3.0b, `-O4,p`) | Done |
| 2026-11-17 | One file per source (`scripts/find_files.py`): 155 files in the two Metrowerks parts, 77 named | Done (boundaries inferred) |
| 2026-11-17 | First C file linked in the matching build (`src/unk/unk_1CBD90.c`, through mwccgap) | Done |
| | Library names (Sony SDK, CRI, C library) | |
| | The `am*` layer | |
| | The game, subsystem by subsystem | |
| | The libraries with ee-gcc | |
