#include<stdio.h>

int main()
{
    unsigned int iResult = 0, iNo = 0;
    unsigned int iMask = 0x0000008;

    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo ^ iMask;
    
    printf("updated number is:%u \n",iResult);
  
    return 0;
}
