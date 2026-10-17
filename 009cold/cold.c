#include<stdio.h>
#include<math.h>
double w_c (double t,double v)
{
   double h = 13.12 + 0.6215*t - 11.37*pow(v,0.16) + 0.3965*t*pow(v,0.16);
    return h;
}

int main()
{
    double t,v;
    scanf("%lf %lf",&v,&t);
    printf("%.0lf",w_c(t,v));
    return 0;
}


//double result=13.12+0.6215*t-11.37*pow(v,0.16)+0.3965*t*pow(v,0.16);