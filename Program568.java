import java.util.*;

class Program568
{
public static void main(String args[])
{
   

    System.out.println("Enter number of rows : ");

    int No1 = sobj.nextInt();

    System.out.println("Enter number of columns : ");

    int No2 = sobj.nextInt();

Matrix mobj = new Matrix(No1, No2);
    
}
}
 class Matrix
{
    public int i, j, iRow, iCol;
    public int Arr[][];

 public Matrix(int A, int B)
 {
    this.iRow = A;
    this.iCol = B;
 }
 public void Accept()
 {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Please enter the data : ");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            Arr[i][j] = sobj.nextInt();
        }
    }

 }
    
 public void Display()
 {
    System.out.println("Elements from the Matrix:");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           System.out.print(Arr[i][j]+"\t");
        }
        System.out.println();


 }
   
    }
}