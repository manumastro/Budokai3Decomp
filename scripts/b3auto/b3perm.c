/*
 * b3perm.c - High-speed native C batch compiler, ELF32-LE MIPS R5900 scorer,
 * and C-source mutation/beam-search engine for Metrowerks CodeWarrior PS2.
 *
 * Zero Python, zero objdump in the hot loop: reads ELF32 .text/.rel.text
 * directly from mwccps2.exe batch output in /dev/shm.
 */

#define _GNU_SOURCE
#include <ctype.h>
#include <elf.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>

#define VRAM_BASE 0x100000u
#define MAX_BATCH 64
#define MAX_BEAM  8
#define HASH_BUCKETS 131072
#define DP_BAND 24

/* ---------- Utilities ---------- */

static double now_sec(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (double)tv.tv_sec + (double)tv.tv_usec * 1e-6;
}

static uint64_t fnv1a(const char *s, size_t n) {
    uint64_t h = 14695981039346656037ULL;
    for (size_t i = 0; i < n; i++) {
        h ^= (unsigned char)s[i];
        h *= 1099511628211ULL;
    }
    return h;
}

static char *read_file_all(const char *path, size_t *out_len) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    if (sz < 0) { fclose(f); return NULL; }
    fseek(f, 0, SEEK_SET);
    char *buf = (char *)malloc((size_t)sz + 1);
    if (!buf) { fclose(f); return NULL; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    buf[rd] = '\0';
    if (out_len) *out_len = rd;
    return buf;
}

/* Simple dynamic string buffer */
typedef struct {
    char *data;
    size_t len;
    size_t cap;
} SBuf;

static void sb_init(SBuf *b, size_t cap) {
    b->cap = cap < 256 ? 256 : cap;
    b->data = (char *)malloc(b->cap);
    b->len = 0;
    b->data[0] = '\0';
}

static void sb_reserve(SBuf *b, size_t need) {
    if (b->len + need + 1 <= b->cap) return;
    while (b->len + need + 1 > b->cap) b->cap *= 2;
    b->data = (char *)realloc(b->data, b->cap);
}

static void sb_append(SBuf *b, const char *s, size_t n) {
    sb_reserve(b, n);
    memcpy(b->data + b->len, s, n);
    b->len += n;
    b->data[b->len] = '\0';
}

static void sb_puts(SBuf *b, const char *s) {
    sb_append(b, s, strlen(s));
}

static void sb_free(SBuf *b) {
    free(b->data);
    b->data = NULL;
    b->len = b->cap = 0;
}

/* ---------- Configuration ---------- */

typedef struct {
    const char *rom_path;
    const char *wibo_path;
    const char *mwcc_path;
    const char *inc_path;
    const char *flags_str;
    const char *preamble_path;
    const char *func_name;
    const char *input_path;
    const char *out_path;
    uint32_t addr;
    uint32_t orig_size;
    int batch_size;
    int budget;
    int max_seconds;
    int allow_data;
    int verbose;
    int eval_only;
    /* parsed flags */
    char *flag_argv[32];
    int flag_argc;
    /* loaded data */
    uint32_t *orig_words;
    int orig_nwords;
    int orig_trimmed_nwords; /* without trailing 0 padding */
    char *preamble;
    size_t preamble_len;
    char *init_src;
    size_t init_len;
} Config;

static Config G;

/* ---------- MIPS R5900 Scoring ---------- */

static inline uint32_t mask_word(uint32_t w, int reloc) {
    uint32_t op = w >> 26;
    if (op == 2 || op == 3) return w & 0xFC000000u; /* j / jal */
    if (reloc) return w & 0xFFFF0000u;
    return w;
}

static inline uint32_t opcode_sig(uint32_t w) {
    uint32_t op = w >> 26;
    if (op == 0) return (op << 16) | (w & 0x3Fu); /* SPECIAL funct */
    if (op == 1) return (op << 16) | ((w >> 16) & 0x1Fu); /* REGIMM */
    if (op == 17) return (op << 16) | (((w >> 21) & 0x1Fu) << 6) | (w & 0x3Fu); /* COP1 */
    if (op == 18) return (op << 16) | (w & 0x3Fu); /* COP2/VU0 */
    if (op == 28) return (op << 16) | (w & 0x3Fu); /* MMI */
    return op << 16;
}

static int word_pair_penalty(uint32_t a, int rel_a, uint32_t b) {
    uint32_t ma = mask_word(a, rel_a);
    uint32_t mb = mask_word(b, rel_a);
    if (ma == mb) return 0;
    if (opcode_sig(a) != opcode_sig(b)) return 40;
    /* Same instruction opcode: count differing register/imm fields */
    int pen = 6;
    if (((a >> 21) & 31) != ((b >> 21) & 31)) pen += 4; /* rs */
    if (((a >> 16) & 31) != ((b >> 16) & 31)) pen += 4; /* rt */
    uint32_t op = a >> 26;
    if (op == 0 || op == 28) {
        if (((a >> 11) & 31) != ((b >> 11) & 31)) pen += 4; /* rd */
        if (((a >> 6) & 31) != ((b >> 6) & 31)) pen += 3;   /* shamt */
    } else if (!rel_a && (a & 0xFFFFu) != (b & 0xFFFFu)) {
        pen += 5;
    }
    return pen;
}

typedef struct {
    int compiled;
    int has_data;
    int exact_diffs;   /* 0 ONLY if exact byte-identical match of right length */
    int size_diff;     /* abs(nwords - orig_nwords) */
    int nwords;
    int score;         /* smooth heuristic score (0 = exact match) */
} EvalResult;

