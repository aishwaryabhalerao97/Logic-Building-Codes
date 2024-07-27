#include<stdio.h>

int CountOne(int iNo)
{   int iDigit = 0;
    int Count = 0;
printf("Binary conversion is \n");

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
    
        Count++;
       
        }
         iNo = iNo /2;
    }
return Count;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

   iRet = CountOne(iValue);
    printf("Binary number is %d: \n",iRet);
     
    return 0;
}
/*
*/