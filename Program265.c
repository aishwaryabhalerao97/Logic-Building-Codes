#include<stdio.h>

void struprX(char *str)
{
    while(*str != 0){
    if((*str >= 'a') && (*str <= 'b'))
    {
    (*str) = (*str) - 32;
    
    }
    str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    struprX(Arr);
    printf("Entered string is : %s\n",Arr);
    return 0;
}