static EvalResult score_words(const uint32_t *words, const uint8_t *reloc, int n) {
    EvalResult r;
    r.compiled = 1;
    r.has_data = 0;
    r.nwords = n;

    int orig_n = G.orig_nwords;
    /* Check if compiled size is compatible with original (trailing zero padding < 16 bytes) */
    int len_ok = 0;
    if (n <= orig_n && n >= G.orig_trimmed_nwords && (orig_n - n) < 4) {
        len_ok = 1;
    }
    r.size_diff = abs(n - G.orig_trimmed_nwords);

    if (len_ok) {
        int diffs = 0;
        int sc = 0;
        for (int i = 0; i < n; i++) {
            uint32_t ma = mask_word(words[i], reloc[i]);
            uint32_t mb = mask_word(G.orig_words[i], reloc[i]);
            if (ma != mb) {
                diffs++;
                sc += word_pair_penalty(words[i], reloc[i], G.orig_words[i]);
            }
        }
        r.exact_diffs = diffs;
        r.score = sc;
        return r;
    }

    /* Different size: banded Levenshtein / alignment DP */
    int m = G.orig_trimmed_nwords;
    r.exact_diffs = abs(n - m) + 1;
    if (n > 2048 || m > 2048 || abs(n - m) >= DP_BAND) {
        /* Fallback linear scan + strong size penalty */
        int mn = n < m ? n : m;
        int sc = abs(n - m) * 55;
        for (int i = 0; i < mn; i++) {
            sc += word_pair_penalty(words[i], reloc[i], G.orig_words[i]);
        }
        r.score = sc + 50;
        return r;
    }

    /* Banded DP: dp[i][j - i + DP_BAND] */
    int W = 2 * DP_BAND + 1;
    int prev[2 * DP_BAND + 1];
    int curr[2 * DP_BAND + 1];
    const int INF = 100000000;
    for (int k = 0; k < W; k++) prev[k] = INF;
    for (int j = 0; j <= m && j <= DP_BAND; j++) {
        prev[j + DP_BAND] = j * 45;
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < W; k++) curr[k] = INF;
        int jmin = i - DP_BAND; if (jmin < 0) jmin = 0;
        int jmax = i + DP_BAND; if (jmax > m) jmax = m;
        for (int j = jmin; j <= jmax; j++) {
            int idx = j - i + DP_BAND;
            int best = INF;
            /* delete from words */
            if (idx + 1 < W && prev[idx + 1] + 45 < best)
                best = prev[idx + 1] + 45;
            /* insert from orig */
            if (j > jmin && idx - 1 >= 0 && curr[idx - 1] + 45 < best)
                best = curr[idx - 1] + 45;
            /* match/substitute */
            if (j > 0 && prev[idx] < INF) {
                int cost = word_pair_penalty(words[i - 1], reloc[i - 1], G.orig_words[j - 1]);
                if (prev[idx] + cost < best) best = prev[idx] + cost;
            }
            curr[idx] = best;
        }
        memcpy(prev, curr, sizeof(prev));
    }
    int final_idx = m - n + DP_BAND;
    int sc = (final_idx >= 0 && final_idx < W) ? prev[final_idx] : INF;
    r.score = sc + abs(n - m) * 10 + 1;
    return r;
}

/* ---------- ELF32-LE Parser ---------- */

static int parse_batch_elf(const char *obj_path, int k_start, int k_count,
                           EvalResult *results) {
    size_t flen = 0;
    unsigned char *buf = (unsigned char *)read_file_all(obj_path, &flen);
    if (!buf || flen < sizeof(Elf32_Ehdr)) {
        free(buf);
        return -1;
    }
    Elf32_Ehdr *eh = (Elf32_Ehdr *)buf;
    if (memcmp(eh->e_ident, ELFMAG, SELFMAG) != 0 || eh->e_ident[EI_CLASS] != ELFCLASS32) {
        free(buf);
        return -1;
    }
    if (eh->e_shoff + (size_t)eh->e_shnum * eh->e_shentsize > flen) {
        free(buf);
        return -1;
    }
    Elf32_Shdr *shdrs = (Elf32_Shdr *)(buf + eh->e_shoff);
    const char *shstr = (const char *)(buf + shdrs[eh->e_shstrndx].sh_offset);

    int has_extra_data = 0;
    int symtab_idx = -1, strtab_idx = -1;

    /* Map section index -> reloc section index */
    int *rel_for_sec = (int *)malloc((size_t)eh->e_shnum * sizeof(int));
    for (int i = 0; i < eh->e_shnum; i++) rel_for_sec[i] = -1;

    for (int i = 0; i < eh->e_shnum; i++) {
        const char *sname = shstr + shdrs[i].sh_name;
        if (shdrs[i].sh_type == SHT_SYMTAB) {
            symtab_idx = i;
            strtab_idx = shdrs[i].sh_link;
        } else if ((shdrs[i].sh_type == SHT_REL || shdrs[i].sh_type == SHT_RELA) &&
                   (strcmp(sname, ".rel.text") == 0 || strcmp(sname, ".rela.text") == 0)) {
            if (shdrs[i].sh_info < eh->e_shnum)
                rel_for_sec[shdrs[i].sh_info] = i;
        } else if ((shdrs[i].sh_flags & SHF_ALLOC) && shdrs[i].sh_size > 0 &&
                   strcmp(sname, ".text") != 0 && strcmp(sname, ".mwcats") != 0) {
            has_extra_data = 1;
        }
    }

    if (symtab_idx < 0 || strtab_idx < 0) {
        free(rel_for_sec);
        free(buf);
        return -1;
    }

    Elf32_Sym *syms = (Elf32_Sym *)(buf + shdrs[symtab_idx].sh_offset);
    int nsyms = (int)(shdrs[symtab_idx].sh_size / sizeof(Elf32_Sym));
    const char *strtab = (const char *)(buf + shdrs[strtab_idx].sh_offset);

    char prefix[160];
    snprintf(prefix, sizeof(prefix), "%s__mwb", G.func_name);
    size_t plen = strlen(prefix);

    for (int i = 0; i < nsyms; i++) {
        if (ELF32_ST_TYPE(syms[i].st_info) != STT_FUNC) continue;
        const char *name = strtab + syms[i].st_name;
        if (strncmp(name, prefix, plen) != 0) continue;
        int idx = atoi(name + plen);
        if (idx < k_start || idx >= k_start + k_count) continue;
        int sec = syms[i].st_shndx;
        if (sec <= 0 || sec >= eh->e_shnum) continue;
        uint32_t start = syms[i].st_value;
        uint32_t size = syms[i].st_size;
        if (size == 0 || (size & 3) != 0) continue;
        if (shdrs[sec].sh_offset + start + size > flen) continue;

        int nw = (int)(size / 4);
        const uint32_t *words = (const uint32_t *)(buf + shdrs[sec].sh_offset + start);
        uint8_t *reloc = (uint8_t *)calloc((size_t)nw, 1);

        int rsec = rel_for_sec[sec];
        if (rsec >= 0) {
            uint32_t entsz = shdrs[rsec].sh_entsize ? shdrs[rsec].sh_entsize :
                             (shdrs[rsec].sh_type == SHT_RELA ? sizeof(Elf32_Rela) : sizeof(Elf32_Rel));
            int nrel = (int)(shdrs[rsec].sh_size / entsz);
            const unsigned char *rp = buf + shdrs[rsec].sh_offset;
            for (int j = 0; j < nrel; j++) {
                uint32_t roff = *(const uint32_t *)(rp + j * entsz);
                if (roff >= start && roff < start + size) {
                    reloc[(roff - start) / 4] = 1;
                }
            }
        }

        EvalResult er = score_words(words, reloc, nw);
        er.has_data = has_extra_data;
        if (has_extra_data && !G.allow_data) {
            if (er.exact_diffs == 0) er.exact_diffs = 1;
            er.score += 5000;
        }
        results[idx - k_start] = er;
        free(reloc);
    }

    free(rel_for_sec);
    free(buf);
    return 0;
}

