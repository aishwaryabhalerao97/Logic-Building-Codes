import java.util.*;
class ArrayX
{
    public int Arr[];

    public ArrayX(int No)
    {
        Arr = new int[No];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of array are :");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()
    {
        int iSum = 0;
        float iAns = 0.0f;

        for(int i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr.length;
        }
            iAns = (float)iSum / (float)Arr.length;
            return iAns;
       
       
    }
}
