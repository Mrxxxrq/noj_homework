#include<stdio.h>
int bin(int n)
{
    int wei[20]={0};
    int len = 0;
   for (int i = 0; n>0; i++)
   {
    if(n%2==1)
    {
        wei[len++]=i;
    }
    n/=2;
   }
   return 0;
    
    
}


int main()
{
    int n;
    scanf("%d",&n);
    bin(n);

    return 0;
}