import java.util.*;
class ArrayX
{
    public int Arr[];

    public ArrayX(int No)
    {
        Arr = new int[No];
    }
    
}
class Program238
{
    public static void main(String Arg[])
    {
       ArrayX aobj = new ArrayX(5);
       System.out.println("Array size is :"+aobj.Arr.length);
    }
}