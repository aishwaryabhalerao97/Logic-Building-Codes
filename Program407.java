class Program407
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

       obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are:"+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are:"+iRet);
        
    }
}

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int Value)
    {
        data = Value;
        next = null;
        prev = null;
    }
}
class DoublyCL
{
    public node First;
    public node Last;
    public int iCount;

   public DoublyCL()
    {
        System.out.println("Object of doublyCL gets created sucessfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last==null)
        {
            First = newn;
            Last = newn;
        }
        else{
            newn.next=First;
            First.prev = newn;
            First = newn;
        }
        Last.next=First;
        First.prev = Last;
        iCount++;
     
    }

        public void InsertLast(int No)
        {
            node newn = null;

        newn = new node(No);

        if(First == null && Last==null)
        {
            First = newn;
            Last = newn;
        }
        
        else{
            Last.next=newn;
            newn.prev = Last;
            Last = newn;
        }
        Last.next=First;
        First.prev = Last;
     iCount++;
    }
    public void Display()
    {
        if(First==null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }
        System.out.println("elements of LL is :");
            return;
        do
        {
            System.out.println("|"+First.data +"| <=>");   
            First=First.next;

        }while(Last.next!=First);
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if(First==null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }
        else if(First==Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            First.next=First;
            Last.next=First;
            First.prev = Last;
        }
       
        iCount--;

    }

    public void DeleteLast()
    {
        if(First==null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }
        else if(First==Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            Last=Last.next;
            Last.next=First;
            First.prev = Last;
        }
       
        iCount--;
     
    }

    public void InsertAtPos(int No, int iPos)
    {
        node newn = null;
        newn = new node(No);

        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos==iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            node temp = First;
            for(int i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
                
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev=temp;
            iCount++;
    }
    }
    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos==iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp = First;
            for(int i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
                
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
           
            iCount--;
        }

    }
}


