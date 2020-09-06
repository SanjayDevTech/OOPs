import java.util.Scanner;
class Operations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input 1st integer: ");
        int num1 = scanner.nextInt();
        System.out.print("Input 2nd integer: ");
        int num2 = scanner.nextInt();
        System.out.println("Sum: " + (num1+num2));
        System.out.println("Difference: "+(num1-num2));
        System.out.println("Product: "+(num1*num2));
        System.out.println("Average: "+(num1+num2)/2.0f);
        System.out.println("Distance: "+(num1-num2));
        System.out.println("Max: "+(num1>num2?num1:num2));
        System.out.println("Min: "+(num1<num2?num1:num2));
    }
}