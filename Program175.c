#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 int CheckFrequency(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch) 
        {
             iCnt++;
        }
       
        str++;

    }
    return  iCnt;
}
int main()
{
   char Arr[50];
    int iRet = 0;
    char vValue;
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter chracter that you want to search \n");
    scanf(" %c",&vValue);

    iRet = CheckFrequency(Arr,vValue);     // Inbuilt function
   printf("%d",iRet);
    return 0;
}