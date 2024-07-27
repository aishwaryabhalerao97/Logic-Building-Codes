#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE First, PNODE Last)
{
    if((First==NULL) && (Last==NULL))
    {
        printf("LL is empty!\n");
        return;
    }
    else 
    {   printf("<=>");
        do
        {
            First=First->next;
           printf("| %d | ->",First->data);
        } while (Last->next!=First);
        printf("\n");
    }
}
int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    if((First==NULL) && (Last==NULL))
    {
        printf("LL is empty!\n");
        return 0;
    }
    else
    {
        do
        {
            First= First->next;
            iCnt++;
           
        }while(Last->next != First);

        return iCnt;
    }
    
}
void InsertFirst(PPNODE First, PPNODE Last,int No)
{
    PNODE newn = NULL;
    PNODE temp = *First;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = (*First);
        (*First)->prev = newn;
        *First = newn;
    }
    (*Last) -> next = *First;
    (*First) -> prev = *Last;
}
void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;
    
   newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
       (*Last)->next = newn;
        newn->prev = (*Last);
        *Last = newn;
    }
    (*Last) -> next = *First;
    (*First) -> prev = *Last;

}
void InsertAtPos(PPNODE First, PPNODE Last,int No, int iPos)
{
    PNODE newn = NULL;
        PNODE temp = NULL;
        int i = 0, iLength=0;

       if((iPos < 1) || (iPos > iLength+1))
       {
            printf("Invalid position\n");
       }
       if(iPos==1)
       {
            InsertFirst(First,Last,No);
       }
       else if(iPos==iLength+1)
       {
         InsertLast(First,Last,No);
       }
        else
        {
            newn=(PNODE)malloc(sizeof(NODE));
            newn ->data= No;
            newn->next = NULL;
            newn -> prev = NULL;
            temp = *First;
            for(i =1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next=temp->next;
            temp->next->prev = newn;
            temp->next =newn;
            newn->prev = temp;
        }
}
void DeleteFirst(PPNODE First, PPNODE Last)
{
if(*First==NULL && *Last ==NULL)
        {
            printf("LL is empty");
        }
        else if(*First==*Last)
        {
             free(*First);
            *First = NULL;
            *Last = NULL;
        }
        else
        {
            *First = (*First)->next;
            free((*Last)->next);
            (*Last)->next=*First;
            (*First)->prev = *Last;
        }
}
void DeleteLast(PPNODE First, PPNODE Last)
{
    if(*First==NULL && *Last ==NULL)
        {
            printf("LL is empty");
        }
        else if(*First==*Last)
        {
             free(*First);
            *First = NULL;
            *Last = NULL;
        }
        else
        {
           *Last = (*Last)->prev;
            free ((*First)->prev);
            (*Last)->next=*First;
            (*First)->prev=*Last;
        }

}
void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
     PNODE temp = NULL;
        int i = 0,iLength = 0;

       if((iPos < 1) || (iPos > iLength))
       {
        printf("Invalid position\n");
       }
       if(iPos==1)
       {
        DeleteFirst(First,Last); 
       }
       else if(iPos==iLength)
       {
        
        DeleteLast(First,Last);
       }
        else
        {
           
            temp = *First;
            for(i =1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            temp->next= temp->next->next;
            free( temp->next->prev);
            temp->next->prev=temp;
        }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
     InsertFirst(&Head,&Tail,11);
    InsertFirst(&Head,&Tail,12);
    InsertFirst(&Head,&Tail,13);
    InsertFirst(&Head,&Tail,14);
    InsertLast(&Head,&Tail,15);
    InsertLast(&Head,&Tail,16);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);
    DeleteAtPos(&Head,&Tail,4);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    return 0;
}