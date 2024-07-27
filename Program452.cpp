// Generic LL 
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T> *next;
};


template<class T>
class SinglyLL
{
    private:
    struct node<T> * First;
    int iCount;

    public:
    SinglyLL();

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
SinglyLL<T>::SinglyLL()
    {   
        cout<<"Inside constructor\n";
        First = NULL;
        iCount = 0;
    }

template<class T>
    void SinglyLL<T>::Display()
    {
       struct node<T> * temp = First;

        while(temp!=NULL)
        {
            cout<<"| %d |->"<<temp->data;
            temp= temp ->next;
        }
        
    }

template<class T>
    int SinglyLL<T>::Count()
    {
        return iCount;
    }

template<class T>
    void SinglyLL<T>::InsertFirst(T No)
    {
       struct node<T> * newn =NULL;

        newn =  new node<T>; //malloc

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

template<class T>
    void SinglyLL<T>::InsertLast(T No)
    {
        struct node<T> * newn =NULL;
        struct node<T> * temp = First;

        newn =  new node<T>; //malloc

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

template<class T>
    void SinglyLL<T>::InsertAtPos(T No, int iPos)
    {
        struct node<T> * newn = NULL;
        int i = 0;
        struct node<T> * temp = First;
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
            newn = new node<T>;
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
template<class T>
    void SinglyLL<T>::DeleteFirst()
    {
       struct node<T> * temp = First;
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

template<class T>
    void SinglyLL<T>::DeleteLast()
    {
       struct node<T> * temp = First;   
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
template<class T>
    void SinglyLL<T>::DeleteAtPos(int iPos)
    {
        
        int i = 0;
        struct node<T> * temp1 ;
       struct node<T> * temp2 ;

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
    //LL of Integer
    SinglyLL<int> *iobj = new SinglyLL<int>;
    int iRet = 0;

    iobj->InsertFirst(51);
     iobj->InsertFirst(21);
      iobj->InsertFirst(11);

    iobj->Display();
    iRet= iobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;

    iobj->Display();

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

    iobj->Display();
    iRet= iobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;


    iobj->InsertAtPos(105,5);
     iobj->Display();
    iRet= iobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;
  

    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet= iobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;
  
  //LL of Char
  SinglyLL<char> *cobj = new SinglyLL<char>;
    int cRet = 0;
   cobj->InsertFirst('A');
     cobj->InsertFirst('B');
      cobj->InsertFirst('C');

    cobj->Display();
    cRet= iobj->Count();
    cout<<"\nNumber of elements are "<<cRet<<endl;

    cobj->Display();

    cobj->InsertLast('D');
    cobj->InsertLast('E');
    iobj->InsertLast('F');

    cobj->Display();
    iRet= iobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;


    cobj->InsertAtPos('S',5);
     cobj->Display();
    iRet= cobj->Count();
    cout<<"\nNumber of elements are "<<iRet<<endl;
  

    cobj->DeleteAtPos(5);
    cobj->Display();
    iRet= cobj->Count();
    cout<<"\nNumber of elements are "<<cRet<<endl;

//LL of float
    SinglyLL<float> *fobj = new SinglyLL<float>;
    int fRet = 0;

    fobj->InsertFirst(51.5f);
     fobj->InsertFirst(21.70f);
      fobj->InsertFirst(11.44f);

    fobj->Display();
    fRet= fobj->Count();
    cout<<"\nNumber of elements are "<<fRet<<endl;

    fobj->Display();

    fobj->InsertLast(101.55f);
    fobj->InsertLast(111.34f);
    fobj->InsertLast(121.34f);

    fobj->Display();
    fRet= fobj->Count();
    cout<<"\nNumber of elements are "<<fRet<<endl;


    fobj->InsertAtPos(105.5f,5);
     fobj->Display();
    fRet= fobj->Count();
    cout<<"\nNumber of elements are "<<fRet<<endl;
  

    fobj->DeleteAtPos(5);
    fobj->Display();
    fRet= fobj->Count();
    cout<<"\nNumber of elements are "<<fRet<<endl;
  
//LL of double
  SinglyLL<double> *dobj = new SinglyLL<double>;
    int dRet = 0;

    dobj->InsertFirst(51.5);
     dobj->InsertFirst(21.70);
      dobj->InsertFirst(11.44);

    dobj->Display();
    dRet= dobj->Count();
    cout<<"\nNumber of elements are "<<dRet<<endl;

    dobj->Display();

    dobj->InsertLast(101.55);
    dobj->InsertLast(111.34);
    dobj->InsertLast(121.34);

    dobj->Display();
    dRet= fobj->Count();
    cout<<"\nNumber of elements are "<<dRet<<endl;


    dobj->InsertAtPos(105.5,5);
     dobj->Display();
    dRet= fobj->Count();
    cout<<"\nNumber of elements are "<<dRet<<endl;
  

    dobj->DeleteAtPos(5);
    dobj->Display();
    dRet= dobj->Count();
    cout<<"\nNumber of elements are "<<dRet<<endl;
  
  
      return 0;
}
