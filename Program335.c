#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;
//step1 - Alloacte dyanamic memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    //step 2- Initialise the new node
    newn->data = No;
    newn->next = NULL;
    //step 3- Check is linked list is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else    //if linked list contains atleast one node in it
    {
        newn->next = *First;
        *First = newn;
    }

}
void Display(PNODE First)
{
    printf(" ",First);
}
int main()
{
 PNODE Head = NULL;

    InsertFirst(&Head,51);
     InsertFirst(&Head,21);
      InsertFirst(&Head,11);

    Display(Head);
    return 0;
}