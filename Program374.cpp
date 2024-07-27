#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);        
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside Constructor"<<endl;
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = First;

     printf("\n NULL <=>| ");

    while(temp != NULL)
    {
        cout<<" |  | "<<temp->data;
        temp = temp -> next;
    }
    printf(" |<=> NULL \n");
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

     if(First==NULL)
     {
        First = newn;
     }
     else
     {
     newn -> next = First;
     First -> prev = newn;
     First = newn;
     }
     iCount++;
}

void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

     if(First==NULL)
     {
        First = newn;
     }
     else
     {
       while(temp->next != NULL)
      {
        temp=temp->next;
      }
     temp ->next = newn;
     newn -> prev = temp; 
     }
        iCount++;
     
     }
     
void DoublyLL::InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = First;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

       newn -> data = No;
       newn -> next = NULL;
       newn -> prev = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp -> next;  
        temp->next->prev = newn;    //$
        temp->next = newn;
        newn->prev=temp;  
         iCount++;
    }
}

void DoublyLL::DeleteFirst()
{
    PNODE temp = First;
   if(First == NULL)     //case 1
   {
    cout<<"Unable to delete as LL is empty!\n";
    return;
   }
 else if(First->next==NULL)   //case 2
 {
    delete First;
    temp = NULL;
 }
 else                   //case 3
 {
    First = First -> next;
    delete (temp-> prev);
    temp -> prev =NULL;
}
iCount--;
}
void DoublyLL::DeleteLast()
{
    PNODE temp = First;
   if(First == NULL)     //case 1
   {
    cout<<"Unable to delete as LL is empty!\n";
    return;
   }
 else if(First->next==NULL)   //case 2
 {
    delete First;
    temp = NULL;
 }
 else                   //case 3
 {
     temp = First;
    while(temp->next->next!=NULL)
    {
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = NULL;

 }
 iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    PNODE temp = First;
    if((iPos < 1) || (iPos > iCount ))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp= temp->next;
        }
          temp->next = temp -> next -> next;
          delete (temp->next->prev);
          temp->next->prev = temp;   
}
iCount--;
}
int main()
{
    int iRet = 0;

    DoublyLL obj;

    
    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertFirst(51);

    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(105);

    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();

    obj.InsertAtPos(20,4);
    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();

    obj.DeleteFirst();
    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();

    obj.DeleteLast();
    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();

    obj.DeleteAtPos(5);
    iRet =  obj.Count();
    cout<<"Number of elements are: "<<iRet;
    obj.Display();
    return 0;
}