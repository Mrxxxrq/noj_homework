#include<stdio.h>
#define MOD 1000000007
typedef long long L;

 
int is_prime_digit(int d)
{
    return d == 2 || d == 3 || d == 5 || d == 7;
}


L good_number(L n)
{
    L wei[16];
    int temp=n;
    int digit=0;
    while (temp)
    {
        temp/=10;
        digit++;
    }
    int m = digit;
    while (n>0)
    {
        wei[digit-1]=n%10;
        digit--;
        n/=10;
    }
    int i;
    for ( i = 0; i < m; i++)
    {
       if (i%2==0&&wei[i]%2!=0) return 0;
       if (i%2==1&&is_prime_digit(wei[i])=0) return 0;
    }
    return 1;
}


int main()
{
    L n;
    scanf("%lld",&n);
    if (good_number(n))
    {
        printf("yes");
    }
    
    
    return 0;
}


