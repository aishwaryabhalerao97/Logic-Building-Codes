#include<stdio.h>

void CheckBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0xfffffff7;
    
    iResult = iNo & iMask;
    printf("%u",iResult);
    
}

int main()
{
    unsigned int iValue =0; 
   
    printf("Enter number : \n");
    scanf("%u",&iValue);
    
    printf("updated number is:%u \n");
    CheckBit(iValue);
    return 0;
}
