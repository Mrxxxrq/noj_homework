#include<stdio.h>
int main()
{
    long long m,n;
    scanf("%lld %lld",&m,&n);
    long long sum = 0;

    for (m; m>=1; m/=2)
    {
        
        if (m%2)
        {
           sum = sum +n;
        }
        printf("%lld %lld\n",m,n);
       n*=2;
        
    }
    printf("%lld",sum);
    return 0;
}







// #include <stdio.h>
 
// int main() {
//     long long a,b,sum=0;
//     scanf("%lld %lld", &a, &b);
//     while(a>0){
//         printf("%lld %lld\n", a, b);
//         if(a%2){
//            sum+=b;
//         }
//         a>>=1;
//         b<<=1;
//     }
//     printf("%lld", sum);
// }
