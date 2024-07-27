
class Program640
{
    public static void main(String Arg[])
    {
        System.out.println("-----------Marvellous Database Mangenment system----------");
        
        Employee eobj1 = new Employee( "Ash", "Pune", 200000);
        Employee eobj2 = new Employee( "Sachin", "Pune", 250000);
        Employee eobj3 = new Employee( "pooja", "Pune", 200000);
        Employee eobj4 = new Employee( "rahul", "nasik", 50000);
    
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
            System.out.println("Name"+Ename+"Address: "+EAddress+"Salary:"+ ESalary);
        }
    }
