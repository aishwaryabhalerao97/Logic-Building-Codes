#include<stdio.h>
#include<string.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str = 'e') || (*str = 'i') || (*str = 'o') || (*str = 'u'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
   char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);     // Inbuilt function

    printf("String length is : %d\n",iRet);
    return 0;
}