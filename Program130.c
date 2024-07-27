#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[],int iSize)
{
     int i = 0 , iFrequency = 0;
       
     for(i = 0; i < iSize; i++)
     {
        if(Arr[i] % 5 == 0 && Arr[i] % 3 == 0  )
        {
            iFrequency++;
        }
     }

   return iFrequency;
    
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
    
     iRet = Divisible(Brr,iCount);
     printf(" Divisible by 5 and 3 : %d\n",iRet);
    
    free(Brr);
    return 0;
}