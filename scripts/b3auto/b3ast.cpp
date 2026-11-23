/*
 * b3ast.cpp - Native C++20 AST-based Batch Mutator, ELF32-LE MIPS R5900 Scorer,
 * and Diff-Guided Beam Search Engine for Metrowerks CodeWarrior PS2.
 *
 * Build: g++ -O3 -std=c++20 -Wall -Wextra -pthread scripts/b3auto/b3ast.cpp -o build/b3auto/b3ast
 */

#include "ast_c.hpp"
#include "ast_mut.hpp"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <elf.h>
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <mutex>
#include <numeric>
#include <string>
#include <sys/time.h>
#include <sys/wait.h>
#include <thread>
#include <unistd.h>
#include <unordered_set>
#include <vector>

using namespace b3ast;

static constexpr uint32_t VRAM_BASE = 0x100000u;
static constexpr int MAX_BATCH = 64;
static constexpr int MAX_BEAM = 10;
static constexpr int DP_BAND = 24;

static double now_sec() {
    struct timeval tv;
    gettimeofday(&tv, nullptr);
    return (double)tv.tv_sec + (double)tv.tv_usec * 1e-6;
}

static uint64_t fnv1a(const std::string &s) {
    uint64_t h = 14695981039346656037ULL;
    for (unsigned char c : s) {
        h ^= c;
        h *= 1099511628211ULL;
    }
    return h;
}

