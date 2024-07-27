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
      mobj.SelectSpecific(3);
      mobj.SelectSpecific("Aishwarya Bhalerao");

      mobj.DeleteFrom(2);
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
    public void SelectSpecific(int ID)
    {
        System.out.println("Information of employee whose EID is ");
        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                eref.DisplayInfo();
                break;
            }
        }
    }

    public void SelectSpecific(String Name)
    {
        System.out.println("Information of employee whose name is "+Name);
        for(Employee eref : lobj)
        {
            if(Name.equals(eref.Ename))
            {
                eref.DisplayInfo();
               
            }
        }
    }
//delete from employee where eid = 3;
    public void DeleteFrom(int ID)
    {
        int index = 0;
        boolean bFlag = false;
        for(Employee eref: lobj)
        {
            if(eref.EID == ID)
            {
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to delete elements from database as given id is not present!");
            
        }
        else
        {
            lobj.remove(index);
        }
    }

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
            System.out.println("EID : "+EID+" Name : "+Ename+"Address : "+EAddress+"Salary : "+ ESalary);
        }
    }
