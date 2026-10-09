/*
 * wl2test.h - a minimal test framework for the host build of src/main.c.
 *
 *   TEST(name) { CHECK_EQ(a, b); CHECK(cond); }
 *
 * Tests register themselves through a constructor, run in file order, and
 * the binary exits non-zero if any check failed.  Output is one line per
 * test (ok / FAIL), plus the failing checks with file:line.
 */
#ifndef WL2TEST_H
#define WL2TEST_H

#include <stdio.h>
#include <string.h>

typedef void (*wl2t_fn)(void);
struct wl2t_case { const char *name; wl2t_fn fn; };

static struct wl2t_case wl2t_cases[512];
static int wl2t_ncases = 0;
static int wl2t_cur_failed = 0;
static long wl2t_checks = 0;

#define TEST(tname)                                                        \
    static void wl2t_##tname(void);                                        \
    __attribute__((constructor)) static void wl2t_reg_##tname(void)       \
    {                                                                      \
        wl2t_cases[wl2t_ncases].name = #tname;                             \
        wl2t_cases[wl2t_ncases++].fn = wl2t_##tname;                       \
    }                                                                      \
    static void wl2t_##tname(void)

#define CHECK(cond) do {                                                   \
        wl2t_checks++;                                                     \
        if (!(cond)) {                                                     \
            printf("    %s:%d: CHECK(%s) failed\n", __FILE__, __LINE__, #cond); \
            wl2t_cur_failed = 1;                                           \
        }                                                                  \
    } while (0)

#define CHECK_EQ(a, b) do {                                                \
        long long wl2t_a = (long long)(a), wl2t_b = (long long)(b);        \
        wl2t_checks++;                                                     \
        if (wl2t_a != wl2t_b) {                                            \
            printf("    %s:%d: CHECK_EQ(%s, %s): %lld != %lld\n",          \
                   __FILE__, __LINE__, #a, #b, wl2t_a, wl2t_b);            \
            wl2t_cur_failed = 1;                                           \
        }                                                                  \
    } while (0)

static int wl2t_run_all(const char *filter)
{
    int i, failed = 0, ran = 0;
    for (i = 0; i < wl2t_ncases; i++) {
        if (filter && !strstr(wl2t_cases[i].name, filter)) continue;
        wl2t_cur_failed = 0;
        wl2t_cases[i].fn();
        ran++;
        printf("%s %s\n", wl2t_cur_failed ? "FAIL" : "ok  ", wl2t_cases[i].name);
        failed += wl2t_cur_failed;
    }
    printf("\n%d tests, %d failed, %ld checks\n", ran, failed, wl2t_checks);
    return failed ? 1 : 0;
}

#endif
