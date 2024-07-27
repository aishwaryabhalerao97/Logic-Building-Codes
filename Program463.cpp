//Queue in Generic approach
#include<iostream>
using namespace std;


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