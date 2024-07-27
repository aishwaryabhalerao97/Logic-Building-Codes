#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;
    iCnt = 1; 
    while( iCnt<=iNo)
    {
        iFact = iFact * iCnt;
    iCnt++;
    }
    return iFact;
}
int main()
{
    int iVAlue = 0;
   unsigned long int iRet = 0;

printf("Enter number: \n");
scanf("%d",&iVAlue);

iRet = Factorial(iVAlue);

printf("Factorial is: %lu \n",iRet);

return 0;
}