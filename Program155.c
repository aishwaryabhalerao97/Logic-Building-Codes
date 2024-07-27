#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 0) && (ch <= 9))
    {
         printf("Entered charcter is between range : \n");
    }
    else
    {
       printf("Entered charcter is not between range: \n");
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