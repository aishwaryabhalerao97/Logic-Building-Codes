#include<stdio.h>
#include<stdlib.h>

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
    int iCount = 0, i = 0;
    int *Brr = NULL;
    int iRet = 0;
    //step 1 Accept elemts from user
    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);
    //step 2 allocate dynamic memeory
    Brr = (int *) malloc(iCount * sizeof(int));

    //step 3 uses this memeory for elemts
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
    //step 4 pass the addr 
    iRet = Addition(Brr,iCount);
    printf("Addition is : %d\n",iRet);
    free(Brr); //deallocate memory
    return 0;
}