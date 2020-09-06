import java.util.Scanner;
class BMI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input weight in pounds: ");
        double weight = scanner.nextDouble()*0.453592;
        System.out.print("Input height in inches: ");
        double height = scanner.nextDouble()*0.0254;
        double bmi = weight/(height*height);
        System.out.println("Body Mass Index is "+bmi);

    }
}