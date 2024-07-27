#include<stdio.h>

int Addition(int Arr[],int iSize)
{
     int i = 0;
     int add = 0;
    for(i = 0; i < iSize; i++)
    {
    add = add + Arr[i];

   }
    return add;
}
int main()
{
    int Brr[5] ;
    int iRet = 0, i = 0;
    
    
  printf("Enter the elements : ");
   for(i = 0; i < 5; i++)
   {
  scanf("%d",&Brr[i]);
   }
  iRet = Addition(Brr,5); //Display(100)
  printf("Addition of array is %d\n:",iRet);
    return 0;
}