/* ---------- Batch Compiler via wibo + mwccps2.exe ---------- */

static int run_mwcc(const char *c_path, const char *o_path) {
    pid_t pid = fork();
    if (pid < 0) return -1;
    if (pid == 0) {
        int devnull = open("/dev/null", O_WRONLY);
        if (devnull >= 0) {
            dup2(devnull, STDOUT_FILENO);
            dup2(devnull, STDERR_FILENO);
            close(devnull);
        }
        setenv("MWCIncludes", G.inc_path, 1);
        char *argv[64];
        int ac = 0;
        argv[ac++] = (char *)G.wibo_path;
        argv[ac++] = (char *)G.mwcc_path;
        argv[ac++] = "-c";
        for (int i = 0; i < G.flag_argc && ac < 50; i++)
            argv[ac++] = G.flag_argv[i];
        char inc_flag[512];
        snprintf(inc_flag, sizeof(inc_flag), "-I%s", G.inc_path);
        argv[ac++] = inc_flag;
        argv[ac++] = (char *)c_path;
        argv[ac++] = "-o";
        argv[ac++] = (char *)o_path;
        argv[ac] = NULL;
        execv(G.wibo_path, argv);
        _exit(127);
    }
    int status = 0;
    if (waitpid(pid, &status, 0) < 0) return -1;
    return (WIFEXITED(status) && WEXITSTATUS(status) == 0) ? 0 : -1;
}

/* Rename function definition name in a candidate snippet to FN__mwb<k>.
 * Only renames the definition header, NOT recursive calls or comments. */
static int emit_renamed_func(SBuf *out, const char *src, int k) {
    const char *fn = G.func_name;
    size_t fn_len = strlen(fn);
    const char *p = src;
    while ((p = strstr(p, fn)) != NULL) {
        /* Word boundary check */
        if (p > src && (isalnum((unsigned char)p[-1]) || p[-1] == '_')) {
            p += fn_len;
            continue;
        }
        const char *after = p + fn_len;
        if (isalnum((unsigned char)*after) || *after == '_') {
            p += fn_len;
            continue;
        }
        /* Skip whitespace, expect '(' */
        const char *q = after;
        while (*q && isspace((unsigned char)*q)) q++;
        if (*q != '(') { p += fn_len; continue; }
        /* Find matching ')' then '{' (definition, not prototype ';') */
        int par = 0;
        while (*q) {
            if (*q == '(') par++;
            else if (*q == ')') { par--; if (par == 0) { q++; break; } }
            q++;
        }
        while (*q && isspace((unsigned char)*q)) q++;
        if (*q == '{') {
            sb_append(out, src, (size_t)(p - src));
            char renamed[160];
            snprintf(renamed, sizeof(renamed), "%s__mwb%d", fn, k);
            sb_puts(out, renamed);
            sb_puts(out, after);
            sb_puts(out, "\n");
            return 0;
        }
        p += fn_len;
    }
    return -1;
}

static void eval_batch_range(char **cands, int start, int count,
                             EvalResult *results, const char *tmp_base,
                             int *compile_calls) {
    if (count <= 0) return;
    char c_path[256], o_path[256];
    snprintf(c_path, sizeof(c_path), "%s.c", tmp_base);
    snprintf(o_path, sizeof(o_path), "%s.o", tmp_base);

    SBuf buf;
    sb_init(&buf, G.preamble_len + (size_t)count * 4096);
    sb_append(&buf, G.preamble, G.preamble_len);
    sb_puts(&buf, "\n");

    int valid = 0;
    for (int i = 0; i < count; i++) {
        if (emit_renamed_func(&buf, cands[start + i], start + i) == 0) valid++;
    }
    if (valid == 0) { sb_free(&buf); return; }

    FILE *f = fopen(c_path, "wb");
    if (!f) { sb_free(&buf); return; }
    fwrite(buf.data, 1, buf.len, f);
    fclose(f);
    sb_free(&buf);

    unlink(o_path);
    (*compile_calls)++;
    if (run_mwcc(c_path, o_path) == 0) {
        parse_batch_elf(o_path, start, count, results + start);
        unlink(o_path);
        unlink(c_path);
        return;
    }
    unlink(o_path);
    unlink(c_path);

    if (count == 1) return; /* single bad candidate */
    int mid = count / 2;
    eval_batch_range(cands, start, mid, results, tmp_base, compile_calls);
    eval_batch_range(cands, start + mid, count - mid, results, tmp_base, compile_calls);
}

/* ---------- C-Level Mutation Operators (Zero Fakematch) ---------- */

typedef struct {
    int start;
    int end;
} Span;

/* Find function body '{' ... '}' */
static int find_body(const char *s, int *open_brace, int *close_brace) {
    const char *fn = strstr(s, G.func_name);
    if (!fn) return -1;
    const char *p = strchr(fn, '{');
    if (!p) return -1;
    *open_brace = (int)(p - s);
    int depth = 0;
    for (const char *q = p; *q; q++) {
        if (*q == '"' || *q == '\'') {
            char c = *q++;
            while (*q && *q != c) { if (*q == '\\' && q[1]) q++; q++; }
            if (!*q) break;
        } else if (*q == '{') depth++;
        else if (*q == '}') {
            depth--;
            if (depth == 0) { *close_brace = (int)(q - s); return 0; }
        }
    }
    return -1;
}

