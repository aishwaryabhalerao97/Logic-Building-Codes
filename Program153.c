#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
         printf("Entered charcter is Capital letter: \n");
    }
    else
    {
       printf("Entered charcter is not Capital letter: \n");
    }

}
int main()
{
    char cValue;
   

    printf("Enter one character : \n");
    scanf("%c",&cValue);

   
  CheckCapital(cValue);
  return 0;
}