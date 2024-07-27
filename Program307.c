#include<stdio.h>


int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%u",&iNo1);

    printf("Enter seconmd number : \n");
    scanf("%u",&iNo2);

   iRet = iNo1 & iNo2;
    printf("result of bitwise is %u: \n",iRet);
     
    return 0;
}
/*
op1     op2     result
1       1           1
1       0           0
0       0           0
0       1           0
*/