/* Check if a line inside function top looks like a C89 local variable declaration (no '=' init or simple decl) */
static int is_decl_line(const char *line, int len) {
    while (len > 0 && isspace((unsigned char)*line)) { line++; len--; }
    while (len > 0 && isspace((unsigned char)line[len - 1])) len--;
    if (len < 4 || line[len - 1] != ';') return 0;
    if (strncmp(line, "//", 2) == 0 || strncmp(line, "/*", 2) == 0) return 0;
    if (memchr(line, '(', (size_t)len) != NULL) return 0;
    if (memchr(line, '=', (size_t)len) != NULL) return 0;
    /* Must start with an identifier (type name) and have a space or '*' before var name */
    if (!isalpha((unsigned char)line[0]) && line[0] != '_') return 0;
    /* Reject keywords that start statements */
    static const char *bad[] = {"return", "goto", "break", "continue", "if", "for", "while", "do", "switch", "else", "case", "default", NULL};
    for (int i = 0; bad[i]; i++) {
        size_t bl = strlen(bad[i]);
        if ((size_t)len >= bl && strncmp(line, bad[i], bl) == 0 &&
            (len == (int)bl || !isalnum((unsigned char)line[bl])))
            return 0;
    }
    /* Must have at least two tokens (type + name) */
    const char *sp = (const char *)memchr(line, ' ', (size_t)len);
    if (!sp) return 0;
    return 1;
}

static int collect_decls(const char *s, int body_open, int body_close, Span *decls, int max_decls) {
    int n = 0;
    int pos = body_open + 1;
    while (pos < body_close && n < max_decls) {
        while (pos < body_close && (s[pos] == '\n' || s[pos] == '\r')) pos++;
        int ls = pos;
        while (pos < body_close && s[pos] != '\n') pos++;
        int le = pos;
        int tlen = le - ls;
        const char *p = s + ls;
        while (tlen > 0 && isspace((unsigned char)*p)) { p++; tlen--; }
        if (tlen == 0 || strncmp(p, "//", 2) == 0) continue;
        if (is_decl_line(s + ls, le - ls)) {
            decls[n].start = ls;
            decls[n].end = le;
            n++;
        } else {
            break; /* C89 declarations end at first statement */
        }
    }
    return n;
}

/* Mutation 1: Swap or move local declaration order */
static char *mut_decl_order(const char *s, unsigned int *rng) {
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;
    Span decls[64];
    int n = collect_decls(s, ob, cb, decls, 64);
    if (n < 2) return NULL;
    int i = (int)(rand_r(rng) % (unsigned)n);
    int j = (int)(rand_r(rng) % (unsigned)n);
    if (i == j) j = (i + 1) % n;
    if (i > j) { int t = i; i = j; j = t; }

    SBuf out;
    sb_init(&out, strlen(s) + 32);
    if (rand_r(rng) & 1) {
        /* Swap decl i and decl j */
        sb_append(&out, s, (size_t)decls[i].start);
        sb_append(&out, s + decls[j].start, (size_t)(decls[j].end - decls[j].start));
        sb_append(&out, s + decls[i].end, (size_t)(decls[j].start - decls[i].end));
        sb_append(&out, s + decls[i].start, (size_t)(decls[i].end - decls[i].start));
        sb_puts(&out, s + decls[j].end);
    } else {
        /* Move decl j right before decl i */
        sb_append(&out, s, (size_t)decls[i].start);
        sb_append(&out, s + decls[j].start, (size_t)(decls[j].end - decls[j].start));
        sb_puts(&out, "\n");
        sb_append(&out, s + decls[i].start, (size_t)(decls[j].start - decls[i].start));
        int after = decls[j].end;
        if (s[after] == '\n') after++;
        sb_puts(&out, s + after);
    }
    return out.data;
}

/* Mutation 2: Flip integer signedness or width in casts/decls */
static char *mut_int_type(const char *s, unsigned int *rng) {
    static const char *pairs[][2] = {
        {"s32", "u32"}, {"u32", "s32"},
        {"s16", "u16"}, {"u16", "s16"},
        {"s8",  "u8"},  {"u8",  "s8"},
        {"s32", "s16"}, {"u32", "u16"},
        {"s16", "s32"}, {"u16", "u32"},
        {"int", "u32"}, {"u32", "int"},
        {"s32", "int"}, {"char", "u8"},
        {"short", "u16"},
    };
    int npairs = (int)(sizeof(pairs) / sizeof(pairs[0]));
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;

    /* Find all token occurrences of type names inside the function (including params) */
    int hits[256], hpair[256];
    int nh = 0;
    const char *p = s;
    while (*p && nh < 256) {
        if (isalpha((unsigned char)*p) || *p == '_') {
            const char *st = p;
            while (isalnum((unsigned char)*p) || *p == '_') p++;
            size_t tl = (size_t)(p - st);
            for (int k = 0; k < npairs && nh < 256; k++) {
                if (strlen(pairs[k][0]) == tl && memcmp(st, pairs[k][0], tl) == 0) {
                    /* Avoid mutating inside comments or strings roughly: require after ob or in header */
                    hits[nh] = (int)(st - s);
                    hpair[nh] = k;
                    nh++;
                    break;
                }
            }
        } else {
            p++;
        }
    }
    if (nh == 0) return NULL;
    int pick = (int)(rand_r(rng) % (unsigned)nh);
    int pos = hits[pick];
    const char *from = pairs[hpair[pick]][0];
    /* Pick a random replacement for 'from' */
    int cands[8], nc = 0;
    for (int k = 0; k < npairs; k++) {
        if (strcmp(pairs[k][0], from) == 0) cands[nc++] = k;
    }
    const char *to = pairs[cands[rand_r(rng) % (unsigned)nc]][1];
    SBuf out;
    sb_init(&out, strlen(s) + 16);
    sb_append(&out, s, (size_t)pos);
    sb_puts(&out, to);
    sb_puts(&out, s + pos + strlen(from));
    return out.data;
}

/* Helper: check if an expression slice has balanced parens/brackets and no ';' or '{' or '}' */
static int is_clean_expr(const char *a, const char *b) {
    int par = 0, brk = 0;
    for (const char *p = a; p < b; p++) {
        if (*p == ';' || *p == '{' || *p == '}' || *p == ',') return 0;
        if (*p == '(') par++;
        else if (*p == ')') { par--; if (par < 0) return 0; }
        else if (*p == '[') brk++;
        else if (*p == ']') { brk--; if (brk < 0) return 0; }
    }
    return par == 0 && brk == 0;
}

