/* =====================================================================
 * fac_fast.c —— 阶乘倍数：Miller-Rabin + Pollard-Rho + 勒让德定理
 *   适用：K <= 9.2e18（long long 全范围），O(K^(1/4)) 级别
 *   若只想看懂思路，先看 fac_sqrt.c
 * ===================================================================== */
#include <stdio.h>

typedef unsigned long long u64;

/* ---------------- 模乘 / 快速幂（__int128 防溢出） ---------------- */
static u64 mul_mod(u64 a, u64 b, u64 m)
{
    return (u64)((__uint128_t)a * b % m);
}

static u64 pow_mod(u64 a, u64 d, u64 m)
{
    u64 r = 1 % m;
    while (d)
    {
        if (d & 1) r = mul_mod(r, a, m);
        a = mul_mod(a, a, m);
        d >>= 1;
    }
    return r;
}

/* ---------------- 确定性 Miller-Rabin（n < 2^64） ---------------- */
static int is_prime64(u64 n)
{
    static const u64 base[7] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022ULL};
    int i, r, s = 0;
    u64 d, x;

    if (n < 2)          return 0;
    if (n % 2 == 0)     return n == 2;
    if (n % 3 == 0)     return n == 3;
    if (n % 5 == 0)     return n == 5;
    if (n % 7 == 0)     return n == 7;

    d = n - 1;
    while (!(d & 1)) { d >>= 1; s++; }

    for (i = 0; i < 7; i++)
    {
        u64 a = base[i] % n;
        if (a == 0) continue;

        x = pow_mod(a, d, n);
        if (x == 1 || x == n - 1) continue;

        for (r = 1; r < s; r++)
        {
            x = mul_mod(x, x, n);
            if (x == n - 1) break;
        }
        if (r == s) return 0;      /* 见证数，必为合数 */
    }
    return 1;
}

/* ---------------- Pollard-Rho 找 n 的一个非平凡因子 ---------------- */
static u64 gcd64(u64 a, u64 b)
{
    while (b) { u64 t = a % b; a = b; b = t; }
    return a;
}

static u64 pollard(u64 n)
{
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;

    for (u64 c = 1; ; c++)
    {
        u64 x = 2, y = 2, d = 1;
        while (d == 1)
        {
            x = (mul_mod(x, x, n) + c) % n;
            y = (mul_mod(y, y, n) + c) % n;
            y = (mul_mod(y, y, n) + c) % n;
            d = gcd64(x > y ? x - y : y - x, n);
        }
        if (d != n) return d;
    }
}

/* ---------------- 分解质因数，存入 p[] / e[] ---------------- */
#define MAXF 80
static u64 fp[MAXF];
static int fe[MAXF];
static int fc;

static void add_factor(u64 p)
{
    for (int i = 0; i < fc; i++)
        if (fp[i] == p) { fe[i]++; return; }
    fp[fc] = p; fe[fc] = 1; fc++;
}

static void factorize(u64 n)
{
    if (n == 1) return;
    if (is_prime64(n)) { add_factor(n); return; }

    u64 d = pollard(n);
    factorize(d);
    factorize(n / d);
}

/* ---------------- 最小 m 使 p^e | m! ---------------- */
static u64 vp_fact(u64 m, u64 p)          /* 勒让德公式 */
{
    u64 s = 0;
    while (m) { m /= p; s += m; }
    return s;
}

static u64 min_m(u64 p, int e)
{
    u64 lo = 1, hi = p * (u64)e;
    while (lo < hi)
    {
        u64 mid = lo + (hi - lo) / 2;
        if (vp_fact(mid, p) >= (u64)e) hi = mid;
        else                           lo = mid + 1;
    }
    return lo;
}

static u64 solve(u64 k)
{
    u64 ans = 1;

    fc = 0;
    if (k < 2) return 1;          /* 题目保证 K >= 2 */

    factorize(k);

    for (int i = 0; i < fc; i++)
    {
        u64 m = min_m(fp[i], fe[i]);
        if (m > ans) ans = m;
    }
    return ans;
}

int main(void)
{
    u64 k;

    if (scanf("%llu", &k) != 1)
        return 0;

    printf("%llu\n", solve(k));
    return 0;
}
