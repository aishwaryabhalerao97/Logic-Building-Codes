#include<stdio.h>

int main()
{
    int iNo = 9758;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);

    iNo = iNo/10;
    iDigit = iNo %10;
     printf("%d\n",iDigit);

   iNo = iNo/10;
    iDigit = iNo %10;
     printf("%d\n",iDigit);

    return 0;
}