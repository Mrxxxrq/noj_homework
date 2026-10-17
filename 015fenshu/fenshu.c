#include<stdio.h>
int gcd(int a, int b){
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    
    return !b ? a : gcd(b,a%b);//!b与b==0等效
}


int main()
{
    int fenzi1,fenmu1;
    int fenzi2,fenmu2;
    scanf("%d/%d",&fenzi1,&fenmu1);
    scanf("%d/%d",&fenzi2,&fenmu2);


    printf("(%d/%d)+(%d/%d)=%d/%d\n",fenzi1,fenmu1,fenzi2,fenmu2
        ,(fenzi1*fenmu2+fenzi2*fenmu1)/gcd((fenzi1*fenmu2+fenzi2*fenmu1),(fenmu1*fenmu2))
        ,(fenmu1*fenmu2)/gcd((fenzi1*fenmu2+fenzi2*fenmu1),(fenmu1*fenmu2)));



    printf("(%d/%d)-(%d/%d)=%d/%d\n",fenzi1,fenmu1,fenzi2,fenmu2
         ,(fenzi1*fenmu2-fenzi2*fenmu1)/gcd((fenzi1*fenmu2-fenzi2*fenmu1),(fenmu1*fenmu2))
         ,(fenmu1*fenmu2)/gcd((fenzi1*fenmu2-fenzi2*fenmu1),(fenmu1*fenmu2)));



    printf("(%d/%d)*(%d/%d)=%d/%d\n",fenzi1,fenmu1,fenzi2,fenmu2
         ,(fenzi1*fenzi2)/gcd(fenzi1*fenzi2,fenmu1*fenmu2),(fenmu1*fenmu2)/gcd(fenzi1*fenzi2,fenmu1*fenmu2));




    printf("(%d/%d)/(%d/%d)=%d/%d\n",fenzi1,fenmu1,fenzi2,fenmu2
        ,(fenzi1*fenmu2)/gcd(fenzi1*fenmu2,fenmu1*fenzi2),(fenzi2*fenmu1)/gcd(fenzi1*fenmu2,fenmu1*fenzi2));

    return 0;
  
}