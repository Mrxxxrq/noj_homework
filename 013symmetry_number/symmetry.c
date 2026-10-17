#include<stdio.h>
 long long deng180 (long long n)
    {
        long long div = 1;
        long long temp = n;
        while(temp >= 10)//只需要除到还剩一位就行，再除的话temp就要永远为零
        {
            temp /= 10;
            div *= 10;//div相当于科学计数法的10的次方
        }
        long long first = n/div;
        long long last = n%10;
        if (first == last && ( first == 1||first == 8||))
        {
            return 1;
        }
        else return 0;

    }
    
long long deng69(long long n)
{
    long long div = 1;
    long long temp = n;
     while(temp >= 10)//只需要除到还剩一位就行，再除的话temp就要永远为零
        {
            temp /= 10;
            div *= 10;//div相当于科学计数法的10的次方
        }
        long long first = n/div;
        long long last = n%10;
        if ((first == 6 && last == 9)||(first == 9 && last == 6))
        {
            return 1;
        }
        else return 0;

}

long long quhead(long long n)
{
    long long div = 1;
    long long temp = n;
     while(temp >= 10)//只需要除到还剩一位就行，再除的话temp就要永远为零
        {
            temp /= 10;
            div *= 10;//div相当于科学计数法的10的次方
        }
    n = (n % div)/10;    
}

long long symmetry(long long n)
{
    while (n > 0)
    {
        switch (n%10)
        {
        case 1 :
        case 8 :
            deng180(n);
            break;
        case 6 :
        case 9 :
             deng69(n);
             break;

        default:
            break;
        }

    }
    quhead(n);
    return symmetry(n);
}

int main()
{
   long long n = 0;
    scanf("%lld",&n);
   if (symmetry(n))
   {
    printf("Yes");
   }

  return 0;
}