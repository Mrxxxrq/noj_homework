#include<stdio.h>

int hsd(int n){
     int t=n,s=0;
     while(t){
        s+=t%10;
        t/=10;
     }
     if(s && n%s==0)return n/s;
     return 0;
}
    
    


int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    int temp = hsd(n);
    while(temp>1)
    {
        i++;
        temp = hsd(temp);
    }
    if (temp==1)i++;
   

    printf("%d\n",i);
    return 0;
}