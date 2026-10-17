#include<stdio.h>
int main()
{
    long long a,b,m;
    scanf("%lld %lld %lld",&a,&b,&m);
    long long result = 1;
        while (b > 0)
        {
            if (b%2)
            {
                result = (result*a)%m ;
               

            }
            b /= 2;
            a = (a*a) % m ;
        }

        printf("%lld ",result);
        return 0;

        
}