#include<stdio.h>
int main()
{
    int t;
    int n[100];
    scanf("%d",&t);
    for(int i=t;i > 0;i--)
    {   
        scanf("%d",&n[t-i]);
    }


    for(int i=0;i<t;i++)
    {   
        int sum = 0;
        for(int s =0; s < n[i];s+=3)
        {
            sum =sum +s;
        }
        for(int f =0; f < n[i];f+=5)
        {
            sum =sum +f;
        }
        printf("%d\n",sum);
    }
    return 0;
}