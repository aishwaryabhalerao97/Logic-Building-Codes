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

       int Frequency = 0;

        for(String A : Arr)
        {
            if(hobj.containsKey(A))         //String is already present
            {
                Frequency = hobj.get(A);
                hobj.put(A,Frequency+1);
            }
            else                        //String occurs first time
            {
                hobj.put(A,1);
            }
            
        }
        Set <String>setobj = hobj.keySet();
        System.out.println(setobj);
    }  
}

