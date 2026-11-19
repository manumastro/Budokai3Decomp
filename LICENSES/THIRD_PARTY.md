# Third-party code in the library files

Some functions of the Sony SDK / C library / CRI middleware parts (src/sdk/, src/cri/) were taken from public
decompilations of other games that link the same libraries, after checking that they compile (ee-gcc, flags in each
file's first comment) to the instructions of this executable.

- Whole files (scripts/lib_port.py): each file's first comment names its origin. Headers they need are under
  include/ext/<repo>/ in the origin's layout.
- Single functions (scripts/func_port.py + scripts/func_insert.py): each function is preceded by a comment naming its
  origin repository, file and licence, and (when the origin file has one) the origin file's own notice. Its
  declarations come from the origin's preprocessed source, renamed for that function only.

| Origin | Licence | Text |
|---|---|---|
| https://github.com/nathanialf/ico-pc (sce/) | MIT | LICENSES/ico-pc-MIT.txt |
| https://github.com/Voicedrew11/kfiv-decomp (src/sce/) | MIT | LICENSES/kfiv-decomp-MIT.txt |
| https://github.com/ShulkMaster/mk-deception (src/libadxgca/) | CC0-1.0 | LICENSES/mk-deception-CC0.txt |
| https://github.com/karamzov123/fzero-gx-decomp | CC0-1.0 | LICENSES/fzero-gx-decomp-CC0.txt |
| https://github.com/AshfordFamily/recvx-decomp | MIT | LICENSES/recvx-decomp-MIT.txt |
| https://github.com/Dorgengoa/RGDecomp (src/main/sdk/) | CC0-1.0 | LICENSES/RGDecomp-CC0.txt |
| newlib 1.10.0 (https://sourceware.org/newlib/) | per-file notices (BSD-style) | below |
| https://github.com/LucasPicoli/god-hand-decomp | MIT | LICENSES/god-hand-decomp-MIT.txt |
| https://github.com/new-coke/rez-decomp | MIT | LICENSES/rez-decomp-MIT.txt |
| https://github.com/TheRealestNwah/sotc-decomp | CC0-1.0 | LICENSES/sotc-decomp-CC0.txt |
| https://github.com/denzi-gh/crashwoc-decomp-ps2 | GPL-3.0 | LICENSES/crashwoc-decomp-ps2-GPL-3.0.txt |
| https://github.com/lombyte-project/Lombyte | GPL-3.0 | LICENSES/Lombyte-GPL-3.0.txt |
| https://github.com/OpenRAC/rac1-decomp | GPL-3.0 | LICENSES/rac1-decomp-GPL-3.0.txt |
| https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/) | AGPL-3.0 | LICENSES/3s-decomp-AGPL-3.0.txt |
| https://github.com/RexxColder/BT2-Recomp (src/cri/) | CC0-1.0 | LICENSES/BT2-Recomp-CC0.txt |
| https://github.com/dev-camo/shadow-decomp (src/CRI/) | none stated by the repository (used at the maintainer's request; remove with `git grep -n shadow-decomp src`) | - |
| https://github.com/reshaped/sonic-adventure (sdk/sofdec/, modules/movie/sdk/) | none stated by the repository (same) | - |
| https://github.com/Raikaru/Persona4-Decompilation (src/cri/) | none stated by the repository (used at the maintainer request) (remove with `git grep -n Persona4-Decompilation src`) | - |
| https://github.com/Subarasheese/pes6decomp (src/cri/) | none stated for its own code (remove with `git grep -n pes6decomp src`) | - |
| https://github.com/Megami-Decomps/dds-decomp | none stated by the repository (remove with `git grep -n dds-decomp src`) | - |
| https://github.com/Megami-Decomps/smt3-decomp | none stated by the repository (remove with `git grep -n smt3-decomp src`) | - |
| https://github.com/zm2283145/syphon-filter-omega-strain-decomp | none stated by the repository (remove with `git grep -n syphon-filter-omega-strain-decomp src`) | - |
| https://github.com/gekoii/grandia_xtreme | none stated by the repository (remove with `git grep -n grandia_xtreme src`) | - |
| https://github.com/crashbashash/DW4_Decomp (src/sony/, src/cri/, src/newlib/, src/libgcc/) | decompiled src/: no licence granted by the repository (its tools are CC0-1.0) (remove with `git grep -n DW4_Decomp src`) | - |
| https://github.com/OpenRAC/rac5-sm-decomp | GPL-3.0 (remove with `git grep -n rac5-sm-decomp src`) | - |
| https://github.com/kira-502/dotr-decomp (src/sdk/) | CC0-1.0 (remove with `git grep -n dotr-decomp src`) | - |
| https://github.com/Komasia/sly2-decomp | no licence stated by the repository (remove with `git grep -n sly2-decomp src`) | - |
| https://github.com/DabDavis/socom2-decomp | no licence stated by the repository (remove with `git grep -n socom2-decomp src`) | - |

newlib: each function taken from it carries its origin file's notice where that file has one. Files without a notice
of their own are covered by newlib's COPYING.NEWLIB section for Cygnus/Red Hat code:

    Copyright (c) 1994, 1997 Cygnus Solutions. All rights reserved.

    Redistribution and use in source and binary forms are permitted provided that the above copyright notice and this
    paragraph are duplicated in all such forms and that any documentation, advertising materials, and other materials
    related to such distribution and use acknowledge that the software was developed at Cygnus Solutions. Cygnus
    Solutions may not be used to endorse or promote products derived from this software without specific prior
    written permission. THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
    WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

Because of the 3s-decomp functions (AGPL-3.0), the repository as a whole is distributed under the terms of the
AGPL-3.0; the rest of the code keeps its own licence (MIT for the code written here). GPL-3.0 code (crashwoc-decomp-ps2, Lombyte, rac1/rac2-decomp) is
combined with it as both licences' section 13 allows. No GPL-2.0-only code is used, since it cannot be
combined with AGPL-3.0 code.

Sources with no licence were first left out; since 2026-11-19 they are used at the maintainer's request and are
listed in the table above (each function names its origin, so `git grep -n <repository> src` finds them).
GPL-2.0-only sources (crashwoc, ...) are still not used.
