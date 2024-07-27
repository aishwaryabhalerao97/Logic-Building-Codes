#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void UpdateString(char *str)
{
    while(*str != '\0')
    {
        if(*str==' ')
        {
            *str = '_';
        }
        str++;

    }
    
}
int main()
{
   char Arr[50];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);
    printf("Updated string id %s\n",Arr);
    return 0;
}