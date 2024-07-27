import java.util.*;
import java.util.LinkedList;

class Program640
{
    public static void main(String Arg[])
    {
        System.out.println("-----------Marvellous Database Mangenment system----------");
        
       MarvellousDBMS mobj = new MarvellousDBMS();

       mobj.InsertIntoTable("Sagar Kulkarni","Pune",11000);
       mobj.InsertIntoTable("Aishwarya Bhalerao","Sangvi Pune",210000);
      mobj. InsertIntoTable("Akash sudama"," FC rdSatara",10000);
       mobj.InsertIntoTable("Mansi patil","SB RD Nashik",12000);
      mobj. InsertIntoTable("Rahul sharma"," Andheri Mumbai",56000);

      mobj.SelectStar();
    }
}
class MarvellousDBMS
{
    public LinkedList<Employee> lobj;
    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");

        lobj = new LinkedList<Employee>();
    }

    //Insert into Employee values(1,"Sagar","Pune",11000);

    public void InsertIntoTable(String name, String Address, int Salary)
    {
        Employee eobj = new Employee(name, Address, Salary);
        lobj.add(eobj);

    }

    //Select * from employee;

    public void SelectStar()
    {
        System.out.println("Data from the emeployee database : ");
        for(Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
    }

    //select * from employee where Eid = 3;
    

}
class Employee
{
    public int EID;
    public String Ename;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static
    {
        Counter = 0;
    }
    public Employee( String B, String C, int D)
    {
        this.EID = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }
        void DisplayInfo()
        {
            System.out.println(" Name : "+Ename+"Address : "+EAddress+"Salary : "+ ESalary);
        }
    }
