#include<stdio.h>
#include<stdbool.h>

bool Anagram(char *str1, char *str2)
{
    int Count1[26] = {0};
    int Count2[26] = {0};
    int i = 0;

    bool bFlag = false;
    while(*str1 != '\0')
    {
        Count1[*str1 - 'a']++;
        str1;
        
    }
     while(*str2 != '\0')
    {
        Count1[*str2 - 'a']++;
        str2;   
    }

    for(int i = 0; i < 26; i++)
    {
        if(Count1[i] != Count2[i])
        {
            break;
        }
    }

    if(i == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
  char Arr[30];
  char Brr[30];
  bool bRet = false;

  printf("Enter first string : \n");
  scanf("%s",Arr);

printf("Enter secon string : \n");
  scanf("%s",Brr);

  bRet = Anagram(Arr,Brr);

  if(bRet == true)
  {
    printf("String is anagram\n");
  }
  else
  {
    printf("String is not anagram\n");
  }
  return 0;
}