class Program409
{
    public static void main(String Arg[])
    {
        Queue obj = new Queue();
        int iRet = 0;

       obj.EnQueue(10);
       obj.EnQueue(20);
       obj.EnQueue(30);
       obj.EnQueue(40);

       obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

       iRet = obj.DeQueue();
       System.out.println("DeQueueed elements are: "+iRet);

       obj.Display();
       iRet = obj.Count();
       System.out.println("Number of elements are: "+iRet);

    }
}

class node
{
    public int data;
    public node next;
    

    public node(int Value)
    {
        data = Value;
        next = null;

    }
}
class Queue
{
    public node First;
    public int iCount;

   public Queue()
    {
        System.out.println("Object of Queue gets created sucessfully");
        First = null;
        iCount = 0;
    }

    public void EnQueue(int No)
    {
        node newn = new node(No);

        if(First==null)
        {
            First = newn;
        }
        else
        {
           node temp = First;

           while(temp.next != null)
           {
            temp = temp.next;
           }
           temp.next = newn;
        }
        iCount++;
     
    }    
    public void Display()
    {
        System.out.println("Elements of Queue are :");
        node temp = First;

        while(temp != null)
        {
            System.out.print(temp.data+"\t");
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }

    public int DeQueue()
    {
        int iValue = 0;

        if(First == null)
        {
            System.out.println("Queue is empty");
            return -1;
        }
        else
        {
            iValue = First.data;
            First = First.next;
        }
        iCount--;
       return iValue;
        
    }
}
    
