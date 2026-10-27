#include<stdio.h>
long long dandiao(long long n)
{
   
   int p = 0;
   long long temp=n;
   while (temp)
   {
    p = temp%10; 
    if(p<(temp/10)%10)
    {
       return 0;
    }
    temp/=10;
   }
   return 1;
}


int main()
{
    long long n;
    scanf("%lld",&n); 
    for (long long i = n; i > 0; i--)
    {
        if (dandiao(i))
        {
            printf("%lld",i);
            break;
        }
        
    }
    


    return 0;
}