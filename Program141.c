#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;
    
    for(i = 0; i < iSize; i++ )
    {
        if(Arr[i] > 100)
        {
        Arr[i] = 0;
        }
    }

}

int main()
{
    int *Brr = NULL;
    int i = 0, iCount = 0;
   

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

  Updator(Brr,iCount);

    printf("Data after updation is :%d \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    free(Brr);
    return 0;
}