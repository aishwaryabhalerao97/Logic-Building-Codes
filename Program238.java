import java.util.*;

class Program238
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        System.out.println("Enter elements are :");
        for(int j = 0; j < Arr.length; j++)
        {
            System.out.println(Arr[j]);
        }
    }
}