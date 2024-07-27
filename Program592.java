import java.util.*;

class Program589
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        System.out.println("string before replacement : "+str);

        str = str.replaceAll("a","z");

        System.out.println("string after replacement : "+str);

    }
}