#include<stdio.h>
long long calculatelength(long long N,long long X)
{
    long long totallength = N;
    long long n_x = N - X;
    while(n_x > 0)
    {
        if (n_x%X==0)
        {
            long long n = n_x/X;
            totallength += (2*n-1)*X;
            break;
        }
        else if(n_x%X>=1)
        {
            long long n = n_x/X;
            totallength += 2*n*X;
            long long temp = n_x - X*n;
            n_x = X;
            X = temp;

        }
        
    }
    return totallength;
}



int main()
{
    long long N,X;
    scanf("%lld %lld",&N,&X);
    long long totallength;
    if (N-X >= X)
    {
       totallength = calculatelength(N,X);
    }
    else totallength = calculatelength(N,N-X);
    printf("%lld\n",totallength);
    return 0;
}