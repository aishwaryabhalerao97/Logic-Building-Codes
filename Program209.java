import java.util.*;

class program209
{
    public static int CountDigits(int iNo)
    {
        int iDigit = 0,iCnt = 0;

        while(iNo > 0)
        {
            iCnt++;
            //iDigit = iNo % 10;
           iNo = iNo / 10;
           
        }
        return iCnt;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;int iRet = 0;
        

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

       iRet = CountDigits(iValue);
        System.out.println("Sum off Factoris :"+iRet);
    }
}