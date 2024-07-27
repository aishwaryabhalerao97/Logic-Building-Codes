#include<stdio.h>
#include<stdlib.h>

void DisplayRev(int Arr[], int iSize)
{
    int i = 0; int Rev = 0;
    rintf("Reverse elements are :\n");
    for(i = iSize-1; i >= 0; i--)
    {
        printf("%d\n",Arr[i]); 
        
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
        scanf("%d\n",&Brr[i]);
    }

  DisplayRev(Brr,iCount);
    free(Brr);
    return 0;
}