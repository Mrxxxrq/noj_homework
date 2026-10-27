/* =====================================================================
 * fac_fix.c —— "阶乘倍数" 两种正确解法
 *   输入 K >= 2，输出最小正整数 N，使得 K | N!
 * ===================================================================== */
#include <stdio.h>

/* ---------------------------------------------------------------------
 * 解法 1：在你的思路上最小改动 —— 边乘边取模，绝不真的算 n!
 *
 *   p 始终保存 n! mod K，p = p*n % K 即可，永远不溢出
 *   （要求 K <= 3e9，这样 K*K 装得进 64 位；再大要用 __int128）
 *
 *   复杂度 O(N)，N <= K。K 是 1e9 级别的素数时答案就是 K，
 *   循环要跑 1e9 次 —— 会超时，所以大 K 请用解法 2。
 * --------------------------------------------------------------------- */
long long solve_mod(long long k)
{
    unsigned long long K = (unsigned long long)k;
    unsigned long long p = 1;      /* 1! = 1 */
    long long n = 1;

    while (p % K != 0)
    {
        n++;
        p = p * (unsigned long long)n % K;
    }
    return n;
}

/* ---------------------------------------------------------------------
 * 解法 2：分解质因数 + 勒让德定理  O(sqrt(K))，正解
 *
 *   K = p1^e1 * p2^e2 * ...
 *   对每个 p^e，求最小的 m 使 p^e | m!，答案 = 所有 m 的最大值
 * --------------------------------------------------------------------- */
long long solve_factor(long long k)
{
    long long ans = 1;
    long long x = k;

    for (long long p = 2; p * p <= x; p++)
    {
        if (x % p != 0)
            continue;

        int e = 0;
        while (x % p == 0)
        {
            x /= p;
            e++;
        }

        /* 求最小 m，使 v_p(m!) >= e */
        long long m = 0, cnt = 0;
        while (cnt < e)
        {
            m++;
            long long t = m;
            while (t % p == 0)
            {
                t /= p;
                cnt++;
            }
        }
        if (m > ans)
            ans = m;
    }

    /* 剩下的是一个大素数，指数为 1，最小 m 就是它本身 */
    if (x > 1 && x > ans)
        ans = x;

    return ans;
}

int main(void)
{
    long long k;
    if (scanf("%lld", &k) != 1)
        return 0;

    printf("%lld\n", solve_factor(k));
    return 0;
}
