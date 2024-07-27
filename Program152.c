#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    char cValue;
    bool bRet = '\0';

    printf("Enter one character : \n");
    scanf("%c",&cValue);

    
    if(bRet == true)
    {
    printf("Entered charcter is Capital letter: \n");
    }
  else
  {
    printf("Entered charcter is not Capital letter: \n");
  }
 CheckCapital(cValue);
  return 0;
}