#include<stdio.h>
int main()
{
    int y,n;
    scanf("%d",&n);
    for (y = 0;y<n;y++)
    {
        for(int i = y;i > 0;i--)
        {
        printf("%d ",i);
        }


        for(int i = 0;i <= n-y-1;i++)
        {
        printf("%d ",i);
        }
        printf("\n");
      
    }
    

    return 0;

}