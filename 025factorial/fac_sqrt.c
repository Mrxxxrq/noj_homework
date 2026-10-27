/* =====================================================================
 * fac_sqrt.c —— 阶乘倍数：分解质因数 + 勒让德定理，O(sqrt(K))
 *   适用：K <= 1e12（再大请用 fac_fast.c）
 * ===================================================================== */
#include <stdio.h>

/* 求最小的 m，使 p^e | m!   （v_p(m!) >= e） */
static long long min_m(long long p, int e)
{
    long long lo = 1;
    long long hi = p * (long long)e;   /* v_p(hi!) >= e 必然成立 */

    while (lo < hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long cnt = 0;
        long long t = mid;
        while (t) { t /= p; cnt += t; }     /* 勒让德公式 */
        if (cnt >= e) hi = mid;
        else          lo = mid + 1;
    }
    return lo;
}

int main(void)
{
    long long k, x, ans = 1;

    if (scanf("%lld", &k) != 1)
        return 0;

    x = k;
    for (long long p = 2; p * p <= x; p++)
    {
        if (x % p != 0) continue;

        int e = 0;
        while (x % p == 0) { x /= p; e++; }

        long long m = min_m(p, e);
        if (m > ans) ans = m;
    }
    /* 剩下的 x 一定是素数，指数为 1，最小 m 就是 x 本身 */
    if (x > 1 && x > ans) ans = x;

    printf("%lld\n", ans);
    return 0;
}
