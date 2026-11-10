#include<stdio.h>
#include<stdarg.h>
double avg(int n,...)
{
    va_list ap;
    va_start(ap,n);
    double result=0.0;
    for (int i = 0; i < n; i++)
    {
        result += va_arg(ap,double);
    }
    va_end(ap);
    return result/n;
}

int main()
{
    double a,b,c,d,e;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    printf("%.4lf",avg(2,a,b)-avg(3,c,d,e));
    return 0;
}