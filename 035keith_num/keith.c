#include<stdio.h>

int IsKeith(int n)
{
    int temp = n,digit=0;
    while (temp)
    {
        temp/=10;
        digit++;
    }

    int wei[10]={0};
    int temp2[10]={0};
    int temp3 = n;
   for (int i = 1; temp3>0; i++)
   {
    wei[digit+1-i]=temp3%10;
    temp3/=10;
   }
   int result=0;
   while (result<n)
   {
       result = 0;
       for (int i = 1; i <= digit; i++)
      {
        result += wei[i];
      }
      for (int i = 1; i <=digit; i++)
      {
       temp2[i-1]=wei[i];
      }
      temp2[digit]=result;
      for (int i = 1; i <= digit; i++)
      {
       wei[i]=temp2[i];
      }
      if (result == n)
      {
      return 1;
      } 
    } 
    
    return 0;
   

}


int main()
{
    int n;
    scanf("%d",&n);
    if (IsKeith(n))
    {
        printf("Yes");
    }
    else printf("No");
    return 0;
    
}