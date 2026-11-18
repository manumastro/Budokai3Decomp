# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-18 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 332 | 858 | 38.69 | 49,396 | 179,380 | 27.54 |
| Metrowerks, linked before CRI (am* layer, main) | 339 | 411 | 82.48 | 66,464 | 137,476 | 48.35 |
| CRI ADX / Sofdec, libmtap (gcc) | 1,578 | 2,797 | 56.42 | 100,332 | 337,068 | 29.77 |
| Metrowerks, linked after CRI (the game) | 2,663 | 4,230 | 62.96 | 408,516 | 1,476,836 | 27.66 |
| All | 4,912 | 8,296 | 59.21 | 624,708 | 2,130,760 | 29.32 |

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
