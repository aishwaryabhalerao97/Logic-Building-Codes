#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};

template<class T>
class DoublyCL
{
    private:
    struct node <T> *First;
    struct node <T> *Last;
    int iCount;

    public:
    DoublyCL();

    void display();
    int Count();

    void InsertFirst(T No);
     void InsertLast(T No);
      void InsertAtPos(T No, int iPos);
      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};
    template<class T>
      DoublyCL<T>::DoublyCL()
      {
        First = NULL;
        Last = NULL;
        iCount = 0;
      }

      template<class T>
    void DoublyCL<T>::display()
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

    template<class T>
    int DoublyCL<T>::Count()
    {
        return iCount;
    }

    template<class T>
    void DoublyCL<T>::InsertFirst(T No)
    {
        struct node <T>* newn = NULL;
        newn = new node<T>;

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

    template<class T>
     void DoublyCL<T>::InsertLast(T No)
     {
         struct node<T> * newn = NULL;
        newn = new node<T>;

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

     template<class T>
      void DoublyCL<T>::InsertAtPos(T No, int iPos)
      {
        struct node<T> * newn = NULL;
        struct node<T> * temp = NULL;
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

      template<class T>
      void DoublyCL<T>::DeleteFirst()
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

      template<class T>
      void DoublyCL<T>::DeleteLast()
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
      template<class T>
      void DoublyCL<T>::DeleteAtPos(int iPos)
      {
    
        struct node<T> * temp = NULL;
        int i = 0;

       if((iPos < 1) || (iPos > iCount))
       {
        cout<<"Invalid position\n";
       }
       if(iPos==1)
       {
        DeleteFirst();
       }
       else if(iPos==iCount)
       {
        DeleteLast();
       }
        else
        {
           
            temp = First;
            for(i =1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            temp->next= temp->next->next;
            delete temp->next->prev;
            temp->next->prev=temp;
           
            iCount--;
        }
      }
int main()
{
  DoublyCL<int> * iobj = new DoublyCL<int>;
  int iRet = 0;
   iobj->InsertFirst(51);
    iobj->InsertFirst(21);
     iobj->InsertFirst(11);

      iobj->InsertLast(101);
    iobj->InsertLast(111);
     iobj->InsertLast(121);
     iobj->display();
    iRet =  iobj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

     iobj->DeleteAtPos(5);
     iobj->display();
    iRet =  iobj->Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}