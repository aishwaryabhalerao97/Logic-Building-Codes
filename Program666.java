import java.Util.*;

class Program666
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(char ch: Arr)
        {
            System.out.println(ch);
            
        }
    }
}