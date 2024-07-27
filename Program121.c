#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;
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
    free(Brr); //deallocate memory
    return 0;
}