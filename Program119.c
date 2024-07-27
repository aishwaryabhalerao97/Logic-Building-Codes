#include<stdio.h>

int Addition(int ptr[],int iSize)
{
     int i = 0;
     int add = 0;
    for(i = 0; i < iSize; i++)
    {
    add = add + ptr[i];

   }
    return add;
}
int main()
{
    int Arr[5] ;
    int iRet = 0, i = 0;
    
    
  printf("Enter the elements : ");
   for(i = 0; i < 5; i++)
   {
  scanf("%d",&Arr[i]);
   }
  iRet = Addition(Arr,5); //Display(100)
  printf("Addition of array is %d\n:",iRet);
    return 0;
}