/* Mutation 3: Commute binary operators (A op B -> B op' A) or addu cast */
static char *mut_commute(const char *s, unsigned int *rng) {
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;

    typedef struct { int ls, le, ops, ope, rs, re; const char *new_op; int is_add; } OpHit;
    OpHit hits[256];
    int nh = 0;

    for (int i = ob + 1; i < cb - 2 && nh < 256; i++) {
        const char *new_op = NULL;
        int oplen = 0, is_add = 0;
        if (s[i] == ' ' && s[i + 2] == ' ') {
            if (s[i + 1] == '+') { new_op = "+"; oplen = 1; is_add = 1; }
            else if (s[i + 1] == '*') { new_op = "*"; oplen = 1; }
            else if (s[i + 1] == '&') { new_op = "&"; oplen = 1; }
            else if (s[i + 1] == '|') { new_op = "|"; oplen = 1; }
            else if (s[i + 1] == '^') { new_op = "^"; oplen = 1; }
            else if (s[i + 1] == '<') { new_op = ">"; oplen = 1; }
            else if (s[i + 1] == '>') { new_op = "<"; oplen = 1; }
        } else if (s[i] == ' ' && i + 3 < cb && s[i + 3] == ' ') {
            if (s[i + 1] == '=' && s[i + 2] == '=') { new_op = "=="; oplen = 2; }
            else if (s[i + 1] == '!' && s[i + 2] == '=') { new_op = "!="; oplen = 2; }
            else if (s[i + 1] == '<' && s[i + 2] == '=') { new_op = ">="; oplen = 2; }
            else if (s[i + 1] == '>' && s[i + 2] == '=') { new_op = "<="; oplen = 2; }
        }
        if (!new_op) continue;
        /* Scan left operand (simple balanced expression stopping at =, ;, (, ,, ?, :, &&, ||) */
        int le = i;
        int ls = le - 1;
        int par = 0, brk = 0;
        while (ls > ob) {
            char c = s[ls];
            if (c == ')') par++;
            else if (c == '(') { if (par == 0) break; par--; }
            else if (c == ']') brk++;
            else if (c == '[') { if (brk == 0) break; brk--; }
            else if (par == 0 && brk == 0) {
                if (c == ';' || c == ',' || c == '=' || c == '{' || c == '}' || c == '\n' || c == '?' || c == ':') break;
                if ((c == '&' && s[ls - 1] == '&') || (c == '|' && s[ls - 1] == '|')) break;
                if (is_add && (c == '+' || c == '-' || c == '<' || c == '>')) break;
            }
            ls--;
        }
        ls++;
        while (ls < le && isspace((unsigned char)s[ls])) ls++;

        int rs = i + oplen + 2;
        int re = rs;
        par = 0; brk = 0;
        while (re < cb) {
            char c = s[re];
            if (c == '(') par++;
            else if (c == ')') { if (par == 0) break; par--; }
            else if (c == '[') brk++;
            else if (c == ']') { if (brk == 0) break; brk--; }
            else if (par == 0 && brk == 0) {
                if (c == ';' || c == ',' || c == '=' || c == '{' || c == '}' || c == '\n' || c == '?' || c == ':') break;
                if ((c == '&' && s[re + 1] == '&') || (c == '|' && s[re + 1] == '|')) break;
                if (is_add && (c == '+' || c == '-' || c == '<' || c == '>')) break;
            }
            re++;
        }
        while (re > rs && isspace((unsigned char)s[re - 1])) re--;

        if (le > ls && re > rs && is_clean_expr(s + ls, s + le) && is_clean_expr(s + rs, s + re)) {
            hits[nh].ls = ls; hits[nh].le = le;
            hits[nh].ops = i + 1; hits[nh].ope = i + 1 + oplen;
            hits[nh].rs = rs; hits[nh].re = re;
            hits[nh].new_op = new_op;
            hits[nh].is_add = is_add;
            nh++;
        }
    }
    if (nh == 0) return NULL;
    OpHit h = hits[rand_r(rng) % (unsigned)nh];
    SBuf out;
    sb_init(&out, strlen(s) + 64);
    sb_append(&out, s, (size_t)h.ls);
    if (h.is_add && (rand_r(rng) % 2 == 0)) {
        /* addu operand order cast: MWCC picks rs/rt from pointer vs integer operand */
        int mode = (int)(rand_r(rng) % 3);
        if (mode == 0) {
            sb_puts(&out, "((u8 *)(");
            sb_append(&out, s + h.ls, (size_t)(h.le - h.ls));
            sb_puts(&out, ") + (s32)(");
            sb_append(&out, s + h.rs, (size_t)(h.re - h.rs));
            sb_puts(&out, "))");
        } else if (mode == 1) {
            sb_puts(&out, "((u8 *)(");
            sb_append(&out, s + h.rs, (size_t)(h.re - h.rs));
            sb_puts(&out, ") + (s32)(");
            sb_append(&out, s + h.ls, (size_t)(h.le - h.ls));
            sb_puts(&out, "))");
        } else {
            sb_puts(&out, "((s32)(");
            sb_append(&out, s + h.rs, (size_t)(h.re - h.rs));
            sb_puts(&out, ") + (s32)(");
            sb_append(&out, s + h.ls, (size_t)(h.le - h.ls));
            sb_puts(&out, "))");
        }
    } else {
        sb_append(&out, s + h.rs, (size_t)(h.re - h.rs));
        sb_puts(&out, " ");
        sb_puts(&out, h.new_op);
        sb_puts(&out, " ");
        sb_append(&out, s + h.ls, (size_t)(h.le - h.ls));
    }
    sb_puts(&out, s + h.re);
    return out.data;
}

/* Mutation 4: Swap two adjacent simple statement lines */
static char *mut_stmt_swap(const char *s, unsigned int *rng) {
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;
    Span lines[512];
    int indent[512];
    int nl = 0;
    int pos = ob + 1;
    while (pos < cb && nl < 512) {
        int ls = pos;
        while (pos < cb && s[pos] != '\n') pos++;
        int le = pos;
        if (pos < cb && s[pos] == '\n') pos++;
        int ind = 0;
        while (ls + ind < le && s[ls + ind] == ' ') ind++;
        int tlen = le - (ls + ind);
        const char *p = s + ls + ind;
        while (tlen > 0 && isspace((unsigned char)p[tlen - 1])) tlen--;
        /* Simple statement: ends with ';', no '{', '}', control keyword, or decl */
        int ok = (tlen >= 3 && p[tlen - 1] == ';' &&
                  !memchr(p, '{', (size_t)tlen) && !memchr(p, '}', (size_t)tlen) &&
                  strncmp(p, "//", 2) != 0 && strncmp(p, "return", 6) != 0 &&
                  strncmp(p, "break", 5) != 0 && strncmp(p, "continue", 8) != 0 &&
                  strncmp(p, "goto", 4) != 0 && strncmp(p, "if ", 3) != 0 &&
                  strncmp(p, "if(", 3) != 0 && strncmp(p, "for", 3) != 0 &&
                  strncmp(p, "while", 5) != 0 && !is_decl_line(p, tlen));
        lines[nl].start = ls;
        lines[nl].end = le;
        indent[nl] = ok ? ind : -1;
        nl++;
    }
    int pairs[512], np = 0;
    for (int i = 0; i + 1 < nl; i++) {
        if (indent[i] >= 0 && indent[i] == indent[i + 1]) {
            pairs[np++] = i;
        }
    }
    if (np == 0) return NULL;
    int i = pairs[rand_r(rng) % (unsigned)np];
    SBuf out;
    sb_init(&out, strlen(s) + 16);
    sb_append(&out, s, (size_t)lines[i].start);
    sb_append(&out, s + lines[i + 1].start, (size_t)(lines[i + 1].end - lines[i + 1].start));
    sb_puts(&out, "\n");
    sb_append(&out, s + lines[i].start, (size_t)(lines[i].end - lines[i].start));
    sb_puts(&out, s + lines[i + 1].end);
    return out.data;
}

