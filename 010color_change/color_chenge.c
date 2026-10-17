#include<stdio.h>
#include<math.h>
double Max(double a,double b,double c)
{
    double max_n = a;
    if (b > max_n)
    {
        max_n = b;
    }

    if (c > max_n)
    {
        max_n = c;
    }

    return max_n;
    
       
    
}



double Min(double a,double b,double c)
{
    double min_n = a;
    if (b < min_n)
    {
        min_n = b;
    }

    if (c < min_n)
    {
        min_n = c;
    }

    return min_n;
    
       
    
}



int main()
{
    
    double v,s,h;
    double r,g,b;
    scanf("%lf%lf%lf",&r,&g,&b);

    r = r/255.0;
    g = g/255.0;
    b = b/255.0;

    double max = Max(r,g,b);
    double min = Min(r,g,b);




    v = max;

    if (v == 0)
    {
        s = 0;
    }
    if (v != 0)
    {
        s = (max - min)/max;
    }










    if (max == r)
    {
        h = 60*(0 + (g - b)/(max - min));
    }

    if (max == g)
    {
        h = 60*(2 + (b - r)/(max - min));
    }
    
    if (max == b)
    {
        h = 60*(4 + (r - g)/(max - min));
    }

    if (h < 0)
    {
        h = h + 360.0;
    }


   
    s *= 100;
    v *= 100;

    printf("%.4lf,%.4lf%%,%.4lf%%",h,s,v);

    return 0;


    





}