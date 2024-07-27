#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 bool CheckOccurance(char *str, char ch)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch) 
        {
            bFlag == true;
            break;
        }
        str++;
    }
    return bFlag;
}
int main()
{
   char Arr[50];
    bool bRet = false;
    char vValue;
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter chracter that you want to search \n");
    scanf("%c",&vValue);

    bRet = CheckOccurance(Arr,vValue);     // Inbuilt function

    if(bRet == true)
    {
        printf("String contains character in it!\n");
    }
    else
    {
        printf("String does not contains character in it!\n");
    }
    //printf("Number of spaces is : %d\n",bRet);
    return 0;
}