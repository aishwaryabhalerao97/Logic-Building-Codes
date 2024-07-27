// * * * * *
#include<stdio.h>

void Display()
{
    int iCnt=0;
    int iNo =0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("* \t ",iCnt);
  }
     printf("\n");
}

int main()
{
    int iValue = 0;
    printf(" Enter frequency: \t ");
    scanf("%d\n",&iValue);

   Display(iValue);
    return 0;
}