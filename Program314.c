#include<stdio.h>

bool CheckBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 136;
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
op1     op2         &       |       ^
1       1           1       1       0
1       0           1       1       1
0       0           0       1       1
0       1           0       0       0

    ino1    11      0 0 0 0 1 0 1 1

    iNo2    15      0 0 0 0 1 1 1 1
    ino3     20     0 0 0 0 0 1 0 0
    mask            0 0 0 0 1 0 0 0
    ----------------------------------------
    result          0 0 0 0 0 0 0 0
*/