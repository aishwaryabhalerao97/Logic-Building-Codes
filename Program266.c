#include<stdio.h>

void strtoggleX(char *str)
{
     while(*str != 0)
     {
    if((*str >= 'A') && (*str <= 'Z'))
    {
        (*str) = (*str) + 32;
    }
    else if((*str >= 'a') && (*str <= 'z'))
    {
         (*str) = (*str) - 32;
    }
    str++;
     }
}
int main()
{
    char Arr[30];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);
   strtoggleX(Arr);
    printf("Entered string is %s\n",Arr);
    return 0;
}