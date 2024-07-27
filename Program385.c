#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First==NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        
    }
    else
    {
        newn->next=*First;
        *First = newn;
        
    }
    (*Last)->next=*First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First==NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;  
    }
    else
    {
     (*Last) -> next = newn;
     *Last = newn;   
    }
    (*Last)->next=*First;
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL)) //prbm solved using filter
    {
        printf("LL is empty \n");
        return;
    }
    do
    {
        printf("| %d | ->",First->data);
        First = First->next;
        /* code */
    } while (First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{ int iCnt = 0;
    if((First == NULL) && (Last == NULL)) //prbm solved using filter
    {
        printf("LL is empty \n");
        return 0;
    }
    do
    {
        First = First->next;
        iCnt++;
    } while (First != Last->next);
    return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((First == NULL) && (Last == NULL)) 
    {
        printf("LL is empty \n");
        return ;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
  
    }
}
void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;
    if((First == NULL) && (Last == NULL)) 
    {
        printf("LL is empty \n");
        return ;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
         while (temp-> next != *Last)
    {
        temp = temp -> next;
    }
    free(*Last);
    *Last = temp;
    (*Last) -> next = *First;
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head, Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head, Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteLast(&Head,&Tail);
    Display(Head, Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);
    return 0;
}