/* Mutation 5: Simplify/toggle zero comparisons & redundant casts */
static char *mut_expr_idiom(const char *s, unsigned int *rng) {
    static const char *reps[][2] = {
        {" != 0)", ")"},
        {" != NULL)", ")"},
        {" > -1)", " >= 0)"},
        {" >= 0)", " > -1)"},
        {" < 1)", " <= 0)"},
        {" <= 0)", " < 1)"},
        {"(s32)(", "("},
        {"(u32)(", "("},
        {"(s16)(", "("},
        {"(u16)(", "("},
    };
    int nrep = (int)(sizeof(reps) / sizeof(reps[0]));
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;
    int hpos[256], hrep[256], nh = 0;
    for (int r = 0; r < nrep && nh < 256; r++) {
        const char *p = s + ob;
        size_t fl = strlen(reps[r][0]);
        while ((p = strstr(p, reps[r][0])) != NULL && (p - s) < cb && nh < 256) {
            hpos[nh] = (int)(p - s);
            hrep[nh] = r;
            nh++;
            p += fl;
        }
    }
    if (nh == 0) return NULL;
    int pick = (int)(rand_r(rng) % (unsigned)nh);
    int pos = hpos[pick];
    int r = hrep[pick];
    SBuf out;
    sb_init(&out, strlen(s) + 16);
    sb_append(&out, s, (size_t)pos);
    sb_puts(&out, reps[r][1]);
    sb_puts(&out, s + pos + strlen(reps[r][0]));
    return out.data;
}

/* Mutation 6: Swap if (cond) { A } else { B } -> if (!(cond)) { B } else { A } */
static char *mut_if_else_swap(const char *s, unsigned int *rng) {
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;
    typedef struct { int cs, ce, as, ae, bs, be; } IfHit;
    IfHit hits[64];
    int nh = 0;

    const char *p = s + ob;
    while ((p = strstr(p, "if (")) != NULL && (p - s) < cb && nh < 64) {
        if (p > s && (isalnum((unsigned char)p[-1]) || p[-1] == '_')) { p += 4; continue; }
        const char *cs = p + 4;
        int par = 1;
        const char *q = cs;
        while (*q && par > 0) {
            if (*q == '(') par++;
            else if (*q == ')') par--;
            q++;
        }
        if (par != 0) { p += 4; continue; }
        const char *ce = q - 1;
        while (*q && isspace((unsigned char)*q)) q++;
        if (*q != '{') { p += 4; continue; }
        const char *as = q;
        int br = 1; q++;
        while (*q && br > 0) {
            if (*q == '{') br++;
            else if (*q == '}') br--;
            q++;
        }
        if (br != 0) { p += 4; continue; }
        const char *ae = q;
        while (*q && isspace((unsigned char)*q)) q++;
        if (strncmp(q, "else", 4) != 0 || isalnum((unsigned char)q[4])) { p += 4; continue; }
        q += 4;
        while (*q && isspace((unsigned char)*q)) q++;
        if (*q != '{') { p += 4; continue; }
        const char *bs = q;
        br = 1; q++;
        while (*q && br > 0) {
            if (*q == '{') br++;
            else if (*q == '}') br--;
            q++;
        }
        if (br != 0) { p += 4; continue; }
        const char *be = q;
        hits[nh].cs = (int)(cs - s); hits[nh].ce = (int)(ce - s);
        hits[nh].as = (int)(as - s); hits[nh].ae = (int)(ae - s);
        hits[nh].bs = (int)(bs - s); hits[nh].be = (int)(be - s);
        nh++;
        p += 4;
    }
    if (nh == 0) return NULL;
    IfHit h = hits[rand_r(rng) % (unsigned)nh];
    SBuf out;
    sb_init(&out, strlen(s) + 32);
    sb_append(&out, s, (size_t)h.cs);
    sb_puts(&out, "!(");
    sb_append(&out, s + h.cs, (size_t)(h.ce - h.cs));
    sb_puts(&out, ")");
    sb_append(&out, s + h.ce, (size_t)(h.as - h.ce));
    sb_append(&out, s + h.bs, (size_t)(h.be - h.bs));
    sb_puts(&out, " else ");
    sb_append(&out, s + h.as, (size_t)(h.ae - h.as));
    sb_puts(&out, s + h.be);
    return out.data;
}

