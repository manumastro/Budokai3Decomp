#!/usr/bin/env python3
"""Writes objdiff.json and the target objects objdiff compares against.

    gen_objdiff.py [--build]          write objdiff.json; --build also assembles the target objects

One unit per C file that is linked (src/AREA/FILE.c): base = build/src/AREA/FILE.o (what ninja builds from the C),
target = build/objdiff/AREA/FILE.o, the original code of that file assembled from the per-function assembly splat
dumped under asm/nonmatchings/AREA/FILE/ (every function of the file, matched ones included, so objdiff shows the
whole file). Open the repository folder in objdiff (https://github.com/encounter/objdiff), pick a unit and a
function; or `objdiff-cli diff -p . -u AREA/FILE FUNC`. Build the base with ninja first. Both the json and build/
are git-ignored; the assembly comes from the game's disc, so none of it may be committed.
"""

import argparse
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))
import configure  # noqa: E402


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--build", action="store_true", help="assemble the target objects")
    args = ap.parse_args()
    linked = configure.linked_c_files()
    out = []
    for src in configure.sources("src", ".c"):
        if src not in linked or configure.gcc_group(src) is not None:
            continue
        area, stem = src.parts[-2], src.stem
        asmdir = ROOT / "asm" / "nonmatchings" / area / stem
        target = ROOT / "build" / "objdiff" / area / f"{stem}.o"
        if args.build and asmdir.is_dir():
            files = sorted(asmdir.glob("*.s"))
            target.parent.mkdir(parents=True, exist_ok=True)
            tmp = target.with_suffix(".s")
            tmp.write_text("".join(f'.include "macro.inc"\n.include "{f}"\n' for f in files).replace(
                f'"{ROOT}/', '"'))
            r = subprocess.run([str(ROOT / (configure.BINUTILS + "as")), *configure.AS_FLAGS.split(), str(tmp),
                                "-o", str(target)], cwd=ROOT, capture_output=True, text=True)
            if r.returncode:
                print(f"{src}: assembling the target failed: {r.stderr.strip().splitlines()[:1]}")
                continue
        unit = {"name": f"{area}/{stem}", "base_path": f"build/src/{area}/{stem}.o",
                "metadata": {"source_path": src.as_posix(), "progress_categories": [area]}}
        if target.exists() or not args.build:
            unit["target_path"] = f"build/objdiff/{area}/{stem}.o"
        out.append(unit)
    cfg = {"$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
           "custom_make": "ninja", "build_target": False, "build_base": True,
           "watch_patterns": ["src/**/*.c", "include/**/*.h", "src/**/*.h"], "units": out,
           "progress_categories": [{"id": a, "name": a} for a in sorted({u["metadata"]["progress_categories"][0] for u in out})]}
    (ROOT / "objdiff.json").write_text(json.dumps(cfg, indent=2) + "\n")
    print(f"objdiff.json: {len(out)} units" + (" (targets assembled)" if args.build else ""))


if __name__ == "__main__":
    main()
