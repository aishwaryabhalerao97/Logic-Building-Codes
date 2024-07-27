#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyLL
{
    public:
    PNODE First;
    int iCount;

    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

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

    void SinglyLL::InsertFirst(int No)
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

    void SinglyLL::InsertLast(int No)
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

    void SinglyLL::InsertAtPos(int No, int iPos)
    {

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
            while(First->next!=NULL)
            {
            First = First->next;
            delete First;
            }
        }
        iCount--;

    }

    void SinglyLL::DeleteAtPos(int iPos)
    {

    }
int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
     obj.InsertFirst(21);
      obj.InsertFirst(11);

    obj.Display();
    iRet= obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;

    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet= obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;

    obj.DeleteFirst();
    obj.Display();
    iRet= obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;
    return 0;
}
