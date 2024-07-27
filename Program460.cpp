//Doubly Linear in Generic format
#include<iostream>
using namespace std;

template<class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

    template<class T>
class DoublyLL
{
    private:
       struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);        
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside Constructor"<<endl;
    First = NULL;
    iCount = 0;
}

template<class T>
void DoublyLL<T>::Display()
{
   struct nodeDL<T> * temp = First;

     cout<<"\n NULL <=>| ";

    while(temp != NULL)
    {
        cout<<" |  | "<<temp->data;
        temp = temp -> next;
    }
    cout<<" |<=> NULL \n";
}

template<class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template<class T>
void DoublyLL<T>::InsertFirst(T No)
{
   struct nodeDL<T> * newn = NULL;

    newn = new nodeDL<T>;

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

template<class T>
void DoublyLL<T>::InsertLast(T No)
{
   struct nodeDL<T> * newn = NULL;
   struct nodeDL<T> * temp = First;

    newn = new nodeDL<T>;

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

  template<class T>   
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
   struct nodeDL<T> *newn = NULL;
    int i = 0;
   struct nodeDL<T> * temp = First;

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
        newn = new nodeDL<T>;

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

template<class T>
void DoublyLL<T>::DeleteFirst()
{
   struct nodeDL<T> * temp = First;
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

template<class T>
void DoublyLL<T>::DeleteLast()
{
   struct nodeDL<T> * temp = First;
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

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
   struct nodeDL<T> * temp = First;
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

    DoublyLL<int> *iDLobj = new DoublyLL<int> ;

    
    iDLobj->InsertFirst(11);
    iDLobj->InsertFirst(21);
    iDLobj->InsertFirst(51);

    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();

    iDLobj->InsertLast(101);
    iDLobj->InsertLast(111);
    iDLobj->InsertLast(105);

  
    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();

    iDLobj->InsertAtPos(20,4);
    
    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();

    iDLobj->DeleteFirst();
    
    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();

    iDLobj->DeleteLast();
  
    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();

    iDLobj->DeleteAtPos(5);
    
    cout<<"Number of elements are: "<<iDLobj->Count();
    iDLobj->Display();
    return 0;
}