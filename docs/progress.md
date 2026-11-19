# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-19 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 543 | 858 | 63.29 | 97,908 | 179,380 | 54.58 |
| Metrowerks, linked before CRI (am* layer, main) | 342 | 411 | 83.21 | 66,892 | 137,476 | 48.66 |
| CRI ADX / Sofdec, libmtap (gcc) | 2,299 | 2,797 | 82.20 | 201,680 | 337,028 | 59.84 |
| Metrowerks, linked after CRI (the game) | 2,749 | 4,229 | 65.00 | 421,740 | 1,476,380 | 28.57 |
| All | 5,933 | 8,295 | 71.53 | 788,220 | 2,130,264 | 37.00 |

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
