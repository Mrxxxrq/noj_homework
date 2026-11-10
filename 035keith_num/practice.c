#include<stdio.h>

int keith(int n)
{
    int sequnce[100];
    int originalN = n;
    int len=0;
    int sum =0;
    while (n>0)
    {
        sequnce[len++]=n%10;
        n/=10;
    }
    int index = 0;
    int a[100];
    for (int i = len - 1; i >0; i--)
    {
       a[index++]=sequnce[i];
       sum+=sequnce[i];
    }
    int start = 0;
    while(1)
    {
        a[index++]=sum;//++在后是先填空后移动“指针”
        sum = sum+sum-a[start++];
        if(sum==originalN){
            return 1;
       }
       if(sum>originalN){
            return 0;
       }
    }
    return 0;
}


