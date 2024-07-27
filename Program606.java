import java.util.*;

class Program603
{
    public static void main(String Arg[])
    { 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);

        sb= sb.reverse();
        System.out.println("String is: "+ sb);

     }
}