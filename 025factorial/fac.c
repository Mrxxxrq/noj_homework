#include<stdio.h>
long long fac(long long n,long long k)
{
    if (n == 0)
    {
        return 1;
    }
    else 
    {
        long long p = 1;
        for ( ; n > 0; n--)
        {
            p = (p*(n%k))%k;//此处为防止溢出，边阶乘边取余
        }
        return p;
    }
    
}

int main()
{
    long long k,n,b;
    scanf("%lld",&k);
    n = 2;
   
   
    while (fac(n,k))
    {
        n++;
    }
    printf("%lld",n);
    



    return 0;
}