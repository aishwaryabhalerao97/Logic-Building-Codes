//Stack in Generic approach
#include<iostream>
using namespace std;

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

int main()
{
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

    return 0;
}