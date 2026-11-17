#include<stdio.h>//纪念一下，难得自己写ac的题
void bin(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    
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

  for (int i = len-1; i>=0; i--)
  {
    if (i == len -1)
    {
       if (wei[len-1]==1)
       {
        printf("2");
       }
       else
       {
        printf("2(");
        bin(wei[len -1]);
        printf(")");
       }
    }
    else
    {
         if (wei[i]==1)
        {
            printf("+2");
        }
        
        else
        {
            printf("+2(");
            bin(wei[i]);
            printf(")");
        }
    }
  }
  
    
    
}


int main()
{
    int n;
    scanf("%d",&n);
    bin(n);

    return 0;
}