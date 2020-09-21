import java.util.Scanner;

class Person {
    protected String name;
    Person(String name) {
        this.name = name;
    }
}
class Employee extends Person {
    private double anSalary;
    private int expYrs;
    private String natIns;
    Employee(String name, double anSalary, int expYrs, String natIns) {
        super(name);
        this.anSalary = anSalary;
        this.expYrs = expYrs;
        this.natIns = natIns;
    }
    void printAll() {
        System.out.println("Name => "+name);
        System.out.println("Experience in Yrs => "+expYrs);
        System.out.println("Annual Salary => "+anSalary);
        System.out.println("National Insurance number => "+natIns);
    }

    public static void main(String[] args) {
        Employee employee;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the employee name: ");
        String name = scanner.next();
        System.out.println("Enter the salary, experience and Insurance number");
        double anSalary = scanner.nextDouble();
        int exp = scanner.nextInt();
        String natIns = scanner.next();
        employee = new Employee(name, anSalary, exp, natIns);
        employee.printAll();
    }
    
}