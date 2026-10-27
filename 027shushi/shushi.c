#include<stdio.h>
#include<math.h>
long long weishu(long long n)
{
    int i = 0;
    while (n>0)
    {
       n/=10;
        i++;
    }
    return i;
}


int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("   %lld\n",a);
    printf("x  %*lld\n",weishu(a),b);//右对齐只需要保证两个数字的宽度一致
    printf("--------\n");
    long long temp = b;
    for(long long i=0;i<weishu(b);i++)
    {
        if (weishu(temp)==1)
        {
            printf("+");
            printf("%*lld\n",3+weishu(a)-i-1,(temp%10)*a);
        }
        else printf("%*lld\n",3+weishu(a)-i,(temp%10)*a);//控制数字前空格数，只需要%*lld,其中，*对应的是宽度，即空格数+位数，右对齐，－为左对齐
        temp/=10;
    }
     printf("--------\n");
     printf("%*lld",3+weishu(a),a*b);

    return 0;
}