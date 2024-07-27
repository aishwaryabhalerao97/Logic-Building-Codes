#include<stdio.h>
#include<stdlib.h>

_____ ________(int ptr[],int iSize)
{
     
   //logic

   
    
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
    
    iRet = ______(Brr,iCount);
    
    free(Brr);
    return 0;
}