/* Mutation 7: Flip array subscript PTR[IDX] <-> IDX[PTR] (changes addu rs/rt in MWCC!) */
static char *mut_subscript_flip(const char *s, unsigned int *rng) {
    int ob, cb;
    if (find_body(s, &ob, &cb) != 0) return NULL;
    typedef struct { int ps, pe, is, ie; } SubHit;
    SubHit hits[128];
    int nh = 0;

    for (int i = ob + 1; i < cb - 2 && nh < 128; i++) {
        if (s[i] != '[') continue;
        /* Must be preceded by identifier or ')' */
        int pe = i;
        if (pe <= ob || (!isalnum((unsigned char)s[pe - 1]) && s[pe - 1] != '_' && s[pe - 1] != ')'))
            continue;
        int ps = pe - 1;
        if (s[ps] == ')') {
            int par = 1; ps--;
            while (ps > ob && par > 0) {
                if (s[ps] == ')') par++;
                else if (s[ps] == '(') par--;
                ps--;
            }
            ps++;
        } else {
            while (ps > ob && (isalnum((unsigned char)s[ps - 1]) || s[ps - 1] == '_')) ps--;
        }
        /* Avoid declaration like `s32 buf[10];` */
        if (ps > ob && s[ps - 1] == ' ') {
            /* Check if inside a declaration line */
            int ls = ps;
            while (ls > ob && s[ls - 1] != '\n') ls--;
            int le = i;
            while (le < cb && s[le] != '\n') le++;
            if (is_decl_line(s + ls, le - ls)) continue;
        }
        int is = i + 1;
        int brk = 1, ie = is;
        while (ie < cb && brk > 0) {
            if (s[ie] == '[') brk++;
            else if (s[ie] == ']') brk--;
            if (brk > 0) ie++;
        }
        if (brk != 0 || ie <= is) continue;
        if (is_clean_expr(s + ps, s + pe) && is_clean_expr(s + is, s + ie)) {
            hits[nh].ps = ps; hits[nh].pe = pe;
            hits[nh].is = is; hits[nh].ie = ie;
            nh++;
        }
    }
    if (nh == 0) return NULL;
    SubHit h = hits[rand_r(rng) % (unsigned)nh];
    SBuf out;
    sb_init(&out, strlen(s) + 32);
    sb_append(&out, s, (size_t)h.ps);
    sb_puts(&out, "(");
    sb_append(&out, s + h.is, (size_t)(h.ie - h.is));
    sb_puts(&out, ")[");
    sb_append(&out, s + h.ps, (size_t)(h.pe - h.ps));
    sb_puts(&out, "]");
    sb_puts(&out, s + h.ie + 1);
    return out.data;
}

static char *apply_random_mutation(const char *src, unsigned int *rng, int steps) {
    char *cur = strdup(src);
    for (int st = 0; st < steps; st++) {
        char *nxt = NULL;
        for (int tries = 0; tries < 6 && !nxt; tries++) {
            int op = (int)(rand_r(rng) % 100);
            if (op < 30)      nxt = mut_decl_order(cur, rng);
            else if (op < 48) nxt = mut_int_type(cur, rng);
            else if (op < 70) nxt = mut_commute(cur, rng);
            else if (op < 80) nxt = mut_subscript_flip(cur, rng);
            else if (op < 90) nxt = mut_stmt_swap(cur, rng);
            else if (op < 96) nxt = mut_expr_idiom(cur, rng);
            else              nxt = mut_if_else_swap(cur, rng);
        }
        if (nxt) {
            free(cur);
            cur = nxt;
        }
    }
    return cur;
}

/* ---------- Seen Hash Set ---------- */

static uint64_t seen_table[HASH_BUCKETS];

static int seen_add(uint64_t h) {
    if (h == 0) h = 1;
    uint32_t idx = (uint32_t)(h & (HASH_BUCKETS - 1));
    for (int probe = 0; probe < 32; probe++) {
        uint32_t slot = (idx + probe) & (HASH_BUCKETS - 1);
        if (seen_table[slot] == h) return 0; /* already seen */
        if (seen_table[slot] == 0) {
            seen_table[slot] = h;
            return 1;
        }
    }
    return 1;
}

/* ---------- Beam Search Main Loop ---------- */

typedef struct {
    char *src;
    EvalResult res;
} BeamItem;

static void beam_insert(BeamItem *beam, int *nbeam, const char *src, EvalResult res) {
    if (!res.compiled) return;
    /* Check if identical score+src already in beam */
    for (int i = 0; i < *nbeam; i++) {
        if (beam[i].res.score == res.score && strcmp(beam[i].src, src) == 0)
            return;
    }
    int pos = *nbeam;
    while (pos > 0 && res.score < beam[pos - 1].res.score) pos--;
    if (pos >= MAX_BEAM) return;
    if (*nbeam == MAX_BEAM) {
        free(beam[MAX_BEAM - 1].src);
    } else {
        (*nbeam)++;
    }
    for (int i = *nbeam - 1; i > pos; i--) beam[i] = beam[i - 1];
    beam[pos].src = strdup(src);
    beam[pos].res = res;
}

static void parse_flags(const char *flags) {
    char *copy = strdup(flags);
    char *tok = strtok(copy, " \t\n");
    while (tok && G.flag_argc < 30) {
        G.flag_argv[G.flag_argc++] = strdup(tok);
        tok = strtok(NULL, " \t\n");
    }
    free(copy);
}

