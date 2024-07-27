#include<stdio.h>

void CalculateFreq(char *str)
{
    int Count[26] = {0};
 int i = 0;
    while(*str != '\0')
    {
       
        Count[*str - 'a']++;
        str++;
    }
    for( i = 0; i < 26;i++)
    {
        if(Count[i] != 0)
        {
            printf("Frequency of %c is %d\n",'a'+i,Count[i]);
        }
        
    }
}
int main()
{
  char Arr[26];
  
  printf("Enter first string : \n");
  scanf("%s",Arr);

CalculateFreq(Arr);
  return 0;
}