#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCL
{
    private:
    PNODE First;
    PNODE Last;
    int iCount;

    public:
    DoublyCL();

    void display();
    int Count();

    void InsertFirst(int No);
     void InsertLast(int No);
      void InsertAtPos(int No, int iPos);
      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};
      DoublyCL::DoublyCL()
      {
        First = NULL;
        Last = NULL;
        iCount = 0;
      }
    void DoublyCL::display()
    {
        if(First == NULL && Last == NULL)
        {
            cout<<"LL is empty!"<<endl;
            return;
        }
        else{
            cout<<"<=>";
        do
        {
           First = First->next;
           cout<<" |"<<First->data<<"| <=>";

        } while(Last->next != First);
        cout<<"\n";
        }
    }
    int DoublyCL::Count()
    {
        return iCount;
    }

    void DoublyCL::InsertFirst(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        if(First==NULL && Last ==NULL)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn->next=First;
            First->prev = newn;
              First = newn;
        }
        Last->next = First;
        First->prev = Last;
      
        iCount++;
    }
     void DoublyCL::InsertLast(int No)
     {
         PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        if(First==NULL && Last ==NULL)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last->next = newn;
            newn->prev = Last;
            Last = newn;
        }
        Last->next = First;
        First->prev = Last;
     
        iCount++;
     }
      void DoublyCL::InsertAtPos(int No, int iPos)
      {
        PNODE newn = NULL;
        PNODE temp = NULL;
        int i = 0;

       if((iPos < 1) || (iPos > iCount+1))
       {
        cout<<"Invalid position\n";
       }
       if(iPos==1)
       {
        InsertFirst(No);
       }
       else if(iPos==iCount+1)
       {
        InsertLast(No);
       }
        else
        {
            newn ->data= No;
            newn->next = NULL;
            newn -> prev = NULL;
            temp = First;
            for(i =1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next=temp->next;
            temp->next->prev = newn;
            temp->next =newn;
            newn->prev = temp;
            iCount++;
        }
      }
      void DoublyCL::DeleteFirst()
      {
        if(First==NULL && Last ==NULL)
        {
            cout<<"LL is empty";
        }
        else if(First==Last)
        {
            delete First;
            First = NULL;
            Last = NULL;
        }
        else
        {
            First = First->next;
            delete Last->next;
            Last->next=First;
            First->prev = Last;
        }
        iCount--;
      }
      void DoublyCL::DeleteLast()
      {
         {
        if(First==NULL && Last ==NULL)
        {
            cout<<"LL is empty";
        }
        else if(First==Last)
        {
            delete First;
            First = NULL;
            Last = NULL;
    
        }
        else
        {
            Last = Last->prev;
            delete First->prev;
            Last->next=First;
            First->prev=Last;
        }
        iCount--;
         }
      }
      void DoublyCL::DeleteAtPos(int iPos)
      {

      }
int main()
{
  DoublyCL obj;
  int iRet = 0;
  obj.InsertFirst(51);
   obj.InsertFirst(21);
    obj.InsertFirst(11);

     obj.InsertLast(101);
   obj.InsertLast(111);
    obj.InsertLast(121);
    obj.display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

   

    obj.DeleteFirst();
    obj.display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

     obj.DeleteLast();
    obj.display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}