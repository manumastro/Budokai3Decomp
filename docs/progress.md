# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-19 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 376 | 858 | 43.82 | 52,072 | 179,380 | 29.03 |
| Metrowerks, linked before CRI (am* layer, main) | 342 | 411 | 83.21 | 66,892 | 137,476 | 48.66 |
| CRI ADX / Sofdec, libmtap (gcc) | 1,882 | 2,797 | 67.29 | 122,164 | 337,028 | 36.25 |
| Metrowerks, linked after CRI (the game) | 2,741 | 4,229 | 64.81 | 420,648 | 1,476,380 | 28.49 |
| All | 5,341 | 8,295 | 64.39 | 661,776 | 2,130,264 | 31.07 |

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
