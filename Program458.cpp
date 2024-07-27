//Generic Doubly circular LL
#include<iostream>
using namespace std;

template<class T>
struct nodeDC
{
    T data;
    struct nodeDC<T> *next;
    struct nodeDC<T> *prev;
};

template<class T>
class DoublyCL
{
    private:
    struct nodeDC <T> *First;
    struct nodeDC <T> *Last;
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
        struct nodeDC <T>* newn = NULL;
        newn = new nodeDC<T>;

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
         struct nodeDC<T> * newn = NULL;
        newn = new nodeDC<T>;

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
        struct nodeDC<T> * newn = NULL;
        struct nodeDC<T> * temp = NULL;
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
    
        struct nodeDC<T> * temp = NULL;
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
  DoublyCL<int> * idobj = new DoublyCL<int>;
  int idRet = 0;
   idobj->InsertFirst(51);
    idobj->InsertFirst(21);
     idobj->InsertFirst(11);

      idobj->InsertLast(101);
    idobj->InsertLast(111);
     idobj->InsertLast(121);
     idobj->display();
    idRet =  idobj->Count();
    cout<<"Number of elements are : "<<idRet<<"\n";

     idobj->DeleteAtPos(5);
     idobj->display();
    idRet =  idobj->Count();
    cout<<"Number of elements are : "<<idRet<<"\n";

    return 0;
}