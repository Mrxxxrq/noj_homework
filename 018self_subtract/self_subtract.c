#include<stdio.h>
int main()
{
    int n,digit = 0;
    scanf("%d",&n);
    while(n>0)
    {   int temp = n;
        int sum = 0;
        while(temp > 0)
        { 
            sum = sum + (temp % 10);
            temp /= 10;
        }
        n = n - sum;
        digit++;
    }
    printf("%d",digit);
    return 0;
}