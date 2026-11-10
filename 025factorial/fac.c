// #include<stdio.h>
// long long fac(long long k)
// {
    
    
//         long long p = 1;
//         long long i=1;
//        while(p%k)
//        {
//         i++;
//         p = (p*(i%k))%k;
       
//        }
//         return i;
    
// }

// int main()
// {
//     long long k,n,b;
//     scanf("%lld",&k);
//     n = fac(k);
//     printf("%lld",n);
    



//     return 0;
// }

//我没招了





#include <stdio.h>
 
// 计算一个数的质因数分解
void primeFactorize(long long k, long long primes[], long long exponents[], int *size) {
    *size = 0;
    for (long long p = 2; p * p <= k; p++) {
        if (k % p == 0) {
            primes[*size] = p;
            exponents[*size] = 0;
            while (k % p == 0) {
                exponents[*size] += 1;
                k /= p;
            }
            (*size)++;
        }
    }
    if (k > 1) { // 如果剩余一个大质数
        primes[*size] = k;
        exponents[*size] = 1;
        (*size)++;
    }
}
 
// 计算 N! 中包含的某个质因数的总数
long long countPrimeInFactorial(long long n, long long p) {
    long long count = 0;
    while (n > 0) {
        count += n / p;
        n /= p;
    }
    return count;
}
 
// 主函数
int main() {
    long long k;
    scanf("%lld", &k);
 
    // 对 k 进行质因数分解
    long long primes[64], exponents[64];
    int size;
    primeFactorize(k, primes, exponents, &size);
 
    // 对每个质因数找到满足条件的最小 N
    long long result = 0;
    for (int i = 0; i < size; i++) {
        long long p = primes[i], e = exponents[i];
        long long n = 0, low = 1, high = k;
 
        // 二分搜索最小的 N
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (countPrimeInFactorial(mid, p) >= e) {
                n = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
 
        // 更新结果为所有质因数对应的最大 N
        if (n > result) {
            result = n;
        }
    }
 
    printf("%lld\n", result);
    return 0;
}