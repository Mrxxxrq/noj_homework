#include<stdio.h>
#include<stdarg.h>

int sum(int n,...)
{
    va_list ap;
    va_start(ap,n);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += va_arg(ap,int);

    }
    va_end(ap);
    
    return result;
}


int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf("%d",sum(2,a,b)-sum(4,c,d,e,f));
    return 0;
}