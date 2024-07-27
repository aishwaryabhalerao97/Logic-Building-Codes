//LL of Character
#include<iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyLL
{
    private:
    PNODE First;
    int iCount;

    public:
    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(char No);
    void InsertLast(char No);
    void InsertAtPos(char No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

};

SinglyLL::SinglyLL()
    {   
        cout<<"Inside constructor\n";
        First = NULL;
        iCount = 0;
    }

    void SinglyLL::Display()
    {
        PNODE temp = First;

        while(temp!=NULL)
        {
            cout<<"| %d |->"<<temp->data;
            temp= temp ->next;
        }
        
    }

    int SinglyLL::Count()
    {
        return iCount;
    }

    void SinglyLL::InsertFirst(char No)
    {
        PNODE newn =NULL;

        newn =  new NODE; //malloc

        newn->data = No;
        newn->next = NULL;

        if(First==NULL)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First = newn;
            
        }
        iCount++;
    }

    void SinglyLL::InsertLast(char No)
    {
        PNODE newn =NULL;
        PNODE temp = First;

        newn =  new NODE; //malloc

        newn->data = No;
        newn->next = NULL;

        if(temp==NULL)
        {
            temp = newn;
        }
        else
        {
            while(temp ->next != NULL)
            {
            temp = temp ->next;
            
            }
            temp->next = newn;
        }
        iCount++;

    }

    void SinglyLL::InsertAtPos(char No, int iPos)
    {
        PNODE newn = NULL;
        int i = 0;
        PNODE temp = First;
        if((iPos < 1) || (iPos > iCount + 1))
        {
            cout<<"Invalid Position"<<endl;
        }
         if(iPos== 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(No);
        }
        else
        {
            newn = new NODE;
            newn -> data = No;
            newn -> next = NULL;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next=temp->next;
            temp->next=newn;
             iCount++;
        }
       
    }

    void SinglyLL::DeleteFirst()
    {
        PNODE temp = First;
        if(First==NULL)
        {
            cout<<"LL is empty";
        }

        else if(First->next==NULL)
        {
            delete First;
            First = NULL;
        }

        else
        {
            First = First->next;
            delete temp;
        }
        iCount--;
    }

    void SinglyLL::DeleteLast()
    {
        PNODE temp = First;   
        if(First==NULL)
        {
            cout<<"LL is empty";
        }

        else if(First->next==NULL)
        {
            delete First;
            First = NULL;
        }

        else
        {
            while(temp->next->next!=NULL)
            {
            temp = temp->next;
            
            }
            delete temp->next;
            temp->next = NULL;

        }
        iCount--;

    }

    void SinglyLL::DeleteAtPos(int iPos)
    {
        
        int i = 0;
        PNODE temp1 ;
        PNODE temp2 ;

        if((iPos < 1) || (iPos > iCount ))
        {
            cout<<"Invalid Position"<<endl;
        }
         if(iPos== 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount + 1)
        {
            DeleteLast();
        }
        else
        {
            temp1 = First;

            for(i = 1; i < iPos-1; i++)
            {
                temp1 = temp1->next;
            }
            temp2 = temp1->next;
            temp1->next = temp2->next;
            delete temp2;

            iCount--;
        }
    }
int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst('S');
     obj.InsertFirst('A');
      obj.InsertFirst('C');

    obj.Display();
    iRet= obj.Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;

    obj.Display();

    obj.InsertLast('H');
    obj.InsertLast('I');
    obj.InsertLast('N');

    obj.Display();
    iRet= obj.Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;


    obj.InsertAtPos(105,5);
     obj.Display();
    iRet= obj.Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;
  

    obj.DeleteAtPos(5);
    obj.Display();
    iRet= obj.Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;
  
      return 0;
}