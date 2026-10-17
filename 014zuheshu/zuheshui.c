#include<stdio.h>
//暴力枚举，从最里层的那个数开始增长
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    int sum;
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
                for(d=0;d<=9;d++)
                {
                    if (a+b+c+d==n)
                    {
                        sum++;
                    }
                
                    

                }
            }
        }
    }
    printf("%d",sum);

    return 0; 
}