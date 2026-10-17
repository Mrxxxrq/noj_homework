#include <stdio.h>
#include <limits.h>
int main()
{
    int d;
    while (scanf("%d",&d) == 1)
    {
      switch (d)
    {
    case 1:
    printf("%d,%d,%d",CHAR_BIT,CHAR_MIN,CHAR_MAX);
      break;

    case 2:
    printf("%d,%d,%d",sizeof(unsigned char),0,UCHAR_MAX);
      break;

    case 3:
    printf("%d,%d,%d",sizeof(short),SHRT_MIN,SHRT_MAX);
      break;

    case 4:
    printf("%d,%d,%d",sizeof(unsigned short),0,USHRT_MAX);
      break;

    case 5:
    printf("%d,%d,%d",sizeof(int),INT_MIN,INT_MAX);
      break;

    case 6:
    printf("%d,%d,%d",sizeof(unsigned int),0,UINT_MAX);
      break;

    case 7:
    printf("%d,%d,%d",sizeof(long),LONG_MIN,LONG_MAX);
      break;

    case 8:
    printf("%d,%d,%d",sizeof(unsigned long),0,ULONG_MAX);
      break;

    case 9:
    printf("%d,%d,%d",sizeof(long long),LLONG_MIN,LLONG_MAX);
      break;

    case 10:
    printf("%d,%d,%d",sizeof(unsigned long long),0,ULLONG_MAX);
      break;

    default:
    printf("输入错误");
      break;
    }
    }
    
    
    
return 0;
}