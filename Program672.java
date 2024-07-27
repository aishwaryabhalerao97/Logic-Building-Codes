import java.util.*;
import java.util.HashMap;

class Program669
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();
        
    
        String Arr[] = str.split(" ");

       HashMap <String, Integer> hobj = new HashMap<>();

        for(String a : Arr)
        {
            System.out.println(a);
        }
     

    }  
}

