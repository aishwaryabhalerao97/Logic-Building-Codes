#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
         printf("Entered charcter is small letter: \n");
    }
    else
    {
       printf("Entered charcter is not small letter: \n");
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