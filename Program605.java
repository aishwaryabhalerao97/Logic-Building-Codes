import java.util.*;

class Program603
{
    public static void main(String Arg[])
    { 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        System.out.println("Enter the word that you want to search : ");
        String s = sobj.nextLine();

        str = str.reverse();
        System.out.println("frequency of words is : "+str);
    }
}