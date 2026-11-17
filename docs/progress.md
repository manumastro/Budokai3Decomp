# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-17 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 0 | 857 | 0.00 | 0 | 179,392 | 0.00 |
| Metrowerks, linked before CRI (am* layer, main) | 339 | 411 | 82.48 | 66,464 | 137,476 | 48.35 |
| CRI ADX / Sofdec, libmtap (gcc) | 10 | 2,798 | 0.36 | 1,176 | 337,024 | 0.35 |
| Metrowerks, linked after CRI (the game) | 2,366 | 4,229 | 55.95 | 328,088 | 1,476,848 | 22.22 |
| All | 2,715 | 8,295 | 32.73 | 395,728 | 2,130,740 | 18.57 |

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
