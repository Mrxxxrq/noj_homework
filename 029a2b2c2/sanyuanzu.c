#include<stdio.h>
int main()
{
    int n;
    scanf("%lld",&n);
    int a,b,c;
    for ( a = 1; a<n/3; a++)
    {
       for ( b = 2; b <n/2; b++)
       {
          c = n - a- b;
          if(c*c==b*b+a*a)
          {
            long long result = a*b*c;
            printf("%lld",result);
          }
       }
       
    }
    



    return 0;
}




// #include<stdio.h>
// #include<math.h>
 
// int main(){
//     int n,c,i,j;
//     scanf("%d", &n);
//     for(i=1;i<n/3;i++){
//         for(j=2;j<n/2;j++){
//             c=n-j-i;
//             if(i*i+j*j==c*c){
//               long long result=i*j*c;
//               printf("%lld", result);
//             }
//         }
//     }
//     return 0;
// }
 