#include<stdio.h>
int main()
{
    int t;
    int n[10000];
    scanf("%d",&t);
    for(int i=0;i < t;i++)
    {   
        scanf("%d",&n[i]);
    }
    
    for(int i = 0; i < t; i++)
    {   
        int sum = 0;
        int last3 = 0;
        int last5 = 0;
        int last15 = 0;

        last3 = (n[i]-1-(n[i]-1)%3)/3;
        sum =3*(1 + last3)*last3/2;

        last5 = (n[i]-1-(n[i]-1)%5)/5;
        sum = sum + 5*(1 + last5)*last5/2;

        last15 = (n[i]-1-(n[i]-1)%15)/15;
        sum = sum - 15*(1 + last15)*last15/2;

        printf("%d\n",sum);


    }

    
    return 0;
}