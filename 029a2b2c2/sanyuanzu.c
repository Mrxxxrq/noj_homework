#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long a,b,c;
    long long i;
    for ( a = 1; a<n/3; a++)
    {
       for ( b = 2; b <n/2; b++)
       {
          c = n - a- b;
          if(c*c==b*b+a*a)
          {
            long long result = a*b*c;
            printf("%lld",result);
          }
       }
       
    }
    



    return 0;
}