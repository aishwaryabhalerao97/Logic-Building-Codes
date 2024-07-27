#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[],int iSize)
{
     int i = 0;
     int Sum = 0;
       
     for(i = 0; i < iSize; i++)
     {
        if(Arr[i] % 2 == 0)
        {
            Sum = Sum + Arr[i];
        }
     }
     return Sum;

   
    
}
int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;
   int iRet = 0;
    
    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);
    
    Brr = (int *) malloc(iCount * sizeof(int));
    printf("Enter the elements : \n");

    for(i = 0; i < iCount ; i++ )
    {
        scanf("%d",&Brr[i]);
    }
     printf("Entered the elements : \n");
    for(i = 0; i < iCount ; i++ )
    {
        printf("%d\n",Brr[i]);
    }
    
     iRet = SumEven(Brr,iCount);
     printf(" Sum of Even elements are :\n",iRet);
    free(Brr);
    return 0;
}