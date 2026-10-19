#include<stdio.h>
long long n[100000];
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long i=0;i < t;i++)
    {   
        scanf("%lld",&n[i]);
    }
    
    for(long long i = 0; i < t; i++)
    {   
        long long sum = 0;
        long long last3 = 0;
        long long last5 = 0;
        long long last15 = 0;

        last3 = (n[i]-1)/3;
        sum =3*(1 + last3)*last3/2;

        last5 = (n[i]-1)/5;
        sum = sum + 5*(1 + last5)*last5/2;

        last15 = (n[i]-1)/15;
        sum = sum - 15*(1 + last15)*last15/2;

        printf("%lld\n",sum);


    }
    return 0;
}