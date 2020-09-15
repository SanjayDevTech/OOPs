import java.util.Scanner;

class Student {
    private String rollNum, name, phNo, addr;
    public static void main(String[] args) {
        Student stu1 = new Student();
        Student stu2 = new Student();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the student 1 name, roll number, phone number and address");
        stu1.name = scanner.next();
        stu1.rollNum = scanner.next();
        stu1.phNo = scanner.next();
        scanner.nextLine();
        stu1.addr = scanner.nextLine();
        System.out.println("Enter the student 2 name, roll number, phone number and address");
        stu2.name = scanner.next();
        stu2.rollNum = scanner.next();
        stu2.phNo = scanner.next();
        scanner.nextLine();
        stu2.addr = scanner.nextLine();
        System.out.println("Student 1 details");
        stu1.print();
        System.out.println("Student 2 details");
        stu2.print();
    }
    
    private void print() {
        System.out.println("Name: "+name+", rollNum: "+ rollNum +", phno: "+ phNo+", address: "+ addr);
    }
}
