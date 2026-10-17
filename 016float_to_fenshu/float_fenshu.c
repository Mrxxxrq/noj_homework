#include<stdio.h>
typedef long long L;
L gcd(L a, L b){
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    
    return b ? gcd(b,a%b) : a;
}

int main()
{
    double n =0;
    L base = 1000000000;//思路，不管给的小数多少，先乘一个大数base，再求新数与base的最大公因数，x是n的整型替身
    L x,common_diviser;
    scanf("%lf",&n);
    n = n*base;
    x = n;
    common_diviser = gcd(x,base);
    x /=common_diviser;
    base /= common_diviser;
    printf("%lld/%lld",x,base);
    return 0;               
}