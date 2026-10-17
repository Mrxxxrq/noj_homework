#include<stdio.h>
int main()
{
	double n = 0;
    double a = 1;
    double b,c,sum;
	scanf("%lf", &n);
    if (n > 1 && n <= 99)
    {
        while (a <= n)
    {
        b = a + 1;
        while (b >= 1)
        {
            b /= 10;
        }
        sum = a + b;
        c += a + b;
        printf("%g+",sum);

        a += 1;
    }
    printf("\b=%g",c);
    }
    else if (n == 1)
    {
        printf("1.2");
    }
    else printf("输入错误");
    
    

    

return 0;
}