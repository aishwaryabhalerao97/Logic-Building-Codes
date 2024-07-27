#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit = 0;
  int iCount= 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  while(iNo > 0)
  {
iDigit = iNo % 10;
if(iDigit > 5 != 0)
{
    printf("%d\n",iDigit);
    iCount++;
}
  iNo = iNo/10;

  }
  return iCount;


}
int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter number: \n");
   scanf("%d",&iValue);

   iRet = CountDigits(iValue);

   printf(" %d Number of didgits are greater than 5: \n",iRet);
  
    return 0;
    
}