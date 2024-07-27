#include<stdio.h>

int Addition(int ptr[], int iSize)
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
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;
  
  iRet = Addition(Arr,5); //Display(100)
  printf("Addition of array is %d\n:",iRet);
    return 0;
}