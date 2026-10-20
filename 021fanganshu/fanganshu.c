#include<stdio.h>
typedef long long L;
int main()
{
    L n;
    L a,b;
    L sum;
    scanf("%lld",&n);
    L digits = 0;
    for(a = 1;a <= n/2;a++)
    {   
        sum = 0;
        for(b = a+1;b<=n;b++)
        {
           sum = (a+b)*(b-a+1)/2;
            if (sum > n)
            {
                break;

            }
            else if (sum == n)
            {
                digits++;
            }
            
        }
    }

    printf("%d",digits+1);
    return 0;
}