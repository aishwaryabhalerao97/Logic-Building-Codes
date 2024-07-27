#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 int CheckOccurance(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch) 
        {
            bFlag == true;
            break;
        }
        iCnt++;
        str++;

        if(bFlag == true)
        {
            return iCnt;
        }
        else{
            return -1;
        }
    }
    return bFlag;
}
int main()
{
   char Arr[50];
    int bRet = 0;
    char vValue;
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter chracter that you want to search \n");
    scanf(" %c",&vValue);

    bRet = CheckOccurance(Arr,vValue);     // Inbuilt function

    if(bRet != -1)
    {
        printf("Letter occurs at the position %d!\n",bRet);
    }
    else
    {
        printf("Letter does not occurs at the position!\n");
    }
   
    return 0;
}