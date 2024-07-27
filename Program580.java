import java.util.*;

class program580
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Display();

        int iRet = 0;
       iRet = mobj.Summation();
       System.out.println("Summation is : "+iRet);

        iRet = mobj.Maximum();
        System.out.println("Maximum is : "+iRet);

        iRet = mobj.Minimum();
        System.out.println("Minimum is : "+iRet); 

        System.out.println("Sum of Rows is : "); 
        mobj.RowSum();

        iRet = mobj.DigonalSum();
        System.out.println("Sum of Diagonal is : "+iRet);

        mobj.SumEvenOdd();
       // mobj.Display();
        mobj.UpdateMatrix();
        //mobj.Display();

        mobj.UpdateMatrixEven();
        mobj.Display();
        mobj = null; 

        System.gc();
    }
}
class Matrix
{
    public int iRow, iCol;
    public int Arr[][];
    
    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    protected void finalize()
    {
        System.out.println("Garbage collector is collecting the memory of an object");
        Arr = null;
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    int Summation()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum +Arr[i][j]; 
            }
        }
        return iSum;
    }

    int Maximum()
    {
        int iMax = 0;
        int i = 0, j = 0;

        iMax = Arr[0][0];

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
               if( iMax < Arr[i][j]) 
               {
                iMax = Arr[i][j];
               }
            }
        }
        return iMax;
    }

    int Minimum()
    {
        int iMin = 0;
        int i = 0, j = 0;

        iMin = Arr[0][0];

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
               if( iMin > Arr[i][j]) 
               {
                iMin = Arr[i][j];
               }
            }
        }
        return iMin;
    }

    public void RowSum()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0, iSum = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j]; 
            }
        }

       System.out.println("Sumation of all elements from row no :"+i+1+"is :"+iSum);
      
    }

    public int DigonalSum()
    {
        int iSum = 0;
        int i = 0, j = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to perform addition of diagonal elements, Becuase matrix is not square matrix");
            return -1;
        }
        for(i= 0; i < iRow; i++)
        {
            for(j = i; (j < iCol && i == j); j++)
            {
               
                    iSum = iSum + Arr[i][j];
            }
        }

        return iSum;
    }
   
    public void SumEvenOdd()
    {
        int iSumEven = 0,iSumOdd = 0;
        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((Arr[i][j] %2) == 0)
                {
                    iSumEven = iSumEven + Arr[i][j]; 
                }
               else
               {
                iSumOdd = iSumOdd + Arr[i][j];
               }
            }
        }
        System.out.println("Addition of even elements :"+iSumEven);
        System.out.println("Addition of even elements :"+iSumOdd);
    }

    public void UpdateMatrix()
    {
      
        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((Arr[i][j] % 5) == 0)
                {
                  Arr[i][i]=0;
                }
        
            }
           }
           }

     public void UpdateMatrixEven()
    {
      
        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((Arr[i][j] % 2) != 0)
                {
                  Arr[i][i]++;
                }
        
            }
           }
           }
}

