#include<stdio.h>
#define MOD 1000000007
long long fastpow(long long base,long long exp,long long mod)
{
    long long result =1;
    while(exp)
    {
        if (exp%2==1)
        {
            result = (result*base)%mod;
        }
        base = (base*base)%mod;
        exp /= 2;
    }
    return result;
}

int main()
{
    long long n;
    scanf("%lld",&n);
    long long even= (n+1)/2;
    long long odd = n/2;
    printf("%lld",(fastpow(5,even,MOD)*fastpow(4,odd,MOD))%MOD);
}