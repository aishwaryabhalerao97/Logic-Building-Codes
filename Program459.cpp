#include<iostream>
using namespace std;
//-----------------------------------------------------
//Code of Singly Linear
//-----------------------------------------------------
template<class T>
struct nodeSL
{
    T data;
    struct nodeSL<T> *next;
};


template<class T>
class SinglyLL
{
    private:
    struct nodeSL<T> * First;
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
       struct nodeSL<T> * temp = First;

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
       struct nodeSL<T> * newn =NULL;

        newn =  new nodeSL<T>; //malloc

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
        struct nodeSL<T> * newn =NULL;
        struct nodeSL<T> * temp = First;

        newn =  new nodeSL<T>; //malloc

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
        struct nodeSL<T> * newn = NULL;
        int i = 0;
        struct nodeSL<T> * temp = First;
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
            newn = new nodeSL<T>;
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
       struct nodeSL<T> * temp = First;
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
       struct nodeSL<T> * temp = First;   
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
        struct nodeSL<T> * temp1 ;
       struct nodeSL<T> * temp2 ;

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
//------------------------------------------------------------------
//Code of Doubly Circular
//--------------------------------------------------------------------------
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

      /////////////////////////////////////////////////////////////
//
// Code of DoublyLinear
//
/////////////////////////////////////////////////////////////

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

   /////////////////////////////////////////////////////////////
//
// Code of SinglyCircular
//
/////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////

       // Stack in Generic

/////////////////////////////////////////////////////////////////////

    template<class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};


template<class T>
class Stack
{
    private:
    struct nodeS<T> * First;
    int iCount;

    public:
    Stack();
    void Display();
    int Count();
    void Push(T No);  //InsertLast
    int Pop();          //DeleteFirst()

};

    template<class T>
   Stack<T>::Stack()
   {
        First = NULL;
        iCount = 0;

   }

   template<class T>
    void Stack<T>::Display()
    {
        cout<<"Elements of stack are : \n";
        struct nodeS<T> * temp = First;

        while(temp != NULL)
        {
            cout<<temp->data<<"\n";
            temp=temp->next;
        }
        cout<<"\n";
    }

    template<class T>
    int Stack<T>::Count()
    {
        return iCount;
    }

    template<class T>
    void Stack<T>::Push(T No)
    {
        struct nodeS<T> * newn  = NULL;
         newn = new nodeS<T>;

         newn->data = No;
         newn->next = NULL;

         if(First == NULL)
         {
            First = newn;
         }
         else
         {
            newn->next =  First;
            First = newn;
         }
         iCount++;
    }  

    template<class T>
    int Stack<T>::Pop()
    {
        int iValue = 0;
        struct nodeS<T> * temp = NULL;
        if(First == NULL)
        {
            cout<<"Unable to pop elements as stact is empty \n";
            return -1;
        }
        else
        {
            temp = First;
            First = First -> next;
            delete temp;
            iCount--;
        }
        return iValue;
    }  

 /////////////////////////////////////////////////////////////////////////////

                //Queue

 ///////////////////////////////////////////////////////////////////////////////

        template<class T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};


template<class T>
class Queue
{
    private:
   struct nodeQ<T> * First;
    int iCount;

