#!/bin/bash
# The token-free matching loop: every pass runs the automatic routes, puts what matches in place, checks the whole
# build and pushes; it stops when a pass adds nothing and no long permuter pass is still running.
#
#   scripts/auto_loop.sh [MAXPASSES]            (in a worktree of its own; log: build/auto/log.txt)
#
# A pass:
#   1. scripts/sim_find.py + scripts/sim_clone.py: library sibling clones (func_insert items) and game sibling
#      clones (--apply), every pair under a time limit
#   2. scripts/lib_autofix.py over every library function still in assembly (mechanical draft repairs)
#   3. the score-0 results of the long decomp-permuter pass (build/auto/perm, scripts/lib_permute.py run, started
#      apart: see build/auto/perm.log) that are not in place yet
#   every match goes in through scripts/func_insert.py --real (each function checked in its file compiled as the
#   build does); then build/auto/ship.sh: commit, rebase on origin/main, whole build, push only on CHECK.
# Every step has a time limit and writes a heartbeat line to the log at least once a minute.
# Stop it: pkill -f auto_loop.sh (the steps end with it: they run in its process group: kill -- -PGID).
set -u
cd "$(dirname "$0")/.." || exit 1
ROOT=$(pwd)
PY=.venv/bin/python
LOG=build/auto/log.txt
MAX=${1:-50}
mkdir -p build/auto
log() { echo "$(date '+%F %T') $*" >> "$LOG"; }

# step NAME SECONDS CMD...: runs CMD with a time limit, a heartbeat line every minute
step() {
  local name=$1 secs=$2; shift 2
  local out=build/auto/step_${name}.log
  timeout -k 30 "$secs" "$@" > "$out" 2>&1 &
  local pid=$! t0=$SECONDS
  while kill -0 $pid 2>/dev/null; do
    sleep 60 & wait $!
    kill -0 $pid 2>/dev/null && log "  .. $name running $((SECONDS - t0)) s, log lines $(wc -l < "$out")"
  done
  wait $pid; local rc=$?
  [ $rc -eq 124 ] && log "  !! $name hit its time limit ($secs s)"
  return $rc
}

# functions in C = all (8,295) minus the INCLUDE_ASM lines and asm-segment functions left (no build needed)
count() { echo $((8295 - $($PY scripts/lib_remaining.py --all 2>/dev/null | wc -l))); }

alert() { mkdir -p ~/.stallcheck; echo "$(date '+%F %T') $*" >> ~/.stallcheck/alerts; }
# rebase on origin/main; local edits identical to origin/main's version of the file are dropped first
sync_main() {
  git fetch -q origin || return 1
  local f
  for f in $(git diff --name-only); do
    git diff --quiet origin/main -- "$f" && git checkout -q -- "$f"
  done
  git rebase -q origin/main 2>/dev/null && return 0
  git rebase --abort 2>/dev/null; return 1
}

perm_running() { pgrep -f "lib_permute.py run --input build/auto/perm_in.json" > /dev/null; }

log "auto_loop start, max $MAX passes, $(count) functions in C"
pass=0
while [ $pass -lt "$MAX" ]; do
  pass=$((pass + 1))
  P=build/auto/p$pass; mkdir -p $P
  start=$(count)
  log "pass $pass: start $start"
  # stay on origin/main: a pass on an old checkout redoes merged work and misses new tools. A failed sync stops the
  # loop loudly (log line + ~/.stallcheck/alerts, which the supervisor's stall check reports) instead of going on.
  if ! sync_main; then
    log "SYNC FAILED: cannot rebase on origin/main ($(git status --short | head -3 | tr '\n' ' ')); stopping"
    alert "B3 auto_loop: cannot rebase .wt/auto2 on origin/main; loop stopped"
    exit 2
  fi

  # 1. sibling clones
  step sim_find 1800 $PY scripts/sim_find.py --out build/sim/siblings.json
  step sim_clone 3600 $PY scripts/sim_clone.py --min 0.8 -j 4 --timeout 300 --deadline 3300 --apply \
    --gcc-items $P/sim_items.json --out build/sim/clones.json
  [ -s $P/sim_items.json ] && step ins_sim 3600 $PY scripts/func_insert.py $P/sim_items.json --real --jobs 4 \
    --log $P/ins_sim.log --out $P/ins_sim.json
  a1=$(count); log "  sibling clones: +$((a1 - start))"

  # 2. mechanical draft repairs
  # (AUTOFIX=0 skips it: on 2026-11-19 two 2-hour runs over ~1,000 drafts added nothing)
  if [ "${AUTOFIX:-1}" = 1 ]; then
    $PY scripts/lib_remaining.py > $P/remaining.txt 2>/dev/null
    awk '{print $2}' $P/remaining.txt | grep -E '^[A-Za-z_]' > $P/queue.txt
    step autofix 7200 $PY scripts/lib_autofix.py $P/queue.txt --jobs 4 --out $P/fix --log $P/autofix.log
    if ls $P/fix/*.c > /dev/null 2>&1; then
      step items 1800 $PY scripts/lib_try.py --items $P/fix_items.json $P/fix/*.c
      [ -s $P/fix_items.json ] && step ins_fix 3600 $PY scripts/func_insert.py $P/fix_items.json --real --jobs 4 \
        --log $P/ins_fix.log --out $P/ins_fix.json
    fi
  fi
  a2=$(count); log "  draft repairs: +$((a2 - a1))"

  # 3. the long permuter pass's matches so far
  if [ -s build/auto/perm/perm_matches.json ]; then
    step ins_perm 3600 $PY scripts/func_insert.py build/auto/perm/perm_matches.json --real --jobs 4 \
      --log $P/ins_perm.log --out $P/ins_perm.json
  fi
  a3=$(count); log "  permuter: +$((a3 - a2))"

  added=$((a3 - start))
  if [ $added -gt 0 ]; then
    cat > $P/msg.txt <<EOF
Automatic loop, pass $pass: $added more functions

Sibling clones $((a1 - start)), mechanical draft repairs $((a2 - a1)), decomp-permuter $((a3 - a2))
(scripts/auto_loop.sh; every function checked in its file compiled as the build does).
Checked: whole build CHECK build/SLUS_209.98.ok.

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>
EOF
    if step ship 3600 build/auto/ship.sh $P/msg.txt; then
      log "  shipped: $(tail -2 build/auto/step_ship.log | head -1)"
    else
      log "  SHIP FAILED: $(tail -3 build/auto/step_ship.log | tr '\n' ' ')"
      git reset -q --hard origin/main
      log "  reset to origin/main; stopping"
      alert "B3 auto_loop: SHIP FAILED (whole build not byte-identical) in pass $pass; loop stopped"
      exit 1
    fi
  fi
  log "pass $pass: +$added, now $(count)"
  if [ $added -eq 0 ]; then
    if perm_running; then
      log "  nothing new; the permuter pass is still running: next pass in 30 min"
      for i in $(seq 30); do sleep 60; done
    else
      log "auto_loop: a pass added nothing and the permuter pass has ended: stop"
      exit 0
    fi
  fi
done
log "auto_loop: $MAX passes done"
