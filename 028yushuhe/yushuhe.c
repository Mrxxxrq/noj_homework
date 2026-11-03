#include<stdio.h>
int main()
{
    long long n,k,sum=0;
    scanf("%lld %lld",&n,&k);
    long long i;
    for (i = 1; i <=n; i++)
    {
        sum = sum + k%i;
    }
    printf("%lld",sum);


    return 0;
}