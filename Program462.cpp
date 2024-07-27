//Singly Circular in generic format

#include<iostream>
using namespace std;

template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};


template <class T>
class SinglyCL
{
    private:
        struct nodeSC<T> * First;
        struct nodeSC<T> * Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
   if((First == NULL) && (Last == NULL)) 
    {
        cout<<"LL is empty \n";
        return;
    }
    do
    {
        cout<<"|  | ->"<<First->data;
        First = First->next;
        
    } while (First != Last->next);
    cout<<"\n";
    
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}


template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> * newn = NULL;

    newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if((First==NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        
    }
    else
    {
        newn->next=First;
        First = newn;
        
    }
    Last->next=First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
     struct nodeSC<T> * newn = NULL;

    newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if((First==NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        
    }
    else
    {
        Last->next=newn;
        Last = newn;
        
    }
    Last->next=First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct nodeSC<T> * temp = First;
    struct nodeSC<T> * newn = NULL;

    if((iPos < 1) && (iPos > iCount+1))
    {
        cout<<"Invalid Position !"<<endl;
        return;
    }
     if(iPos == 1)
    {
        InsertFirst(No);
    }

    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    { newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp-> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First == NULL)&&(Last==NULL))
    {
        cout<<"LL is empty!";
        return;
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
        Last -> next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
     struct nodeSC<T> * temp = First;
    if((First == NULL)&&(Last==NULL))
    {
        cout<<"LL is empty!";
        return;
    }
    else if(First==Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSC<T> * temp1 = NULL;
    struct nodeSC<T> * temp2 = NULL;
    

    if((iPos < 1) && (iPos > iCount+1))
    {
        cout<<"Invalid Position !"<<endl;
        return;
    }
     if(iPos == 1)
    {
        DeleteFirst();
    }

    else if(iPos == iCount+1)
    {
        DeleteLast();
    }
    else
    { 
        for(i = 1; i < iPos-1; i++)
            {
                temp1 = temp1->next;
            }
            temp2 = temp1 -> next;
             temp2 = temp1->next;
            temp1->next = temp2->next;
             delete temp2;

        iCount--;
    }
}

int main()
{
    SinglyCL<int> *iSCobj = new SinglyCL<int> ;
   

iSCobj ->InsertFirst(51);
     iSCobj ->InsertFirst(21);
      iSCobj ->InsertFirst(11);
iSCobj ->Display();

cout<<"Number of elements : "<< iSCobj ->Count()<<endl;

iSCobj ->InsertLast(101);
iSCobj ->InsertLast(111);
iSCobj ->InsertLast(121);
iSCobj ->Display();


cout<<"Number of elements :"<< iSCobj ->Count()<<endl;
iSCobj ->Display();

iSCobj ->DeleteFirst();
iSCobj ->Display();

cout<<"Number of elements : "<< iSCobj ->Count()<<endl;


iSCobj ->DeleteLast();
iSCobj ->Display();

cout<<"Number of elements : "<< iSCobj ->Count()<<endl;

iSCobj ->InsertAtPos(10,5);
iSCobj ->Display();

cout<<"Number of elements : "<< iSCobj ->Count()<<endl;

iSCobj ->DeleteAtPos(5);
iSCobj ->Display();

cout<<"Number of elements : "<< iSCobj ->Count()<<endl;
    return 0;
}
