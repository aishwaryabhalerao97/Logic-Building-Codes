/*
Accept number as no 
search all its factors
perform addition of all the factors

*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt =0, iCount = 0;

    if(iNo < 0)  //Updator
    {
        iNo = -iNo;
    }

    //if(iNo ==0 || iNo == 1)
   
    for(iCnt = 2; iCnt <=(iNo/2); iCnt++)
    { if((iNo % iCnt)==0)
        {
            iCount++;
        }
    
    }
  if(iCount == 0)
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
 int iValue = 0;
bool bRet = false;

printf("Enter number:\n");
scanf("%d",&iValue);

bRet = CheckPrime(iValue);
if(bRet == true)
{
    printf("%d is prime number \n",iValue);

}
else
{
    printf("%d is not a prime number \n",iValue);
}
}

