# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

"Done" also counts **functions whose original source was assembly**: code the original authors wrote in assembly
(not compiler output) is kept as a hand-written assembly source under `src/` (`src/<segment>.s`, assembled by the
build in place of splat's `asm/<segment>.s`, byte-identical), the way decompilations keep e.g. VU microcode or a
crt0 in `.s` files. Today: libkernl's 138 system call stubs (`src/sdk/libkernl_syscalls.s`, Sony's SDK wrote them
in assembly: `addiu $v1, $zero, N; syscall; jr $ra; nop`).

<!-- progress table -->

Measured 2026-11-19 (scripts/progress.py).

| Part | Functions done | All | % | Bytes done | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 732 | 858 | 85.31 | 134,972 | 179,380 | 75.24 |
| Metrowerks, linked before CRI (am* layer, main) | 342 | 411 | 83.21 | 66,892 | 137,476 | 48.66 |
| CRI ADX / Sofdec, libmtap (gcc) | 2,485 | 2,797 | 88.85 | 234,132 | 337,004 | 69.47 |
| Metrowerks, linked after CRI (the game) | 2,787 | 4,229 | 65.90 | 430,260 | 1,476,380 | 29.14 |
| All | 6,346 | 8,295 | 76.50 | 866,256 | 2,130,240 | 40.66 |

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