    public:
    Queue();
    void Display();
    int Count();
    void EnQueue(T No);  //InsertLast
    int DeQueue();          //DeleteFirst()

};

    template<class T>
   Queue<T>::Queue()
   {
    First = NULL;
        iCount = 0;

   }

   template<class T>
    void Queue<T>::Display()
    {
        cout<<"Elements of Queue are : \n";
       struct nodeQ<T> * temp = First;

        while(temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }

    template<class T>
    int Queue<T>::Count()
    {
        return iCount;
    }

    template<class T>
    void Queue<T>::EnQueue(T No)
    {
       struct nodeQ<T> * newn  = NULL;
       struct nodeQ<T> * temp = NULL;
         newn = new nodeQ<T>;

         newn->data = No;
         newn->next = NULL;

         if(First == NULL)
         {
            First = newn;
         }
         else
         {
            temp = First;
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
         }
         iCount++;
    }  

    template<class T>
    int Queue<T>::DeQueue()
    {
        int iValue = 0;
       struct nodeQ<T> * temp = NULL;
        if(First == NULL)
        {
            cout<<"Unable to DeQueue elements as queue is empty \n";
            return -1;
        }
        else
        {
            temp = First;

            First = First -> next;
            delete temp;
            iCount--;
        }
        return iValue;
    }                                    

int main()
{
    ////////////////////////////////////////////////////////////////////

     //code of singlyll main

     ////////////////////////////////////////////////////////////
    //LL of Integer
    SinglyLL<int> *iobj = new SinglyLL<int>;
    

    iobj->InsertFirst(51);
     iobj->InsertFirst(21);
      iobj->InsertFirst(11);

    iobj->Display();
   
    cout<<"\nNumber of elements are "<<iobj->Count()<<endl;

    iobj->Display();

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

    iobj->Display();
   
    cout<<"\nNumber of elements are "<<iobj->Count()<<endl;


    iobj->InsertAtPos(105,5);
     iobj->Display();
    
    cout<<"\nNumber of elements are "<<iobj->Count()<<endl;
  

    iobj->DeleteAtPos(5);
    iobj->Display();
    
    cout<<"\nNumber of elements are "<<iobj->Count()<<endl;
  
  //LL of Char
  SinglyLL<char> *cobj = new SinglyLL<char>;
    
   cobj->InsertFirst('A');
     cobj->InsertFirst('B');
      cobj->InsertFirst('C');

    cobj->Display();
    
    cout<<"\nNumber of elements are "<<cobj->Count()<<endl;

    cobj->Display();

    cobj->InsertLast('D');
    cobj->InsertLast('E');
    iobj->InsertLast('F');

    cobj->Display();
    
    cout<<"\nNumber of elements are "<<cobj->Count()<<endl;


    cobj->InsertAtPos('S',5);
     cobj->Display();
  
    cout<<"\nNumber of elements are "<<cobj->Count()<<endl;
  

    cobj->DeleteAtPos(5);
    cobj->Display();
   
    cout<<"\nNumber of elements are "<<cobj->Count()<<endl;

//LL of float
    SinglyLL<float> *fobj = new SinglyLL<float>;
    

    fobj->InsertFirst(51.5f);
     fobj->InsertFirst(21.70f);
      fobj->InsertFirst(11.44f);

    fobj->Display();
   
    cout<<"\nNumber of elements are "<<fobj->Count()<<endl;

    fobj->Display();

    fobj->InsertLast(101.55f);
    fobj->InsertLast(111.34f);
    fobj->InsertLast(121.34f);

    fobj->Display();
   
    cout<<"\nNumber of elements are "<<fobj->Count()<<endl;


    fobj->InsertAtPos(105.5f,5);
     fobj->Display();
   
    cout<<"\nNumber of elements are "<<fobj->Count()<<endl;
  

    fobj->DeleteAtPos(5);
    fobj->Display();
   
    cout<<"\nNumber of elements are "<<fobj->Count()<<endl;
  
//LL of double
  SinglyLL<double> *dobj = new SinglyLL<double>;
    

    dobj->InsertFirst(51.5);
     dobj->InsertFirst(21.70);
      dobj->InsertFirst(11.44);

    dobj->Display();
  
    cout<<"\nNumber of elements are "<<dobj->Count()<<endl;

    dobj->Display();

    dobj->InsertLast(101.55);
    dobj->InsertLast(111.34);
    dobj->InsertLast(121.34);

    dobj->Display();
    
    cout<<"\nNumber of elements are "<<dobj->Count()<<endl;


    dobj->InsertAtPos(105.5,5);
     dobj->Display();
   
    cout<<"\nNumber of elements are "<<dobj->Count()<<endl;
  

    dobj->DeleteAtPos(5);
    dobj->Display();
    
    cout<<"\nNumber of elements are "<<dobj->Count()<<endl;
  //---------------------------------------------------
  //code of doublyll main
  //-----------------------------------
  DoublyCL<int> * idobj = new DoublyCL<int>;
 
   idobj->InsertFirst(51);
    idobj->InsertFirst(21);
     idobj->InsertFirst(11);

      idobj->InsertLast(101);
    idobj->InsertLast(111);
     idobj->InsertLast(121);
     idobj->display();
   
    cout<<"Number of elements are : "<<idobj->Count()<<"\n";

     idobj->DeleteAtPos(5);
     idobj->display();
    
    cout<<"Number of elements are : "<<idobj->Count()<<"\n";

    //////////////////////////////////////////////////////////////

   // code of Doubly Linear

   ///////////////////////////////////////////////////////////////

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

    //////////////////////////////////////////////////////////////////////

    //code of Singly Circular
    ////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////

    //Code of Stack

//////////////////////////////////////////////////////////////////////////

     Stack<int> *iSobj = new Stack<int>;

    iSobj->Push(10);
     iSobj->Push(20);
      iSobj->Push(30);
       iSobj->Push(40);

       iSobj->Display();
       
       cout<<"no of elements are : "<<iSobj->Count()<<"\n";

       
          cout<<"Pop elements is : "<<iSobj->Pop()<<"\n";
          iSobj->Display();
      
       cout<<"no of elements are : "<<iSobj->Count()<<"\n";

       
          cout<<"Pop elements is : "<<iSobj->Pop()<<"\n";
          iSobj->Display();
       
       cout<<"no of elements are : "<<iSobj->Count()<<"\n";

        iSobj->Push(50);
          
          iSobj->Display();
      
       cout<<"no of elements are : "<<iSobj->Count()<<"\n";

////////////////////////////////////////////////////////////////////////////

//                      Code of Queue

///////////////////////////////////////////////////////////////////////////////

        Queue<int> *iQobj = new Queue<int>;

    iQobj->EnQueue(10);
     iQobj->EnQueue(20);
      iQobj->EnQueue(30);
       iQobj->EnQueue(40);

       iQobj->Display();
    
       cout<<" \nno of elements are : "<<iQobj->Count()<<"\n";

      
          cout<<"DeQueue elements is : "<<iQobj->DeQueue()<<"\n";
          iQobj->Display();
     
       cout<<"\n no of elements are : "<<iQobj->Count()<<"\n";

       
          cout<<"DeQueue elements is : "<<iQobj->DeQueue()<<"\n";
          iQobj->Display();
       
       cout<<"\n no of elements are : "<<iQobj->Count()<<"\n";

        iQobj->EnQueue(50);
          cout<<"DeQueue elements is : "<<iQobj->DeQueue()<<"\n";
          iQobj->Display();
       
       cout<<" \n no of elements are : "<<iQobj->Count()<<"\n";

    return 0;
}