import java.util.*;

class Program598
{
    public static void main(String Arg[])
    { 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");
       String Arr[] = str.split(" ");
      
       int i = 0, iMax = 0;
       int iMaxIndex = 0;
       for(i = 0; i < Arr.length; i++)
       {
        if(Arr[i].length() > iMax)
        {
            iMax = Arr[i].length();
            iMaxIndex = i;
        }
        System.out.println("Largest length of word is : "+Arr[iMaxIndex]);
       System.out.println("Largest length of word is : "+iMax);

       }
    }
}