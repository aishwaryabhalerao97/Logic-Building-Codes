class Program408
{
    public static void main(String Arg[])
    {
        Stack obj = new Stack();
        int iRet = 0;

       obj.Push(10);
       obj.Push(20);
       obj.Push(30);
       obj.Push(40);

       obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

       iRet = obj.Pop();
       System.out.println("Poped elements are: "+iRet);

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
class Stack
{
    public node First;
    public int iCount;

   public Stack()
    {
        System.out.println("Object of stack gets created sucessfully");
        First = null;
        iCount = 0;
    }

    public void Push(int No)
    {
        node newn = new node(No);

        if(First==null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
     
    }    
    public void Display()
    {
        System.out.println("Elements of Stack are :");
        node temp = First;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }

    public int Pop()
    {
        int iValue = 0;

        if(First == null)
        {
            System.out.println("Stack is empty");
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
    
