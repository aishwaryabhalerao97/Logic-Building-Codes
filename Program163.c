#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str!= '\0');
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Lenth of String is : %d\n",iRet);
    return 0;
}