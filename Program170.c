#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 bool CheckOccurance(char *str)
{
    bool bFlag = 0;
    while(*str != '\0')
    {
        if(*str == 'w') 
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
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurance(Arr);     // Inbuilt function

    if(bRet == true)
    {
        printf("String contains w in it!\n");
    }
    else
    {
        printf("String does not contains w in it!\n");
    }
    //printf("Number of spaces is : %d\n",bRet);
    return 0;
}