static std::string read_file_str(const std::string &path) {
    std::ifstream ifs(path, std::ios::binary);
    if (!ifs) return "";
    return std::string((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
}

/* ---------- Configuration ---------- */

struct Config {
    std::string rom_path, wibo_path, mwcc_path, inc_path, flags_str;
    std::string preamble_path, func_name, input_path, out_path;
    uint32_t addr = 0, orig_size = 0;
    int batch_size = 64;
    int threads = 1;
    int budget = 4000;
    int max_seconds = 20;
    bool allow_data = false;
    bool verbose = false;

    std::vector<std::string> flag_argv;
    std::vector<uint32_t> orig_words;
    int orig_trimmed_nwords = 0;
    std::string preamble, init_src;
};

static Config G;

/* ---------- MIPS R5900 Scorer with first_diff_ratio ---------- */

static inline uint32_t mask_word(uint32_t w, int reloc) {
    uint32_t op = w >> 26;
    if (op == 2 || op == 3) return w & 0xFC000000u;
    if (reloc) return w & 0xFFFF0000u;
    return w;
}

static inline uint32_t opcode_sig(uint32_t w) {
    uint32_t op = w >> 26;
    if (op == 0) return (op << 16) | (w & 0x3Fu);
    if (op == 1) return (op << 16) | ((w >> 16) & 0x1Fu);
    if (op == 17) return (op << 16) | (((w >> 21) & 0x1Fu) << 6) | (w & 0x3Fu);
    if (op == 18 || op == 28) return (op << 16) | (w & 0x3Fu);
    return op << 16;
}

static int word_pair_penalty(uint32_t a, int rel_a, uint32_t b) {
    if (mask_word(a, rel_a) == mask_word(b, rel_a)) return 0;
    if (opcode_sig(a) != opcode_sig(b)) return 40;
    int pen = 6;
    if (((a >> 21) & 31) != ((b >> 21) & 31)) pen += 4;
    if (((a >> 16) & 31) != ((b >> 16) & 31)) pen += 4;
    uint32_t op = a >> 26;
    if (op == 0 || op == 28) {
        if (((a >> 11) & 31) != ((b >> 11) & 31)) pen += 4;
        if (((a >> 6) & 31) != ((b >> 6) & 31)) pen += 3;
    } else if (!rel_a && (a & 0xFFFFu) != (b & 0xFFFFu)) {
        pen += 5;
    }
    return pen;
}

struct EvalResult {
    bool compiled = false;
    bool has_data = false;
    int exact_diffs = 999999;
    int size_diff = 999999;
    int nwords = 0;
    int score = 99999999;
    double first_diff_ratio = 0.5;
    uint64_t asm_hash = 0;
};

static EvalResult score_words(const uint32_t *words, const uint8_t *reloc, int n) {
    EvalResult r;
    r.compiled = true;
    r.nwords = n;
    uint64_t ah = 14695981039346656037ULL;
    for (int i = 0; i < n; i++) {
        uint32_t mw = mask_word(words[i], reloc[i]);
        ah ^= mw;
        ah *= 1099511628211ULL;
    }
    r.asm_hash = ah;
    int orig_n = (int)G.orig_words.size();
    bool len_ok = (n <= orig_n && n >= G.orig_trimmed_nwords && (orig_n - n) < 4);
    r.size_diff = std::abs(n - G.orig_trimmed_nwords);

    int first_diff = -1;
    int mn = std::min(n, G.orig_trimmed_nwords);
    for (int i = 0; i < mn; i++) {
        if (mask_word(words[i], reloc[i]) != mask_word(G.orig_words[i], reloc[i])) {
            first_diff = i;
            break;
        }
    }
    r.first_diff_ratio = (first_diff >= 0 && mn > 0) ? ((double)first_diff / (double)mn) : 0.5;

    if (len_ok) {
        int diffs = 0, sc = 0;
        for (int i = 0; i < n; i++) {
            if (mask_word(words[i], reloc[i]) != mask_word(G.orig_words[i], reloc[i])) {
                diffs++;
                sc += word_pair_penalty(words[i], reloc[i], G.orig_words[i]);
            }
        }
        r.exact_diffs = diffs;
        r.score = sc;
        return r;
    }

    int m = G.orig_trimmed_nwords;
    r.exact_diffs = std::abs(n - m) + 1;
    if (n > 2048 || m > 2048 || std::abs(n - m) >= DP_BAND) {
        int sc = std::abs(n - m) * 55;
        for (int i = 0; i < mn; i++) sc += word_pair_penalty(words[i], reloc[i], G.orig_words[i]);
        r.score = sc + 50;
        return r;
    }

    int W = 2 * DP_BAND + 1;
    std::vector<int> prev(W, 100000000), curr(W, 100000000);
    for (int j = 0; j <= m && j <= DP_BAND; j++) prev[j + DP_BAND] = j * 45;
    for (int i = 1; i <= n; i++) {
        std::fill(curr.begin(), curr.end(), 100000000);
        int jmin = std::max(0, i - DP_BAND);
        int jmax = std::min(m, i + DP_BAND);
        for (int j = jmin; j <= jmax; j++) {
            int idx = j - i + DP_BAND;
            int best = 100000000;
            if (idx + 1 < W) best = std::min(best, prev[idx + 1] + 45);
            if (j > jmin && idx - 1 >= 0) best = std::min(best, curr[idx - 1] + 45);
            if (j > 0 && prev[idx] < 100000000)
                best = std::min(best, prev[idx] + word_pair_penalty(words[i - 1], reloc[i - 1], G.orig_words[j - 1]));
            curr[idx] = best;
        }
        prev.swap(curr);
    }
    int fidx = m - n + DP_BAND;
    int sc = (fidx >= 0 && fidx < W) ? prev[fidx] : 100000000;
    r.score = sc + std::abs(n - m) * 10 + 1;
    return r;
}

/* ---------- ELF32-LE Parser ---------- */

static int parse_batch_elf(const std::string &obj_path, int k_start, int k_count, EvalResult *results) {
    std::string raw = read_file_str(obj_path);
    if (raw.size() < sizeof(Elf32_Ehdr)) return -1;
    const auto *buf = (const unsigned char *)raw.data();
    const auto *eh = (const Elf32_Ehdr *)buf;
    if (memcmp(eh->e_ident, ELFMAG, SELFMAG) != 0 || eh->e_ident[EI_CLASS] != ELFCLASS32) return -1;
    if (eh->e_shoff + (size_t)eh->e_shnum * eh->e_shentsize > raw.size()) return -1;

    const auto *shdrs = (const Elf32_Shdr *)(buf + eh->e_shoff);
    const char *shstr = (const char *)(buf + shdrs[eh->e_shstrndx].sh_offset);

    bool has_extra_data = false;
    int symtab_idx = -1, strtab_idx = -1;
    std::vector<int> rel_for_sec(eh->e_shnum, -1);

    for (int i = 0; i < eh->e_shnum; i++) {
        const char *sname = shstr + shdrs[i].sh_name;
        if (shdrs[i].sh_type == SHT_SYMTAB) {
            symtab_idx = i;
            strtab_idx = (int)shdrs[i].sh_link;
        } else if ((shdrs[i].sh_type == SHT_REL || shdrs[i].sh_type == SHT_RELA) &&
                   (strcmp(sname, ".rel.text") == 0 || strcmp(sname, ".rela.text") == 0)) {
            if (shdrs[i].sh_info < eh->e_shnum) rel_for_sec[shdrs[i].sh_info] = i;
        } else if ((shdrs[i].sh_flags & SHF_ALLOC) && shdrs[i].sh_size > 0 &&
                   strcmp(sname, ".text") != 0 && strcmp(sname, ".mwcats") != 0) {
            has_extra_data = true;
        }
    }
    if (symtab_idx < 0 || strtab_idx < 0) return -1;

    const auto *syms = (const Elf32_Sym *)(buf + shdrs[symtab_idx].sh_offset);
    int nsyms = (int)(shdrs[symtab_idx].sh_size / sizeof(Elf32_Sym));
    const char *strtab = (const char *)(buf + shdrs[strtab_idx].sh_offset);

    std::string prefix = G.func_name + "__mwb";
    for (int i = 0; i < nsyms; i++) {
        if (ELF32_ST_TYPE(syms[i].st_info) != STT_FUNC) continue;
        const char *name = strtab + syms[i].st_name;
        if (strncmp(name, prefix.c_str(), prefix.size()) != 0) continue;
        int idx = atoi(name + prefix.size());
        if (idx < k_start || idx >= k_start + k_count) continue;
        int sec = syms[i].st_shndx;
        if (sec <= 0 || sec >= eh->e_shnum) continue;
        uint32_t start = syms[i].st_value, size = syms[i].st_size;
        if (size == 0 || (size & 3) != 0 || shdrs[sec].sh_offset + start + size > raw.size()) continue;

        int nw = (int)(size / 4);
        const auto *words = (const uint32_t *)(buf + shdrs[sec].sh_offset + start);
        std::vector<uint8_t> reloc(nw, 0);

        int rsec = rel_for_sec[sec];
        if (rsec >= 0) {
            uint32_t entsz = shdrs[rsec].sh_entsize ? shdrs[rsec].sh_entsize :
                             (shdrs[rsec].sh_type == SHT_RELA ? sizeof(Elf32_Rela) : sizeof(Elf32_Rel));
            int nrel = (int)(shdrs[rsec].sh_size / entsz);
            const unsigned char *rp = buf + shdrs[rsec].sh_offset;
            for (int j = 0; j < nrel; j++) {
                uint32_t roff = *(const uint32_t *)(rp + j * entsz);
                if (roff >= start && roff < start + size) reloc[(roff - start) / 4] = 1;
            }
        }
        EvalResult er = score_words(words, reloc.data(), nw);
        er.has_data = has_extra_data;
        if (has_extra_data && !G.allow_data) {
            if (er.exact_diffs == 0) er.exact_diffs = 1;
            er.score += 5000;
        }
        results[idx - k_start] = er;
    }
    return 0;
}

/* ---------- Batch Compiler ---------- */

static int run_mwcc(const std::string &c_path, const std::string &o_path) {
    pid_t pid = fork();
    if (pid < 0) return -1;
    if (pid == 0) {
        int devnull = open("/dev/null", O_WRONLY);
        if (devnull >= 0) { dup2(devnull, STDOUT_FILENO); dup2(devnull, STDERR_FILENO); close(devnull); }
        setenv("MWCIncludes", G.inc_path.c_str(), 1);
        std::string inc_flag = "-I" + G.inc_path;
        std::vector<char *> argv;
        argv.push_back((char *)G.wibo_path.c_str());
        argv.push_back((char *)G.mwcc_path.c_str());
        argv.push_back((char *)"-c");
        for (auto &f : G.flag_argv) argv.push_back((char *)f.c_str());
        argv.push_back((char *)inc_flag.c_str());
        argv.push_back((char *)c_path.c_str());
        argv.push_back((char *)"-o");
        argv.push_back((char *)o_path.c_str());
        argv.push_back(nullptr);
        execv(G.wibo_path.c_str(), argv.data());
        _exit(127);
    }
    int status = 0;
    if (waitpid(pid, &status, 0) < 0) return -1;
    return (WIFEXITED(status) && WEXITSTATUS(status) == 0) ? 0 : -1;
}

static void eval_batch_range(const std::vector<FuncAST> &cands, int start, int count,
                             std::vector<EvalResult> &results, const std::string &tmp_base,
                             int &compile_calls) {
    if (count <= 0) return;
    std::string c_path = tmp_base + ".c";
    std::string o_path = tmp_base + ".o";

    std::ofstream ofs(c_path, std::ios::binary);
    ofs << G.preamble << "\n";
    for (int i = 0; i < count; i++) {
        std::string rname = G.func_name + "__mwb" + std::to_string(start + i);
        ofs << cands[start + i].print(rname, G.func_name) << "\n";
    }
    ofs.close();

    unlink(o_path.c_str());
    compile_calls++;
    if (run_mwcc(c_path, o_path) == 0) {
        parse_batch_elf(o_path, start, count, results.data() + start);
        unlink(o_path.c_str());
        unlink(c_path.c_str());
        return;
    }
    unlink(o_path.c_str());
    unlink(c_path.c_str());

    if (count == 1) return;
    int mid = count / 2;
    eval_batch_range(cands, start, mid, results, tmp_base, compile_calls);
    eval_batch_range(cands, start + mid, count - mid, results, tmp_base, compile_calls);
}

/* ---------- Beam Search ---------- */

struct BeamItem {
    FuncAST ast;
    EvalResult res;
};

static void beam_insert(std::vector<BeamItem> &beam, const FuncAST &ast, const EvalResult &res,
                        const std::string &printed) {
    (void)printed;
    if (!res.compiled) return;
    for (const auto &b : beam) {
        if (b.res.asm_hash == res.asm_hash) return;
    }
    auto it = beam.begin();
    while (it != beam.end() && it->res.score <= res.score) ++it;
    if ((int)(it - beam.begin()) >= MAX_BEAM) return;
    beam.insert(it, {ast.clone(), res});
    if ((int)beam.size() > MAX_BEAM) beam.pop_back();
}

int main(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--rom" && i + 1 < argc) G.rom_path = argv[++i];
        else if (a == "--wibo" && i + 1 < argc) G.wibo_path = argv[++i];
        else if (a == "--mwcc" && i + 1 < argc) G.mwcc_path = argv[++i];
        else if (a == "--inc" && i + 1 < argc) G.inc_path = argv[++i];
        else if (a == "--flags" && i + 1 < argc) G.flags_str = argv[++i];
        else if (a == "--preamble" && i + 1 < argc) G.preamble_path = argv[++i];
        else if (a == "--func" && i + 1 < argc) G.func_name = argv[++i];
        else if (a == "--addr" && i + 1 < argc) G.addr = (uint32_t)strtoul(argv[++i], nullptr, 0);
        else if (a == "--size" && i + 1 < argc) G.orig_size = (uint32_t)strtoul(argv[++i], nullptr, 0);
        else if (a == "--input" && i + 1 < argc) G.input_path = argv[++i];
        else if (a == "--out" && i + 1 < argc) G.out_path = argv[++i];
        else if (a == "--batch" && i + 1 < argc) G.batch_size = std::clamp(atoi(argv[++i]), 1, MAX_BATCH);
        else if (a == "--threads" && i + 1 < argc) G.threads = std::clamp(atoi(argv[++i]), 1, 32);
        else if (a == "--budget" && i + 1 < argc) G.budget = atoi(argv[++i]);
        else if (a == "--seconds" && i + 1 < argc) G.max_seconds = atoi(argv[++i]);
        else if (a == "--allow-data") G.allow_data = true;
        else if (a == "-v") G.verbose = true;
    }

    if (G.rom_path.empty() || G.wibo_path.empty() || G.mwcc_path.empty() || G.func_name.empty() ||
        G.input_path.empty() || G.addr == 0 || G.orig_size == 0) {
        fprintf(stderr, "b3ast: missing required arguments\n");
        return 2;
    }

    {
        std::istringstream iss(G.flags_str);
        std::string tok;
        while (iss >> tok) G.flag_argv.push_back(tok);
    }

    std::string rom = read_file_str(G.rom_path);
    if (rom.empty() || G.addr < VRAM_BASE || (size_t)(G.addr - VRAM_BASE + G.orig_size) > rom.size()) {
        fprintf(stderr, "b3ast: bad ROM slice\n");
        return 2;
    }
    int norig = (int)(G.orig_size / 4);
    G.orig_words.resize(norig);
    memcpy(G.orig_words.data(), rom.data() + (G.addr - VRAM_BASE), (size_t)norig * 4);
    G.orig_trimmed_nwords = norig;
    while (G.orig_trimmed_nwords > 1 && G.orig_words[G.orig_trimmed_nwords - 1] == 0 &&
           (norig - G.orig_trimmed_nwords) < 3) {
        G.orig_trimmed_nwords--;
    }

    G.preamble = read_file_str(G.preamble_path);
    G.init_src = read_file_str(G.input_path);
    if (G.preamble.empty() || G.init_src.empty()) {
        fprintf(stderr, "b3ast: empty preamble or input\n");
        return 2;
    }

    double t0 = now_sec();
    FuncAST base_ast;
    Parser parser(G.preamble, G.init_src);
    if (!parser.parse_function(base_ast)) {
        printf("STATUS=PARSEFAIL func=%s time=%.2fs\n", G.func_name.c_str(), now_sec() - t0);
        return 1;
    }

    std::string tmp_base = "/dev/shm/b3ast_" + std::to_string((int)getpid());
    int compile_calls = 0, evals = 0;

    // Evaluate base AST
    std::vector<FuncAST> one;
    one.push_back(base_ast.clone());
    std::vector<EvalResult> init_vec(1);
    eval_batch_range(one, 0, 1, init_vec, tmp_base, compile_calls);
    evals = 1;

    if (!init_vec[0].compiled) {
        if (getenv("B3AST_DEBUG")) {
            std::ofstream("/tmp/b3ast_dbg.c") << G.preamble << "\n" << base_ast.print();
        }
        printf("STATUS=NOCOMPILE func=%s evals=1 compiles=%d time=%.2fs\n",
               G.func_name.c_str(), compile_calls, now_sec() - t0);
        return 1;
    }

    std::unordered_set<uint64_t> seen;
    std::string base_printed = base_ast.print();
    seen.insert(fnv1a(base_printed));

    if (init_vec[0].exact_diffs == 0) {
        if (!G.out_path.empty()) { std::ofstream(G.out_path) << base_printed; }
        printf("STATUS=MATCH func=%s init_score=0 best_score=0 diffs=0 evals=1 compiles=%d time=%.2fs\n",
               G.func_name.c_str(), compile_calls, now_sec() - t0);
        return 0;
    }

    std::vector<BeamItem> beam;
    beam_insert(beam, base_ast, init_vec[0], base_printed);
    int init_score = init_vec[0].score;
    int init_diffs = init_vec[0].exact_diffs;
    bool matched = false;

    // Stage 1: Deterministic exhaustive decl-order sweep when 2 <= n_decls <= 5 (<= 120 perms = 2 batches!)
    size_t ndecls = base_ast.body->decls.size();
    if (ndecls >= 2 && ndecls <= 5) {
        std::vector<size_t> perm(ndecls);
        std::iota(perm.begin(), perm.end(), 0);
        std::vector<FuncAST> batch;
        std::vector<std::string> batch_str;
        while (std::next_permutation(perm.begin(), perm.end()) && !matched) {
            FuncAST cand = base_ast.clone();
            std::vector<LocalDecl> reord;
            reord.reserve(ndecls);
            for (size_t idx : perm) reord.push_back(base_ast.body->decls[idx].clone());
            cand.body->decls = std::move(reord);
            std::string pr = cand.print();
            uint64_t h = fnv1a(pr);
            if (!seen.insert(h).second) continue;
            batch.push_back(std::move(cand));
            batch_str.push_back(std::move(pr));
            if ((int)batch.size() >= G.batch_size) {
                std::vector<EvalResult> bres(batch.size());
                eval_batch_range(batch, 0, (int)batch.size(), bres, tmp_base, compile_calls);
                evals += (int)batch.size();
                for (size_t i = 0; i < batch.size(); i++) {
                    if (bres[i].compiled) {
                        beam_insert(beam, batch[i], bres[i], batch_str[i]);
                        if (bres[i].exact_diffs == 0) matched = true;
                    }
                }
                batch.clear();
                batch_str.clear();
            }
        }
        if (!batch.empty() && !matched) {
            std::vector<EvalResult> bres(batch.size());
            eval_batch_range(batch, 0, (int)batch.size(), bres, tmp_base, compile_calls);
            evals += (int)batch.size();
            for (size_t i = 0; i < batch.size(); i++) {
                if (bres[i].compiled) {
                    beam_insert(beam, batch[i], bres[i], batch_str[i]);
                    if (bres[i].exact_diffs == 0) matched = true;
                }
            }
        }
    }

    // Stage 1b: Greedy Decl-Insertion Sweep when n_decls > 5 (O(n^2) single-batch sweep!)
    if (ndecls > 5 && ndecls <= 16 && !matched) {
        std::vector<FuncAST> batch;
        std::vector<std::string> batch_str;
        for (size_t i = 0; i < ndecls && !matched; i++) {
            for (size_t j = 0; j < ndecls && !matched; j++) {
                if (i == j) continue;
                FuncAST cand = base_ast.clone();
                LocalDecl tmp = std::move(cand.body->decls[i]);
                cand.body->decls.erase(cand.body->decls.begin() + (ptrdiff_t)i);
                cand.body->decls.insert(cand.body->decls.begin() + (ptrdiff_t)j, std::move(tmp));
                std::string pr = cand.print();
                if (!seen.insert(fnv1a(pr)).second) continue;
                batch.push_back(std::move(cand));
                batch_str.push_back(std::move(pr));
                if ((int)batch.size() >= G.batch_size) {
                    std::vector<EvalResult> bres(batch.size());
                    eval_batch_range(batch, 0, (int)batch.size(), bres, tmp_base, compile_calls);
                    evals += (int)batch.size();
                    for (size_t k = 0; k < batch.size(); k++) {
                        if (bres[k].compiled) {
                            beam_insert(beam, batch[k], bres[k], batch_str[k]);
                            if (bres[k].exact_diffs == 0) matched = true;
                        }
                    }
                    batch.clear(); batch_str.clear();
                }
            }
        }
        if (!batch.empty() && !matched) {
            std::vector<EvalResult> bres(batch.size());
            eval_batch_range(batch, 0, (int)batch.size(), bres, tmp_base, compile_calls);
            evals += (int)batch.size();
            for (size_t k = 0; k < batch.size(); k++) {
                if (bres[k].compiled) {
                    beam_insert(beam, batch[k], bres[k], batch_str[k]);
                    if (bres[k].exact_diffs == 0) matched = true;
                }
            }
        }
    }

    // Stage 1c: Deterministic 1-edit sweep over every binary commute & bool-ternary on current best (1 batch!)
    if (!matched && !beam.empty()) {
        std::vector<FuncAST> batch;
        std::vector<std::string> batch_str;
        const FuncAST &seed = beam[0].ast;
        auto exprs_ref = collect_weighted_exprs(const_cast<FuncAST &>(seed), 0.5);
        for (size_t ei = 0; ei < exprs_ref.size() && (int)batch.size() < G.batch_size; ei++) {
            const Expr *re = exprs_ref[ei].node;
            bool is_comm = (re->kind == ExprKind::Binary &&
                            (re->text == "+" || re->text == "*" || re->text == "&" || re->text == "|" || re->text == "^"));
            bool is_btern = (re->kind == ExprKind::Binary && (re->text == "!=" || re->text == "==") &&
                             re->rhs && re->rhs->kind == ExprKind::Num && re->rhs->text == "0");
            if (!is_comm && !is_btern) continue;
            FuncAST cand = seed.clone();
            auto cexprs = collect_weighted_exprs(cand, 0.5);
            if (ei >= cexprs.size()) continue;
            Expr *ce = cexprs[ei].node;
            if (is_comm) {
                std::swap(ce->lhs, ce->rhs);
            } else {
                bool is_ne = (ce->text == "!=");
                ExprPtr cond = std::move(ce->lhs);
                ce->kind = ExprKind::Ternary;
                ce->text = "?:";
                ce->cond = std::move(cond);
                ce->lhs = std::make_unique<Expr>(ExprKind::Num, is_ne ? "1" : "0");
                ce->rhs = std::make_unique<Expr>(ExprKind::Num, is_ne ? "0" : "1");
            }
            std::string pr = cand.print();
            if (!seen.insert(fnv1a(pr)).second) continue;
            batch.push_back(std::move(cand));
            batch_str.push_back(std::move(pr));
        }
        if (!batch.empty()) {
            std::vector<EvalResult> bres(batch.size());
            eval_batch_range(batch, 0, (int)batch.size(), bres, tmp_base, compile_calls);
            evals += (int)batch.size();
            for (size_t k = 0; k < batch.size(); k++) {
                if (bres[k].compiled) {
                    beam_insert(beam, batch[k], bres[k], batch_str[k]);
                    if (bres[k].exact_diffs == 0) matched = true;
                }
            }
        }
    }

    // Stage 2: Multi-threaded Adaptive-Bandit Diff-Guided Focused AST Beam Search (saturates all G.threads cores!)
    std::mutex mtx;
    std::atomic<bool> stop_flag{matched};
    std::atomic<int> total_evals{evals};
    std::atomic<int> total_compiles{compile_calls};
    OpBandit bandit;
    int stale_rounds = 0;

    auto worker = [&](int tid) {
        std::string tbase = "/dev/shm/b3ast_" + std::to_string((int)getpid()) + "_" + std::to_string(tid);
        unsigned int rng = (unsigned int)(getpid() ^ (unsigned int)(t0 * 1e6) ^ G.addr ^ (tid * 2654435761u));
        while (!stop_flag.load(std::memory_order_relaxed) &&
               total_evals.load(std::memory_order_relaxed) < G.budget &&
               (now_sec() - t0) < (double)G.max_seconds) {
            int rem = G.budget - total_evals.load(std::memory_order_relaxed);
            if (rem <= 0) break;
            int want = std::min(G.batch_size, rem);
            std::vector<FuncAST> batch;
            std::vector<std::string> batch_str;
            std::vector<int> batch_ops;
            std::vector<int> batch_pscore;
            batch.reserve(want); batch_str.reserve(want); batch_ops.reserve(want); batch_pscore.reserve(want);

            {
                std::lock_guard<std::mutex> lk(mtx);
                int attempts = 0;
                while ((int)batch.size() < want && attempts < want * 6) {
                    attempts++;
                    size_t pidx = 0;
                    if (beam.size() > 1) {
                        int r = (int)(rand_r(&rng) % 100);
                        pidx = (r < 50) ? 0 : (rand_r(&rng) % beam.size());
                    }
                    int steps = (stale_rounds >= 4) ? (2 + (int)(rand_r(&rng) % 3))
                              : (stale_rounds >= 2) ? (1 + (int)(rand_r(&rng) % 3))
                              : (1 + (int)(rand_r(&rng) % 2));
                    double focus = beam[pidx].res.first_diff_ratio;
                    int pop = -1;
                    FuncAST cand = mutate_ast(beam[pidx].ast, rng, steps, focus, &bandit, &pop);
                    std::string pr = cand.print();
                    uint64_t h = fnv1a(pr);
                    if (!seen.insert(h).second) continue;
                    batch.push_back(std::move(cand));
                    batch_str.push_back(std::move(pr));
                    batch_ops.push_back(pop);
                    batch_pscore.push_back(beam[pidx].res.score);
                }
            }
            if (batch.empty()) break;

            std::vector<EvalResult> bres(batch.size());
            int local_cc = 0;
            eval_batch_range(batch, 0, (int)batch.size(), bres, tbase, local_cc);
            int cur_ev = total_evals.fetch_add((int)batch.size()) + (int)batch.size();
            int cur_cc = total_compiles.fetch_add(local_cc) + local_cc;

            std::lock_guard<std::mutex> lk(mtx);
            int prev_best = beam[0].res.score;
            for (size_t i = 0; i < batch.size(); i++) {
                bool imp = bres[i].compiled && (bres[i].score < batch_pscore[i]);
                bandit.record(batch_ops[i], bres[i].compiled, imp);
                if (bres[i].compiled) {
                    beam_insert(beam, batch[i], bres[i], batch_str[i]);
                    if (bres[i].exact_diffs == 0) {
                        matched = true;
                        stop_flag.store(true, std::memory_order_relaxed);
                    }
                }
            }
            if (beam[0].res.score < prev_best) stale_rounds = 0;
            else stale_rounds++;

            if (G.verbose && tid == 0) {
                fprintf(stderr, "  [AST %s] evals=%d compiles=%d best=%d diffs=%d focus=%.2f (%.0f cands/s)\n",
                        G.func_name.c_str(), cur_ev, cur_cc, beam[0].res.score, beam[0].res.exact_diffs,
                        beam[0].res.first_diff_ratio, cur_ev / (now_sec() - t0 + 1e-6));
            }
        }
    };

    if (G.threads <= 1) {
        worker(0);
    } else {
        std::vector<std::thread> pool;
        pool.reserve(G.threads);
        for (int t = 0; t < G.threads; t++) pool.emplace_back(worker, t);
        for (auto &th : pool) th.join();
    }
    evals = total_evals.load();
    compile_calls = total_compiles.load();

    if (!G.out_path.empty() && (matched || beam[0].res.score < init_score)) {
        std::ofstream(G.out_path) << beam[0].ast.print();
    }

    double dt = now_sec() - t0;
    printf("STATUS=%s func=%s init_score=%d best_score=%d init_diffs=%d best_diffs=%d evals=%d compiles=%d rate=%.1f/s time=%.2fs\n",
           matched ? "MATCH" : (beam[0].res.score < init_score ? "IMPROVED" : "SAME"),
           G.func_name.c_str(), init_score, beam[0].res.score, init_diffs, beam[0].res.exact_diffs,
           evals, compile_calls, evals / (dt + 1e-6), dt);

    return matched ? 0 : 1;
}
