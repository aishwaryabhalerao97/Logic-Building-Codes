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

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else   
    {
       temp = *First;
       while(temp->next != NULL)
       {
        temp = temp->next;
       }
       temp->next=newn;
    }
}
void Display(PNODE First)
{
    while(First != NULL)
    {
    printf("| %d | ",First->data);
    First = First->next;
    }
    printf("NULL \n");
}
int main()
{ 
  // int iRet = 0;
 PNODE Head = NULL;
     InsertLast(&Head,101);
    InsertLast(&Head,51);
     InsertLast(&Head,21);
      InsertLast(&Head,11);

  InsertLast(&Head,111);
   InsertLast(&Head,121);
    InsertLast(&Head,151);

    Display(Head);
    
  //iRet = Count(Head);

    return 0;
}