#include<stdio.h>
int  is_prime(long long n)
{
    if (n < 2) return 0;
    if(n%2==0) return n==2;
    for (long long i = 3; i <= n/i; i += 2)
    {
       if (n%i==0)
       {
        return 0;
       }
    }
    return 1;
}

int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long count = 0;
    for (long long i = n; i <=m ; i++)
    {
       if (is_prime(i))
       {
        count++;
       }
    }
    printf("%lld",count);
    return 0;
}