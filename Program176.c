#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 int CheckFrequency(char *str, char ch)
{
    int iCnt = 1 , iPos = -1;
    

    while(*str != '\0')
    {
        if(*str == ch) 
        {
            iPos = iCnt;
        }
       iCnt++;
        str++;

    }
    return  iPos;
}
int main()
{
   char Arr[50];
    int iRet = 0;
    char cValue;
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter chracter that you want to search \n");
    scanf(" %c",&cValue);

    iRet = CheckFrequency(Arr,cValue);     // Inbuilt function
   if(iRet == -1)
    {
         printf("There is no letter!\n");
       
    }
    else
    {
        printf("Last occurance of the letter is %d!\n",iRet);
    }
    return 0;
}