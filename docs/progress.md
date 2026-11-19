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

Measured 2026-11-19 (scripts/progress.py).

| Part | Functions done | All | % | Bytes done | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 756 | 858 | 88.11 | 135,356 | 179,380 | 75.46 |
| Metrowerks, linked before CRI (am* layer, main) | 342 | 411 | 83.21 | 66,892 | 137,476 | 48.66 |
| CRI ADX / Sofdec, libmtap (gcc) | 2,515 | 2,798 | 89.89 | 238,296 | 337,024 | 70.71 |
| Metrowerks, linked after CRI (the game) | 2,792 | 4,229 | 66.02 | 431,468 | 1,476,380 | 29.22 |
| All | 6,405 | 8,296 | 77.21 | 872,012 | 2,130,260 | 40.93 |

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
