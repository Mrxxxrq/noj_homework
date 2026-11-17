#include<stdio.h>
int judge(int n,int k)
{
    int ten[100]={0};
    int kj[100]={0};
    int len = 0;
    int klen = 0;
    int temp = n;
    while (temp)
    {
        ten[len++]=temp%10;
        temp/=10;
    }
    while (n)
    {
       kj[klen++]=n%k;
       n/=k;
    }
    for(int i = 0;i<=len/2;i++)
    {
        if (ten[i]!=ten[len-1-i])
        {
            return 0;
        }
    }
    for(int i = 0;i<=klen/2;i++)
    {
        if (kj[i]!=kj[klen-1-i])
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int sum = 1;
    for (int i = 2; i <=n; i++)
    {
        if (judge(i,k))
        {
           sum += i;
        }
        
    }
    printf("%d",sum);
    return 0;
}