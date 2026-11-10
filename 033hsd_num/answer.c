#include <stdio.h>
 
inline int HSD(int n){
     int t=n,s=0;
     while(t){
        s+=t%10;
        t/=10;
     }
     if(s && n%s==0)return n/s;
     return 0;
}
int main() {
    int n,num=0,t;
    scanf("%d", &n);
    t=HSD(n);
    while(t>1){
      num++;
      t=HSD(t);
    }
    if(t==1)num++;
    printf("%d", num);
}