#include<stdio.h>
typedef long long L;
int main()
{
    L n;
    L k;
    scanf("%lld",&n);
    for ( k = 2; ; k++)
    {
        if ((1+k)*k/2 > n)
        {
            break;
        }
        
    }
    L sum =0;
    n = n - k*(k-1)/2;
    printf("%d",n);
    
    

    return 0;
}