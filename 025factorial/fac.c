#include<stdio.h>
long long fac(long long k)
{
    
    
        long long p = 1;
        long long i=1;
       while(p%k)
       {
        i++;
        p = (p*(i%k))%k;
       
       }
        return i;
    
}

int main()
{
    long long k,n,b;
    scanf("%lld",&k);
    n = fac(k);
    printf("%lld",n);
    



    return 0;
}