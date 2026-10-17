#include<stdio.h>
typedef long long L;
int main()
{
    L a,b,m,result;
    scanf("%lld %lld %lld",&a,&b,&m);
    result = ((a%m)*(b%m))%m;
    printf("%lld",result);
    return 0;
}