int main(int argc, char **argv) {
    memset(&G, 0, sizeof(G));
    G.batch_size = 32;
    G.budget = 1600;
    G.max_seconds = 15;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--rom") == 0 && i + 1 < argc) G.rom_path = argv[++i];
        else if (strcmp(argv[i], "--wibo") == 0 && i + 1 < argc) G.wibo_path = argv[++i];
        else if (strcmp(argv[i], "--mwcc") == 0 && i + 1 < argc) G.mwcc_path = argv[++i];
        else if (strcmp(argv[i], "--inc") == 0 && i + 1 < argc) G.inc_path = argv[++i];
        else if (strcmp(argv[i], "--flags") == 0 && i + 1 < argc) G.flags_str = argv[++i];
        else if (strcmp(argv[i], "--preamble") == 0 && i + 1 < argc) G.preamble_path = argv[++i];
        else if (strcmp(argv[i], "--func") == 0 && i + 1 < argc) G.func_name = argv[++i];
        else if (strcmp(argv[i], "--addr") == 0 && i + 1 < argc) G.addr = (uint32_t)strtoul(argv[++i], NULL, 0);
        else if (strcmp(argv[i], "--size") == 0 && i + 1 < argc) G.orig_size = (uint32_t)strtoul(argv[++i], NULL, 0);
        else if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) G.input_path = argv[++i];
        else if (strcmp(argv[i], "--out") == 0 && i + 1 < argc) G.out_path = argv[++i];
        else if (strcmp(argv[i], "--batch") == 0 && i + 1 < argc) G.batch_size = atoi(argv[++i]);
        else if (strcmp(argv[i], "--budget") == 0 && i + 1 < argc) G.budget = atoi(argv[++i]);
        else if (strcmp(argv[i], "--seconds") == 0 && i + 1 < argc) G.max_seconds = atoi(argv[++i]);
        else if (strcmp(argv[i], "--allow-data") == 0) G.allow_data = 1;
        else if (strcmp(argv[i], "--eval-only") == 0) G.eval_only = 1;
        else if (strcmp(argv[i], "-v") == 0) G.verbose = 1;
    }

    if (!G.rom_path || !G.wibo_path || !G.mwcc_path || !G.inc_path || !G.flags_str ||
        !G.preamble_path || !G.func_name || !G.input_path || !G.addr || !G.orig_size) {
        fprintf(stderr, "b3perm: missing required arguments\n");
        return 2;
    }
    if (G.batch_size < 1) G.batch_size = 1;
    if (G.batch_size > MAX_BATCH) G.batch_size = MAX_BATCH;

    parse_flags(G.flags_str);

    /* Load original ROM slice */
    size_t rom_len = 0;
    char *rom = read_file_all(G.rom_path, &rom_len);
    if (!rom || G.addr < VRAM_BASE || (size_t)(G.addr - VRAM_BASE + G.orig_size) > rom_len) {
        fprintf(stderr, "b3perm: failed to read ROM slice at 0x%08X size 0x%X\n", G.addr, G.orig_size);
        return 2;
    }
    G.orig_nwords = (int)(G.orig_size / 4);
    G.orig_words = (uint32_t *)malloc((size_t)G.orig_nwords * 4);
    memcpy(G.orig_words, rom + (G.addr - VRAM_BASE), (size_t)G.orig_nwords * 4);
    free(rom);

    G.orig_trimmed_nwords = G.orig_nwords;
    while (G.orig_trimmed_nwords > 1 && G.orig_words[G.orig_trimmed_nwords - 1] == 0 &&
           (G.orig_nwords - G.orig_trimmed_nwords) < 3) {
        G.orig_trimmed_nwords--;
    }

    G.preamble = read_file_all(G.preamble_path, &G.preamble_len);
    G.init_src = read_file_all(G.input_path, &G.init_len);
    if (!G.preamble || !G.init_src) {
        fprintf(stderr, "b3perm: failed to read preamble or input\n");
        return 2;
    }

    double t0 = now_sec();
    char tmp_base[128];
    snprintf(tmp_base, sizeof(tmp_base), "/dev/shm/b3p_%d", (int)getpid());

    /* Step 1: evaluate initial candidate */
    int compile_calls = 0;
    int evals = 0;
    EvalResult init_res;
    memset(&init_res, 0, sizeof(init_res));
    char *one[1] = { G.init_src };
    eval_batch_range(one, 0, 1, &init_res, tmp_base, &compile_calls);
    evals = 1;
    seen_add(fnv1a(G.init_src, G.init_len));

    if (!init_res.compiled) {
        printf("STATUS=NOCOMPILE func=%s evals=1 compiles=%d time=%.2fs\n",
               G.func_name, compile_calls, now_sec() - t0);
        return 1;
    }
    if (init_res.exact_diffs == 0) {
        if (G.out_path) {
            FILE *f = fopen(G.out_path, "wb");
            if (f) { fwrite(G.init_src, 1, G.init_len, f); fclose(f); }
        }
        printf("STATUS=MATCH func=%s init_score=0 best_score=0 diffs=0 evals=1 compiles=%d time=%.2fs\n",
               G.func_name, compile_calls, now_sec() - t0);
        return 0;
    }
    if (G.eval_only) {
        printf("STATUS=EVAL func=%s score=%d diffs=%d size_diff=%d nwords=%d orig=%d data=%d time=%.2fs\n",
               G.func_name, init_res.score, init_res.exact_diffs, init_res.size_diff,
               init_res.nwords, G.orig_trimmed_nwords, init_res.has_data, now_sec() - t0);
        return 0;
    }

    BeamItem beam[MAX_BEAM];
    int nbeam = 0;
    beam_insert(beam, &nbeam, G.init_src, init_res);
    int init_score = init_res.score;
    int init_diffs = init_res.exact_diffs;

    unsigned int rng = (unsigned int)(getpid() ^ (unsigned int)(t0 * 1000000.0) ^ G.addr);
    char *cands[MAX_BATCH];
    EvalResult batch_res[MAX_BATCH];

    int matched = 0;
    int stale_rounds = 0;

    while (evals < G.budget && (now_sec() - t0) < (double)G.max_seconds && !matched) {
        int nc = 0;
        int attempts = 0;
        int want = G.batch_size;
        if (evals + want > G.budget) want = G.budget - evals;

        while (nc < want && attempts < want * 8) {
            attempts++;
            /* Pick parent from beam (weighted towards best) */
            int parent_idx = 0;
            if (nbeam > 1) {
                int r = (int)(rand_r(&rng) % 100);
                if (r < 55) parent_idx = 0;
                else parent_idx = (int)(rand_r(&rng) % (unsigned)nbeam);
            }
            int steps = (stale_rounds >= 3) ? (1 + (int)(rand_r(&rng) % 3)) : (1 + (int)(rand_r(&rng) % 2));
            char *cand = apply_random_mutation(beam[parent_idx].src, &rng, steps);
            if (!cand) continue;
            uint64_t h = fnv1a(cand, strlen(cand));
            if (!seen_add(h)) { free(cand); continue; }
            cands[nc++] = cand;
        }
        if (nc == 0) break;

        memset(batch_res, 0, (size_t)nc * sizeof(EvalResult));
        eval_batch_range(cands, 0, nc, batch_res, tmp_base, &compile_calls);
        evals += nc;

        int prev_best = beam[0].res.score;
        for (int i = 0; i < nc; i++) {
            if (batch_res[i].compiled) {
                beam_insert(beam, &nbeam, cands[i], batch_res[i]);
                if (batch_res[i].exact_diffs == 0) {
                    matched = 1;
                }
            }
            free(cands[i]);
        }
        if (beam[0].res.score < prev_best) stale_rounds = 0;
        else stale_rounds++;

        if (G.verbose) {
            fprintf(stderr, "  [%s] evals=%d compiles=%d best_score=%d diffs=%d (%.1f cands/s)\n",
                    G.func_name, evals, compile_calls, beam[0].res.score, beam[0].res.exact_diffs,
                    evals / (now_sec() - t0 + 1e-6));
        }
    }

    if (G.out_path && (matched || beam[0].res.score < init_score)) {
        FILE *f = fopen(G.out_path, "wb");
        if (f) { fwrite(beam[0].src, 1, strlen(beam[0].src), f); fclose(f); }
    }

    double dt = now_sec() - t0;
    printf("STATUS=%s func=%s init_score=%d best_score=%d init_diffs=%d best_diffs=%d evals=%d compiles=%d rate=%.1f/s time=%.2fs\n",
           matched ? "MATCH" : (beam[0].res.score < init_score ? "IMPROVED" : "SAME"),
           G.func_name, init_score, beam[0].res.score, init_diffs, beam[0].res.exact_diffs,
           evals, compile_calls, evals / (dt + 1e-6), dt);

    for (int i = 0; i < nbeam; i++) free(beam[i].src);
    return matched ? 0 : 1;
}
