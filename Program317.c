#include<stdio.h>

bool CheckBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x00000100;
iResult = iNo & iMask;

if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    bool iRet = 0;
    unsigned int iValue =0; 
    
    printf("Enter number : \n");
    scanf("%u",&iValue);
iRet = CheckBit(iValue);
    if(iRet == true)
    {
        printf("8th and 4th bit is ON \n");
    }
    else
    {
         printf("Bits are OFF \n");
    }
    
 
    return 0;
}
/*
Decimal     Binary      Hexadecimal

int no= 12;     1 1 0 0

0 0 0 0    0 0 0 0   0 0 0 0    0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0    

*/