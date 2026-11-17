#include<stdio.h>
#include<math.h>
 
int judge(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
   int a,b,i,num=0;
   scanf("%d%d", &a, &b);
   for(i=a;i<=b;i++){
      if(judge(i))num++;
   }
   printf("%d", num);
   return 0;
 
}