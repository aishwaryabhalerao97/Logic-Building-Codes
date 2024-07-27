import java.util.LinkedList;

class Program642
{
    public static void main(String Arg[])
    {
        System.out.println("-----------Marvellous Database Mangenment system----------");
        LinkedList <Integer>lobj = new LinkedList<Integer>();
      
        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        
        System.out.println(lobj);
        System.out.println("Number of elements: "+lobj.size());

        for(int no : lobj)
        {
            System.out.println(no);
        }

    }
}

